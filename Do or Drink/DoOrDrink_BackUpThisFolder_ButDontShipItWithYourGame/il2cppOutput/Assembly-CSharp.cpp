#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<CardType>
struct List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D;
// System.Collections.Generic.List`1<DeckType>
struct List_1_tF05BD7A3522E39B23A46D780B110794644A41339;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<AdManager/ADB>
struct List_1_tE95247D335F6833FCB576636797127F6F973F855;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// CardType[]
struct CardTypeU5BU5D_t5287F69BAA6F8BC665939ACDEE2C484FE623DEAD;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// DeckType[]
struct DeckTypeU5BU5D_tE2647F15B16E840341326793C604C2282A3F100E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// AdManager/ADB[]
struct ADBU5BU5D_t56759D70D7CB37D935F3DD252CD16F9132666E0B;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// AdManager
struct AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonMenuDeck
struct ButtonMenuDeck_tE6BBE2E655679888DDCE4E99CB6AE5461320A517;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardData
struct CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE;
// CardScpt
struct CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38;
// CardType
struct CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DeckType
struct DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayInfo
struct PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227;
// PlayManager
struct PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TimeAdManager
struct TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303;
// TimeUpManager
struct TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3;
// TimeUpWindow
struct TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AdManager/ADB
struct ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayManager/CartaCriada
struct CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE95247D335F6833FCB576636797127F6F973F855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF05BD7A3522E39B23A46D780B110794644A41339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral072F56AE780AEAE1EFDE9F5092D52CBD173DF2DD;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral23BF70E6C79426A1D79F833061CD05E0AB9546A7;
IL2CPP_EXTERN_C String_t* _stringLiteral3D02432E53FC8541CC966F5F8231C76FBF13F8E7;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF7D98CE9C95842AA81B597E3FC88B05D9D5103;
IL2CPP_EXTERN_C String_t* _stringLiteral593B47FE4F1C6A9341C95265C70B12873193B3E3;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83;
IL2CPP_EXTERN_C String_t* _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteralB820699E7CCE5A38D9D559DC165ABFEF570C7212;
IL2CPP_EXTERN_C String_t* _stringLiteralB93549D4AFED0F570944E94D286AAC6035D12AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralBD3E0485E5A350E67EFC421DD535AFF59487E8D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D;
IL2CPP_EXTERN_C String_t* _stringLiteralF111529218B42E0957F9600FE086B4746EBB71EF;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E783D6DCCE4F3CE6845F3EFB01B823251F6215;
IL2CPP_EXTERN_C String_t* _stringLiteralF8244D57927DAF62661F6A2C1F2C49EADB92E36D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5;
IL2CPP_EXTERN_C const RuntimeMethod* CardScpt_DestroySelf_mD8A6708CC8302E8ADC4FDE34D9AAAA1F4A7DA4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m950131324D62E143DA29715B027AB44EAAF5FE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38_m9860F51049BE34658FFF619CAD0E25C2F518891A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F_mCC0F3C1F5A663432FF1D6776FBC9117E9B80A8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39A22ED4800EF3621AFF5FFF8F389CAA11972114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m57CE0EA58EC1AA888F8CC42809F648E4D1E57AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5CE9C1437D4BAC9C68F9259F48450E1A454812D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<CardType>
struct List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CardTypeU5BU5D_t5287F69BAA6F8BC665939ACDEE2C484FE623DEAD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CardTypeU5BU5D_t5287F69BAA6F8BC665939ACDEE2C484FE623DEAD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DeckType>
struct List_1_tF05BD7A3522E39B23A46D780B110794644A41339  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DeckTypeU5BU5D_tE2647F15B16E840341326793C604C2282A3F100E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF05BD7A3522E39B23A46D780B110794644A41339_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DeckTypeU5BU5D_tE2647F15B16E840341326793C604C2282A3F100E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AdManager/ADB>
struct List_1_tE95247D335F6833FCB576636797127F6F973F855  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ADBU5BU5D_t56759D70D7CB37D935F3DD252CD16F9132666E0B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE95247D335F6833FCB576636797127F6F973F855_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ADBU5BU5D_t56759D70D7CB37D935F3DD252CD16F9132666E0B* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// CardType
struct CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E  : public RuntimeObject
{
	// System.Int32 CardType::cardNumber
	int32_t ___cardNumber_0;
	// System.String CardType::cardContent
	String_t* ___cardContent_1;
	// System.String CardType::cardContentTop
	String_t* ___cardContentTop_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// AdManager/ADB
struct ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A  : public RuntimeObject
{
	// UnityEngine.UI.Button AdManager/ADB::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_0;
	// System.Int32 AdManager/ADB::deck
	int32_t ___deck_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// DeckType
struct DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D  : public RuntimeObject
{
	// System.Int32 DeckType::deckNumber
	int32_t ___deckNumber_0;
	// System.String DeckType::deckName
	String_t* ___deckName_1;
	// System.Single DeckType::timeSeconds
	float ___timeSeconds_2;
	// System.Boolean DeckType::onoff
	bool ___onoff_3;
	// UnityEngine.Color DeckType::cor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cor_4;
	// System.Collections.Generic.List`1<CardType> DeckType::CardType
	List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* ___CardType_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// PlayManager/CartaCriada
struct CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// AdManager
struct AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<AdManager/ADB> AdManager::_showAdButtons
	List_1_tE95247D335F6833FCB576636797127F6F973F855* ____showAdButtons_4;
	// System.String AdManager::_adUnitId
	String_t* ____adUnitId_5;
	// CardData AdManager::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_6;
	// TimeAdManager AdManager::timeAdManager
	TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* ___timeAdManager_7;
	// System.Int32 AdManager::deckA
	int32_t ___deckA_8;
	// System.Boolean AdManager::isLoaded
	bool ___isLoaded_9;
};

// ButtonMenuDeck
struct ButtonMenuDeck_tE6BBE2E655679888DDCE4E99CB6AE5461320A517  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ButtonMenuDeck::isactive
	bool ___isactive_4;
	// CardData ButtonMenuDeck::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_5;
	// PlayInfo ButtonMenuDeck::playInfo
	PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* ___playInfo_6;
};

// CardData
struct CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<DeckType> CardData::DeckType
	List_1_tF05BD7A3522E39B23A46D780B110794644A41339* ___DeckType_4;
};

// CardScpt
struct CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CardData CardScpt::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_4;
	// UnityEngine.Transform CardScpt::parenteSaida
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parenteSaida_5;
	// TMPro.TextMeshProUGUI CardScpt::Titulo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Titulo_6;
	// TMPro.TextMeshProUGUI CardScpt::SubTitulo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___SubTitulo_7;
	// TMPro.TextMeshProUGUI CardScpt::NomeDeck
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___NomeDeck_8;
	// TMPro.TextMeshProUGUI CardScpt::NumeroDeck
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___NumeroDeck_9;
	// TMPro.TextMeshProUGUI CardScpt::Conteudo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Conteudo_10;
	// UnityEngine.Animator CardScpt::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_11;
	// System.Int32 CardScpt::ndodeck
	int32_t ___ndodeck_12;
	// System.Int32 CardScpt::ndacarta
	int32_t ___ndacarta_13;
};

// PlayInfo
struct PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayInfo::DeckNumber
	int32_t ___DeckNumber_4;
	// System.Int32 PlayInfo::CardNumber
	int32_t ___CardNumber_5;
	// TMPro.TextMeshProUGUI PlayInfo::DeckNumberText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___DeckNumberText_6;
	// TMPro.TextMeshProUGUI PlayInfo::CardNumberText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___CardNumberText_7;
	// UnityEngine.GameObject PlayInfo::PlayButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlayButton_8;
	// CardData PlayInfo::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_9;
};

// PlayManager
struct PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlayManager::InGame
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InGame_4;
	// UnityEngine.GameObject PlayManager::NotInGame
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___NotInGame_5;
	// UnityEngine.Transform PlayManager::parente
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parente_6;
	// UnityEngine.Transform PlayManager::parenteSaida
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parenteSaida_7;
	// UnityEngine.GameObject PlayManager::Card
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Card_8;
	// CardData PlayManager::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_9;
	// TimeAdManager PlayManager::timeAdManager
	TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* ___timeAdManager_10;
	// System.Int32 PlayManager::jogosAtivos
	int32_t ___jogosAtivos_12;
};

struct PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_StaticFields
{
	// PlayManager/CartaCriada PlayManager::novaCarta
	CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* ___novaCarta_11;
};

