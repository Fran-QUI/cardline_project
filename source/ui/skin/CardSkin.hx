package source.ui.skin;
import assets.AssetPaths;
import assets.AssetsManager;
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

	public static var cardWidth : Int = 150; //px
	public static var cardHeight : Int = 200; //px
	
	public static var cardBorder : Int = 6; //px
	
	public static var illusWidth : Int = cardWidth - (cardBorder*2); //px
	public static var illusHeight : Int = cardHeight - (cardBorder*2); //px
	
	private var m_cardDataRef : CardData;
	
	private var m_background: FlxSprite;
	private var m_illustration: FlxSprite;
	
	private var m_titleTxt : FlxText;
	private var m_valueTxt : FlxText;
	
	public var isDrag(default,null) : Bool;
	private var m_mouseOffsetX : Int;
	private var m_mouseOffsetY : Int;
	
	public var isVisible(default, null) : Bool;
	
	public var draggable : Bool;
	
	/**
	 * Called when dragg start
	 */
	public var onStartDragCallback : CardSkin->Void;
	
	/**
	 * Called when dragg stop
	 */
	public var onStopDragCallback : CardSkin->Void;
	 
	/**
	 * Called when dragging adn AFTER position update
	 */
	public var onDragCallback : CardSkin->Void;
	
	public function new(cardData : CardData = null) 
	{
		super(3);
		
		initBackGround();
		initIllustration();
		m_titleTxt = new FlxText(0, 0, -1, "", 16);
		m_valueTxt = new FlxText(0, 0, -1, "", 16);
		
		//m_titleTxt.setFormat(AssetPaths.OptimusPrinceps__ttf,24);
		//m_valueTxt.setFormat(AssetPaths.OptimusPrinceps__ttf,24);
		
		m_titleTxt.color = FlxColor.BLACK;
		m_valueTxt.color = FlxColor.BLACK;
		
		m_titleTxt.bold = true;
		m_valueTxt.bold = true;
		
		m_titleTxt.alignment = FlxTextAlign.CENTER;
		m_valueTxt.alignment = FlxTextAlign.CENTER;
		
		this.add(m_background);
		this.add(m_illustration);
		this.add(m_titleTxt);
		this.add(m_valueTxt);
		
		setVisible(true);
		this.draggable = true;
		
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
		
		initBackGround();
		initIllustration();
		
		setText(m_cardDataRef.name, Std.string(m_cardDataRef.value.get("year"))); // temp
	}
	
	//stupid
	public function scaleSkin(x: Float, y : Float)
	{
		forEach(scale.bind(_, x, y));
	}
	
	//Stupid
	private function scale(sprite : FlxSprite, x: Float, y : Float) : Void
	{
		sprite.scale.set(x, y);
		sprite.updateHitbox();
		this.updateTextPosition();
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
		if(m_titleTxt!=null)
			m_titleTxt.text = name;
		
		if(m_titleTxt!=null)
			m_valueTxt.text = "";
			
		updateTextPosition();
	}
	
	private function updateTextPosition() : Void
	{
		if (m_background == null || m_illustration == null || m_titleTxt == null || m_valueTxt == null)
			return;
			
		m_illustration.setPosition(m_background.x + cardBorder, m_background.y + cardBorder);
		
		m_titleTxt.x = m_background.x + (m_background.width / 2.0) - m_titleTxt.fieldWidth / 2.0;
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
		m_mouseOffsetX = FlxG.mouse.x - Math.ceil(m_background.x);
		m_mouseOffsetY = FlxG.mouse.y - Math.ceil(m_background.y);
		
		if (onStartDragCallback != null)
			onStartDragCallback(this);
	}
	
	private function stopDrag()
	{
		if (!isDrag)
			return;
		
		isDrag = false;

		if (onStopDragCallback != null)
			onStopDragCallback(this);
	}
	
	private function onDrag() : Void
	{
		if (!isDrag)
			return;
			
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
			

		if (onDragCallback != null)
			onDragCallback(this);			
	}
	
	
	public function flip() : Void
	{
		setVisible(!isVisible);
	}
	
	/**
	 * Hide or show the value.
	 * todo : change background skin
	 * @param	vis
	 */
	public function setVisible(vis : Bool)
	{
		isVisible = vis;	
		if (!isVisible)
		{
			//m_background.color = FlxColor.GRAY;
			//m_titleTxt.kill();
			m_valueTxt.kill();
		}
		else
		{
			//m_background.color = FlxColor.BLUE;
			//m_titleTxt.revive();
			m_valueTxt.revive();
		}
	}
	
	public function setPosition(x : Float, y : Float)
	{
		m_background.x = x;
		m_background.y = y;
		updateTextPosition();
	}
	
	private function initBackGround() : Void
	{
		if (m_background == null)
			m_background = new FlxSprite(0, 0, null);
		
		FlxMouseEventManager.remove(m_background);
		
		if (m_cardDataRef != null && m_cardDataRef.background != null && AssetsManager.global.exist(m_cardDataRef.background))
		{
			var graphic = AssetsManager.global.getFlxGraphic(m_cardDataRef.background);
			m_background.loadGraphic(graphic);
			m_background.setGraphicSize(cardWidth, cardHeight);
			m_background.updateHitbox();
		}
		else
		{
			m_background.makeGraphic(cardWidth, cardHeight, FlxColor.WHITE, false, "cardBackground");
		}
		
		FlxMouseEventManager.add(m_background, onMouseDown, onMouseUp, null, null,false, true, false);
	}
	
	private function initIllustration() : Void
	{
		if (m_illustration == null)
			m_illustration = new FlxSprite(0, 0, null);	
		
		if (m_cardDataRef != null && m_cardDataRef.illustration != null && AssetsManager.global.exist(m_cardDataRef.illustration))
		{
			var graphic = AssetsManager.global.getFlxGraphic(m_cardDataRef.illustration);
			m_illustration.loadGraphic(graphic);
			m_illustration.setGraphicSize(illusWidth, illusWidth);
			m_illustration.updateHitbox();
		}
		else
		{
			
			m_illustration.makeGraphic(cardWidth, cardHeight, FlxColor.PURPLE, false, "cardIllus");
		}
	}
	
	
	
}