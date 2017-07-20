package source.ui.skin;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.input.mouse.FlxMouseEventManager;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxSort;
import haxe.unit.TestRunner;
import openfl.text.AntiAliasType;
import openfl.text.TextFieldAutoSize;
import source.data.card.CardData;

/**
 * ...
 * @author Breakyt
 */
class CardSkin extends FlxTypedGroup<FlxSprite>
{

	public static var m_cardWidth : Int = 150;
	public static var m_cardHeight : Int = 200;
	
	private var m_cardDataRef : CardData;
	
	private var m_background: FlxSprite;
	private var m_titleTxt : FlxText;
	private var m_valueTxt : FlxText;
	
	public var isDrag(default,null) : Bool;
	private var m_mouseOffsetX : Int;
	private var m_mouseOffsetY : Int;
	
	public var isVisible(default, null) : Bool;
	
	public var draggable : Bool;
	
	
	public function new(cardData : CardData = null) 
	{
		super(3);
		
		m_background = new FlxSprite(0, 0, null);
		m_background.makeGraphic(m_cardWidth, m_cardHeight, FlxColor.WHITE, false, "cardBackground");
		
		m_titleTxt = new FlxText(0, 0, -1, "", 16);
		m_valueTxt = new FlxText(0, 0, -1, "", 16);
		
		m_titleTxt.bold = true;
		m_valueTxt.bold = true;
		
		this.add(m_background);
		this.add(m_titleTxt);
		this.add(m_valueTxt);
		
		setVisible(true);
		this.draggable = true;
		
		FlxMouseEventManager.add(m_background, onMouseDown, onMouseUp);
		
		setCardData(cardData);
		
	}
	
	public function setCardData(cardData : CardData) : Void
	{
		if (cardData == null)
		{
			m_cardDataRef = null;
			setText("", null);
			return;
		}
		
		m_cardDataRef = cardData;
		setText(m_cardDataRef.name, Std.string(m_cardDataRef.year));
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		if (isDrag)
		{
			// to prevent release btn mouse out the game window
			// if btn release out the game window, The event "onMouseDown" is not call
			if (FlxG.mouse.justReleased) 
				stopDrag();			
			
			this.onDrag();
			this.updateTextPosition();
		}
	}
	
	private function setText(name : String, value : String)
	{
		m_titleTxt.text = name;
		
		m_valueTxt.text = "";
			
		updateTextPosition();
	}
	
	private function updateTextPosition() : Void
	{
		m_titleTxt.x = m_background.x + m_background.width / 2.0 - m_titleTxt.fieldWidth / 2.0;
		m_titleTxt.y = m_background.y;
		
		m_valueTxt.x = m_background.x + m_background.width / 2.0 - m_valueTxt.fieldWidth / 2.0;
		m_valueTxt.y = m_background.y + m_background.height - m_valueTxt.height;			
	}
	
	
	private function onMouseDown(item : FlxSprite)
	{
		if(this.draggable)
			startDrag();
	}
	
	private function onMouseUp(item : FlxSprite)
	{
		stopDrag();
	}
	
	private function startDrag() : Void
	{
		if (isDrag)
			return;
		
		isDrag = true;
		m_mouseOffsetX = FlxG.mouse.x - cast(m_background.x,Int);
		m_mouseOffsetY = FlxG.mouse.y - cast(m_background.y, Int);
	}
	
	private function stopDrag()
	{
		if (!isDrag)
			return;
		
		isDrag = false;
	}
	
	private function onDrag() : Void
	{
		if (!isDrag)
			return;
			
		//if (FlxG.mouse.justReleased)
			//m_onDrag = false;
			
		m_background.x = FlxG.mouse.x - m_mouseOffsetX;
		m_background.y = FlxG.mouse.y - m_mouseOffsetY;
		
		if (m_background.x < 0)
			m_background.x = 0;
		
		if (m_background.y < 0)
			m_background.y = 0;
			
		if ( m_background.x > (FlxG.width - m_background.width))
			m_background.x = FlxG.width - m_background.width;
			
		
		if ( m_background.y  > (FlxG.height - m_background.height ))
			m_background.y = FlxG.height - m_background.height;
	}
	
	
	public function flip() : Void
	{
		setVisible(!isVisible);
	}
	
	public function setVisible(vis : Bool)
	{
		isVisible = vis;	
		if (!isVisible)
		{
			m_background.color = FlxColor.GRAY;
			//m_titleTxt.kill();
			m_valueTxt.kill();
		}
		else
		{
			m_background.color = FlxColor.BLUE;
			//m_titleTxt.revive();
			m_valueTxt.revive();
		}
	}
	
}