// TimeAdManager
struct TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CardData TimeAdManager::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_4;
	// TimeUpManager TimeAdManager::timeUpManager
	TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* ___timeUpManager_5;
	// System.Boolean TimeAdManager::gameOn
	bool ___gameOn_6;
	// UnityEngine.GameObject[] TimeAdManager::tempoDisplayMenu
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___tempoDisplayMenu_7;
	// UnityEngine.GameObject[] TimeAdManager::gameBlocker
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___gameBlocker_8;
	// System.Collections.Generic.List`1<System.Int32> TimeAdManager::deckActiveIndex
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___deckActiveIndex_9;
};

// TimeUpManager
struct TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Int32> TimeUpManager::deckTimeUpIndex
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___deckTimeUpIndex_4;
	// System.Boolean TimeUpManager::isActive
	bool ___isActive_5;
	// UnityEngine.GameObject TimeUpManager::DeckUpWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DeckUpWindow_6;
	// UnityEngine.Transform TimeUpManager::parente
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parente_7;
	// CardData TimeUpManager::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_8;
	// AdManager TimeUpManager::adManager
	AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* ___adManager_9;
};

// TimeUpWindow
struct TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CardData TimeUpWindow::cardData
	CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* ___cardData_4;
	// AdManager TimeUpWindow::adManager
	AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* ___adManager_5;
	// TimeUpManager TimeUpWindow::timeUpManager
	TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* ___timeUpManager_6;
	// System.Int32 TimeUpWindow::deckIndex
	int32_t ___deckIndex_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1<AdManager/ADB>::get_Item(System.Int32)
inline ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A* List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152 (List_1_tE95247D335F6833FCB576636797127F6F973F855* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A* (*) (List_1_tE95247D335F6833FCB576636797127F6F973F855*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<AdManager/ADB>::get_Count()
inline int32_t List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_inline (List_1_tE95247D335F6833FCB576636797127F6F973F855* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE95247D335F6833FCB576636797127F6F973F855*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m65DDA835C7863A3A6F216816F9AD39886DADBFAA (String_t* ___gameId0, const RuntimeMethod* method) ;
// System.Void AdManager::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_LoadAd_mE0C0CD7ABEA669846D43B4DA06DB37F3373DA1FD (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) ;
// System.Void AdManager::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnUnityAdsAdLoaded_m8C4BA61BB498EA9A404B806E4EC63067DE34CAF4 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, String_t* ___adUnitId0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<DeckType>::get_Item(System.Int32)
inline DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED (List_1_tF05BD7A3522E39B23A46D780B110794644A41339* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* (*) (List_1_tF05BD7A3522E39B23A46D780B110794644A41339*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void TimeAdManager::UpdateVisuals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeAdManager_UpdateVisuals_m9881AAA28202517687E0FF82501C7272D0411504 (TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* __this, const RuntimeMethod* method) ;
// System.Void TimeAdManager::decksActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeAdManager_decksActive_m7411B74BCC4CB355CCE844F267A8DDEA55607580 (TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<DeckType>::get_Count()
inline int32_t List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline (List_1_tF05BD7A3522E39B23A46D780B110794644A41339* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF05BD7A3522E39B23A46D780B110794644A41339*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AdManager/ADB>::.ctor()
inline void List_1__ctor_m5CE9C1437D4BAC9C68F9259F48450E1A454812D7 (List_1_tE95247D335F6833FCB576636797127F6F973F855* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE95247D335F6833FCB576636797127F6F973F855*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void PlayInfo::UpdateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayInfo_UpdateInfo_m36E825702CA07376F1E63F370DA23A321B70787B (PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CardType>::get_Item(System.Int32)
inline CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E* List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA (List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E* (*) (List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<CardType>::get_Count()
inline int32_t List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_inline (List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DeckType>::.ctor()
inline void List_1__ctor_m57CE0EA58EC1AA888F8CC42809F648E4D1E57AEF (List_1_tF05BD7A3522E39B23A46D780B110794644A41339* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF05BD7A3522E39B23A46D780B110794644A41339*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CardType>::.ctor()
inline void List_1__ctor_m39A22ED4800EF3621AFF5FFF8F389CAA11972114 (List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void PlayManager/CartaCriada::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartaCriada__ctor_mD9CFC5BDA66602967E060A996E589F9081B2EA43 (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void PlayManager::add_novaCarta(PlayManager/CartaCriada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_add_novaCarta_m85C2F08FA33E353A80D6CF8BAAEA216AB1718EC2 (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* ___value0, const RuntimeMethod* method) ;
// System.Void PlayManager::remove_novaCarta(PlayManager/CartaCriada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_remove_novaCarta_m1D2FA5A91388FAF42B14F92ABFC5466474FA01BE (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* ___value0, const RuntimeMethod* method) ;
// System.Void CardScpt::GenerateDeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_GenerateDeck_mAB317CB8022F56BE64926277324812E8FB59C9C5 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void CardScpt::ChooseCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_ChooseCard_m546923C098C6698EB270AD34C6FA89A395B90385 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) ;
// System.Void CardScpt::MakeTheCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_MakeTheCard_mBF5E87AB75E56B0F661D57EE6AC6383FF2C3CBBE (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void PlayInfo::UpdateVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayInfo_UpdateVisual_mD86C3FEEF89591FD9696D3F120CC1F7D5B01FE06 (PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void PlayManager::CreateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_CreateCard_m9C449FF8E2E85C02671117C1A2A74E2E874920C9 (PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<CardScpt>()
inline CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* GameObject_GetComponent_TisCardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38_m9860F51049BE34658FFF619CAD0E25C2F518891A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void PlayManager/CartaCriada::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_inline (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method) ;
// System.Void PlayManager::DesativarJogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_DesativarJogo_mA21943459614236B74C60B255B382ACFAF260F49 (PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void TimeUpManager::openWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpManager_openWindow_mA5A2A65BCE4F5794576D8786420EEC3E8B754987 (TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* __this, int32_t ___deckIndex0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TimeUpWindow>()
inline TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* GameObject_GetComponent_TisTimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F_mCC0F3C1F5A663432FF1D6776FBC9117E9B80A8A5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m950131324D62E143DA29715B027AB44EAAF5FE00 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AdManager::ShowAd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_ShowAd_m1F22346B57C241B50EF21B382DD66D87D8389C23 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, int32_t ___deck0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Awake_m43FB07FA2AFD8129346852990F3C6BA0825E6A35 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int j = 0; j < _showAdButtons.Count; j++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// _showAdButtons[j].button.interactable = false;
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_0 = __this->____showAdButtons_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A* L_2;
		L_2 = List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152(L_0, L_1, List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = L_2->___button_0;
		NullCheck(L_3);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, (bool)0, NULL);
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001f:
	{
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_5 = V_0;
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_6 = __this->____showAdButtons_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_inline(L_6, List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AdManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_Start_m4E5948C8F51FF51E0323BADFECF66102FCDDD862 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23BF70E6C79426A1D79F833061CD05E0AB9546A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Load(_adUnitId, this);
		String_t* L_0 = __this->____adUnitId_5;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_0, __this, NULL);
		// Advertisement.Initialize("5260291");
		Advertisement_Initialize_m65DDA835C7863A3A6F216816F9AD39886DADBFAA(_stringLiteral23BF70E6C79426A1D79F833061CD05E0AB9546A7, NULL);
		// LoadAd();
		AdManager_LoadAd_mE0C0CD7ABEA669846D43B4DA06DB37F3373DA1FD(__this, NULL);
		// OnUnityAdsAdLoaded(_adUnitId);
		String_t* L_1 = __this->____adUnitId_5;
		AdManager_OnUnityAdsAdLoaded_m8C4BA61BB498EA9A404B806E4EC63067DE34CAF4(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AdManager::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_LoadAd_mE0C0CD7ABEA669846D43B4DA06DB37F3373DA1FD (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_5;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_5;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void AdManager::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnUnityAdsAdLoaded_m8C4BA61BB498EA9A404B806E4EC63067DE34CAF4 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Ad Loaded: " + adUnitId);
		String_t* L_0 = ___adUnitId0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// if (adUnitId.Equals(_adUnitId))
		String_t* L_2 = ___adUnitId0;
		String_t* L_3 = __this->____adUnitId_5;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		// for (int j = 0; j < _showAdButtons.Count; j++)
		V_0 = 0;
		goto IL_003d;
	}

IL_0022:
	{
		// _showAdButtons[j].button.interactable = true;
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_5 = __this->____showAdButtons_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A* L_7;
		L_7 = List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152(L_5, L_6, List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		NullCheck(L_7);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = L_7->___button_0;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003d:
	{
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_10 = V_0;
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_11 = __this->____showAdButtons_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_inline(L_11, List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0022;
		}
	}
	{
		// isLoaded = true;
		__this->___isLoaded_9 = (bool)1;
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void AdManager::ShowAd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_ShowAd_m1F22346B57C241B50EF21B382DD66D87D8389C23 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, int32_t ___deck0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB820699E7CCE5A38D9D559DC165ABFEF570C7212);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// deckA = deck;
		int32_t L_0 = ___deck0;
		__this->___deckA_8 = L_0;
		// for (int j = 0; j < _showAdButtons.Count; j++)
		V_0 = 0;
		goto IL_0026;
	}

IL_000b:
	{
		// _showAdButtons[j].button.interactable = false;
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_1 = __this->____showAdButtons_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A* L_3;
		L_3 = List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152(L_1, L_2, List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = L_3->___button_0;
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_6 = V_0;
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_7 = __this->____showAdButtons_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_inline(L_7, List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		// Advertisement.Show(_adUnitId, this);
		String_t* L_9 = __this->____adUnitId_5;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_9, __this, NULL);
		// Debug.Log("Add show");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB820699E7CCE5A38D9D559DC165ABFEF570C7212, NULL);
		// isLoaded = false;
		__this->___isLoaded_9 = (bool)0;
		// }
		return;
	}
}
// System.Void AdManager::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnUnityAdsShowComplete_mF136E2A45040EAE268FD9B7C0BB832ABC0E86019 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, String_t* ___adUnitId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (adUnitId.Equals(_adUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		String_t* L_0 = ___adUnitId0;
		String_t* L_1 = __this->____adUnitId_5;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, (&___showCompletionState1));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_00d7;
		}
	}
	{
		// Debug.Log("Unity Ads Rewarded Ad Completed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5, NULL);
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		V_0 = 0;
		goto IL_00b5;
	}

IL_0037:
	{
		// if(cardData.DeckType[j].deckNumber == deckA)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_7 = __this->___cardData_6;
		NullCheck(L_7);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_8 = L_7->___DeckType_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_10;
		L_10 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_8, L_9, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_11 = L_10->___deckNumber_0;
		int32_t L_12 = __this->___deckA_8;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00b1;
		}
	}
	{
		// cardData.DeckType[j].timeSeconds += 900;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_13 = __this->___cardData_6;
		NullCheck(L_13);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_14 = L_13->___DeckType_4;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_16;
		L_16 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_14, L_15, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_17 = L_16;
		NullCheck(L_17);
		float L_18 = L_17->___timeSeconds_2;
		NullCheck(L_17);
		L_17->___timeSeconds_2 = ((float)il2cpp_codegen_add(L_18, (900.0f)));
		// timeAdManager.UpdateVisuals();
		TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* L_19 = __this->___timeAdManager_7;
		NullCheck(L_19);
		TimeAdManager_UpdateVisuals_m9881AAA28202517687E0FF82501C7272D0411504(L_19, NULL);
		// if(timeAdManager.gameOn == true)
		TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* L_20 = __this->___timeAdManager_7;
		NullCheck(L_20);
		bool L_21 = L_20->___gameOn_6;
		if (!L_21)
		{
			goto IL_00b1;
		}
	}
	{
		// cardData.DeckType[j].onoff = true;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_22 = __this->___cardData_6;
		NullCheck(L_22);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_23 = L_22->___DeckType_4;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_25;
		L_25 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_23, L_24, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_25);
		L_25->___onoff_3 = (bool)1;
		// timeAdManager.decksActive();
		TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* L_26 = __this->___timeAdManager_7;
		NullCheck(L_26);
		TimeAdManager_decksActive_m7411B74BCC4CB355CCE844F267A8DDEA55607580(L_26, NULL);
	}

IL_00b1:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00b5:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_28 = V_0;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_29 = __this->___cardData_6;
		NullCheck(L_29);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_30 = L_29->___DeckType_4;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_30, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_31)))
		{
			goto IL_0037;
		}
	}
	{
		// Advertisement.Load(_adUnitId, this);
		String_t* L_32 = __this->____adUnitId_5;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_32, __this, NULL);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void AdManager::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnUnityAdsFailedToLoad_mECBC1CFE5FBAD75D3B4836F6A3335E4BB12E2DEF (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void AdManager::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnUnityAdsShowFailure_m8079105F477D0204127D4D10842E448C8EB25227 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void AdManager::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnUnityAdsShowStart_m7D9AE1F46C499C919662A375D63DA351627C23AB (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowStart(string adUnitId) { }
		return;
	}
}
// System.Void AdManager::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnUnityAdsShowClick_m9CBFBE70A5E8AF091DD26151D29BB155DABE5EFF (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowClick(string adUnitId) { }
		return;
	}
}
// System.Void AdManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager_OnDestroy_m508DC0FD7094F9CD450787C284F7C9EB531552E4 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int j = 0; j < _showAdButtons.Count; j++)
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		// _showAdButtons[j].button.onClick.RemoveAllListeners();
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_0 = __this->____showAdButtons_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A* L_2;
		L_2 = List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152(L_0, L_1, List_1_get_Item_m62EDDA713FA3A6A3DBB5628A38FAFF48268E3152_RuntimeMethod_var);
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = L_2->___button_0;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		NullCheck(L_4);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_4, NULL);
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0023:
	{
		// for (int j = 0; j < _showAdButtons.Count; j++)
		int32_t L_6 = V_0;
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_7 = __this->____showAdButtons_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_inline(L_7, List_1_get_Count_mD91930E900D7F07413F7A09071CABFDA99759EF4_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AdManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdManager__ctor_m3CAFD30A4952D8832C0690AE2064A046AA278E78 (AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5CE9C1437D4BAC9C68F9259F48450E1A454812D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE95247D335F6833FCB576636797127F6F973F855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ADB> _showAdButtons = new List<ADB>();
		List_1_tE95247D335F6833FCB576636797127F6F973F855* L_0 = (List_1_tE95247D335F6833FCB576636797127F6F973F855*)il2cpp_codegen_object_new(List_1_tE95247D335F6833FCB576636797127F6F973F855_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5CE9C1437D4BAC9C68F9259F48450E1A454812D7(L_0, List_1__ctor_m5CE9C1437D4BAC9C68F9259F48450E1A454812D7_RuntimeMethod_var);
		__this->____showAdButtons_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____showAdButtons_4), (void*)L_0);
		// string _adUnitId = "Rewarded_Android";
		__this->____adUnitId_5 = _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_5), (void*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdManager/ADB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADB__ctor_mDEF94A8B0C99D6D8CFA768E5C155358C411EFD01 (ADB_tE9CB1FB2EF5A3C67F004244F69EFBE896730C20A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonMenuDeck::buttonChangeUI(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonMenuDeck_buttonChangeUI_m8E797728C882A49A3B047E638D27C634B9327103 (ButtonMenuDeck_tE6BBE2E655679888DDCE4E99CB6AE5461320A517* __this, int32_t ___NumeroDeck0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(isactive == false)
		bool L_0 = __this->___isactive_4;
		if (L_0)
		{
			goto IL_0085;
		}
	}
	{
		// for (int i = 0; i < cardData.DeckType.Count; i++)
		V_0 = 0;
		goto IL_0040;
	}

IL_000c:
	{
		// if(cardData.DeckType[i].deckNumber == NumeroDeck)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_1 = __this->___cardData_5;
		NullCheck(L_1);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_2 = L_1->___DeckType_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_4;
		L_4 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_2, L_3, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->___deckNumber_0;
		int32_t L_6 = ___NumeroDeck0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_003c;
		}
	}
	{
		// cardData.DeckType[i].onoff = true;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_7 = __this->___cardData_5;
		NullCheck(L_7);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_8 = L_7->___DeckType_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_10;
		L_10 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_8, L_9, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___onoff_3 = (bool)1;
	}

IL_003c:
	{
		// for (int i = 0; i < cardData.DeckType.Count; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < cardData.DeckType.Count; i++)
		int32_t L_12 = V_0;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_13 = __this->___cardData_5;
		NullCheck(L_13);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_14 = L_13->___DeckType_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_14, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_000c;
		}
	}
	{
		// GetComponent<Image>().color = new Color(255f/255f, 255f/255f, 255f/255f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16;
		L_16 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_17), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// isactive = true;
		__this->___isactive_4 = (bool)1;
		// playInfo.UpdateInfo();
		PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* L_18 = __this->___playInfo_6;
		NullCheck(L_18);
		PlayInfo_UpdateInfo_m36E825702CA07376F1E63F370DA23A321B70787B(L_18, NULL);
		return;
	}

IL_0085:
	{
		// for (int i = 0; i < cardData.DeckType.Count; i++)
		V_1 = 0;
		goto IL_00bd;
	}

IL_0089:
	{
		// if(cardData.DeckType[i].deckNumber == NumeroDeck)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_19 = __this->___cardData_5;
		NullCheck(L_19);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_20 = L_19->___DeckType_4;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_22;
		L_22 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_20, L_21, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = L_22->___deckNumber_0;
		int32_t L_24 = ___NumeroDeck0;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_00b9;
		}
	}
	{
		// cardData.DeckType[i].onoff = false;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_25 = __this->___cardData_5;
		NullCheck(L_25);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_26 = L_25->___DeckType_4;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_28;
		L_28 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_26, L_27, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_28);
		L_28->___onoff_3 = (bool)0;
	}

IL_00b9:
	{
		// for (int i = 0; i < cardData.DeckType.Count; i++)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00bd:
	{
		// for (int i = 0; i < cardData.DeckType.Count; i++)
		int32_t L_30 = V_1;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_31 = __this->___cardData_5;
		NullCheck(L_31);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_32 = L_31->___DeckType_4;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_32, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_30) < ((int32_t)L_33)))
		{
			goto IL_0089;
		}
	}
	{
		// GetComponent<Image>().color = new Color(0f/0f, 0f/0f, 0f/0f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34;
		L_34 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_35), (std::numeric_limits<float>::quiet_NaN()), (std::numeric_limits<float>::quiet_NaN()), (std::numeric_limits<float>::quiet_NaN()), /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_34, L_35);
		// isactive = false;
		__this->___isactive_4 = (bool)0;
		// playInfo.UpdateInfo();
		PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* L_36 = __this->___playInfo_6;
		NullCheck(L_36);
		PlayInfo_UpdateInfo_m36E825702CA07376F1E63F370DA23A321B70787B(L_36, NULL);
		// }
		return;
	}
}
// System.Void ButtonMenuDeck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonMenuDeck__ctor_mD114D95DC05619D64AAEEE2A738D7E3DA9FEEF46 (ButtonMenuDeck_tE6BBE2E655679888DDCE4E99CB6AE5461320A517* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CardData::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardData_Awake_mD805352F9D345E99C79CB96E35E0D9718BAD268C (CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < DeckType.Count; i++)
		V_0 = 0;
		goto IL_005c;
	}

IL_0004:
	{
		// DeckType[i].deckNumber = i + 1;
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_0 = __this->___DeckType_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_2;
		L_2 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_0, L_1, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		L_2->___deckNumber_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// for (int f = 0; f < DeckType[i].CardType.Count; f++)
		V_1 = 0;
		goto IL_003f;
	}

IL_001c:
	{
		// DeckType[i].CardType[f].cardNumber = f + 1;
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_4 = __this->___DeckType_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_6;
		L_6 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_4, L_5, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_7 = L_6->___CardType_5;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E* L_9;
		L_9 = List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA(L_7, L_8, List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA_RuntimeMethod_var);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		L_9->___cardNumber_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// for (int f = 0; f < DeckType[i].CardType.Count; f++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003f:
	{
		// for (int f = 0; f < DeckType[i].CardType.Count; f++)
		int32_t L_12 = V_1;
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_13 = __this->___DeckType_4;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_15;
		L_15 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_13, L_14, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_16 = L_15->___CardType_5;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_inline(L_16, List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_17)))
		{
			goto IL_001c;
		}
	}
	{
		// for (int i = 0; i < DeckType.Count; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005c:
	{
		// for (int i = 0; i < DeckType.Count; i++)
		int32_t L_19 = V_0;
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_20 = __this->___DeckType_4;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_20, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CardData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardData__ctor_m9586D92421991D216F537636B880C45FDC110F8E (CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m57CE0EA58EC1AA888F8CC42809F648E4D1E57AEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF05BD7A3522E39B23A46D780B110794644A41339_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<DeckType> DeckType = new List<DeckType>();
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_0 = (List_1_tF05BD7A3522E39B23A46D780B110794644A41339*)il2cpp_codegen_object_new(List_1_tF05BD7A3522E39B23A46D780B110794644A41339_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m57CE0EA58EC1AA888F8CC42809F648E4D1E57AEF(L_0, List_1__ctor_m57CE0EA58EC1AA888F8CC42809F648E4D1E57AEF_RuntimeMethod_var);
		__this->___DeckType_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeckType_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DeckType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeckType__ctor_mA47F0D2A30EA4DFC46BDC2458219DDCBDED04A63 (DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39A22ED4800EF3621AFF5FFF8F389CAA11972114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<CardType> CardType = new List<CardType>();
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_0 = (List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D*)il2cpp_codegen_object_new(List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m39A22ED4800EF3621AFF5FFF8F389CAA11972114(L_0, List_1__ctor_m39A22ED4800EF3621AFF5FFF8F389CAA11972114_RuntimeMethod_var);
		__this->___CardType_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CardType_5), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CardType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardType__ctor_m96EED45FDF76494A59F160F30C83653E8D83746B (CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CardScpt::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_OnEnable_mFC406BA8EEEEC3BEBE3FBBE221E60B5954874538 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardScpt_DestroySelf_mD8A6708CC8302E8ADC4FDE34D9AAAA1F4A7DA4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayManager.novaCarta += DestroySelf;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_0 = (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)il2cpp_codegen_object_new(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CartaCriada__ctor_mD9CFC5BDA66602967E060A996E589F9081B2EA43(L_0, __this, (intptr_t)((void*)CardScpt_DestroySelf_mD8A6708CC8302E8ADC4FDE34D9AAAA1F4A7DA4E6_RuntimeMethod_var), NULL);
		PlayManager_add_novaCarta_m85C2F08FA33E353A80D6CF8BAAEA216AB1718EC2(L_0, NULL);
		// }
		return;
	}
}
// System.Void CardScpt::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_OnDisable_m47DA2856976EBFB443278F6EB7514BA78723A685 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardScpt_DestroySelf_mD8A6708CC8302E8ADC4FDE34D9AAAA1F4A7DA4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayManager.novaCarta -= DestroySelf;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_0 = (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)il2cpp_codegen_object_new(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CartaCriada__ctor_mD9CFC5BDA66602967E060A996E589F9081B2EA43(L_0, __this, (intptr_t)((void*)CardScpt_DestroySelf_mD8A6708CC8302E8ADC4FDE34D9AAAA1F4A7DA4E6_RuntimeMethod_var), NULL);
		PlayManager_remove_novaCarta_m1D2FA5A91388FAF42B14F92ABFC5466474FA01BE(L_0, NULL);
		// }
		return;
	}
}
// System.Void CardScpt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_Start_m0B4D80C21FF110A0E3B8173D29618BDC6AD80ACB (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	{
		// GenerateDeck();
		CardScpt_GenerateDeck_mAB317CB8022F56BE64926277324812E8FB59C9C5(__this, NULL);
		// }
		return;
	}
}
// System.Void CardScpt::GenerateDeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_GenerateDeck_mAB317CB8022F56BE64926277324812E8FB59C9C5 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ndodeck = Random.Range(0, cardData.DeckType.Count);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_0 = __this->___cardData_4;
		NullCheck(L_0);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_1 = L_0->___DeckType_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_1, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_2, NULL);
		__this->___ndodeck_12 = L_3;
		goto IL_003a;
	}

IL_001e:
	{
		// ndodeck = Random.Range(0, cardData.DeckType.Count);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_4 = __this->___cardData_4;
		NullCheck(L_4);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_5 = L_4->___DeckType_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_5, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_6, NULL);
		__this->___ndodeck_12 = L_7;
	}

IL_003a:
	{
		// while(cardData.DeckType[ndodeck].onoff == false)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_8 = __this->___cardData_4;
		NullCheck(L_8);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_9 = L_8->___DeckType_4;
		int32_t L_10 = __this->___ndodeck_12;
		NullCheck(L_9);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_11;
		L_11 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_9, L_10, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_11);
		bool L_12 = L_11->___onoff_3;
		if (!L_12)
		{
			goto IL_001e;
		}
	}
	{
		// ChooseCard();
		CardScpt_ChooseCard_m546923C098C6698EB270AD34C6FA89A395B90385(__this, NULL);
		// }
		return;
	}
}
// System.Void CardScpt::ChooseCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_ChooseCard_m546923C098C6698EB270AD34C6FA89A395B90385 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ndacarta = Random.Range(0, cardData.DeckType[ndodeck].CardType.Count);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_0 = __this->___cardData_4;
		NullCheck(L_0);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_1 = L_0->___DeckType_4;
		int32_t L_2 = __this->___ndodeck_12;
		NullCheck(L_1);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_3;
		L_3 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_1, L_2, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_4 = L_3->___CardType_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_inline(L_4, List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_5, NULL);
		__this->___ndacarta_13 = L_6;
		// MakeTheCard();
		CardScpt_MakeTheCard_mBF5E87AB75E56B0F661D57EE6AC6383FF2C3CBBE(__this, NULL);
		// }
		return;
	}
}
// System.Void CardScpt::MakeTheCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_MakeTheCard_mBF5E87AB75E56B0F661D57EE6AC6383FF2C3CBBE (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D02432E53FC8541CC966F5F8231C76FBF13F8E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8244D57927DAF62661F6A2C1F2C49EADB92E36D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Titulo.text = "Do or Drink";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___Titulo_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralF8244D57927DAF62661F6A2C1F2C49EADB92E36D);
		// SubTitulo.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardContentTop;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___SubTitulo_7;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_2 = __this->___cardData_4;
		NullCheck(L_2);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_3 = L_2->___DeckType_4;
		int32_t L_4 = __this->___ndodeck_12;
		NullCheck(L_3);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_5;
		L_5 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_3, L_4, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_6 = L_5->___CardType_5;
		int32_t L_7 = __this->___ndacarta_13;
		NullCheck(L_6);
		CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E* L_8;
		L_8 = List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA(L_6, L_7, List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = L_8->___cardContentTop_2;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_9);
		// NomeDeck.text = cardData.DeckType[ndodeck].deckName;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___NomeDeck_8;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_11 = __this->___cardData_4;
		NullCheck(L_11);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_12 = L_11->___DeckType_4;
		int32_t L_13 = __this->___ndodeck_12;
		NullCheck(L_12);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_14;
		L_14 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_12, L_13, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_15 = L_14->___deckName_1;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_15);
		// NumeroDeck.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardNumber + "/" + cardData.DeckType[ndodeck].CardType.Count;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_16 = __this->___NumeroDeck_9;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_17 = __this->___cardData_4;
		NullCheck(L_17);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_18 = L_17->___DeckType_4;
		int32_t L_19 = __this->___ndodeck_12;
		NullCheck(L_18);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_20;
		L_20 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_18, L_19, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_20);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_21 = L_20->___CardType_5;
		int32_t L_22 = __this->___ndacarta_13;
		NullCheck(L_21);
		CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E* L_23;
		L_23 = List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA(L_21, L_22, List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t* L_24 = (&L_23->___cardNumber_0);
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_24, NULL);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_26 = __this->___cardData_4;
		NullCheck(L_26);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_27 = L_26->___DeckType_4;
		int32_t L_28 = __this->___ndodeck_12;
		NullCheck(L_27);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_29;
		L_29 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_27, L_28, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_29);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_30 = L_29->___CardType_5;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_inline(L_30, List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		V_0 = L_31;
		String_t* L_32;
		L_32 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_33;
		L_33 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_25, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_32, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_16, L_33);
		// Conteudo.text = cardData.DeckType[ndodeck].CardType[ndacarta].cardContent;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = __this->___Conteudo_10;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_35 = __this->___cardData_4;
		NullCheck(L_35);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_36 = L_35->___DeckType_4;
		int32_t L_37 = __this->___ndodeck_12;
		NullCheck(L_36);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_38;
		L_38 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_36, L_37, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_38);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_39 = L_38->___CardType_5;
		int32_t L_40 = __this->___ndacarta_13;
		NullCheck(L_39);
		CardType_t3EEF93B32FA6FE4ADE49258DBD1581738DF3C25E* L_41;
		L_41 = List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA(L_39, L_40, List_1_get_Item_mAD1EF49CA3EEC26C6D701285F561AA8A500CDBDA_RuntimeMethod_var);
		NullCheck(L_41);
		String_t* L_42 = L_41->___cardContent_1;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_34, L_42);
		// GetComponentInChildren<Transform>().Find("WhiteBK").GetComponent<Image>().color = cardData.DeckType[ndodeck].cor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0(__this, Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_43, _stringLiteral3D02432E53FC8541CC966F5F8231C76FBF13F8E7, NULL);
		NullCheck(L_44);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45;
		L_45 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_44, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_46 = __this->___cardData_4;
		NullCheck(L_46);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_47 = L_46->___DeckType_4;
		int32_t L_48 = __this->___ndodeck_12;
		NullCheck(L_47);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_49;
		L_49 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_47, L_48, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_49);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = L_49->___cor_4;
		NullCheck(L_45);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_45, L_50);
		// }
		return;
	}
}
// System.Void CardScpt::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_DestroySelf_mD8A6708CC8302E8ADC4FDE34D9AAAA1F4A7DA4E6 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF7D98CE9C95842AA81B597E3FC88B05D9D5103);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.SetParent(parenteSaida, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___parenteSaida_5;
		NullCheck(L_0);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_0, L_1, (bool)0, NULL);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_11), (void*)L_2);
		// animator.SetBool("isDelete", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_11;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral4DF7D98CE9C95842AA81B597E3FC88B05D9D5103, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CardScpt::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt_Delete_m1ED40D1CE0BD36A3D55A409F0AA8841DF07E4514 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void CardScpt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardScpt__ctor_m513AD4A04EED45BEC427A27F713A4E45BEA43C52 (CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayInfo::UpdateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayInfo_UpdateInfo_m36E825702CA07376F1E63F370DA23A321B70787B (PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// DeckNumber = 0;
		__this->___DeckNumber_4 = 0;
		// CardNumber = 0;
		__this->___CardNumber_5 = 0;
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		V_0 = 0;
		goto IL_0066;
	}

IL_0012:
	{
		// if (cardData.DeckType[j].onoff == true)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_0 = __this->___cardData_9;
		NullCheck(L_0);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_1 = L_0->___DeckType_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_3;
		L_3 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_1, L_2, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4 = L_3->___onoff_3;
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		// DeckNumber = DeckNumber + 1;
		int32_t L_5 = __this->___DeckNumber_4;
		__this->___DeckNumber_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// int CartasDoDeck = cardData.DeckType[j].CardType.Count;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_6 = __this->___cardData_9;
		NullCheck(L_6);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_7 = L_6->___DeckType_4;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_9;
		L_9 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_7, L_8, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_tF5DF10FF0E7F1847BD2E5F5C4D8F07CFA28CA51D* L_10 = L_9->___CardType_5;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_inline(L_10, List_1_get_Count_m5A9618B239393F6E6A38318536B8965001ED3B7C_RuntimeMethod_var);
		V_1 = L_11;
		// CardNumber += CartasDoDeck;
		int32_t L_12 = __this->___CardNumber_5;
		int32_t L_13 = V_1;
		__this->___CardNumber_5 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
	}

IL_0062:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0066:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_15 = V_0;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_16 = __this->___cardData_9;
		NullCheck(L_16);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_17 = L_16->___DeckType_4;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_17, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_18)))
		{
			goto IL_0012;
		}
	}
	{
		// if(DeckNumber > 0)
		int32_t L_19 = __this->___DeckNumber_4;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		// PlayButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___PlayButton_8;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		goto IL_009c;
	}

IL_0090:
	{
		// PlayButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___PlayButton_8;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
	}

IL_009c:
	{
		// UpdateVisual();
		PlayInfo_UpdateVisual_mD86C3FEEF89591FD9696D3F120CC1F7D5B01FE06(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayInfo::UpdateVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayInfo_UpdateVisual_mD86C3FEEF89591FD9696D3F120CC1F7D5B01FE06 (PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072F56AE780AEAE1EFDE9F5092D52CBD173DF2DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral593B47FE4F1C6A9341C95265C70B12873193B3E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD3E0485E5A350E67EFC421DD535AFF59487E8D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DeckNumber == 1)
		int32_t L_0 = __this->___DeckNumber_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		// DeckNumberText.text = DeckNumber.ToString() + " Deck";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___DeckNumberText_6;
		int32_t* L_2 = (&__this->___DeckNumber_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralBD3E0485E5A350E67EFC421DD535AFF59487E8D6, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_4);
		goto IL_004b;
	}

IL_002b:
	{
		// DeckNumberText.text = DeckNumber.ToString() + " Decks";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___DeckNumberText_6;
		int32_t* L_6 = (&__this->___DeckNumber_4);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral072F56AE780AEAE1EFDE9F5092D52CBD173DF2DD, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_8);
	}

IL_004b:
	{
		// CardNumberText.text = CardNumber.ToString() + " Cartas";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___CardNumberText_7;
		int32_t* L_10 = (&__this->___CardNumber_5);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral593B47FE4F1C6A9341C95265C70B12873193B3E3, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_12);
		// }
		return;
	}
}
// System.Void PlayInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayInfo__ctor_m70B93A59AB0232C10B5845A6F324DA6261A83811 (PlayInfo_tD227FDFF5A44B0B14FC708C1010482ACA94F4227* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayManager::add_novaCarta(PlayManager/CartaCriada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_add_novaCarta_m85C2F08FA33E353A80D6CF8BAAEA216AB1718EC2 (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* V_0 = NULL;
	CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* V_1 = NULL;
	CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* V_2 = NULL;
	{
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_0 = ((PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_StaticFields*)il2cpp_codegen_static_fields_for(PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var))->___novaCarta_11;
		V_0 = L_0;
	}

IL_0006:
	{
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_1 = V_0;
		V_1 = L_1;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_2 = V_1;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)CastclassSealed((RuntimeObject*)L_4, CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var));
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_5 = V_2;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_6 = V_1;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_7;
		L_7 = InterlockedCompareExchangeImpl<CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*>((&((PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_StaticFields*)il2cpp_codegen_static_fields_for(PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var))->___novaCarta_11), L_5, L_6);
		V_0 = L_7;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_8 = V_0;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_9 = V_1;
		if ((!(((RuntimeObject*)(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)L_8) == ((RuntimeObject*)(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayManager::remove_novaCarta(PlayManager/CartaCriada)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_remove_novaCarta_m1D2FA5A91388FAF42B14F92ABFC5466474FA01BE (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* V_0 = NULL;
	CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* V_1 = NULL;
	CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* V_2 = NULL;
	{
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_0 = ((PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_StaticFields*)il2cpp_codegen_static_fields_for(PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var))->___novaCarta_11;
		V_0 = L_0;
	}

IL_0006:
	{
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_1 = V_0;
		V_1 = L_1;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_2 = V_1;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)CastclassSealed((RuntimeObject*)L_4, CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A_il2cpp_TypeInfo_var));
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_5 = V_2;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_6 = V_1;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_7;
		L_7 = InterlockedCompareExchangeImpl<CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*>((&((PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_StaticFields*)il2cpp_codegen_static_fields_for(PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var))->___novaCarta_11), L_5, L_6);
		V_0 = L_7;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_8 = V_0;
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_9 = V_1;
		if ((!(((RuntimeObject*)(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)L_8) == ((RuntimeObject*)(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayManager::AtivarJogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_AtivarJogo_mC8BBCC0831F9EC3C1ED5BF9BF73F69B0146E86DC (PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// jogosAtivos = 0;
		__this->___jogosAtivos_12 = 0;
		// InGame.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___InGame_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// NotInGame.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___NotInGame_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// CreateCard();
		PlayManager_CreateCard_m9C449FF8E2E85C02671117C1A2A74E2E874920C9(__this, NULL);
		// timeAdManager.decksActive();
		TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* L_2 = __this->___timeAdManager_10;
		NullCheck(L_2);
		TimeAdManager_decksActive_m7411B74BCC4CB355CCE844F267A8DDEA55607580(L_2, NULL);
		// timeAdManager.gameOn = true;
		TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* L_3 = __this->___timeAdManager_10;
		NullCheck(L_3);
		L_3->___gameOn_6 = (bool)1;
		// for (int j = 1; j < cardData.DeckType.Count; j++)
		V_0 = 1;
		goto IL_006a;
	}

IL_0040:
	{
		// if(cardData.DeckType[j].onoff == true)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_4 = __this->___cardData_9;
		NullCheck(L_4);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_5 = L_4->___DeckType_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_7;
		L_7 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_5, L_6, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_8 = L_7->___onoff_3;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// jogosAtivos += 1;
		int32_t L_9 = __this->___jogosAtivos_12;
		__this->___jogosAtivos_12 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0066:
	{
		// for (int j = 1; j < cardData.DeckType.Count; j++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_006a:
	{
		// for (int j = 1; j < cardData.DeckType.Count; j++)
		int32_t L_11 = V_0;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_12 = __this->___cardData_9;
		NullCheck(L_12);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_13 = L_12->___DeckType_4;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_13, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_14)))
		{
			goto IL_0040;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayManager::DesativarJogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_DesativarJogo_mA21943459614236B74C60B255B382ACFAF260F49 (PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588* __this, const RuntimeMethod* method) 
{
	{
		// InGame.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___InGame_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// NotInGame.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___NotInGame_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// timeAdManager.gameOn = false;
		TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* L_2 = __this->___timeAdManager_10;
		NullCheck(L_2);
		L_2->___gameOn_6 = (bool)0;
		// timeAdManager.UpdateVisuals();
		TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* L_3 = __this->___timeAdManager_10;
		NullCheck(L_3);
		TimeAdManager_UpdateVisuals_m9881AAA28202517687E0FF82501C7272D0411504(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayManager::CreateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_CreateCard_m9C449FF8E2E85C02671117C1A2A74E2E874920C9 (PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38_m9860F51049BE34658FFF619CAD0E25C2F518891A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var novaCarta = Instantiate(Card, new Vector3(0, 0, 0), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Card_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// novaCarta.GetComponent<CardScpt>().cardData = cardData;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* L_5;
		L_5 = GameObject_GetComponent_TisCardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38_m9860F51049BE34658FFF619CAD0E25C2F518891A(L_4, GameObject_GetComponent_TisCardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38_m9860F51049BE34658FFF619CAD0E25C2F518891A_RuntimeMethod_var);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_6 = __this->___cardData_9;
		NullCheck(L_5);
		L_5->___cardData_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___cardData_4), (void*)L_6);
		// novaCarta.GetComponent<CardScpt>().parenteSaida = parenteSaida;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_4;
		NullCheck(L_7);
		CardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38* L_8;
		L_8 = GameObject_GetComponent_TisCardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38_m9860F51049BE34658FFF619CAD0E25C2F518891A(L_7, GameObject_GetComponent_TisCardScpt_tD6FC68F68B8E13B5AF4A1C67E6B97624074E1B38_m9860F51049BE34658FFF619CAD0E25C2F518891A_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___parenteSaida_7;
		NullCheck(L_8);
		L_8->___parenteSaida_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___parenteSaida_5), (void*)L_9);
		// novaCarta.transform.SetParent(parente, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___parente_6;
		NullCheck(L_11);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_11, L_12, (bool)0, NULL);
		// novaCarta.GetComponent<RectTransform>().localScale = new Vector3(1, 1, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_10;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_13, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_15, NULL);
		// novaCarta.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(0, -95, 0);
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_13, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0f), (-95.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void PlayManager::NewCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager_NewCard_m9636E1EDDAB7B4ADFEFBFA3EBD58B3EC3FBAF71C (PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool cardExist = false;
		V_0 = (bool)0;
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		V_1 = 0;
		goto IL_0024;
	}

IL_0006:
	{
		// if(cardData.DeckType[j].onoff == true)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_0 = __this->___cardData_9;
		NullCheck(L_0);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_1 = L_0->___DeckType_4;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_3;
		L_3 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_1, L_2, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4 = L_3->___onoff_3;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// cardExist = true;
		V_0 = (bool)1;
	}

IL_0020:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0024:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_6 = V_1;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_7 = __this->___cardData_9;
		NullCheck(L_7);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_8 = L_7->___DeckType_4;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_8, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_0006;
		}
	}
	{
		// if(cardExist == true)
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		// if(novaCarta != null)
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_11 = ((PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_StaticFields*)il2cpp_codegen_static_fields_for(PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var))->___novaCarta_11;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		// novaCarta();
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* L_12 = ((PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_StaticFields*)il2cpp_codegen_static_fields_for(PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588_il2cpp_TypeInfo_var))->___novaCarta_11;
		NullCheck(L_12);
		CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_inline(L_12, NULL);
	}

IL_004b:
	{
		// CreateCard();
		PlayManager_CreateCard_m9C449FF8E2E85C02671117C1A2A74E2E874920C9(__this, NULL);
		return;
	}

IL_0052:
	{
		// DesativarJogo();
		PlayManager_DesativarJogo_mA21943459614236B74C60B255B382ACFAF260F49(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayManager__ctor_m60142907B05BD1814F90F152F07EE089A5C7D297 (PlayManager_t2470BB88EEAFDBD1E0950039FF547015A6054588* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_Multicast(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* currentDelegate = reinterpret_cast<CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_OpenInst(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_OpenStatic(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_OpenStaticInvoker(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_ClosedStaticInvoker(CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void PlayManager/CartaCriada::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartaCriada__ctor_mD9CFC5BDA66602967E060A996E589F9081B2EA43 (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_Multicast;
}
// System.Void PlayManager/CartaCriada::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3 (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlayManager/CartaCriada::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CartaCriada_BeginInvoke_mAB69AD8A91D9153856BA4FE88C42E687A72C9668 (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void PlayManager/CartaCriada::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CartaCriada_EndInvoke_m430C20E143DCA1BBC56CBB1A00F74D4E61108FDC (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeAdManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeAdManager_Start_m4757DD120061727FD8951CD4D05C56B117F36936 (TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* __this, const RuntimeMethod* method) 
{
	{
		// UpdateVisuals();
		TimeAdManager_UpdateVisuals_m9881AAA28202517687E0FF82501C7272D0411504(__this, NULL);
		// }
		return;
	}
}
// System.Void TimeAdManager::decksActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeAdManager_decksActive_m7411B74BCC4CB355CCE844F267A8DDEA55607580 (TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = deckActiveIndex.Count - 1; i >= 0; i--)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___deckActiveIndex_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0020;
	}

IL_0010:
	{
		// deckActiveIndex.RemoveAt(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___deckActiveIndex_9;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_2, L_3, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		// for (int i = deckActiveIndex.Count - 1; i >= 0; i--)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
	}

IL_0020:
	{
		// for (int i = deckActiveIndex.Count - 1; i >= 0; i--)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// for (int j = 1; j < cardData.DeckType.Count; j++)
		V_1 = 1;
		goto IL_0050;
	}

IL_0028:
	{
		// if(cardData.DeckType[j].onoff == true)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_6 = __this->___cardData_4;
		NullCheck(L_6);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_7 = L_6->___DeckType_4;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_9;
		L_9 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_7, L_8, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_9);
		bool L_10 = L_9->___onoff_3;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// deckActiveIndex.Add(j);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = __this->___deckActiveIndex_9;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_11, L_12, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_004c:
	{
		// for (int j = 1; j < cardData.DeckType.Count; j++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		// for (int j = 1; j < cardData.DeckType.Count; j++)
		int32_t L_14 = V_1;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_15 = __this->___cardData_4;
		NullCheck(L_15);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_16 = L_15->___DeckType_4;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_16, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TimeAdManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeAdManager_Update_m8B7F5D5018FD29692CA95FB8966D573327E740B7 (TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (gameOn == true && timeUpManager.isActive == false)
		bool L_0 = __this->___gameOn_6;
		if (!L_0)
		{
			goto IL_00d2;
		}
	}
	{
		TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* L_1 = __this->___timeUpManager_5;
		NullCheck(L_1);
		bool L_2 = L_1->___isActive_5;
		if (L_2)
		{
			goto IL_00d2;
		}
	}
	{
		// for (int j = 0; j < deckActiveIndex.Count; j++)
		V_0 = 0;
		goto IL_00c1;
	}

IL_0022:
	{
		// if (cardData.DeckType[deckActiveIndex[j]].timeSeconds <= 0)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_3 = __this->___cardData_4;
		NullCheck(L_3);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_4 = L_3->___DeckType_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___deckActiveIndex_9;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_5, L_6, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_4);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_8;
		L_8 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_4, L_7, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->___timeSeconds_2;
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0090;
		}
	}
	{
		// cardData.DeckType[deckActiveIndex[j]].onoff = false;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_10 = __this->___cardData_4;
		NullCheck(L_10);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_11 = L_10->___DeckType_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = __this->___deckActiveIndex_9;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_12, L_13, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_11);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_15;
		L_15 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_11, L_14, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_15);
		L_15->___onoff_3 = (bool)0;
		// timeUpManager.deckTimeUpIndex.Add(deckActiveIndex[j]);
		TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* L_16 = __this->___timeUpManager_5;
		NullCheck(L_16);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = L_16->___deckTimeUpIndex_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = __this->___deckActiveIndex_9;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_18, L_19, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_17, L_20, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// decksActive();
		TimeAdManager_decksActive_m7411B74BCC4CB355CCE844F267A8DDEA55607580(__this, NULL);
		goto IL_00bd;
	}

IL_0090:
	{
		// cardData.DeckType[deckActiveIndex[j]].timeSeconds -= Time.deltaTime;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_21 = __this->___cardData_4;
		NullCheck(L_21);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_22 = L_21->___DeckType_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_23 = __this->___deckActiveIndex_9;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25;
		L_25 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_23, L_24, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		NullCheck(L_22);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_26;
		L_26 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_22, L_25, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_27 = L_26;
		NullCheck(L_27);
		float L_28 = L_27->___timeSeconds_2;
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_27);
		L_27->___timeSeconds_2 = ((float)il2cpp_codegen_subtract(L_28, L_29));
	}

IL_00bd:
	{
		// for (int j = 0; j < deckActiveIndex.Count; j++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c1:
	{
		// for (int j = 0; j < deckActiveIndex.Count; j++)
		int32_t L_31 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32 = __this->___deckActiveIndex_9;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_32, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0022;
		}
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void TimeAdManager::UpdateVisuals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeAdManager_UpdateVisuals_m9881AAA28202517687E0FF82501C7272D0411504 (TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF111529218B42E0957F9600FE086B4746EBB71EF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		V_0 = 0;
		goto IL_010f;
	}

IL_0007:
	{
		// if(j != 0)
		int32_t L_0 = V_0;
		if (!L_0)
		{
			goto IL_010b;
		}
	}
	{
		// if(cardData.DeckType[j].timeSeconds > 0)
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_1 = __this->___cardData_4;
		NullCheck(L_1);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_2 = L_1->___DeckType_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_4;
		L_4 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_2, L_3, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_4);
		float L_5 = L_4->___timeSeconds_2;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// int hours = Mathf.FloorToInt(cardData.DeckType[j].timeSeconds / 3600);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_6 = __this->___cardData_4;
		NullCheck(L_6);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_7 = L_6->___DeckType_4;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_9;
		L_9 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_7, L_8, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_9);
		float L_10 = L_9->___timeSeconds_2;
		int32_t L_11;
		L_11 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_10/(3600.0f))), NULL);
		V_1 = L_11;
		// int minutes = Mathf.FloorToInt((cardData.DeckType[j].timeSeconds % 3600) / 60);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_12 = __this->___cardData_4;
		NullCheck(L_12);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_13 = L_12->___DeckType_4;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_15;
		L_15 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_13, L_14, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16 = L_15->___timeSeconds_2;
		int32_t L_17;
		L_17 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((fmodf(L_16, (3600.0f)))/(60.0f))), NULL);
		V_2 = L_17;
		// int seconds = Mathf.FloorToInt(cardData.DeckType[j].timeSeconds % 60);
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_18 = __this->___cardData_4;
		NullCheck(L_18);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_19 = L_18->___DeckType_4;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_21;
		L_21 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_19, L_20, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_21);
		float L_22 = L_21->___timeSeconds_2;
		int32_t L_23;
		L_23 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline((fmodf(L_22, (60.0f))), NULL);
		V_3 = L_23;
		// gameBlocker[j - 1].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = __this->___gameBlocker_8;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// tempoDisplayMenu[j - 1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = __this->___tempoDisplayMenu_7;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
		// tempoDisplayMenu[j - 1].GetComponent<TextMeshProUGUI>().text = string.Format("Remaining Time: " + "{0:00}:{1:00}:{2:00}", hours, minutes, seconds);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = __this->___tempoDisplayMenu_7;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36;
		L_36 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_35, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		int32_t L_37 = V_1;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		int32_t L_40 = V_2;
		int32_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_41);
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_44);
		String_t* L_46;
		L_46 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralF111529218B42E0957F9600FE086B4746EBB71EF, L_39, L_42, L_45, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, L_46);
		goto IL_010b;
	}

IL_00eb:
	{
		// gameBlocker[j - 1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = __this->___gameBlocker_8;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)1, NULL);
		// tempoDisplayMenu[j - 1].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_51 = __this->___tempoDisplayMenu_7;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
	}

IL_010b:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_010f:
	{
		// for (int j = 0; j < cardData.DeckType.Count; j++)
		int32_t L_56 = V_0;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_57 = __this->___cardData_4;
		NullCheck(L_57);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_58 = L_57->___DeckType_4;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_inline(L_58, List_1_get_Count_m2165A3668ECC0836D1BB4B0043275CF82D0DE386_RuntimeMethod_var);
		if ((((int32_t)L_56) < ((int32_t)L_59)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TimeAdManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeAdManager__ctor_mF2EA762997660D897954907BF113B0DD50198F67 (TimeAdManager_t60AFBE3D747DE8713B822DFA560795B29DB8F303* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<int> deckActiveIndex = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___deckActiveIndex_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deckActiveIndex_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeUpManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpManager_Update_m954BD46A185EB56B0D3E3F4CDFDE128C6D3508D3 (TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isActive == false)
		bool L_0 = __this->___isActive_5;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// if(deckTimeUpIndex.Count > 0)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___deckTimeUpIndex_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_1, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// openWindow(deckTimeUpIndex[0]);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___deckTimeUpIndex_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_3, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		TimeUpManager_openWindow_mA5A2A65BCE4F5794576D8786420EEC3E8B754987(__this, L_4, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void TimeUpManager::openWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpManager_openWindow_mA5A2A65BCE4F5794576D8786420EEC3E8B754987 (TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* __this, int32_t ___deckIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m950131324D62E143DA29715B027AB44EAAF5FE00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F_mCC0F3C1F5A663432FF1D6776FBC9117E9B80A8A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E783D6DCCE4F3CE6845F3EFB01B823251F6215);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isActive = true;
		__this->___isActive_5 = (bool)1;
		// var janela = Instantiate(DeckUpWindow, new Vector3(0, 0, 0), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___DeckUpWindow_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// janela.transform.SetParent(parente, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___parente_7;
		NullCheck(L_5);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_5, L_6, (bool)0, NULL);
		// TimeUpWindow timeUpWindow = janela.GetComponent<TimeUpWindow>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_4;
		NullCheck(L_7);
		TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* L_8;
		L_8 = GameObject_GetComponent_TisTimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F_mCC0F3C1F5A663432FF1D6776FBC9117E9B80A8A5(L_7, GameObject_GetComponent_TisTimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F_mCC0F3C1F5A663432FF1D6776FBC9117E9B80A8A5_RuntimeMethod_var);
		// timeUpWindow.cardData = cardData;
		TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* L_9 = L_8;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_10 = __this->___cardData_8;
		NullCheck(L_9);
		L_9->___cardData_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___cardData_4), (void*)L_10);
		// timeUpWindow.adManager = adManager;
		TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* L_11 = L_9;
		AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* L_12 = __this->___adManager_9;
		NullCheck(L_11);
		L_11->___adManager_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___adManager_5), (void*)L_12);
		// timeUpWindow.timeUpManager = this;
		TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* L_13 = L_11;
		NullCheck(L_13);
		L_13->___timeUpManager_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___timeUpManager_6), (void*)__this);
		// timeUpWindow.deckIndex = deckIndex;
		int32_t L_14 = ___deckIndex0;
		NullCheck(L_13);
		L_13->___deckIndex_7 = L_14;
		// TextMeshProUGUI txtMP = janela.GetComponentInChildren<Transform>().Find("Deck Name").GetComponent<TextMeshProUGUI>();
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m950131324D62E143DA29715B027AB44EAAF5FE00(L_7, GameObject_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m950131324D62E143DA29715B027AB44EAAF5FE00_RuntimeMethod_var);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_15, _stringLiteralF1E783D6DCCE4F3CE6845F3EFB01B823251F6215, NULL);
		NullCheck(L_16);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17;
		L_17 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_16, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		// txtMP.text = cardData.DeckType[deckIndex].deckName;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = L_17;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_19 = __this->___cardData_8;
		NullCheck(L_19);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_20 = L_19->___DeckType_4;
		int32_t L_21 = ___deckIndex0;
		NullCheck(L_20);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_22;
		L_22 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_20, L_21, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_22);
		String_t* L_23 = L_22->___deckName_1;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_23);
		// txtMP.color = cardData.DeckType[deckIndex].cor;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_24 = __this->___cardData_8;
		NullCheck(L_24);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_25 = L_24->___DeckType_4;
		int32_t L_26 = ___deckIndex0;
		NullCheck(L_25);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_27;
		L_27 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_25, L_26, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = L_27->___cor_4;
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_28);
		// deckTimeUpIndex.RemoveAt(0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_29 = __this->___deckTimeUpIndex_4;
		NullCheck(L_29);
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_29, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TimeUpManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpManager__ctor_mB126B9A559955AED82DD6B05650AB4EA7638FC9A (TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> deckTimeUpIndex = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___deckTimeUpIndex_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deckTimeUpIndex_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeUpWindow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpWindow_Update_m7E69214C75195A0E16DF7661AF03CB72D5C99585 (TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93549D4AFED0F570944E94D286AAC6035D12AB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(adManager.isLoaded == false)
		AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* L_0 = __this->___adManager_5;
		NullCheck(L_0);
		bool L_1 = L_0->___isLoaded_9;
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		// GetComponentInChildren<Transform>().Find("Watch Ad").GetComponent<Button>().interactable = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0(__this, Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteralB93549D4AFED0F570944E94D286AAC6035D12AB2, NULL);
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_3, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)0, NULL);
		return;
	}

IL_0029:
	{
		// GetComponentInChildren<Transform>().Find("Watch Ad").GetComponent<Button>().interactable = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0(__this, Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteralB93549D4AFED0F570944E94D286AAC6035D12AB2, NULL);
		NullCheck(L_6);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7;
		L_7 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_6, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TimeUpWindow::ShowingAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpWindow_ShowingAd_mCA9BAC9AD5C3EBCB239859F7100FD7D0EA864E26 (TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// adManager.ShowAd(cardData.DeckType[deckIndex].deckNumber);
		AdManager_t1389D7135E1F558C870341BC4735A200ABA80F91* L_0 = __this->___adManager_5;
		CardData_tA9430D43EC9E6379D6D5485285EB4D225F7490CE* L_1 = __this->___cardData_4;
		NullCheck(L_1);
		List_1_tF05BD7A3522E39B23A46D780B110794644A41339* L_2 = L_1->___DeckType_4;
		int32_t L_3 = __this->___deckIndex_7;
		NullCheck(L_2);
		DeckType_tAA0EBADD8A4ED68DD005860C10BC91908C16704D* L_4;
		L_4 = List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED(L_2, L_3, List_1_get_Item_mFBEDD49E96E8CB6493ADAF44E0AD265E6CFC64ED_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5 = L_4->___deckNumber_0;
		NullCheck(L_0);
		AdManager_ShowAd_m1F22346B57C241B50EF21B382DD66D87D8389C23(L_0, L_5, NULL);
		// timeUpManager.isActive = false;
		TimeUpManager_t8A3EF7CE54BEF6C274214895DF866194FE3F52A3* L_6 = __this->___timeUpManager_6;
		NullCheck(L_6);
		L_6->___isActive_5 = (bool)0;
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// }
		return;
	}
}
// System.Void TimeUpWindow::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpWindow_DestroySelf_m8A75BCAF652034554B410C402578C569052FF063 (TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void TimeUpWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUpWindow__ctor_mBDB228096E2D6B3DAFBA6E50A554E7A2166A34CF (TimeUpWindow_tEC6A8F514645522E964A2978CF2FD0F21070751F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CartaCriada_Invoke_m9A78CFEAF17A3A9DEEFB0FA3C1B05D4D177B44C3_inline (CartaCriada_t3A123505AC218E23145D9F3A8DF0A39DA9E2C95A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
