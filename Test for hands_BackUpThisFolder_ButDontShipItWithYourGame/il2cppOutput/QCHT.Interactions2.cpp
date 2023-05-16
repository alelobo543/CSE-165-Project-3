#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>
struct IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460;
// System.Collections.Generic.IReadOnlyList`1<System.Single>
struct IReadOnlyList_1_t194E32A2727AECE1E56C69AC70F5BFB2E7BB1D0E;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor>
struct List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// Unity.XR.CoreUtils.ScriptableSettings`1<System.Object>
struct ScriptableSettings_1_t5045CE59E5284DDECE752A79815345503F885BC8;
// Unity.XR.CoreUtils.ScriptableSettings`1<QCHT.Interactions.Core.XRHandSimulationHandPosesSettings>
struct ScriptableSettings_1_t13F556789D0C229B9A1D411C98F214DA776B651B;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tC4F34B76D01F13EB1FAD849B695B655335EB4303;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<QCHT.Interactions.Core.XRHandTrackingSubsystem>
struct SubsystemProvider_1_t5081A01389C3EAA0ECF954676C431325C2773B10;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_tF4503344BB0A1F466B5459B228E1E118C86A44E3;
// QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<System.Object,System.Object,System.Object>
struct XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3;
// QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>
struct XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor[]
struct XRHandTrackingSubsystemDescriptorU5BU5D_t2E7587F49B6A0715A6FA30B286D9B874004BC294;
// QCHT.Interactions.Core.XrPose[]
struct XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// QCHT.Interactions.Hands.HandGhostSO
struct HandGhostSO_t99F80AA346962945C01E92E14242A70F7401FA68;
// QCHT.Interactions.Hands.HandPose
struct HandPose_t286B42FE76B6066715CC0E4258A81B5218986498;
// QCHT.Interactions.Core.HandRiggedVisualizer
struct HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45;
// QCHT.Interactions.Hands.HandSkin
struct HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB;
// QCHT.Interactions.Core.HandTrackingDevice
struct HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0;
// QCHT.Interactions.Core.HandTrackingFeature
struct HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085;
// QCHT.Interactions.Core.HandTrackingSimulationSubsystem
struct HandTrackingSimulationSubsystem_t187505919814DEA2A6D38A17E5516B55B0B210C9;
// QCHT.Interactions.Core.HandTrackingSubsystem
struct HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// QCHT.Interactions.Core.IHeadProvider
struct IHeadProvider_t60DEE5233D93B8E55E5CAB4D61B269F4A40B1714;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// QCHT.Interactions.Core.QCHTAvatar
struct QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4;
// QCHT.Core.QCHTHeadProvider
struct QCHTHeadProvider_t6A88ADE1EEFA17B5443712759D5A3419810E9EC0;
// QCHT.Core.QCHTManager
struct QCHTManager_t7E2F1D01D3BD894C83D9E6CA57DEE29B360193F8;
// QCHT.Interactions.Core.QCHTOpenXRPlugin
struct QCHTOpenXRPlugin_t9DFCA626C779EB6A9AD9AB56E0215C879F15E48F;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.XR.XRController
struct XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2;
// QCHT.Interactions.Core.XRHandSimulationHandPosesSettings
struct XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD;
// QCHT.Interactions.Core.XRHandTrackingManager
struct XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB;
// QCHT.Interactions.Core.XRHandTrackingSubsystem
struct XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562;
// QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor
struct XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController
struct XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29
struct U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866;
// QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider
struct HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75;
// QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider
struct HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8;
// QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider
struct Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B;

IL2CPP_EXTERN_C RuntimeClass* Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPoseExtensions_t52D96C76808A721059B04D283A6A5235C56C6FDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHeadProvider_t60DEE5233D93B8E55E5CAB4D61B269F4A40B1714_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t29344C36847F81F4373836329113F968F7583E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral060C64C2425000E6745C2E563AEE7FEE879DA5BB;
IL2CPP_EXTERN_C String_t* _stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB;
IL2CPP_EXTERN_C String_t* _stringLiteral416BCF8B090CDC14EBE30BFB921F774F00DAFF4E;
IL2CPP_EXTERN_C String_t* _stringLiteral45152AD8242E5C5C84B1E5C460EDC18F8D239E53;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9;
IL2CPP_EXTERN_C String_t* _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456;
IL2CPP_EXTERN_C String_t* _stringLiteral92EA96DC383855BFB379F291D33CFC76D0A70977;
IL2CPP_EXTERN_C String_t* _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF;
IL2CPP_EXTERN_C String_t* _stringLiteralB1FE225CEDDEABD7A4CC52B13D132E0907AA5982;
IL2CPP_EXTERN_C String_t* _stringLiteralB214A52E047699F73D4F15CE75B0D56C371B541C;
IL2CPP_EXTERN_C String_t* _stringLiteralB26117C8D08AF7F60756B7BB2DAFED32BB9CDA64;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45;
IL2CPP_EXTERN_C String_t* _stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B;
IL2CPP_EXTERN_C String_t* _stringLiteralF7ABA4598DCA8A647879503327DEFBE9504BDA1C;
IL2CPP_EXTERN_C String_t* _stringLiteralFD17B42C2B5CE9499E9A309128720C2F6F46200E;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7CCB5DE756ACDB6722F098490487A178ED463E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m6905BA9E197D5CBB1FD47584789A3A1F526E2FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Repeat_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m88D8BFF47C137D3847FABBBA41FE5A0FFBBAD090_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m38BABD6CA9D090FED9643EB47C88F9F23A4A6DF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m162281A845EE0C2A091A79E031B6D5B60457BA52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisHandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45_mC46940917FF758F85799A7852FBD54C849ED9F21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m0EE80E100B4444265310092FE80886EDB75C3519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m11CFE84A67588F56C06C437949DF6C5CD88FE792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputState_Change_TisHandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_m72ED532FC1EC3FAB462964F2805E0C7473776B4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_AddDevice_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_m90BBC5DADD4D20460392433B340EF48023851D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_GetDevice_TisXRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA_mEF924AE994CA96B0EAD10F9CE656777278A45FD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_mC0B790C91D677BA75C8E01CC0B60BE3648AF9265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0238383518B03B78D7B6A8B031F6DB864EAC4BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m13A53826D2037FA5C4F49CE704D79AD64E4B7293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_CreateSubsystem_TisXRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m6B6F7678F9C383BA05847B982B0A51A6EFC72279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_DestroySubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_mB92E18A5D342BBA79C6CB661027C43C0874B5572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_StopSubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m5DCD58D311F5638F3D0E63B4EF4CC25ED7E490B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableSettings_1__ctor_m387C9BBF83A353BB7BCD71E17610C345BF3ABDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m651B1759D57E7E00B2E596531C01EFA95293D3AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m10264E489A7433C75492A157E952C379E2F2C486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_mE51B09CBED0CE738490E4B75C8199D0FCCE6F500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m2F37ECF5591E96FD9F73356898FAA10D10C7AAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__29_System_Collections_IEnumerator_Reset_m7DA3D4545CD60DF3BCAD8A5DBA54B99E315B4718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemLifeCycleManager_3_OnDestroy_m5B9FDA003C74BCAE0246DEC66946148F7CDA9853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemLifeCycleManager_3_OnDisable_mF7FC62A80A47EC707CB5F33E92B304BB3922E4AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemLifeCycleManager_3_OnEnable_mAC65D3E483360499565AFD8E5A9DC165D01A15D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemLifeCycleManager_3__ctor_m76237597F4F60C966D6E8C4A90FBAAD14C33D1C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor>
struct List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRHandTrackingSubsystemDescriptorU5BU5D_t2E7587F49B6A0715A6FA30B286D9B874004BC294* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRHandTrackingSubsystemDescriptorU5BU5D_t2E7587F49B6A0715A6FA30B286D9B874004BC294* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// QCHT.Interactions.Core.QCHTOpenXRPlugin
struct QCHTOpenXRPlugin_t9DFCA626C779EB6A9AD9AB56E0215C879F15E48F  : public RuntimeObject
{
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29
struct U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866  : public RuntimeObject
{
	// System.Int32 QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QCHT.Interactions.Core.HandRiggedVisualizer QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::<>4__this
	HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ___U3CU3E4__this_2;
	// System.Single QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::targetAlpha
	float ___targetAlpha_3;
	// System.Single QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::<startAlpha>5__2
	float ___U3CstartAlphaU3E5__2_4;
	// System.Single QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::<time>5__3
	float ___U3CtimeU3E5__3_5;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tC4F34B76D01F13EB1FAD849B695B655335EB4303  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<QCHT.Interactions.Core.XRHandTrackingSubsystem>
struct SubsystemProvider_1_t5081A01389C3EAA0ECF954676C431325C2773B10  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_tF4503344BB0A1F466B5459B228E1E118C86A44E3  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* ___U3CproviderU3Ek__BackingField_3;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// QCHT.Interactions.Core.XrQuaternion
struct XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B 
{
	// System.Single QCHT.Interactions.Core.XrQuaternion::_x
	float ____x_0;
	// System.Single QCHT.Interactions.Core.XrQuaternion::_y
	float ____y_1;
	// System.Single QCHT.Interactions.Core.XrQuaternion::_z
	float ____z_2;
	// System.Single QCHT.Interactions.Core.XrQuaternion::_w
	float ____w_3;
};

// QCHT.Interactions.Core.XrVector3
struct XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C 
{
	// System.Single QCHT.Interactions.Core.XrVector3::_x
	float ____x_0;
	// System.Single QCHT.Interactions.Core.XrVector3::_y
	float ____y_1;
	// System.Single QCHT.Interactions.Core.XrVector3::_z
	float ____z_2;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t0EE3B46B2D8255698E6780F705EEF5CA661048DA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t0EE3B46B2D8255698E6780F705EEF5CA661048DA__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t6171760F77ACAAFEABF8CB8A3A6BB91983A1E407 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t6171760F77ACAAFEABF8CB8A3A6BB91983A1E407__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tE4193230B4F46CEF27608A021E669825D1AE7002 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tE4193230B4F46CEF27608A021E669825D1AE7002__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668
struct __StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9__padding[668];
	};
};

// QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 
{
	// System.String QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for COM marshalling of QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5985E95DBBBD4078FE662EFF3514415E1CD37958  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t5985E95DBBBD4078FE662EFF3514415E1CD37958_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::1476F5A52AF73FA33A5848CC765D3C81109860E09953FA2049BA569D2B5D2D6B
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___1476F5A52AF73FA33A5848CC765D3C81109860E09953FA2049BA569D2B5D2D6B_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2147B1041748C95572E3DC860308D7E4464984CACA4A33397B85A5B943EFBD6C
	__StaticArrayInitTypeSizeU3D20_t6171760F77ACAAFEABF8CB8A3A6BB91983A1E407 ___2147B1041748C95572E3DC860308D7E4464984CACA4A33397B85A5B943EFBD6C_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::4858451CC41BAC3ABDE21E48E86FB31C3188FAD54FF31F1960652E7A2B5EA4A1
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___4858451CC41BAC3ABDE21E48E86FB31C3188FAD54FF31F1960652E7A2B5EA4A1_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::742ED9DF463F8A39FFD2F4D42C4D9A90526B81AB898E25C98C30F24E3A8819FB
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___742ED9DF463F8A39FFD2F4D42C4D9A90526B81AB898E25C98C30F24E3A8819FB_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::760157C6B26B936265A5BCB83E49DE53DC493C7CBBEE7479981FC864AEB1C24A
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___760157C6B26B936265A5BCB83E49DE53DC493C7CBBEE7479981FC864AEB1C24A_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8A10BADD6E85A9E9294CA3FCC00BD3B9894197182B02CF49138C42707AAEA824
	__StaticArrayInitTypeSizeU3D16_t0EE3B46B2D8255698E6780F705EEF5CA661048DA ___8A10BADD6E85A9E9294CA3FCC00BD3B9894197182B02CF49138C42707AAEA824_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::918AFA63D7211613B37D5A8136704AD3F9CECD0F13E612BBD12D94AFE211D2FA
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___918AFA63D7211613B37D5A8136704AD3F9CECD0F13E612BBD12D94AFE211D2FA_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::9541ABDD7CA5D1BE8CA5E11D1F5F615A5E32AC43F574C67302019E80671D02A0
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___9541ABDD7CA5D1BE8CA5E11D1F5F615A5E32AC43F574C67302019E80671D02A0_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
	__StaticArrayInitTypeSizeU3D16_t0EE3B46B2D8255698E6780F705EEF5CA661048DA ___B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BA7C5EE6E0192FDFE80274584650A2FB8DAE9213BD63AE7B31FE4D088074CB83
	__StaticArrayInitTypeSizeU3D16_t0EE3B46B2D8255698E6780F705EEF5CA661048DA ___BA7C5EE6E0192FDFE80274584650A2FB8DAE9213BD63AE7B31FE4D088074CB83_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::C385C51883A601762D7F489B058521E6186CFCCE6D2E7D7A5556446C5D50A597
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___C385C51883A601762D7F489B058521E6186CFCCE6D2E7D7A5556446C5D50A597_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::CE72DB0E59C83D275DFD48E8C47EA6D510FFFF31FB4DDB905D5A88B63C729076
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___CE72DB0E59C83D275DFD48E8C47EA6D510FFFF31FB4DDB905D5A88B63C729076_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::CFA880057889B7721646A21C14AE8E72479C7B8B0F23C1DD4BC535F817017F65
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___CFA880057889B7721646A21C14AE8E72479C7B8B0F23C1DD4BC535F817017F65_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::DD5A20C31E86685536AA2A24ED91249E653C202EB410B4E69DDD272C90E66A32
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___DD5A20C31E86685536AA2A24ED91249E653C202EB410B4E69DDD272C90E66A32_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::DE58793C5F0131CAB0862DA3AE124956CEBB3DE1884A1FE05FCDE644DD27095C
	__StaticArrayInitTypeSizeU3D24_tE4193230B4F46CEF27608A021E669825D1AE7002 ___DE58793C5F0131CAB0862DA3AE124956CEBB3DE1884A1FE05FCDE644DD27095C_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::E36C9F6719F69E3081EB17845170F8DDA13DEE087639AA99AC3A68DF66C80D35
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___E36C9F6719F69E3081EB17845170F8DDA13DEE087639AA99AC3A68DF66C80D35_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::F2E276FE81A731394E017E712E0E68B62965375197D460D3AFC5297B44071A73
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___F2E276FE81A731394E017E712E0E68B62965375197D460D3AFC5297B44071A73_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F67C5FF154EE4961A5F9223699A9F82F6E06CB3C064EFBF28119E8A43639ED97
	__StaticArrayInitTypeSizeU3D16_t0EE3B46B2D8255698E6780F705EEF5CA661048DA ___F67C5FF154EE4961A5F9223699A9F82F6E06CB3C064EFBF28119E8A43639ED97_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::F7C52A1259194F54F517C48C50ABE39710FA76B119AB68219D3C9D4909845BB1
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___F7C52A1259194F54F517C48C50ABE39710FA76B119AB68219D3C9D4909845BB1_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=668 <PrivateImplementationDetails>::F803BABF0F2E90AAD0B25C4D3BCDADA2364162B1127C36E62DE77DF0CD281B0D
	__StaticArrayInitTypeSizeU3D668_t89CBDE7879E8DAEE877C29A4EFBF8B08C49B35D9 ___F803BABF0F2E90AAD0B25C4D3BCDADA2364162B1127C36E62DE77DF0CD281B0D_19;
};

// QCHT.Interactions.Hands.BoneData
struct BoneData_tF94BE196097BD66EC4B529397521E56086E4064C 
{
	// System.Boolean QCHT.Interactions.Hands.BoneData::IsRoot
	bool ___IsRoot_0;
	// System.Boolean QCHT.Interactions.Hands.BoneData::IsThumb
	bool ___IsThumb_1;
	// System.Boolean QCHT.Interactions.Hands.BoneData::UpdatePosition
	bool ___UpdatePosition_2;
	// System.Boolean QCHT.Interactions.Hands.BoneData::UpdateRotation
	bool ___UpdateRotation_3;
	// System.Boolean QCHT.Interactions.Hands.BoneData::UpdateScale
	bool ___UpdateScale_4;
	// UnityEngine.Vector3 QCHT.Interactions.Hands.BoneData::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_5;
	// UnityEngine.Quaternion QCHT.Interactions.Hands.BoneData::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_6;
	// System.Single QCHT.Interactions.Hands.BoneData::Scale
	float ___Scale_7;
};
// Native definition for P/Invoke marshalling of QCHT.Interactions.Hands.BoneData
struct BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_pinvoke
{
	int32_t ___IsRoot_0;
	int32_t ___IsThumb_1;
	int32_t ___UpdatePosition_2;
	int32_t ___UpdateRotation_3;
	int32_t ___UpdateScale_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_5;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_6;
	float ___Scale_7;
};
// Native definition for COM marshalling of QCHT.Interactions.Hands.BoneData
struct BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_com
{
	int32_t ___IsRoot_0;
	int32_t ___IsThumb_1;
	int32_t ___UpdatePosition_2;
	int32_t ___UpdateRotation_3;
	int32_t ___UpdateScale_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_5;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_6;
	float ___Scale_7;
};

// UnityEngine.InputSystem.CommonUsages
struct CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78  : public RuntimeObject
{
};

struct CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Primary2DMotion
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Primary2DMotion_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Secondary2DMotion
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Secondary2DMotion_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::PrimaryAction
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___PrimaryAction_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::SecondaryAction
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___SecondaryAction_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::PrimaryTrigger
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___PrimaryTrigger_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::SecondaryTrigger
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___SecondaryTrigger_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Modifier
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Modifier_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Position
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Position_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Orientation
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Orientation_8;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Hatswitch
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Hatswitch_9;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Back
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Back_10;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Forward
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Forward_11;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Menu
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Menu_12;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Submit
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Submit_13;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Cancel
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Cancel_14;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Horizontal
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Horizontal_15;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Vertical
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Vertical_16;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Twist
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Twist_17;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Pressure
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Pressure_18;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::ScrollHorizontal
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___ScrollHorizontal_19;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::ScrollVertical
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___ScrollVertical_20;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Point
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Point_21;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::LowFreqMotor
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___LowFreqMotor_22;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::HighFreqMotor
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___HighFreqMotor_23;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::LeftHand
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___LeftHand_24;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::RightHand
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___RightHand_25;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::BatteryStrength
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___BatteryStrength_26;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// QCHT.Interactions.Core.HandTrackingInputState
struct HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A 
{
	// System.Int32 QCHT.Interactions.Core.HandTrackingInputState::trackingState
	int32_t ___trackingState_0;
	// System.Boolean QCHT.Interactions.Core.HandTrackingInputState::isTracked
	bool ___isTracked_1;
	// UnityEngine.Vector3 QCHT.Interactions.Core.HandTrackingInputState::devicePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_2;
	// UnityEngine.Quaternion QCHT.Interactions.Core.HandTrackingInputState::deviceRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_3;
	// System.Single QCHT.Interactions.Core.HandTrackingInputState::trigger
	float ___trigger_4;
	// System.Boolean QCHT.Interactions.Core.HandTrackingInputState::selectPressed
	bool ___selectPressed_5;
	// System.Single QCHT.Interactions.Core.HandTrackingInputState::grip
	float ___grip_6;
	// System.Boolean QCHT.Interactions.Core.HandTrackingInputState::gripPressed
	bool ___gripPressed_7;
	// UnityEngine.Vector3 QCHT.Interactions.Core.HandTrackingInputState::pointerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_8;
	// UnityEngine.Quaternion QCHT.Interactions.Core.HandTrackingInputState::pointerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_9;
};
// Native definition for P/Invoke marshalling of QCHT.Interactions.Core.HandTrackingInputState
struct HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_pinvoke
{
	int32_t ___trackingState_0;
	int32_t ___isTracked_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_3;
	float ___trigger_4;
	int32_t ___selectPressed_5;
	float ___grip_6;
	int32_t ___gripPressed_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_9;
};
// Native definition for COM marshalling of QCHT.Interactions.Core.HandTrackingInputState
struct HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_com
{
	int32_t ___trackingState_0;
	int32_t ___isTracked_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___devicePosition_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___deviceRotation_3;
	float ___trigger_4;
	int32_t ___selectPressed_5;
	float ___grip_6;
	int32_t ___gripPressed_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pointerPosition_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___pointerRotation_9;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};

struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// QCHT.Interactions.Core.XRHandTrackingSubsystem
struct XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562  : public SubsystemWithProvider_3_tF4503344BB0A1F466B5459B228E1E118C86A44E3
{
};

// QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor
struct XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9  : public SubsystemDescriptorWithProvider_2_tC4F34B76D01F13EB1FAD849B695B655335EB4303
{
};

// QCHT.Interactions.Core.XrPose
struct XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D 
{
	// QCHT.Interactions.Core.XrQuaternion QCHT.Interactions.Core.XrPose::_orientation
	XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B ____orientation_0;
	// QCHT.Interactions.Core.XrVector3 QCHT.Interactions.Core.XrPose::_position
	XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C ____position_1;
};

// QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider
struct Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B  : public SubsystemProvider_1_t5081A01389C3EAA0ECF954676C431325C2773B10
{
};

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// QCHT.Interactions.Hands.FingerData
struct FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88 
{
	// QCHT.Interactions.Hands.BoneData QCHT.Interactions.Hands.FingerData::BaseData
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C ___BaseData_0;
	// QCHT.Interactions.Hands.BoneData QCHT.Interactions.Hands.FingerData::MiddleData
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C ___MiddleData_1;
	// QCHT.Interactions.Hands.BoneData QCHT.Interactions.Hands.FingerData::TopData
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C ___TopData_2;
};
// Native definition for P/Invoke marshalling of QCHT.Interactions.Hands.FingerData
struct FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88_marshaled_pinvoke
{
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_pinvoke ___BaseData_0;
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_pinvoke ___MiddleData_1;
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_pinvoke ___TopData_2;
};
// Native definition for COM marshalling of QCHT.Interactions.Hands.FingerData
struct FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88_marshaled_com
{
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_com ___BaseData_0;
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_com ___MiddleData_1;
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C_marshaled_com ___TopData_2;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// QCHT.Interactions.Core.HandTrackingSimulationSubsystem
struct HandTrackingSimulationSubsystem_t187505919814DEA2A6D38A17E5516B55B0B210C9  : public XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562
{
};

// QCHT.Interactions.Core.HandTrackingSubsystem
struct HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4  : public XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider
struct HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75  : public Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B
{
};

struct HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_StaticFields
{
	// System.Single[] QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::s_scales
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_scales_1;
};

// QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider
struct HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8  : public Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B
{
	// QCHT.Interactions.Core.XrPose[] QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::_leftPoses
	XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* ____leftPoses_1;
	// QCHT.Interactions.Core.XrPose[] QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::_rightPoses
	XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* ____rightPoses_2;
	// System.Single[] QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::_radius
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____radius_3;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_21;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// QCHT.Interactions.Hands.HandPose
struct HandPose_t286B42FE76B6066715CC0E4258A81B5218986498  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// QCHT.Interactions.Hands.XrHandedness QCHT.Interactions.Hands.HandPose::_type
	int32_t ____type_4;
	// QCHT.Interactions.Hands.DataSpace QCHT.Interactions.Hands.HandPose::space
	int32_t ___space_5;
	// UnityEngine.Vector3 QCHT.Interactions.Hands.HandPose::Scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale_6;
	// QCHT.Interactions.Hands.BoneData QCHT.Interactions.Hands.HandPose::Root
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C ___Root_7;
	// QCHT.Interactions.Hands.BoneData QCHT.Interactions.Hands.HandPose::Palm
	BoneData_tF94BE196097BD66EC4B529397521E56086E4064C ___Palm_8;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Thumb
	FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88 ___Thumb_9;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Index
	FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88 ___Index_10;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Middle
	FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88 ___Middle_11;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Ring
	FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88 ___Ring_12;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Pinky
	FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88 ___Pinky_13;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Hands.HandPose::HandPoseRefLeft
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___HandPoseRefLeft_14;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Hands.HandPose::HandPoseRefRight
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___HandPoseRefRight_15;
	// QCHT.Interactions.Hands.HandGhostSO QCHT.Interactions.Hands.HandPose::Ghost
	HandGhostSO_t99F80AA346962945C01E92E14242A70F7401FA68* ___Ghost_16;
};

// QCHT.Interactions.Hands.HandSkin
struct HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Mesh QCHT.Interactions.Hands.HandSkin::MainMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___MainMesh_4;
	// UnityEngine.Material QCHT.Interactions.Hands.HandSkin::MainMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___MainMaterial_5;
	// UnityEngine.Mesh QCHT.Interactions.Hands.HandSkin::GhostMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___GhostMesh_6;
	// UnityEngine.Material QCHT.Interactions.Hands.HandSkin::GhostMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GhostMaterial_7;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// Unity.XR.CoreUtils.ScriptableSettingsBase
struct ScriptableSettingsBase_t98BAE11AEFA5E1AD83147B7448FBFD85E083439E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

struct ScriptableSettingsBase_t98BAE11AEFA5E1AD83147B7448FBFD85E083439E_StaticFields
{
	// System.Char[] Unity.XR.CoreUtils.ScriptableSettingsBase::k_PathTrimChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_PathTrimChars_9;
	// System.Char[] Unity.XR.CoreUtils.ScriptableSettingsBase::k_InvalidCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_InvalidCharacters_10;
	// System.String[] Unity.XR.CoreUtils.ScriptableSettingsBase::k_InvalidStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___k_InvalidStrings_11;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.XR.CoreUtils.ScriptableSettingsBase`1<QCHT.Interactions.Core.XRHandSimulationHandPosesSettings>
struct ScriptableSettingsBase_1_tBA9503FBD35E55244B8C256845D4FF641AA779B4  : public ScriptableSettingsBase_t98BAE11AEFA5E1AD83147B7448FBFD85E083439E
{
};

struct ScriptableSettingsBase_1_tBA9503FBD35E55244B8C256845D4FF641AA779B4_StaticFields
{
	// System.Boolean Unity.XR.CoreUtils.ScriptableSettingsBase`1::HasCustomPath
	bool ___HasCustomPath_12;
	// T Unity.XR.CoreUtils.ScriptableSettingsBase`1::BaseInstance
	XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* ___BaseInstance_13;
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// QCHT.Interactions.Core.HandTrackingFeature
struct HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

struct HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_StaticFields
{
	// System.Collections.Generic.List`1<QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor> QCHT.Interactions.Core.HandTrackingFeature::s_handTrackingSubsystemDescriptors
	List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7* ___s_handTrackingSubsystemDescriptors_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1  : public InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CwU3Ek__BackingField_25;
};

// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtrackingStateU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CisTrackedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CdevicePositionU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CdeviceRotationU3Ek__BackingField_42;
};

// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A  : public InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_24;
};

// Unity.XR.CoreUtils.ScriptableSettings`1<QCHT.Interactions.Core.XRHandSimulationHandPosesSettings>
struct ScriptableSettings_1_t13F556789D0C229B9A1D411C98F214DA776B651B  : public ScriptableSettingsBase_1_tBA9503FBD35E55244B8C256845D4FF641AA779B4
{
};

// QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<System.Object,System.Object,System.Object>
struct XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3_StaticFields
{
	// TSubsystem QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

// QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>
struct XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2_StaticFields
{
	// TSubsystem QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3::<subsystem>k__BackingField
	XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;
};

struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;
};

// QCHT.Interactions.Core.HandRiggedVisualizer
struct HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QCHT.Interactions.Hands.XrHandedness QCHT.Interactions.Core.HandRiggedVisualizer::handType
	int32_t ___handType_4;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.HandRiggedVisualizer::_handPose
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ____handPose_5;
	// System.Int32 QCHT.Interactions.Core.HandRiggedVisualizer::_gesture
	int32_t ____gesture_6;
	// UnityEngine.SkinnedMeshRenderer QCHT.Interactions.Core.HandRiggedVisualizer::meshRenderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___meshRenderer_8;
	// System.Single QCHT.Interactions.Core.HandRiggedVisualizer::fadeDuration
	float ___fadeDuration_9;
	// UnityEngine.MaterialPropertyBlock QCHT.Interactions.Core.HandRiggedVisualizer::_propertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ____propertyBlock_10;
	// System.Boolean QCHT.Interactions.Core.HandRiggedVisualizer::_isVisible
	bool ____isVisible_11;
	// UnityEngine.Coroutine QCHT.Interactions.Core.HandRiggedVisualizer::_fadeCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____fadeCoroutine_12;
	// QCHT.Interactions.Hands.HandSkin QCHT.Interactions.Core.HandRiggedVisualizer::_handSkin
	HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* ____handSkin_13;
};

struct HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45_StaticFields
{
	// System.Int32 QCHT.Interactions.Core.HandRiggedVisualizer::s_globalAlpha
	int32_t ___s_globalAlpha_7;
};

// QCHT.Interactions.Core.QCHTAvatar
struct QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MonoBehaviour QCHT.Interactions.Core.QCHTAvatar::headProvider
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___headProvider_4;
	// System.Boolean QCHT.Interactions.Core.QCHTAvatar::relativeToHead
	bool ___relativeToHead_5;
	// QCHT.Interactions.Core.IHeadProvider QCHT.Interactions.Core.QCHTAvatar::_headProvider
	RuntimeObject* ____headProvider_6;
};

// QCHT.Core.QCHTManager
struct QCHTManager_t7E2F1D01D3BD894C83D9E6CA57DEE29B360193F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform QCHT.Core.QCHTManager::cameraPlaceHolder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraPlaceHolder_5;
	// System.String QCHT.Core.QCHTManager::_cameraName
	String_t* ____cameraName_6;
	// QCHT.Core.QCHTSimulationMode QCHT.Core.QCHTManager::_simulationMode
	int32_t ____simulationMode_7;
	// System.Boolean QCHT.Core.QCHTManager::_applyHeadPose
	bool ____applyHeadPose_8;
	// UnityEngine.Transform QCHT.Core.QCHTManager::_recordedAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____recordedAnchor_9;
	// UnityEngine.Coroutine QCHT.Core.QCHTManager::_startCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____startCoroutine_10;
	// QCHT.Core.QCHTHeadProvider QCHT.Core.QCHTManager::_headProvider
	QCHTHeadProvider_t6A88ADE1EEFA17B5443712759D5A3419810E9EC0* ____headProvider_11;
	// UnityEngine.GameObject QCHT.Core.QCHTManager::_qchtCameraObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____qchtCameraObj_12;
	// System.Boolean QCHT.Core.QCHTManager::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_13;
};

struct QCHTManager_t7E2F1D01D3BD894C83D9E6CA57DEE29B360193F8_StaticFields
{
	// QCHT.Core.QCHTManager QCHT.Core.QCHTManager::s_instance
	QCHTManager_t7E2F1D01D3BD894C83D9E6CA57DEE29B360193F8* ___s_instance_4;
};

// UnityEngine.InputSystem.XR.XRController
struct XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2  : public TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9
{
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
};

// QCHT.Interactions.Core.HandTrackingDevice
struct HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0  : public XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2
{
	// UnityEngine.InputSystem.Controls.AxisControl QCHT.Interactions.Core.HandTrackingDevice::<select>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CselectU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl QCHT.Interactions.Core.HandTrackingDevice::<selectPressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CselectPressedU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.AxisControl QCHT.Interactions.Core.HandTrackingDevice::<grip>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CgripU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl QCHT.Interactions.Core.HandTrackingDevice::<gripPressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CgripPressedU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.Vector3Control QCHT.Interactions.Core.HandTrackingDevice::<pointerPosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CpointerPositionU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.QuaternionControl QCHT.Interactions.Core.HandTrackingDevice::<pointerRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CpointerRotationU3Ek__BackingField_49;
};

// QCHT.Interactions.Core.XRHandSimulationHandPosesSettings
struct XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD  : public ScriptableSettings_1_t13F556789D0C229B9A1D411C98F214DA776B651B
{
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.XRHandSimulationHandPosesSettings::leftOpenHand
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___leftOpenHand_18;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.XRHandSimulationHandPosesSettings::leftPinchHand
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___leftPinchHand_19;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.XRHandSimulationHandPosesSettings::leftGrabHand
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___leftGrabHand_20;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.XRHandSimulationHandPosesSettings::rightOpenHand
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___rightOpenHand_21;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.XRHandSimulationHandPosesSettings::rightPinchHand
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___rightPinchHand_22;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.XRHandSimulationHandPosesSettings::rightGrabHand
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___rightGrabHand_23;
};

// QCHT.Interactions.Core.XRHandTrackingManager
struct XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB  : public XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2
{
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::leftHandPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftHandPrefab_9;
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::rightHandPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightHandPrefab_10;
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::_leftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____leftHand_11;
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::_rightHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____rightHand_12;
	// QCHT.Interactions.Core.HandRiggedVisualizer QCHT.Interactions.Core.XRHandTrackingManager::_leftHandDataUpdater
	HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ____leftHandDataUpdater_13;
	// QCHT.Interactions.Core.HandRiggedVisualizer QCHT.Interactions.Core.XRHandTrackingManager::_rightHandDataUpdater
	HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ____rightHandDataUpdater_14;
	// QCHT.Interactions.Core.HandTrackingDevice QCHT.Interactions.Core.XRHandTrackingManager::_leftHandDevice
	HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* ____leftHandDevice_15;
	// QCHT.Interactions.Core.HandTrackingDevice QCHT.Interactions.Core.XRHandTrackingManager::_rightHandDevice
	HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* ____rightHandDevice_16;
	// QCHT.Interactions.Core.HandTrackingInputState QCHT.Interactions.Core.XRHandTrackingManager::_leftState
	HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A ____leftState_17;
	// QCHT.Interactions.Core.HandTrackingInputState QCHT.Interactions.Core.XRHandTrackingManager::_rightState
	HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A ____rightState_18;
	// UnityEngine.Pose[] QCHT.Interactions.Core.XRHandTrackingManager::_leftPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____leftPoses_19;
	// UnityEngine.Pose[] QCHT.Interactions.Core.XRHandTrackingManager::_rightPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____rightPoses_20;
	// System.Single[] QCHT.Interactions.Core.XRHandTrackingManager::_leftScales
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____leftScales_21;
	// System.Single[] QCHT.Interactions.Core.XRHandTrackingManager::_rightScales
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____rightScales_22;
	// UnityEngine.Pose[] QCHT.Interactions.Core.XRHandTrackingManager::_convertedLeftPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____convertedLeftPoses_23;
	// UnityEngine.Pose[] QCHT.Interactions.Core.XRHandTrackingManager::_convertedRightPoses
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* ____convertedRightPoses_24;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin QCHT.Interactions.Core.XRHandTrackingManager::_arOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ____arOrigin_25;
	// Unity.XR.CoreUtils.XROrigin QCHT.Interactions.Core.XRHandTrackingManager::_xrOrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ____xrOrigin_26;
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController
struct XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA  : public XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primary2DAxis>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3Cprimary2DAxisU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<trigger>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CtriggerU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<grip>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CgripU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondary2DAxis>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3Csecondary2DAxisU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primaryButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CprimaryButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primaryTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CprimaryTouchU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondaryButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CsecondaryButtonU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondaryTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CsecondaryTouchU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<gripButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CgripButtonU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<triggerButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CtriggerButtonU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<menuButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmenuButtonU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primary2DAxisClick>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Cprimary2DAxisClickU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<primary2DAxisTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Cprimary2DAxisTouchU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondary2DAxisClick>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Csecondary2DAxisClickU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<secondary2DAxisTouch>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3Csecondary2DAxisTouchU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<batteryLevel>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CbatteryLevelU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::<userPresence>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CuserPresenceU3Ek__BackingField_59;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Pose[]
struct PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB  : public RuntimeArray
{
	ALIGN_FIELD (8) Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 m_Items[1];

	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// QCHT.Interactions.Core.XrPose[]
struct XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE  : public RuntimeArray
{
	ALIGN_FIELD (8) XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D m_Items[1];

	inline XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<System.Object,System.Object,System.Object>::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystemLifeCycleManager_3_OnEnable_mB2D031E48CB100E779EC1A3E7884CBD60EC08176_gshared (XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<System.Object,System.Object,System.Object>::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystemLifeCycleManager_3_OnDisable_m2EE953601EE57B9D79B0BA6BC38368104F8C3F92_gshared (XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<System.Object,System.Object,System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystemLifeCycleManager_3_OnDestroy_m6BA25CE715ECAF2F081EBAF7AF0110CFAD88738A_gshared (XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3* __this, const RuntimeMethod* method) ;
// TSubsystem QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemLifeCycleManager_3_get_subsystem_m3F4B54D6B769DD6879C7241B3BFF433E7202BBD1_gshared_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<QCHT.Interactions.Core.HandTrackingInputState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputState_Change_TisHandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_m72ED532FC1EC3FAB462964F2805E0C7473776B4D_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_AddDevice_TisRuntimeObject_m0C15C931B928FDC569EAA06A44EDC0192F909A4F_gshared (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared (bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystemLifeCycleManager_3__ctor_m3CC1B0715EC8235497FEFF5FE0AFEFEFAD6E59AC_gshared (XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_gshared (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C* __this, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared (String_t* ___name0, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___matches1, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T Unity.XR.CoreUtils.ScriptableSettings`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableSettings_1_get_Instance_m8F8BAD30AFB704704322C9CB97C33361CAFD352B_gshared (const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::GetDevice<System.Object>(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_GetDevice_TisRuntimeObject_mCDA396DB5F63C090B1FF6FA633BF0498C2A7C620_gshared (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___usage0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputControl_1_ReadValue_m11CFE84A67588F56C06C437949DF6C5CD88FE792_gshared (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputControl_1_ReadValue_m0EE80E100B4444265310092FE80886EDB75C3519_gshared (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<System.Single>(TResult,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Repeat_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m88D8BFF47C137D3847FABBBA41FE5A0FFBBAD090_gshared (float ___element0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.ScriptableSettings`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableSettings_1__ctor_mA3464CA1D0CC5AAFAA70F68B6AF0FEC7B597FC42_gshared (ScriptableSettings_1_t5045CE59E5284DDECE752A79815345503F885BC8* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single QCHT.Interactions.Core.HandRiggedVisualizer::GetAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandRiggedVisualizer_GetAlpha_mE58B30080972767A15F49522C4ECF6A2F1930901 (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer::SetAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRiggedVisualizer_SetAlpha_m0A955C7582BCA82CE6CC44A0CF24550797908707 (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, float ___alpha0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m67DCB3B0F7C1FA86E9A9B61B19C1AD20C049EEEF_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m3FE28A9DAE49659E3EDBB949BA88E7A7B0E3DF0B_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5CA141654F5823923B1A7BC59A4234E62B5A543A_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor::Create(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystemDescriptor_Create_mFE15B2554F6E34CF4BF88B9572E887DD61824A21 (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___cinfo0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystem__ctor_m3BA2B53B127BE165ACBE3C156CDB6C18544543C1 (XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* __this, const RuntimeMethod* method) ;
// System.Int32 QCHT.Interactions.Core.QCHTOpenXRPlugin::StartHandTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QCHTOpenXRPlugin_StartHandTracking_m448378CC8332F9769DC441BF0220439E71BA634F (const RuntimeMethod* method) ;
// System.Int32 QCHT.Interactions.Core.QCHTOpenXRPlugin::StopHandTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QCHTOpenXRPlugin_StopHandTracking_m1E96EDCF1109C48527692BB6FD5907FB23887547 (const RuntimeMethod* method) ;
// System.Int32 QCHT.Interactions.Core.QCHTOpenXRPlugin::TryLocateHandJoints(QCHT.Interactions.Core.QCHTOpenXRPlugin/XrHandSide,System.Boolean&,QCHT.Interactions.Core.XrPose[],System.Single[],System.Int32&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QCHTOpenXRPlugin_TryLocateHandJoints_m9BA4FD8AA405253E5469E55371850B45A5A96496 (int32_t ___handedness0, bool* ___isTracked1, XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* ___handPoses2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___radius3, int32_t* ___gesture4, float* ___gestureRatio5, float* ___flipRatio6, const RuntimeMethod* method) ;
// UnityEngine.Pose QCHT.Interactions.Core.XrPose::ToPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XrPose_ToPose_mE2408D52A7F021B43BA1180DEF482D8FFB9FA680 (XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m739F00094227162EF56ADEEB8306FDBB540AE063 (Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::get_camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform QCHT.Interactions.Core.XRHandTrackingManager::get_OriginTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRHandTrackingManager_get_OriginTransform_m749D476ECF391E7CE7A99662993C49CE473F2739 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Unity.XR.CoreUtils.XROrigin>()
inline XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* Component_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m6905BA9E197D5CBB1FD47584789A3A1F526E2FB4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::OnEnable()
inline void XRSubsystemLifeCycleManager_3_OnEnable_mAC65D3E483360499565AFD8E5A9DC165D01A15D2 (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2* __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2*, const RuntimeMethod*))XRSubsystemLifeCycleManager_3_OnEnable_mB2D031E48CB100E779EC1A3E7884CBD60EC08176_gshared)(__this, method);
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::StartDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_StartDevices_m8471CC75F13FAEAD3E316DD6729000F7C1C3A0A5 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::OnDisable()
inline void XRSubsystemLifeCycleManager_3_OnDisable_mF7FC62A80A47EC707CB5F33E92B304BB3922E4AC (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2* __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2*, const RuntimeMethod*))XRSubsystemLifeCycleManager_3_OnDisable_m2EE953601EE57B9D79B0BA6BC38368104F8C3F92_gshared)(__this, method);
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::StopDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_StopDevices_m5F2A448579A6417B8AF57BAEC47152641B2F12D3 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::OnDestroy()
inline void XRSubsystemLifeCycleManager_3_OnDestroy_m5B9FDA003C74BCAE0246DEC66946148F7CDA9853 (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2* __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2*, const RuntimeMethod*))XRSubsystemLifeCycleManager_3_OnDestroy_m6BA25CE715ECAF2F081EBAF7AF0110CFAD88738A_gshared)(__this, method);
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveLeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveLeftHand_m2161144A9AB293B55123CA293254C6C702EE7E13 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveRightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveRightHand_mAC4C341B3BDE95652E2CBB4EC16A1799D45271FB (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::SetParentTrackable(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_SetParentTrackable_m14458831545F1169C617CA4DFD4C43FA75CE2DCE (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hand0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::UpdateHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_UpdateHands_m61ACE82E0FEC2AD965A5DBDC9E25135299400941 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputDevice QCHT.Interactions.Core.XRHandTrackingManager::AddHandDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* XRHandTrackingManager_AddHandDevice_m329F8782AD9308929C1AF5BA4AA172DAC8725569 (bool ___isLeft0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveHandDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveHandDevice_m15BDCB9914CA6C590F58721F13C23502CF47FD6A (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// TSubsystem QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::get_subsystem()
inline XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_inline (const RuntimeMethod* method)
{
	return ((  XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* (*) (const RuntimeMethod*))XRSubsystemLifeCycleManager_3_get_subsystem_m3F4B54D6B769DD6879C7241B3BFF433E7202BBD1_gshared_inline)(method);
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::InstantiateRightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_InstantiateRightHand_mA45E68EB41D5BBCF4F0928F455F545A444BCDB32 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::InstantiateLeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_InstantiateLeftHand_m1D7D8BFFAC25B16680CD0F7F13D1778BD4DA2ABE (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::ToggleLeftHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_ToggleLeftHand_m6948AE61912764F2AB9867D3BBC660EFEE8E710D (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, bool ___visible0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::ToggleRightHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_ToggleRightHand_mD11CE4A8B6D323121101877C2722E3AAD3AA8866 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, bool ___visible0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::AddDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_AddDevices_m136B1D652CC3AE83F9D380E03FA5CFCAEF8E191E (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::EnableDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_EnableDevice_mED1442951B67B1B8742C29CE7F3ED2828B3B44F7 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputDevice::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_added_m27CF78B0777E142AAF9139ABFD88F67BBAABA15C (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::DisableDevice(UnityEngine.InputSystem.InputDevice,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_DisableDevice_m19E310307F986FDBCC83048107E4BDC25F9FD26B (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, bool ___keepSendingEvents1, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveDevices_m7ABB164E0A355C62ECA6C0ACD555227219898389 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::UpdateHand(QCHT.Interactions.Core.HandTrackingInputState&,System.Boolean,QCHT.Interactions.Core.HandRiggedVisualizer,QCHT.Interactions.Core.HandTrackingDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_UpdateHand_m1261C76403ED24850F015138B6F9CB694642F55B (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* ___state0, bool ___isLeft1, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ___handRiggedVisualizer2, HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* ___device3, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem::GetHandData(System.Boolean,System.Boolean&,UnityEngine.Pose[]&,System.Single[]&,System.Int32&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystem_GetHandData_mC87C4331795FA3B7FC6BEDADC78030CF85A365B0 (XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* __this, bool ___isLeft0, bool* ___isTracked1, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** ___joints2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___scales3, int32_t* ___gesture4, float* ___gestureRatio5, float* ___flipRatio6, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose> QCHT.Interactions.Core.XRHandTrackingManager::ConvertJoints(System.Boolean,System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRHandTrackingManager_ConvertJoints_m7E03CA56DAD809CAB9A323A1716B718BA4A3DB91 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, bool ___isLeft0, RuntimeObject* ___joints1, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer::UpdateData(System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>,System.Collections.Generic.IReadOnlyList`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRiggedVisualizer_UpdateData_mB3730C8450E4FC5E573D4B5125DA4DC972703272 (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, RuntimeObject* ___joints0, RuntimeObject* ___scales1, const RuntimeMethod* method) ;
// UnityEngine.Transform QCHT.Interactions.Core.XRHandTrackingManager::get_CameraTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRHandTrackingManager_get_CameraTransform_m563009F87428F6DA1130312B9839D51903F3DAE2 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::InverseTransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_InverseTransformPose_mA2C52EFE2C80EB0DE7F09EA477B80C583B4387FB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.HandRiggedVisualizer::get_HandPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* HandRiggedVisualizer_get_HandPose_m0B9F82015E25BF2F5F070E866A8A6573A08B5917_inline (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, const RuntimeMethod* method) ;
// System.Single QCHT.Interactions.Extensions.HandPoseExtensions::GetMinDistToThumbTip(QCHT.Interactions.Hands.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HandPoseExtensions_GetMinDistToThumbTip_m6A26448FA0C80D0022F53088872505B059BA93D2 (HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___hand0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputState::Change<QCHT.Interactions.Core.HandTrackingInputState>(UnityEngine.InputSystem.InputControl,TState,UnityEngine.InputSystem.LowLevel.InputUpdateType,UnityEngine.InputSystem.LowLevel.InputEventPtr)
inline void InputState_Change_TisHandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_m72ED532FC1EC3FAB462964F2805E0C7473776B4D (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A ___state1, int32_t ___updateType2, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr3, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A, int32_t, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))InputState_Change_TisHandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_m72ED532FC1EC3FAB462964F2805E0C7473776B4D_gshared)(___control0, ___state1, ___updateType2, ___eventPtr3, method);
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::InstantiateHand(System.String,UnityEngine.GameObject,UnityEngine.GameObject&,QCHT.Interactions.Core.HandRiggedVisualizer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_InstantiateHand_m0C05E696C7D9A444587480927EC6CE36634113A8 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, String_t* ___objectName0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___hand2, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45** ___dataUpdater3, const RuntimeMethod* method) ;
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::InstantiateHandTrackable(System.String,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_InstantiateHandTrackable_mC96881999EB5B17CC1659F9DC7DF80D5F06CAC91 (String_t* ___handName0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<QCHT.Interactions.Core.HandRiggedVisualizer>(T&)
inline bool GameObject_TryGetComponent_TisHandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45_mC46940917FF758F85799A7852FBD54C849ED9F21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveHand(UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveHand_m3CEFCAC23B9C428275A85139177C92FA3A82F894 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___hand0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::SetSkin(QCHT.Interactions.Core.HandRiggedVisualizer,QCHT.Interactions.Hands.HandSkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_SetSkin_m771A0C5835EBBE08D135B08DD5088630D4C47C9C (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ___hand0, HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* ___skin1, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer::set_HandSkin(QCHT.Interactions.Hands.HandSkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRiggedVisualizer_set_HandSkin_mB3DE6645A178C46E2F58F8060E5AB4F7F719EE40 (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* ___value0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::ToggleHand(QCHT.Interactions.Core.HandRiggedVisualizer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_ToggleHand_m7972E38F046EB6FB8F1287ADA2A64865A154C08E (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ___hand0, bool ___visible1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRiggedVisualizer_Show_m99A36EB36B2E2B6856DA6DAE92CBFDC63F4EDD18 (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandRiggedVisualizer_Hide_m7B6F77419067A279FB69F22603C985BDC699EAA5 (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::get_TrackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XROrigin_get_TrackablesParent_m6F7933DF03A5376C31D328F865F77D28EEC18E9C_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_DefaultLeftHandPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_DefaultLeftHandPrefab_mB7A4C1A84C7D45E22E43641FDA6EB38AB1CF4FB9 (const RuntimeMethod* method) ;
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_DefaultRightHandPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_DefaultRightHandPrefab_m13F412E881274E30FAB927F41A0BDB34E0C5DEA6 (const RuntimeMethod* method) ;
// QCHT.Interactions.Core.XRHandTrackingManager QCHT.Interactions.Core.XRHandTrackingManager::GetOrCreate(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* XRHandTrackingManager_GetOrCreate_mF056FDC7FF954E53DD2EEA9222645B9F8C32E492 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftPrefab0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightPrefab1, const RuntimeMethod* method) ;
// System.Boolean QCHT.Interactions.Core.XRHandTrackingManager::TryFindOrigin(UnityEngine.Transform&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandTrackingManager_TryFindOrigin_m83DA36DF3BD0C5522425814E86F660F47A888577 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___parent0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<QCHT.Interactions.Core.XRHandTrackingManager>()
inline XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* GameObject_AddComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m38BABD6CA9D090FED9643EB47C88F9F23A4A6DF0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<QCHT.Interactions.Core.XRHandTrackingManager>()
inline XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* GameObject_GetComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m162281A845EE0C2A091A79E031B6D5B60457BA52 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_LeftHandPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_LeftHandPrefab_m5C0249EB39DC4CD303D25E50C8B90B3A0687584B_inline (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RefreshLeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RefreshLeftHand_m9E43F39043BD188526F3E596B395C02AE5421559 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RefreshRightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RefreshRightHand_m84139E3410038BA68E38C567EAD4CC9A8F4B0D00 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<QCHT.Interactions.Core.XRHandTrackingManager>()
inline XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* Object_FindObjectOfType_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m13A53826D2037FA5C4F49CE704D79AD64E4B7293 (const RuntimeMethod* method)
{
	return ((  XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_rootCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// TDevice UnityEngine.InputSystem.InputSystem::AddDevice<QCHT.Interactions.Core.HandTrackingDevice>(System.String)
inline HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* InputSystem_AddDevice_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_m90BBC5DADD4D20460392433B340EF48023851D40 (String_t* ___name0, const RuntimeMethod* method)
{
	return ((  HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* (*) (String_t*, const RuntimeMethod*))InputSystem_AddDevice_TisRuntimeObject_m0C15C931B928FDC569EAA06A44EDC0192F909A4F_gshared)(___name0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::SetDeviceUsage(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_SetDeviceUsage_mEE432569109A001D84790EF9F5B3E69EC6BAB8EC (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___usage1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RemoveDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RemoveDevice_mBA895DEE9FCFC53AC9040DE72860D95ABFB5E858 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSessionOrigin>(System.Boolean)
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404 (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___includeInactive0, method);
}
// T UnityEngine.Object::FindObjectOfType<Unity.XR.CoreUtils.XROrigin>(System.Boolean)
inline XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* (*) (bool, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m5B9316B6971BA36FD4CF9E0587E19E6FEE6F735A_gshared)(___includeInactive0, method);
}
// System.Void QCHT.Interactions.Core.XRSubsystemLifeCycleManager`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::.ctor()
inline void XRSubsystemLifeCycleManager_3__ctor_m76237597F4F60C966D6E8C4A90FBAAD14C33D1C8 (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2* __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystemLifeCycleManager_3_tCE44F86F6C8E31B034573ED341D1B80ECF6920C2*, const RuntimeMethod*))XRSubsystemLifeCycleManager_3__ctor_m3CC1B0715EC8235497FEFF5FE0AFEFEFAD6E59AC_gshared)(__this, method);
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor::.ctor(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystemDescriptor__ctor_mFB629D63901248A5489819B9C1C69D339E149F9E (XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9* __this, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m651B1759D57E7E00B2E596531C01EFA95293D3AD (SubsystemDescriptorWithProvider_2_tC4F34B76D01F13EB1FAD849B695B655335EB4303* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tC4F34B76D01F13EB1FAD849B695B655335EB4303*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mCEA4AE9A0C062E0BFD38E0BDAC7B86A1B50A9A09 (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) ;
// System.Boolean QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::Equals(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m6B56F66B82ED24F120D8E16002F8DF096C9E8A4F (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___other0, const RuntimeMethod* method) ;
// System.Boolean QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1BD83E4BA100433E859DDC7181E9AAF2C9CA73AC (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::get_provider()
inline Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* SubsystemWithProvider_3_get_provider_m2F37ECF5591E96FD9F73356898FAA10D10C7AAF5_inline (SubsystemWithProvider_3_tF4503344BB0A1F466B5459B228E1E118C86A44E3* __this, const RuntimeMethod* method)
{
	return ((  Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* (*) (SubsystemWithProvider_3_tF4503344BB0A1F466B5459B228E1E118C86A44E3*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<QCHT.Interactions.Core.XRHandTrackingSubsystem,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider>::.ctor()
inline void SubsystemWithProvider_3__ctor_mE51B09CBED0CE738490E4B75C8199D0FCCE6F500 (SubsystemWithProvider_3_tF4503344BB0A1F466B5459B228E1E118C86A44E3* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tF4503344BB0A1F466B5459B228E1E118C86A44E3*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<QCHT.Interactions.Core.XRHandTrackingSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m10264E489A7433C75492A157E952C379E2F2C486 (SubsystemProvider_1_t5081A01389C3EAA0ECF954676C431325C2773B10* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t5081A01389C3EAA0ECF954676C431325C2773B10*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.FourCC::.ctor(System.Char,System.Char,System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F (FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED* __this, Il2CppChar ___a0, Il2CppChar ___b1, Il2CppChar ___c2, Il2CppChar ___d3, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.FourCC QCHT.Interactions.Core.HandTrackingInputState::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED HandTrackingInputState_get_format_mE42E6C395B45B106C577314C5237C660EB68F18F (HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithProduct(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* __this, String_t* ___pattern0, bool ___supportRegex1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(T)
inline void Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C* __this, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C*, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555, const RuntimeMethod*))Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<QCHT.Interactions.Core.HandTrackingDevice>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_mC0B790C91D677BA75C8E01CC0B60BE3648AF9265 (String_t* ___name0, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___matches1, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared)(___name0, ___matches1, method);
}
// System.Void UnityEngine.InputSystem.XR.XRController::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController_FinishSetup_mF6E943DE3B32052071293EC7F337E704717C2128 (XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.AxisControl>(System.String)
inline AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_select(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_select_mEC719363C29C00BCCE859E65865609FAEF1F2929_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_selectPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_selectPressed_m120217290209C8955EA4F18590AE6F403807AA78_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_grip_mA4A618FF0615706FDCA559788D6F49503B032500_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___value0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_gripPressed_m74B12514C2A5A59FCC1C77E23DFC695B640526BE_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_pointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_pointerPosition_mBF1D150D421C40821316CBA6296CF48E912AB313_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___path0, method);
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_pointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_pointerRotation_mB63FCB1FBCF42D59F734A38E14F8D498107B47FD_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.XR.XRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRController__ctor_mB780698DBF866160CF7C7D6198D115CE263593ED (XRController_tB7EBF72339C56C18DEB74B1176FD39B9C421F1E2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_OnInstanceCreate_m8A79D0660AD16403FFEE29D92DDD867B3732109D (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) ;
// System.IntPtr QCHT.Interactions.Core.QCHTOpenXRPlugin::GetInterceptedInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t QCHTOpenXRPlugin_GetInterceptedInstanceProcAddr_mD842FA7DE9B87704A5064EB34ECBF57F2D9EAB7B (intptr_t ___func0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor,QCHT.Interactions.Core.XRHandTrackingSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void OpenXRFeature_CreateSubsystem_TisXRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m6B6F7678F9C383BA05847B982B0A51A6EFC72279 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7*, String_t*, const RuntimeMethod*))OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::StopSubsystem<QCHT.Interactions.Core.XRHandTrackingSubsystem>()
inline void OpenXRFeature_StopSubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m5DCD58D311F5638F3D0E63B4EF4CC25ED7E490B7 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_StopSubsystem_TisRuntimeObject_m1728B76D0581F2DB06F23933C72937B0824A7A73_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::DestroySubsystem<QCHT.Interactions.Core.XRHandTrackingSubsystem>()
inline void OpenXRFeature_DestroySubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_mB92E18A5D342BBA79C6CB661027C43C0874B5572 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, const RuntimeMethod*))OpenXRFeature_DestroySubsystem_TisRuntimeObject_m34F0E133C03B7EF23B5C1CA652929AF7753CD427_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m0238383518B03B78D7B6A8B031F6DB864EAC4BC5 (List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean QCHT.Interactions.Core.QCHTAvatar::TryToGetHeadProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QCHTAvatar_TryToGetHeadProvider_m8DD860CD9761916C00FA6D79E6AFB8F18C0BE095 (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.QCHTAvatar::IgnoreAllCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTAvatar_IgnoreAllCollisions_mAA2261248F93CDF878D333195B1C6F8DBE95037C (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// QCHT.Core.QCHTManager QCHT.Core.QCHTManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QCHTManager_t7E2F1D01D3BD894C83D9E6CA57DEE29B360193F8* QCHTManager_get_Instance_m89BEF50CB8C6BD0ACEE6B4B4E2C69F58F0C01996 (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_mFBAAD9B91D488802086C1A1C96447CE4C869211D (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider10, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider21, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose[] QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::ConvertHandPoseToOpenXRData(QCHT.Interactions.Hands.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* HandTrackingSimulationProvider_ConvertHandPoseToOpenXRData_m0C7D34EFFCB8D547F5C7B0837D67E000A408E933 (HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___pose0, const RuntimeMethod* method) ;
// T Unity.XR.CoreUtils.ScriptableSettings`1<QCHT.Interactions.Core.XRHandSimulationHandPosesSettings>::get_Instance()
inline XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03 (const RuntimeMethod* method)
{
	return ((  XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* (*) (const RuntimeMethod*))ScriptableSettings_1_get_Instance_m8F8BAD30AFB704704322C9CB97C33361CAFD352B_gshared)(method);
}
// TDevice UnityEngine.InputSystem.InputSystem::GetDevice<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController>(UnityEngine.InputSystem.Utilities.InternedString)
inline XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* InputSystem_GetDevice_TisXRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA_mEF924AE994CA96B0EAD10F9CE656777278A45FD7 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___usage0, const RuntimeMethod* method)
{
	return ((  XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* (*) (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))InputSystem_GetDevice_TisRuntimeObject_mCDA396DB5F63C090B1FF6FA633BF0498C2A7C620_gshared)(___usage0, method);
}
// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::GetPoseAsset(QCHT.Interactions.Hands.XrHandGesture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* HandTrackingSimulationProvider_GetPoseAsset_mF2E3BFEDEDA56B528F94CF3A20A1BE6B19609F6E (int32_t ___gesture0, bool ___isLeft1, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::AssignPose(UnityEngine.Pose[]&,QCHT.Interactions.Hands.HandPose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSimulationProvider_AssignPose_m3D0C4B8EC03E2AF46F33FF8BA65489B3A94B066B (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** ___joints0, HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___poseAsset1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___wrist2, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::get_isTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputControlExtensions::IsPressed(UnityEngine.InputSystem.InputControl,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlExtensions_IsPressed_m27B19824E37A51A57A0D05D7EDE767653427DBAA (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___control0, float ___buttonPressPoint1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::get_trigger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* XRSimulatedController_get_trigger_m27D6198CE632235EAD8D1F4718331303C51F1875_inline (XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController::get_grip()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* XRSimulatedController_get_grip_m7A18FD9D5A4568D9798C26EEDA57C1DE9DE3CB25_inline (XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::get_devicePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* TrackedDevice_get_devicePosition_mF2A0B044A244D1A63ECD32AE48E42E3F24F0E84D_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>::ReadValue()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputControl_1_ReadValue_m11CFE84A67588F56C06C437949DF6C5CD88FE792 (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*, const RuntimeMethod*))InputControl_1_ReadValue_m11CFE84A67588F56C06C437949DF6C5CD88FE792_gshared)(__this, method);
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::get_deviceRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* TrackedDevice_get_deviceRotation_m1A3BD5236736A1D4B5A60EDF72F231AA0A6FEF17_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>::ReadValue()
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputControl_1_ReadValue_m0EE80E100B4444265310092FE80886EDB75C3519 (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*, const RuntimeMethod*))InputControl_1_ReadValue_m0EE80E100B4444265310092FE80886EDB75C3519_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<System.Single>(TResult,System.Int32)
inline RuntimeObject* Enumerable_Repeat_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m88D8BFF47C137D3847FABBBA41FE5A0FFBBAD090 (float ___element0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (float, int32_t, const RuntimeMethod*))Enumerable_Repeat_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m88D8BFF47C137D3847FABBBA41FE5A0FFBBAD090_gshared)(___element0, ___count1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Single>(System.Collections.Generic.IEnumerable`1<TSource>)
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1_gshared)(___source0, method);
}
// System.Void Unity.XR.CoreUtils.ScriptableSettings`1<QCHT.Interactions.Core.XRHandSimulationHandPosesSettings>::.ctor()
inline void ScriptableSettings_1__ctor_m387C9BBF83A353BB7BCD71E17610C345BF3ABDC5 (ScriptableSettings_1_t13F556789D0C229B9A1D411C98F214DA776B651B* __this, const RuntimeMethod* method)
{
	((  void (*) (ScriptableSettings_1_t13F556789D0C229B9A1D411C98F214DA776B651B*, const RuntimeMethod*))ScriptableSettings_1__ctor_mA3464CA1D0CC5AAFAA70F68B6AF0FEC7B597FC42_gshared)(__this, method);
}
// System.Void QCHT.Interactions.Core.XrQuaternion::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrQuaternion__ctor_m27EED99CACED957DF3CB347ED55752DDC20C905C (XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XrVector3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrVector3__ctor_m4B1418C4EDEB95638B11A336CB6FAEADAF7ABDFD (XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XrPose::.ctor(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrPose__ctor_mE69C9C2AB7C2DA475F4B876FF8D3886B04C9ADA0 (XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) ;
// System.Void QCHT.Interactions.Core.XrPose::.ctor(QCHT.Interactions.Core.XrQuaternion,QCHT.Interactions.Core.XrVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrPose__ctor_m7F008699FA092A9CC65EA7CE9F069D49372820C4 (XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* __this, XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B ___orientation0, XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 QCHT.Interactions.Core.XrVector3::ToVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XrVector3_ToVector3_mBF030D761C60F11DF70D7B101A8C649501093B8E (XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion QCHT.Interactions.Core.XrQuaternion::ToQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XrQuaternion_ToQuaternion_mC22FD8D96162B213B722184B59404914D5F24A92 (XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetInterceptedInstanceProcAddr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StartHandTracking();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL StopHandTracking();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TryLocateHandJoints(int32_t, int32_t*, XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D*, float*, int32_t*, float*, float*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__29__ctor_m778951A9E261744C5B22315753BD3D1F554D0F1C (U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__29_System_IDisposable_Dispose_mEBBFB4B6E34921D3E30C18B95611E0E333BE066C (U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__29_MoveNext_m1D348C7A9A174694A40B07DAA01B6B385A6C4792 (U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var startAlpha = GetAlpha();
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_4 = V_1;
		NullCheck(L_4);
		float L_5;
		L_5 = HandRiggedVisualizer_GetAlpha_mE58B30080972767A15F49522C4ECF6A2F1930901(L_4, NULL);
		__this->___U3CstartAlphaU3E5__2_4 = L_5;
		// float time = 0;
		__this->___U3CtimeU3E5__3_5 = (0.0f);
		goto IL_0088;
	}

IL_0037:
	{
		// time += Time.deltaTime;
		float L_6 = __this->___U3CtimeU3E5__3_5;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CtimeU3E5__3_5 = ((float)il2cpp_codegen_add(L_6, L_7));
		// var dt = time / fadeDuration;
		float L_8 = __this->___U3CtimeU3E5__3_5;
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___fadeDuration_9;
		V_2 = ((float)(L_8/L_10));
		// var alpha = Mathf.Lerp(startAlpha, targetAlpha, dt);
		float L_11 = __this->___U3CstartAlphaU3E5__2_4;
		float L_12 = __this->___targetAlpha_3;
		float L_13 = V_2;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_11, L_12, L_13, NULL);
		V_3 = L_14;
		// SetAlpha(alpha);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_15 = V_1;
		float L_16 = V_3;
		NullCheck(L_15);
		HandRiggedVisualizer_SetAlpha_m0A955C7582BCA82CE6CC44A0CF24550797908707(L_15, L_16, NULL);
		// yield return null; // Wait for next frame
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0081:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0088:
	{
		// while (time < fadeDuration) {
		float L_17 = __this->___U3CtimeU3E5__3_5;
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___fadeDuration_9;
		if ((((float)L_17) < ((float)L_19)))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB7891E1187DB066B21EAF6893C72CCBEDCADC1AC (U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__29_System_Collections_IEnumerator_Reset_m7DA3D4545CD60DF3BCAD8A5DBA54B99E315B4718 (U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__29_System_Collections_IEnumerator_Reset_m7DA3D4545CD60DF3BCAD8A5DBA54B99E315B4718_RuntimeMethod_var)));
	}
}
// System.Object QCHT.Interactions.Core.HandRiggedVisualizer/<Fade>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__29_System_Collections_IEnumerator_get_Current_m7BDA2F3DA3D12B1572EB2DD077ED7169A862BD58 (U3CFadeU3Ed__29_t81879028A25BEC1EFB0933ED5AEBEC2DF513C866* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void QCHT.Interactions.Core.HandTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSubsystem_RegisterDescriptor_mFDD95024DBAD981D780E05363499A374C8C4CD10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7CCB5DE756ACDB6722F098490487A178ED463E);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRHandTrackingSubsystemDescriptor.Create(new XRHandTrackingSubsystemDescriptor.Cinfo {
		//     id = ID,
		//     providerType = typeof(HandTrackingProvider),
		//     subsystemTypeOverride = typeof(HandTrackingSubsystem)
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6));
		Cinfo_set_id_m67DCB3B0F7C1FA86E9A9B61B19C1AD20C049EEEF_inline((&V_0), _stringLiteralFE7CCB5DE756ACDB6722F098490487A178ED463E, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Cinfo_set_providerType_m3FE28A9DAE49659E3EDBB949BA88E7A7B0E3DF0B_inline((&V_0), L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Cinfo_set_subsystemTypeOverride_m5CA141654F5823923B1A7BC59A4234E62B5A543A_inline((&V_0), L_3, NULL);
		Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 L_4 = V_0;
		XRHandTrackingSubsystemDescriptor_Create_mFE15B2554F6E34CF4BF88B9572E887DD61824A21(L_4, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSubsystem__ctor_m0352C269BB1FDF1D6E2A85755C8BF6121804C11A (HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4* __this, const RuntimeMethod* method) 
{
	{
		XRHandTrackingSubsystem__ctor_m3BA2B53B127BE165ACBE3C156CDB6C18544543C1(__this, NULL);
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
// System.Void QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingProvider_Start_m8A977F3098248B0D4A7792FA42DD4F3E9249660E (HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() => QCHTOpenXRPlugin.StartHandTracking();
		int32_t L_0;
		L_0 = QCHTOpenXRPlugin_StartHandTracking_m448378CC8332F9769DC441BF0220439E71BA634F(NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingProvider_Stop_mE8537FCA90D655B2C6890AE4E2508840A6752DCF (HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() => Destroy();
		VirtualActionInvoker0::Invoke(7 /* System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<QCHT.Interactions.Core.XRHandTrackingSubsystem>::Destroy() */, __this);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingProvider_Destroy_m601AE7C64AA96D69EB6AC5EB3BA1F628B1B1B649 (HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy()  => QCHTOpenXRPlugin.StopHandTracking();
		int32_t L_0;
		L_0 = QCHTOpenXRPlugin_StopHandTracking_m1E96EDCF1109C48527692BB6FD5907FB23887547(NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::GetHandData(System.Boolean,System.Boolean&,UnityEngine.Pose[]&,System.Single[]&,System.Int32&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingProvider_GetHandData_m46D87F58EB48B1EB65F4F5CB33F3BD7F5729A173 (HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8* __this, bool ___isLeft0, bool* ___isTracked1, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** ___joints2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___scales3, int32_t* ___gesture4, float* ___gestureRatio5, float* ___flipRatio6, const RuntimeMethod* method) 
{
	XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE** V_0 = NULL;
	int32_t V_1 = 0;
	XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE** G_B3_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		// ref var poses = ref isLeft ? ref _leftPoses : ref _rightPoses;
		bool L_0 = ___isLeft0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE** L_1 = (&__this->____rightPoses_2);
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_000b:
	{
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE** L_2 = (&__this->____leftPoses_1);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		// var handedness = isLeft ? QCHTOpenXRPlugin.XrHandSide.XR_HAND_LEFT : QCHTOpenXRPlugin.XrHandSide.XR_HAND_RIGHT;
		bool L_3 = ___isLeft0;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B6_0 = 1;
	}

IL_0019:
	{
		// QCHTOpenXRPlugin.TryLocateHandJoints(handedness, ref isTracked, poses, _radius, ref gesture, ref gestureRatio, ref flipRatio);
		bool* L_4 = ___isTracked1;
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE** L_5 = V_0;
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* L_6 = *((XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE**)L_5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->____radius_3;
		int32_t* L_8 = ___gesture4;
		float* L_9 = ___gestureRatio5;
		float* L_10 = ___flipRatio6;
		int32_t L_11;
		L_11 = QCHTOpenXRPlugin_TryLocateHandJoints_m9BA4FD8AA405253E5469E55371850B45A5A96496(G_B6_0, L_4, L_6, L_7, L_8, L_9, L_10, NULL);
		// for (var i = 0; i < (int) XrHandJoint.XR_HAND_JOINT_MAX; i++) {
		V_1 = 0;
		goto IL_0058;
	}

IL_0032:
	{
		// joints[i] = poses[i].ToPose();
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_12 = ___joints2;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_13 = *((PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB**)L_12);
		int32_t L_14 = V_1;
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE** L_15 = V_0;
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* L_16 = *((XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE**)L_15);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18;
		L_18 = XrPose_ToPose_mE2408D52A7F021B43BA1180DEF482D8FFB9FA680(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_18);
		// scales[i] = _radius[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_19 = ___scales3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_19);
		int32_t L_21 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->____radius_3;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (float)L_25);
		// for (var i = 0; i < (int) XrHandJoint.XR_HAND_JOINT_MAX; i++) {
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0058:
	{
		// for (var i = 0; i < (int) XrHandJoint.XR_HAND_JOINT_MAX; i++) {
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)26))))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSubsystem/HandTrackingProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingProvider__ctor_mC89F857A1F3E10C5397945C3AEF2C20E64D4D902 (HandTrackingProvider_t8CA582E023B6859200B3B449560F655EA65C63B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private XrPose[] _leftPoses = new XrPose[(int)XrHandJoint.XR_HAND_JOINT_MAX];
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* L_0 = (XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE*)(XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE*)SZArrayNew(XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____leftPoses_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftPoses_1), (void*)L_0);
		// private XrPose[] _rightPoses = new XrPose[(int)XrHandJoint.XR_HAND_JOINT_MAX];
		XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* L_1 = (XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE*)(XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE*)SZArrayNew(XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____rightPoses_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightPoses_2), (void*)L_1);
		// private float[] _radius = new float[(int) XrHandJoint.XR_HAND_JOINT_MAX];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____radius_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____radius_3), (void*)L_2);
		Provider__ctor_m739F00094227162EF56ADEEB8306FDBB540AE063(__this, NULL);
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
// UnityEngine.Transform QCHT.Interactions.Core.XRHandTrackingManager::get_OriginTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRHandTrackingManager_get_OriginTransform_m749D476ECF391E7CE7A99662993C49CE473F2739 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_arOrigin != null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->____arOrigin_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return _arOrigin.transform;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2 = __this->____arOrigin_25;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// return _xrOrigin ? _xrOrigin.transform : transform;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_4 = __this->____xrOrigin_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_6;
	}

IL_002e:
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_7 = __this->____xrOrigin_26;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Transform QCHT.Interactions.Core.XRHandTrackingManager::get_CameraTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRHandTrackingManager_get_CameraTransform_m563009F87428F6DA1130312B9839D51903F3DAE2 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// Camera cam = null;
		V_0 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		// if (_arOrigin != null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->____arOrigin_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// cam = _arOrigin.camera;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2 = __this->____arOrigin_25;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_001c:
	{
		// if (cam == null && _xrOrigin != null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_6 = __this->____xrOrigin_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// cam = _xrOrigin.Camera;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_8 = __this->____xrOrigin_26;
		NullCheck(L_8);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
		L_9 = XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline(L_8, NULL);
		V_0 = L_9;
	}

IL_003f:
	{
		// if(cam == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// cam = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		V_0 = L_12;
	}

IL_004e:
	{
		// return cam ? cam.transform : OriginTransform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_13, NULL);
		if (L_14)
		{
			goto IL_005d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = XRHandTrackingManager_get_OriginTransform_m749D476ECF391E7CE7A99662993C49CE473F2739(__this, NULL);
		return L_15;
	}

IL_005d:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = V_0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		return L_17;
	}
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_LeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_LeftHand_m78B2F1A4FFA293A32B75DFBD7B4D06EC12A914DB (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject LeftHand => _leftHand;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____leftHand_11;
		return L_0;
	}
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_RightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_RightHand_m8FC99E1275A977F61D7407FB5A3B3D10A6346D85 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject RightHand => _rightHand;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____rightHand_12;
		return L_0;
	}
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_LeftHandPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_LeftHandPrefab_m5C0249EB39DC4CD303D25E50C8B90B3A0687584B (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// get => leftHandPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leftHandPrefab_9;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::set_LeftHandPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_set_LeftHandPrefab_m965F829FDD6DFB5B96554F05FD8569F647D6CB49 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => leftHandPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___leftHandPrefab_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftHandPrefab_9), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_RightHandPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_RightHandPrefab_m9BE89DC5672D234500AD981A149A917D9169539B (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// get => rightHandPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___rightHandPrefab_10;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::set_RightHandPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_set_RightHandPrefab_m3C7841DB28606860E8164C0ED64DBC78545509B0 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => rightHandPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___rightHandPrefab_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightHandPrefab_10), (void*)L_0);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_Awake_mE9CD85667D3D629B9E8FAF34E6F4DD975E63F526 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m6905BA9E197D5CBB1FD47584789A3A1F526E2FB4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _arOrigin = GetComponent<ARSessionOrigin>();
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0;
		L_0 = Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684(__this, Component_GetComponent_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mF7E0A4EC84273D7FF5240FC39482D1D2740F7684_RuntimeMethod_var);
		__this->____arOrigin_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arOrigin_25), (void*)L_0);
		// _xrOrigin = GetComponent<XROrigin>();
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_1;
		L_1 = Component_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m6905BA9E197D5CBB1FD47584789A3A1F526E2FB4(__this, Component_GetComponent_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m6905BA9E197D5CBB1FD47584789A3A1F526E2FB4_RuntimeMethod_var);
		__this->____xrOrigin_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xrOrigin_26), (void*)L_1);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_OnEnable_m8BEC4D5325F52BEFAA89E70EC9D814535FFBD710 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemLifeCycleManager_3_OnEnable_mAC65D3E483360499565AFD8E5A9DC165D01A15D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		XRSubsystemLifeCycleManager_3_OnEnable_mAC65D3E483360499565AFD8E5A9DC165D01A15D2(__this, XRSubsystemLifeCycleManager_3_OnEnable_mAC65D3E483360499565AFD8E5A9DC165D01A15D2_RuntimeMethod_var);
		// StartDevices();
		XRHandTrackingManager_StartDevices_m8471CC75F13FAEAD3E316DD6729000F7C1C3A0A5(__this, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_OnDisable_mBB269500285C82F7BD124CCD1AB157F93B49ECE4 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemLifeCycleManager_3_OnDisable_mF7FC62A80A47EC707CB5F33E92B304BB3922E4AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		XRSubsystemLifeCycleManager_3_OnDisable_mF7FC62A80A47EC707CB5F33E92B304BB3922E4AC(__this, XRSubsystemLifeCycleManager_3_OnDisable_mF7FC62A80A47EC707CB5F33E92B304BB3922E4AC_RuntimeMethod_var);
		// StopDevices();
		XRHandTrackingManager_StopDevices_m5F2A448579A6417B8AF57BAEC47152641B2F12D3(__this, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_OnDestroy_m55DCF58AE2E40EC9E1631EFD3F23722496A5923A (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemLifeCycleManager_3_OnDestroy_m5B9FDA003C74BCAE0246DEC66946148F7CDA9853_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDestroy();
		XRSubsystemLifeCycleManager_3_OnDestroy_m5B9FDA003C74BCAE0246DEC66946148F7CDA9853(__this, XRSubsystemLifeCycleManager_3_OnDestroy_m5B9FDA003C74BCAE0246DEC66946148F7CDA9853_RuntimeMethod_var);
		// RemoveLeftHand();
		XRHandTrackingManager_RemoveLeftHand_m2161144A9AB293B55123CA293254C6C702EE7E13(__this, NULL);
		// RemoveRightHand();
		XRHandTrackingManager_RemoveRightHand_mAC4C341B3BDE95652E2CBB4EC16A1799D45271FB(__this, NULL);
		// if (_leftHand != null) DestroyImmediate(_leftHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____leftHand_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// if (_leftHand != null) DestroyImmediate(_leftHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____leftHand_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_002b:
	{
		// if (_rightHand != null) DestroyImmediate(_rightHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____rightHand_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// if (_rightHand != null) DestroyImmediate(_rightHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____rightHand_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_Start_m145603B2219CECAFD311E957A408608F563C0A97 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// SetParentTrackable(_leftHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____leftHand_11;
		XRHandTrackingManager_SetParentTrackable_m14458831545F1169C617CA4DFD4C43FA75CE2DCE(__this, L_0, NULL);
		// SetParentTrackable(_rightHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____rightHand_12;
		XRHandTrackingManager_SetParentTrackable_m14458831545F1169C617CA4DFD4C43FA75CE2DCE(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_Update_m9B8E741ECB834CDFC9E72246F5B20BDB4B0B64C5 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// private void Update() => UpdateHands();
		XRHandTrackingManager_UpdateHands_m61ACE82E0FEC2AD965A5DBDC9E25135299400941(__this, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::AddDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_AddDevices_m136B1D652CC3AE83F9D380E03FA5CFCAEF8E191E (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _leftHandDevice ??= AddHandDevice(true) as HandTrackingDevice;
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_0 = __this->____leftHandDevice_15;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1;
		L_1 = XRHandTrackingManager_AddHandDevice_m329F8782AD9308929C1AF5BA4AA172DAC8725569((bool)1, NULL);
		__this->____leftHandDevice_15 = ((HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)IsInstClass((RuntimeObject*)L_1, HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftHandDevice_15), (void*)((HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)IsInstClass((RuntimeObject*)L_1, HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_il2cpp_TypeInfo_var)));
	}

IL_0019:
	{
		// _rightHandDevice ??= AddHandDevice(false) as HandTrackingDevice;
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_2 = __this->____rightHandDevice_16;
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3;
		L_3 = XRHandTrackingManager_AddHandDevice_m329F8782AD9308929C1AF5BA4AA172DAC8725569((bool)0, NULL);
		__this->____rightHandDevice_16 = ((HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)IsInstClass((RuntimeObject*)L_3, HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightHandDevice_16), (void*)((HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)IsInstClass((RuntimeObject*)L_3, HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_il2cpp_TypeInfo_var)));
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveDevices_m7ABB164E0A355C62ECA6C0ACD555227219898389 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// RemoveHandDevice(_leftHandDevice);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_0 = __this->____leftHandDevice_15;
		XRHandTrackingManager_RemoveHandDevice_m15BDCB9914CA6C590F58721F13C23502CF47FD6A(L_0, NULL);
		// _leftHandDevice = null;
		__this->____leftHandDevice_15 = (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftHandDevice_15), (void*)(HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)NULL);
		// RemoveHandDevice(_rightHandDevice);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_1 = __this->____rightHandDevice_16;
		XRHandTrackingManager_RemoveHandDevice_m15BDCB9914CA6C590F58721F13C23502CF47FD6A(L_1, NULL);
		// _rightHandDevice = null;
		__this->____rightHandDevice_16 = (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightHandDevice_16), (void*)(HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0*)NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::StartDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_StartDevices_m8471CC75F13FAEAD3E316DD6729000F7C1C3A0A5 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem == null)
		XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* L_0;
		L_0 = XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_inline(XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// InstantiateRightHand();
		XRHandTrackingManager_InstantiateRightHand_mA45E68EB41D5BBCF4F0928F455F545A444BCDB32(__this, NULL);
		// InstantiateLeftHand();
		XRHandTrackingManager_InstantiateLeftHand_m1D7D8BFFAC25B16680CD0F7F13D1778BD4DA2ABE(__this, NULL);
		// ToggleLeftHand(false);
		XRHandTrackingManager_ToggleLeftHand_m6948AE61912764F2AB9867D3BBC660EFEE8E710D(__this, (bool)0, NULL);
		// ToggleRightHand(false);
		XRHandTrackingManager_ToggleRightHand_mD11CE4A8B6D323121101877C2722E3AAD3AA8866(__this, (bool)0, NULL);
		// AddDevices();
		XRHandTrackingManager_AddDevices_m136B1D652CC3AE83F9D380E03FA5CFCAEF8E191E(__this, NULL);
		// if (_leftHandDevice != null)
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_1 = __this->____leftHandDevice_15;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// InputSystem.EnableDevice(_leftHandDevice);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_2 = __this->____leftHandDevice_15;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_EnableDevice_mED1442951B67B1B8742C29CE7F3ED2828B3B44F7(L_2, NULL);
	}

IL_003b:
	{
		// if (_rightHandDevice != null)
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_3 = __this->____rightHandDevice_16;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// InputSystem.EnableDevice(_rightHandDevice);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_4 = __this->____rightHandDevice_16;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_EnableDevice_mED1442951B67B1B8742C29CE7F3ED2828B3B44F7(L_4, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::StopDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_StopDevices_m5F2A448579A6417B8AF57BAEC47152641B2F12D3 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ToggleLeftHand(false);
		XRHandTrackingManager_ToggleLeftHand_m6948AE61912764F2AB9867D3BBC660EFEE8E710D(__this, (bool)0, NULL);
		// ToggleRightHand(false);
		XRHandTrackingManager_ToggleRightHand_mD11CE4A8B6D323121101877C2722E3AAD3AA8866(__this, (bool)0, NULL);
		// _leftState.isTracked = false;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_0 = (&__this->____leftState_17);
		L_0->___isTracked_1 = (bool)0;
		// _rightState.isTracked = false;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_1 = (&__this->____rightState_18);
		L_1->___isTracked_1 = (bool)0;
		// if (_leftHandDevice != null && _leftHandDevice.added)
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_2 = __this->____leftHandDevice_15;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_3 = __this->____leftHandDevice_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputDevice_get_added_m27CF78B0777E142AAF9139ABFD88F67BBAABA15C(L_3, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// InputSystem.DisableDevice(_leftHandDevice);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_5 = __this->____leftHandDevice_15;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_DisableDevice_m19E310307F986FDBCC83048107E4BDC25F9FD26B(L_5, (bool)0, NULL);
	}

IL_0047:
	{
		// if (_rightHandDevice != null && _rightHandDevice.added)
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_6 = __this->____rightHandDevice_16;
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_7 = __this->____rightHandDevice_16;
		NullCheck(L_7);
		bool L_8;
		L_8 = InputDevice_get_added_m27CF78B0777E142AAF9139ABFD88F67BBAABA15C(L_7, NULL);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// InputSystem.DisableDevice(_rightHandDevice);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_9 = __this->____rightHandDevice_16;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_DisableDevice_m19E310307F986FDBCC83048107E4BDC25F9FD26B(L_9, (bool)0, NULL);
	}

IL_0068:
	{
		// RemoveDevices();
		XRHandTrackingManager_RemoveDevices_m7ABB164E0A355C62ECA6C0ACD555227219898389(__this, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::UpdateHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_UpdateHands_m61ACE82E0FEC2AD965A5DBDC9E25135299400941 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// UpdateHand(ref _leftState, true, _leftHandDataUpdater, _leftHandDevice);
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_0 = (&__this->____leftState_17);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_1 = __this->____leftHandDataUpdater_13;
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_2 = __this->____leftHandDevice_15;
		XRHandTrackingManager_UpdateHand_m1261C76403ED24850F015138B6F9CB694642F55B(__this, L_0, (bool)1, L_1, L_2, NULL);
		// UpdateHand(ref _rightState, false, _rightHandDataUpdater, _rightHandDevice);
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_3 = (&__this->____rightState_18);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_4 = __this->____rightHandDataUpdater_14;
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_5 = __this->____rightHandDevice_16;
		XRHandTrackingManager_UpdateHand_m1261C76403ED24850F015138B6F9CB694642F55B(__this, L_3, (bool)0, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::UpdateHand(QCHT.Interactions.Core.HandTrackingInputState&,System.Boolean,QCHT.Interactions.Core.HandRiggedVisualizer,QCHT.Interactions.Core.HandTrackingDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_UpdateHand_m1261C76403ED24850F015138B6F9CB694642F55B (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* ___state0, bool ___isLeft1, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ___handRiggedVisualizer2, HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* ___device3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPoseExtensions_t52D96C76808A721059B04D283A6A5235C56C6FDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputState_Change_TisHandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_m72ED532FC1EC3FAB462964F2805E0C7473776B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	RuntimeObject* V_6 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_7 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_8 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_20;
	memset((&V_20), 0, sizeof(V_20));
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** G_B3_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** G_B6_0 = NULL;
	XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* G_B8_0 = NULL;
	XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* G_B7_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	{
		// ref var joints = ref isLeft ? ref _leftPoses : ref _rightPoses;
		bool L_0 = ___isLeft1;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_1 = (&__this->____rightPoses_20);
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_000b:
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_2 = (&__this->____leftPoses_19);
		G_B3_0 = L_2;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		// ref var scales = ref isLeft ? ref _leftScales : ref _rightScales;
		bool L_3 = ___isLeft1;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_4 = (&__this->____rightScales_22);
		G_B6_0 = L_4;
		goto IL_0023;
	}

IL_001d:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_5 = (&__this->____leftScales_21);
		G_B6_0 = L_5;
	}

IL_0023:
	{
		V_1 = G_B6_0;
		// var isTracked = false;
		V_2 = (bool)0;
		// var gestureId = 0;
		V_3 = 0;
		// var gestureRatio = 0f;
		V_4 = (0.0f);
		// var flipRatio = 1f;
		V_5 = (1.0f);
		// subsystem?.GetHandData(isLeft, ref isTracked, ref joints, ref scales, ref gestureId, ref gestureRatio, ref flipRatio);
		XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* L_6;
		L_6 = XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_inline(XRSubsystemLifeCycleManager_3_get_subsystem_mF51F63F8511E02F1C42BC224DADAFAA6B1550EFD_RuntimeMethod_var);
		XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_0041;
		}
	}
	{
		goto IL_0051;
	}

IL_0041:
	{
		bool L_8 = ___isLeft1;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_9 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_10 = V_1;
		NullCheck(G_B8_0);
		XRHandTrackingSubsystem_GetHandData_mC87C4331795FA3B7FC6BEDADC78030CF85A365B0(G_B8_0, L_8, (&V_2), L_9, L_10, (&V_3), (&V_4), (&V_5), NULL);
	}

IL_0051:
	{
		// if (handRiggedVisualizer != null) {
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_11 = ___handRiggedVisualizer2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// var convertedJoints = ConvertJoints(isLeft, joints);
		bool L_13 = ___isLeft1;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_14 = V_0;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_15 = *((PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB**)L_14);
		RuntimeObject* L_16;
		L_16 = XRHandTrackingManager_ConvertJoints_m7E03CA56DAD809CAB9A323A1716B718BA4A3DB91(__this, L_13, (RuntimeObject*)L_15, NULL);
		V_6 = L_16;
		// handRiggedVisualizer.UpdateData(convertedJoints, scales);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_17 = ___handRiggedVisualizer2;
		RuntimeObject* L_18 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_19 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_19);
		NullCheck(L_17);
		HandRiggedVisualizer_UpdateData_mB3730C8450E4FC5E573D4B5125DA4DC972703272(L_17, L_18, (RuntimeObject*)L_20, NULL);
	}

IL_006f:
	{
		// if (isTracked != state.isTracked) {
		bool L_21 = V_2;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_22 = ___state0;
		bool L_23 = L_22->___isTracked_1;
		if ((((int32_t)L_21) == ((int32_t)L_23)))
		{
			goto IL_008b;
		}
	}
	{
		// if (isLeft) ToggleLeftHand(isTracked);
		bool L_24 = ___isLeft1;
		if (!L_24)
		{
			goto IL_0084;
		}
	}
	{
		// if (isLeft) ToggleLeftHand(isTracked);
		bool L_25 = V_2;
		XRHandTrackingManager_ToggleLeftHand_m6948AE61912764F2AB9867D3BBC660EFEE8E710D(__this, L_25, NULL);
		goto IL_008b;
	}

IL_0084:
	{
		// else ToggleRightHand(isTracked);
		bool L_26 = V_2;
		XRHandTrackingManager_ToggleRightHand_mD11CE4A8B6D323121101877C2722E3AAD3AA8866(__this, L_26, NULL);
	}

IL_008b:
	{
		// if (device == null) return;
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_27 = ___device3;
		if (L_27)
		{
			goto IL_0090;
		}
	}
	{
		// if (device == null) return;
		return;
	}

IL_0090:
	{
		// state.isTracked = isTracked;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_28 = ___state0;
		bool L_29 = V_2;
		L_28->___isTracked_1 = L_29;
		// if (state.isTracked) {
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_30 = ___state0;
		bool L_31 = L_30->___isTracked_1;
		if (!L_31)
		{
			goto IL_0282;
		}
	}
	{
		// state.trackingState = (int) (InputTrackingState.Position | InputTrackingState.Rotation);
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_32 = ___state0;
		L_32->___trackingState_0 = 3;
		// var oT = OriginTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = XRHandTrackingManager_get_OriginTransform_m749D476ECF391E7CE7A99662993C49CE473F2739(__this, NULL);
		V_7 = L_33;
		// var camT = CameraTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = XRHandTrackingManager_get_CameraTransform_m563009F87428F6DA1130312B9839D51903F3DAE2(__this, NULL);
		V_8 = L_34;
		// var cameraPose = new Pose(camT.localPosition, camT.localRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_8;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = V_8;
		NullCheck(L_37);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_37, NULL);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_9), L_36, L_38, NULL);
		// var devicePose = Unity.XR.CoreUtils.TransformExtensions.InverseTransformPose(OriginTransform, joints[(int)XrHandJoint.XR_HAND_JOINT_WRIST]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = XRHandTrackingManager_get_OriginTransform_m749D476ECF391E7CE7A99662993C49CE473F2739(__this, NULL);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_40 = V_0;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_41 = *((PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB**)L_40);
		NullCheck(L_41);
		int32_t L_42 = 1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_44;
		L_44 = TransformExtensions_InverseTransformPose_mA2C52EFE2C80EB0DE7F09EA477B80C583B4387FB(L_39, L_43, NULL);
		V_10 = L_44;
		// var baseOrientation = Quaternion.AngleAxis(90f, Vector3.right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((90.0f), L_45, NULL);
		V_11 = L_46;
		// devicePose.position = oT.TransformPoint(devicePose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = V_7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_48 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_48.___position_0;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_47, L_49, NULL);
		(&V_10)->___position_0 = L_50;
		// devicePose.rotation = oT.rotation * devicePose.rotation * baseOrientation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = V_7;
		NullCheck(L_51);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_51, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_53 = V_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = L_53.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_52, L_54, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = V_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_57;
		L_57 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_55, L_56, NULL);
		(&V_10)->___rotation_1 = L_57;
		// state.devicePosition = devicePose.position;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_58 = ___state0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_59 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = L_59.___position_0;
		L_58->___devicePosition_2 = L_60;
		// state.deviceRotation = devicePose.rotation;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_61 = ___state0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_62 = V_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63 = L_62.___rotation_1;
		L_61->___deviceRotation_3 = L_63;
		// var positionOffset = isLeft ? new Vector3(0.02f, 0.09f, 0.1f) : new Vector3(-0.02f, 0.09f, 0.1f);
		bool L_64 = ___isLeft1;
		if (L_64)
		{
			goto IL_015d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), (-0.0199999996f), (0.0900000036f), (0.100000001f), /*hidden argument*/NULL);
		G_B21_0 = L_65;
		goto IL_0171;
	}

IL_015d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_66), (0.0199999996f), (0.0900000036f), (0.100000001f), /*hidden argument*/NULL);
		G_B21_0 = L_66;
	}

IL_0171:
	{
		V_12 = G_B21_0;
		// var posOffset = devicePose.rotation * positionOffset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_67 = V_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_68 = L_67.___rotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_68, L_69, NULL);
		V_13 = L_70;
		// var shoulder = isLeft ? -cameraPose.right : cameraPose.right;
		bool L_71 = ___isLeft1;
		if (L_71)
		{
			goto IL_018f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_9), NULL);
		G_B24_0 = L_72;
		goto IL_019b;
	}

IL_018f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_9), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_73, NULL);
		G_B24_0 = L_74;
	}

IL_019b:
	{
		V_14 = G_B24_0;
		// var shoulderPosition = cameraPose.position + (-cameraPose.up + shoulder) * shoulderOffset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_75 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_9), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_78, L_79, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_80, (0.0799999982f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_76, L_81, NULL);
		V_15 = L_82;
		// var pointerPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_83;
		L_83 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		V_16 = L_83;
		// pointerPose.position = devicePose.position + posOffset;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_84 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = L_84.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_86, NULL);
		(&V_16)->___position_0 = L_87;
		// pointerPose.rotation = Quaternion.LookRotation((pointerPose.position - shoulderPosition).normalized);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_88 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = L_88.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_89, L_90, NULL);
		V_18 = L_91;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_18), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_92, NULL);
		(&V_16)->___rotation_1 = L_93;
		// var dt = Time.deltaTime * pointerSmoothValue;
		float L_94;
		L_94 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_17 = ((float)il2cpp_codegen_multiply(L_94, (7.5f)));
		// state.pointerPosition = Vector3.Lerp(state.pointerPosition, pointerPose.position, dt);
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_95 = ___state0;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_96 = ___state0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = L_96->___pointerPosition_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_98 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = L_98.___position_0;
		float L_100 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_97, L_99, L_100, NULL);
		L_95->___pointerPosition_8 = L_101;
		// state.pointerRotation = Quaternion.Slerp(state.pointerRotation, pointerPose.rotation, dt);
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_102 = ___state0;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_103 = ___state0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_104 = L_103->___pointerRotation_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_105 = V_16;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_106 = L_105.___rotation_1;
		float L_107 = V_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_108;
		L_108 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_104, L_106, L_107, NULL);
		L_102->___pointerRotation_9 = L_108;
		// state.selectPressed = (XrHandGesture) gestureId == XrHandGesture.XR_HAND_PINCH;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_109 = ___state0;
		int32_t L_110 = V_3;
		L_109->___selectPressed_5 = (bool)((((int32_t)L_110) == ((int32_t)7))? 1 : 0);
		// if (handRiggedVisualizer) {
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_111 = ___handRiggedVisualizer2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_112;
		L_112 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_111, NULL);
		if (!L_112)
		{
			goto IL_0278;
		}
	}
	{
		// var releaseThreshold = handRiggedVisualizer.HandPose.GetMinDistToThumbTip();
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_113 = ___handRiggedVisualizer2;
		NullCheck(L_113);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_114;
		L_114 = HandRiggedVisualizer_get_HandPose_m0B9F82015E25BF2F5F070E866A8A6573A08B5917_inline(L_113, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandPoseExtensions_t52D96C76808A721059B04D283A6A5235C56C6FDB_il2cpp_TypeInfo_var);
		float L_115;
		L_115 = HandPoseExtensions_GetMinDistToThumbTip_m6A26448FA0C80D0022F53088872505B059BA93D2(L_114, NULL);
		V_19 = L_115;
		// state.gripPressed = releaseThreshold < 0.055f;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_116 = ___state0;
		float L_117 = V_19;
		L_116->___gripPressed_7 = (bool)((((float)L_117) < ((float)(0.0549999997f)))? 1 : 0);
		goto IL_0282;
	}

IL_0278:
	{
		// state.gripPressed = (XrHandGesture) gestureId == XrHandGesture.XR_HAND_GRAB;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_118 = ___state0;
		int32_t L_119 = V_3;
		L_118->___gripPressed_7 = (bool)((((int32_t)L_119) == ((int32_t)2))? 1 : 0);
	}

IL_0282:
	{
		// InputState.Change(device, state);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_120 = ___device3;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* L_121 = ___state0;
		HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A L_122 = (*(HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A*)L_121);
		il2cpp_codegen_initobj((&V_20), sizeof(InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_123 = V_20;
		InputState_Change_TisHandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_m72ED532FC1EC3FAB462964F2805E0C7473776B4D(L_120, L_122, 0, L_123, InputState_Change_TisHandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_m72ED532FC1EC3FAB462964F2805E0C7473776B4D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose> QCHT.Interactions.Core.XRHandTrackingManager::ConvertJoints(System.Boolean,System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRHandTrackingManager_ConvertJoints_m7E03CA56DAD809CAB9A323A1716B718BA4A3DB91 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, bool ___isLeft0, RuntimeObject* ___joints1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t29344C36847F81F4373836329113F968F7583E05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* V_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* G_B3_0 = NULL;
	{
		// var convertedJoints = isLeft ? _convertedLeftPoses : _convertedRightPoses;
		bool L_0 = ___isLeft0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = __this->____convertedRightPoses_24;
		G_B3_0 = L_1;
		goto IL_0011;
	}

IL_000b:
	{
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_2 = __this->____convertedLeftPoses_23;
		G_B3_0 = L_2;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		// var baseOrientation = Quaternion.AngleAxis(90f, Vector3.right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((90.0f), L_3, NULL);
		V_1 = L_4;
		// for (var i = 0; i < joints.Count; i++) {
		V_2 = 0;
		goto IL_0075;
	}

IL_0026:
	{
		// var openXRPose = joints[i];
		RuntimeObject* L_5 = ___joints1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = InterfaceFuncInvoker1< Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<UnityEngine.Pose>::get_Item(System.Int32) */, IReadOnlyList_1_t0573EE6BA1245B28A57C7D8B41C73F940DC38460_il2cpp_TypeInfo_var, L_5, L_6);
		V_3 = L_7;
		// var origin = OriginTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = XRHandTrackingManager_get_OriginTransform_m749D476ECF391E7CE7A99662993C49CE473F2739(__this, NULL);
		V_4 = L_8;
		// openXRPose.position = origin.TransformPoint(openXRPose.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___position_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_9, L_11, NULL);
		(&V_3)->___position_0 = L_12;
		// openXRPose.rotation = origin.rotation * openXRPose.rotation * baseOrientation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_4;
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_14, L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_17, L_18, NULL);
		(&V_3)->___rotation_1 = L_19;
		// convertedJoints[i] = openXRPose;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_20 = V_0;
		int32_t L_21 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_3;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_22);
		// for (var i = 0; i < joints.Count; i++) {
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		// for (var i = 0; i < joints.Count; i++) {
		int32_t L_24 = V_2;
		RuntimeObject* L_25 = ___joints1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.Pose>::get_Count() */, IReadOnlyCollection_1_t29344C36847F81F4373836329113F968F7583E05_il2cpp_TypeInfo_var, L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0026;
		}
	}
	{
		// return convertedJoints;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_27 = V_0;
		return (RuntimeObject*)L_27;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RefreshLeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RefreshLeftHand_m9E43F39043BD188526F3E596B395C02AE5421559 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// RemoveLeftHand();
		XRHandTrackingManager_RemoveLeftHand_m2161144A9AB293B55123CA293254C6C702EE7E13(__this, NULL);
		// InstantiateLeftHand();
		XRHandTrackingManager_InstantiateLeftHand_m1D7D8BFFAC25B16680CD0F7F13D1778BD4DA2ABE(__this, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RefreshRightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RefreshRightHand_m84139E3410038BA68E38C567EAD4CC9A8F4B0D00 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// RemoveRightHand();
		XRHandTrackingManager_RemoveRightHand_mAC4C341B3BDE95652E2CBB4EC16A1799D45271FB(__this, NULL);
		// InstantiateRightHand();
		XRHandTrackingManager_InstantiateRightHand_mA45E68EB41D5BBCF4F0928F455F545A444BCDB32(__this, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::InstantiateLeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_InstantiateLeftHand_m1D7D8BFFAC25B16680CD0F7F13D1778BD4DA2ABE (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45152AD8242E5C5C84B1E5C460EDC18F8D239E53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InstantiateHand(kTrackableLeftName, leftHandPrefab, ref _leftHand, ref _leftHandDataUpdater);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leftHandPrefab_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_1 = (&__this->____leftHand_11);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45** L_2 = (&__this->____leftHandDataUpdater_13);
		XRHandTrackingManager_InstantiateHand_m0C05E696C7D9A444587480927EC6CE36634113A8(__this, _stringLiteral45152AD8242E5C5C84B1E5C460EDC18F8D239E53, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::InstantiateRightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_InstantiateRightHand_mA45E68EB41D5BBCF4F0928F455F545A444BCDB32 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92EA96DC383855BFB379F291D33CFC76D0A70977);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InstantiateHand(kTrackableRightName, rightHandPrefab, ref _rightHand, ref _rightHandDataUpdater);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___rightHandPrefab_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_1 = (&__this->____rightHand_12);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45** L_2 = (&__this->____rightHandDataUpdater_14);
		XRHandTrackingManager_InstantiateHand_m0C05E696C7D9A444587480927EC6CE36634113A8(__this, _stringLiteral92EA96DC383855BFB379F291D33CFC76D0A70977, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::InstantiateHand(System.String,UnityEngine.GameObject,UnityEngine.GameObject&,QCHT.Interactions.Core.HandRiggedVisualizer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_InstantiateHand_m0C05E696C7D9A444587480927EC6CE36634113A8 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, String_t* ___objectName0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___hand2, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45** ___dataUpdater3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisHandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45_mC46940917FF758F85799A7852FBD54C849ED9F21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hand == null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = ___hand2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// hand = InstantiateHandTrackable(objectName, prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_3 = ___hand2;
		String_t* L_4 = ___objectName0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___prefab1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = XRHandTrackingManager_InstantiateHandTrackable_mC96881999EB5B17CC1659F9DC7DF80D5F06CAC91(L_4, L_5, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_6);
	}

IL_0013:
	{
		// if (hand != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_7 = ___hand2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_7);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		// hand.TryGetComponent(out dataUpdater);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_10 = ___hand2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_10);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45** L_12 = ___dataUpdater3;
		NullCheck(L_11);
		bool L_13;
		L_13 = GameObject_TryGetComponent_TisHandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45_mC46940917FF758F85799A7852FBD54C849ED9F21(L_11, L_12, GameObject_TryGetComponent_TisHandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45_mC46940917FF758F85799A7852FBD54C849ED9F21_RuntimeMethod_var);
		// SetParentTrackable(hand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_14 = ___hand2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_14);
		XRHandTrackingManager_SetParentTrackable_m14458831545F1169C617CA4DFD4C43FA75CE2DCE(__this, L_15, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveLeftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveLeftHand_m2161144A9AB293B55123CA293254C6C702EE7E13 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// private void RemoveLeftHand() => RemoveHand(ref _leftHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = (&__this->____leftHand_11);
		XRHandTrackingManager_RemoveHand_m3CEFCAC23B9C428275A85139177C92FA3A82F894(L_0, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveRightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveRightHand_mAC4C341B3BDE95652E2CBB4EC16A1799D45271FB (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// private void RemoveRightHand() => RemoveHand(ref _rightHand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = (&__this->____rightHand_12);
		XRHandTrackingManager_RemoveHand_m3CEFCAC23B9C428275A85139177C92FA3A82F894(L_0, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveHand(UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveHand_m3CEFCAC23B9C428275A85139177C92FA3A82F894 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hand != null) Destroy(hand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = ___hand0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (hand != null) Destroy(hand);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_3 = ___hand0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_3);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0011:
	{
		// hand = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_5 = ___hand0;
		*((RuntimeObject**)L_5) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::SetLeftHandSkin(QCHT.Interactions.Hands.HandSkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_SetLeftHandSkin_mB11454DE2EC4F09B06C9C41BE16DD7BA3D6E7BEE (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* ___skin0, const RuntimeMethod* method) 
{
	{
		// public void SetLeftHandSkin(HandSkin skin) => SetSkin(_leftHandDataUpdater, skin);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_0 = __this->____leftHandDataUpdater_13;
		HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* L_1 = ___skin0;
		XRHandTrackingManager_SetSkin_m771A0C5835EBBE08D135B08DD5088630D4C47C9C(L_0, L_1, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::SetRightHandSkin(QCHT.Interactions.Hands.HandSkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_SetRightHandSkin_m6432811D9EC06B6B937200EEDAF110B837B5AED6 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* ___skin0, const RuntimeMethod* method) 
{
	{
		// public void SetRightHandSkin(HandSkin skin) => SetSkin(_rightHandDataUpdater, skin);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_0 = __this->____rightHandDataUpdater_14;
		HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* L_1 = ___skin0;
		XRHandTrackingManager_SetSkin_m771A0C5835EBBE08D135B08DD5088630D4C47C9C(L_0, L_1, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::SetSkin(QCHT.Interactions.Core.HandRiggedVisualizer,QCHT.Interactions.Hands.HandSkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_SetSkin_m771A0C5835EBBE08D135B08DD5088630D4C47C9C (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ___hand0, HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* ___skin1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hand == null) return;
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_0 = ___hand0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (hand == null) return;
		return;
	}

IL_000a:
	{
		// hand.HandSkin = skin;
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_2 = ___hand0;
		HandSkin_t34EA33927216F7FF45DD799914BC5EC06CDC5DFB* L_3 = ___skin1;
		NullCheck(L_2);
		HandRiggedVisualizer_set_HandSkin_mB3DE6645A178C46E2F58F8060E5AB4F7F719EE40(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::ToggleLeftHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_ToggleLeftHand_m6948AE61912764F2AB9867D3BBC660EFEE8E710D (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, bool ___visible0, const RuntimeMethod* method) 
{
	{
		// public void ToggleLeftHand(bool visible) => ToggleHand(_leftHandDataUpdater, visible);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_0 = __this->____leftHandDataUpdater_13;
		bool L_1 = ___visible0;
		XRHandTrackingManager_ToggleHand_m7972E38F046EB6FB8F1287ADA2A64865A154C08E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::ToggleRightHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_ToggleRightHand_mD11CE4A8B6D323121101877C2722E3AAD3AA8866 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, bool ___visible0, const RuntimeMethod* method) 
{
	{
		// public void ToggleRightHand(bool visible) => ToggleHand(_rightHandDataUpdater, visible);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_0 = __this->____rightHandDataUpdater_14;
		bool L_1 = ___visible0;
		XRHandTrackingManager_ToggleHand_m7972E38F046EB6FB8F1287ADA2A64865A154C08E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::ToggleHand(QCHT.Interactions.Core.HandRiggedVisualizer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_ToggleHand_m7972E38F046EB6FB8F1287ADA2A64865A154C08E (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* ___hand0, bool ___visible1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hand == null) return;
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_0 = ___hand0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (hand == null) return;
		return;
	}

IL_000a:
	{
		// if (visible) {
		bool L_2 = ___visible1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// hand.gameObject.SetActive(true);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_3 = ___hand0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// hand.Show();
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_5 = ___hand0;
		NullCheck(L_5);
		HandRiggedVisualizer_Show_m99A36EB36B2E2B6856DA6DAE92CBFDC63F4EDD18(L_5, NULL);
		return;
	}

IL_0020:
	{
		// hand.Hide();
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_6 = ___hand0;
		NullCheck(L_6);
		HandRiggedVisualizer_Hide_m7B6F77419067A279FB69F22603C985BDC699EAA5(L_6, NULL);
		// hand.gameObject.SetActive(false);
		HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* L_7 = ___hand0;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::SetParentTrackable(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_SetParentTrackable_m14458831545F1169C617CA4DFD4C43FA75CE2DCE (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B10_0 = NULL;
	{
		// if (hand == null) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___hand0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (hand == null) return;
		return;
	}

IL_000a:
	{
		// Transform trackablesParent = null;
		V_0 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// if (_arOrigin != null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_2 = __this->____arOrigin_25;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// trackablesParent = _arOrigin.trackablesParent;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_4 = __this->____arOrigin_25;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(L_4, NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		// if (trackablesParent == null && _xrOrigin != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_8 = __this->____xrOrigin_26;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		// trackablesParent = _xrOrigin.TrackablesParent;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_10 = __this->____xrOrigin_26;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = XROrigin_get_TrackablesParent_m6F7933DF03A5376C31D328F865F77D28EEC18E9C_inline(L_10, NULL);
		V_0 = L_11;
	}

IL_0049:
	{
		// trackablesParent = trackablesParent ? trackablesParent : transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		G_B10_0 = L_14;
		goto IL_005a;
	}

IL_0059:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_0;
		G_B10_0 = L_15;
	}

IL_005a:
	{
		V_0 = G_B10_0;
		// var handTransform = hand.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = ___hand0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		// handTransform.SetParent(trackablesParent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		NullCheck(L_18);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_18, L_19, NULL);
		// handTransform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_21, NULL);
		// handTransform.localRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_22, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_DefaultLeftHandPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_DefaultLeftHandPrefab_mB7A4C1A84C7D45E22E43641FDA6EB38AB1CF4FB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB26117C8D08AF7F60756B7BB2DAFED32BB9CDA64);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameObject DefaultLeftHandPrefab => Resources.Load<GameObject>(kResourcesHandLeft);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteralB26117C8D08AF7F60756B7BB2DAFED32BB9CDA64, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_DefaultRightHandPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_DefaultRightHandPrefab_m13F412E881274E30FAB927F41A0BDB34E0C5DEA6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7ABA4598DCA8A647879503327DEFBE9504BDA1C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameObject DefaultRightHandPrefab => Resources.Load<GameObject>(kResourcesHandRight);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteralF7ABA4598DCA8A647879503327DEFBE9504BDA1C, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::InstantiateHandTrackingManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_InstantiateHandTrackingManager_m3ED8B7A003973F46547A59E9C154FDF01123DA3C (const RuntimeMethod* method) 
{
	{
		// GetOrCreate(DefaultLeftHandPrefab, DefaultRightHandPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = XRHandTrackingManager_get_DefaultLeftHandPrefab_mB7A4C1A84C7D45E22E43641FDA6EB38AB1CF4FB9(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = XRHandTrackingManager_get_DefaultRightHandPrefab_m13F412E881274E30FAB927F41A0BDB34E0C5DEA6(NULL);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_2;
		L_2 = XRHandTrackingManager_GetOrCreate_mF056FDC7FF954E53DD2EEA9222645B9F8C32E492(L_0, L_1, NULL);
		// }
		return;
	}
}
// QCHT.Interactions.Core.XRHandTrackingManager QCHT.Interactions.Core.XRHandTrackingManager::GetOrCreate(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* XRHandTrackingManager_GetOrCreate_mF056FDC7FF954E53DD2EEA9222645B9F8C32E492 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftPrefab0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightPrefab1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m38BABD6CA9D090FED9643EB47C88F9F23A4A6DF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m162281A845EE0C2A091A79E031B6D5B60457BA52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral060C64C2425000E6745C2E563AEE7FEE879DA5BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416BCF8B090CDC14EBE30BFB921F774F00DAFF4E);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (TryFindOrigin(out var origin) && origin != null) {
		bool L_0;
		L_0 = XRHandTrackingManager_TryFindOrigin_m83DA36DF3BD0C5522425814E86F660F47A888577((&V_0), NULL);
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0081;
		}
	}
	{
		// var manager = origin.gameObject.AddComponent<XRHandTrackingManager>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_5;
		L_5 = GameObject_AddComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m38BABD6CA9D090FED9643EB47C88F9F23A4A6DF0(L_4, GameObject_AddComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m38BABD6CA9D090FED9643EB47C88F9F23A4A6DF0_RuntimeMethod_var);
		V_1 = L_5;
		// var needRefreshL = true;
		V_2 = (bool)1;
		// var needRefreshR = true;
		V_3 = (bool)1;
		// if (manager == null) { // if already exists
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// manager = origin.gameObject.GetComponent<XRHandTrackingManager>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_10;
		L_10 = GameObject_GetComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m162281A845EE0C2A091A79E031B6D5B60457BA52(L_9, GameObject_GetComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m162281A845EE0C2A091A79E031B6D5B60457BA52_RuntimeMethod_var);
		V_1 = L_10;
		// needRefreshL = leftPrefab != manager.LeftHandPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___leftPrefab0;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = XRHandTrackingManager_get_LeftHandPrefab_m5C0249EB39DC4CD303D25E50C8B90B3A0687584B_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, L_13, NULL);
		V_2 = L_14;
		// needRefreshR = rightPrefab != manager.rightHandPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___rightPrefab1;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___rightHandPrefab_10;
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, L_17, NULL);
		V_3 = L_18;
	}

IL_0051:
	{
		// manager.leftHandPrefab = leftPrefab;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_19 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ___leftPrefab0;
		NullCheck(L_19);
		L_19->___leftHandPrefab_9 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___leftHandPrefab_9), (void*)L_20);
		// manager.rightHandPrefab = rightPrefab;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_21 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ___rightPrefab1;
		NullCheck(L_21);
		L_21->___rightHandPrefab_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___rightHandPrefab_10), (void*)L_22);
		// if (needRefreshL) {
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_006f;
		}
	}
	{
		// manager.RefreshLeftHand();
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_24 = V_1;
		NullCheck(L_24);
		XRHandTrackingManager_RefreshLeftHand_m9E43F39043BD188526F3E596B395C02AE5421559(L_24, NULL);
		// manager.ToggleLeftHand(false);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_25 = V_1;
		NullCheck(L_25);
		XRHandTrackingManager_ToggleLeftHand_m6948AE61912764F2AB9867D3BBC660EFEE8E710D(L_25, (bool)0, NULL);
	}

IL_006f:
	{
		// if (needRefreshR) {
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		// manager.RefreshRightHand();
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_27 = V_1;
		NullCheck(L_27);
		XRHandTrackingManager_RefreshRightHand_m84139E3410038BA68E38C567EAD4CC9A8F4B0D00(L_27, NULL);
		// manager.ToggleRightHand(false);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_28 = V_1;
		NullCheck(L_28);
		XRHandTrackingManager_ToggleRightHand_mD11CE4A8B6D323121101877C2722E3AAD3AA8866(L_28, (bool)0, NULL);
	}

IL_007f:
	{
		// return manager;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_29 = V_1;
		return L_29;
	}

IL_0081:
	{
		// Debug.LogWarning("[XRHandTrackingManager] Hand tracking manager may not work correctly because it is not related to a ARSession/XROrigin");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral060C64C2425000E6745C2E563AEE7FEE879DA5BB, NULL);
		// var go = new GameObject("HandTrackingManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_30, _stringLiteral416BCF8B090CDC14EBE30BFB921F774F00DAFF4E, NULL);
		// return go.AddComponent<XRHandTrackingManager>();
		NullCheck(L_30);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_31;
		L_31 = GameObject_AddComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m38BABD6CA9D090FED9643EB47C88F9F23A4A6DF0(L_30, GameObject_AddComponent_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m38BABD6CA9D090FED9643EB47C88F9F23A4A6DF0_RuntimeMethod_var);
		return L_31;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::Destroy(QCHT.Interactions.Core.XRHandTrackingManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_Destroy_m50D52217B38D3AF78DD25D50AE15168546BC9718 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* ___manager0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m13A53826D2037FA5C4F49CE704D79AD64E4B7293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* G_B3_0 = NULL;
	{
		// manager = manager ? manager : FindObjectOfType<XRHandTrackingManager>();
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_0 = ___manager0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_2;
		L_2 = Object_FindObjectOfType_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m13A53826D2037FA5C4F49CE704D79AD64E4B7293(Object_FindObjectOfType_TisXRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB_m13A53826D2037FA5C4F49CE704D79AD64E4B7293_RuntimeMethod_var);
		G_B3_0 = L_2;
		goto IL_0010;
	}

IL_000f:
	{
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_3 = ___manager0;
		G_B3_0 = L_3;
	}

IL_0010:
	{
		___manager0 = G_B3_0;
		// if (manager == null) return;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_4 = ___manager0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		// if (manager == null) return;
		return;
	}

IL_001c:
	{
		// GameObject.Destroy(manager);
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_6 = ___manager0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::InstantiateHandTrackable(System.String,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_InstantiateHandTrackable_mC96881999EB5B17CC1659F9DC7DF80D5F06CAC91 (String_t* ___handName0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (prefab == null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___prefab1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_000b:
	{
		// if (prefab.scene.rootCount == 0 || !prefab.activeInHierarchy) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___prefab1;
		NullCheck(L_2);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_2, NULL);
		V_1 = L_3;
		int32_t L_4;
		L_4 = Scene_get_rootCount_mCEEBE76B883D2FCDC25AB8D2DEE565E696887D6B((&V_1), NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___prefab1;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_5, NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}

IL_0023:
	{
		// instance = Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___prefab1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_8;
		// instance.name = handName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		String_t* L_10 = ___handName0;
		NullCheck(L_9);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, L_10, NULL);
		goto IL_0035;
	}

IL_0033:
	{
		// instance = prefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___prefab1;
		V_0 = L_11;
	}

IL_0035:
	{
		// return instance;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.InputSystem.InputDevice QCHT.Interactions.Core.XRHandTrackingManager::AddHandDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* XRHandTrackingManager_AddHandDevice_m329F8782AD9308929C1AF5BA4AA172DAC8725569 (bool ___isLeft0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_AddDevice_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_m90BBC5DADD4D20460392433B340EF48023851D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1FE225CEDDEABD7A4CC52B13D132E0907AA5982);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* V_1 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var usage = isLeft ? CommonUsages.LeftHand : CommonUsages.RightHand;
		bool L_0 = ___isLeft0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_1 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___RightHand_25;
		G_B3_0 = L_1;
		goto IL_000f;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___LeftHand_24;
		G_B3_0 = L_2;
	}

IL_000f:
	{
		V_0 = G_B3_0;
		// var device = InputSystem.AddDevice<HandTrackingDevice>($"{nameof(HandTrackingDevice)} - {usage}");
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_3 = V_0;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_4 = L_3;
		RuntimeObject* L_5 = Box(InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral35D9703651C0B5FE577BAA089212BEF91D370ADB, _stringLiteralB1FE225CEDDEABD7A4CC52B13D132E0907AA5982, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_7;
		L_7 = InputSystem_AddDevice_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_m90BBC5DADD4D20460392433B340EF48023851D40(L_6, InputSystem_AddDevice_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_m90BBC5DADD4D20460392433B340EF48023851D40_RuntimeMethod_var);
		V_1 = L_7;
		// if (device != null) InputSystem.SetDeviceUsage(device, usage);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// if (device != null) InputSystem.SetDeviceUsage(device, usage);
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_9 = V_1;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_SetDeviceUsage_mEE432569109A001D84790EF9F5B3E69EC6BAB8EC(L_9, L_10, NULL);
	}

IL_0035:
	{
		// return device;
		HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* L_11 = V_1;
		return L_11;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::RemoveHandDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager_RemoveHandDevice_m15BDCB9914CA6C590F58721F13C23502CF47FD6A (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (device == null) return;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// if (device == null) return;
		return;
	}

IL_0004:
	{
		// InputSystem.RemoveDevice(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = ___device0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_mBA895DEE9FCFC53AC9040DE72860D95ABFB5E858(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean QCHT.Interactions.Core.XRHandTrackingManager::TryFindOrigin(UnityEngine.Transform&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandTrackingManager_TryFindOrigin_m83DA36DF3BD0C5522425814E86F660F47A888577 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* V_0 = NULL;
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* V_1 = NULL;
	{
		// var arOrigin = FindObjectOfType<ARSessionOrigin>(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0;
		L_0 = Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404((bool)1, Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEDFAB9F186B1D12008A5F9A51A106B0582F01404_RuntimeMethod_var);
		V_0 = L_0;
		// if (arOrigin != null) {
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// parent = arOrigin.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_3 = ___parent0;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// var xrOrigin = FindObjectOfType<XROrigin>(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_6;
		L_6 = Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B((bool)1, Object_FindObjectOfType_TisXROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_m424526A748B4EE62599E579DE43A65F1D76F933B_RuntimeMethod_var);
		V_1 = L_6;
		// if (xrOrigin != null) {
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_7 = V_1;
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// parent = xrOrigin.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_9 = ___parent0;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_11);
		// return true;
		return (bool)1;
	}

IL_0034:
	{
		// parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** L_12 = ___parent0;
		*((RuntimeObject**)L_12) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingManager__ctor_m98F711F2ADD108795114F810F178053B50879AE7 (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemLifeCycleManager_3__ctor_m76237597F4F60C966D6E8C4A90FBAAD14C33D1C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Pose[] _leftPoses = new Pose[(int)XrHandJoint.XR_HAND_JOINT_MAX];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_0 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____leftPoses_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftPoses_19), (void*)L_0);
		// private Pose[] _rightPoses = new Pose[(int)XrHandJoint.XR_HAND_JOINT_MAX];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____rightPoses_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightPoses_20), (void*)L_1);
		// private float[] _leftScales = new float[(int)XrHandJoint.XR_HAND_JOINT_MAX];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____leftScales_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftScales_21), (void*)L_2);
		// private float[] _rightScales = new float[(int)XrHandJoint.XR_HAND_JOINT_MAX];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____rightScales_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightScales_22), (void*)L_3);
		// private readonly Pose[] _convertedLeftPoses = new Pose[(int) XrHandJoint.XR_HAND_JOINT_MAX];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_4 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____convertedLeftPoses_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____convertedLeftPoses_23), (void*)L_4);
		// private readonly Pose[] _convertedRightPoses = new Pose[(int) XrHandJoint.XR_HAND_JOINT_MAX];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_5 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		__this->____convertedRightPoses_24 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____convertedRightPoses_24), (void*)L_5);
		XRSubsystemLifeCycleManager_3__ctor_m76237597F4F60C966D6E8C4A90FBAAD14C33D1C8(__this, XRSubsystemLifeCycleManager_3__ctor_m76237597F4F60C966D6E8C4A90FBAAD14C33D1C8_RuntimeMethod_var);
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
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor::Create(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystemDescriptor_Create_mFE15B2554F6E34CF4BF88B9572E887DD61824A21 (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRHandTrackingSubsystemDescriptor(cinfo));
		Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 L_0 = ___cinfo0;
		XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9* L_1 = (XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9*)il2cpp_codegen_object_new(XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRHandTrackingSubsystemDescriptor__ctor_mFB629D63901248A5489819B9C1C69D339E149F9E(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor::.ctor(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystemDescriptor__ctor_mFB629D63901248A5489819B9C1C69D339E149F9E (XRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9* __this, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m651B1759D57E7E00B2E596531C01EFA95293D3AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private XRHandTrackingSubsystemDescriptor(Cinfo cinfo) {
		SubsystemDescriptorWithProvider_2__ctor_m651B1759D57E7E00B2E596531C01EFA95293D3AD(__this, SubsystemDescriptorWithProvider_2__ctor_m651B1759D57E7E00B2E596531C01EFA95293D3AD_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_inline((&___cinfo0), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_inline((&___cinfo0), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_inline((&___cinfo0), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// }
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
// Conversion methods for marshalling of: QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshal_pinvoke(const Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6& unmarshaled, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshal_pinvoke_back(const Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_pinvoke& marshaled, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshal_pinvoke_cleanup(Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshal_com(const Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6& unmarshaled, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshal_com_back(const Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_com& marshaled, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshal_com_cleanup(Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_marshaled_com& marshaled)
{
}
// System.String QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m67DCB3B0F7C1FA86E9A9B61B19C1AD20C049EEEF (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m67DCB3B0F7C1FA86E9A9B61B19C1AD20C049EEEF_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	Cinfo_set_id_m67DCB3B0F7C1FA86E9A9B61B19C1AD20C049EEEF_inline(_thisAdjusted, ___value0, method);
}
// System.Type QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02 (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m3FE28A9DAE49659E3EDBB949BA88E7A7B0E3DF0B (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m3FE28A9DAE49659E3EDBB949BA88E7A7B0E3DF0B_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	Cinfo_set_providerType_m3FE28A9DAE49659E3EDBB949BA88E7A7B0E3DF0B_inline(_thisAdjusted, ___value0, method);
}
// System.Type QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5CA141654F5823923B1A7BC59A4234E62B5A543A (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m5CA141654F5823923B1A7BC59A4234E62B5A543A_AdjustorThunk (RuntimeObject* __this, Type_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m5CA141654F5823923B1A7BC59A4234E62B5A543A_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mCEA4AE9A0C062E0BFD38E0BDAC7B86A1B50A9A09 (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) 
{
	{
		// int hashCode = id.GetHashCode();
		String_t* L_0;
		L_0 = Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// hashCode = hashCode * 4999559 + providerType.GetHashCode();
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		// hashCode = hashCode * 4999559 + subsystemTypeOverride.GetHashCode();
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)4999559))), L_3)), ((int32_t)4999559))), L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mCEA4AE9A0C062E0BFD38E0BDAC7B86A1B50A9A09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mCEA4AE9A0C062E0BFD38E0BDAC7B86A1B50A9A09(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::Equals(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m6B56F66B82ED24F120D8E16002F8DF096C9E8A4F (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___other0, const RuntimeMethod* method) 
{
	{
		// return ReferenceEquals(id, other.id) && ReferenceEquals(providerType, other.providerType) && ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride);
		String_t* L_0;
		L_0 = Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_inline(__this, NULL);
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_inline((&___other0), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_inline(__this, NULL);
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_inline((&___other0), NULL);
		return (bool)((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m6B56F66B82ED24F120D8E16002F8DF096C9E8A4F_AdjustorThunk (RuntimeObject* __this, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___other0, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m6B56F66B82ED24F120D8E16002F8DF096C9E8A4F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1BD83E4BA100433E859DDC7181E9AAF2C9CA73AC (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m6B56F66B82ED24F120D8E16002F8DF096C9E8A4F(__this, ((*(Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*)((Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*)(Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*)UnBox(L_1, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1BD83E4BA100433E859DDC7181E9AAF2C9CA73AC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m1BD83E4BA100433E859DDC7181E9AAF2C9CA73AC(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::op_Equality(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mB7F94F1A2B56EA55C962B2C5B20741712BE68F62 (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___lhs0, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static bool operator==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m6B56F66B82ED24F120D8E16002F8DF096C9E8A4F((&___lhs0), L_0, NULL);
		return L_1;
	}
}
// System.Boolean QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo::op_Inequality(QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo,QCHT.Interactions.Core.XRHandTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mA6C5432A4154FBD228FCDB2E7F57221F50E961AE (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___lhs0, Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static bool operator!=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 L_0 = ___rhs1;
		bool L_1;
		L_1 = Cinfo_Equals_m6B56F66B82ED24F120D8E16002F8DF096C9E8A4F((&___lhs0), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem::GetHandData(System.Boolean,System.Boolean&,UnityEngine.Pose[]&,System.Single[]&,System.Int32&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystem_GetHandData_mC87C4331795FA3B7FC6BEDADC78030CF85A365B0 (XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* __this, bool ___isLeft0, bool* ___isTracked1, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** ___joints2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___scales3, int32_t* ___gesture4, float* ___gestureRatio5, float* ___flipRatio6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m2F37ECF5591E96FD9F73356898FAA10D10C7AAF5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => provider.GetHandData(isLeft, ref isTracked, ref joints, ref scales, ref gesture, ref gestureRatio, ref flipRatio);
		Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m2F37ECF5591E96FD9F73356898FAA10D10C7AAF5_inline(__this, SubsystemWithProvider_3_get_provider_m2F37ECF5591E96FD9F73356898FAA10D10C7AAF5_RuntimeMethod_var);
		bool L_1 = ___isLeft0;
		bool* L_2 = ___isTracked1;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_3 = ___joints2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_4 = ___scales3;
		int32_t* L_5 = ___gesture4;
		float* L_6 = ___gestureRatio5;
		float* L_7 = ___flipRatio6;
		NullCheck(L_0);
		VirtualActionInvoker7< bool, bool*, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB**, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**, int32_t*, float*, float* >::Invoke(8 /* System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider::GetHandData(System.Boolean,System.Boolean&,UnityEngine.Pose[]&,System.Single[]&,System.Int32&,System.Single&,System.Single&) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandTrackingSubsystem__ctor_m3BA2B53B127BE165ACBE3C156CDB6C18544543C1 (XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_mE51B09CBED0CE738490E4B75C8199D0FCCE6F500_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemWithProvider_3__ctor_mE51B09CBED0CE738490E4B75C8199D0FCCE6F500(__this, SubsystemWithProvider_3__ctor_mE51B09CBED0CE738490E4B75C8199D0FCCE6F500_RuntimeMethod_var);
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
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mBDF9176CBEC2FEC277E9EC42B3B1E7A36B8F3A56 (Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mA896863FB1CF3F48FF07BAD743EB668CC366D7B6 (Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m2F34A497E5091EB81D8358DA01370456E50B13FC (Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void QCHT.Interactions.Core.XRHandTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m739F00094227162EF56ADEEB8306FDBB540AE063 (Provider_tED1BFF09196FD5A944747495A5B51DA3876C762B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m10264E489A7433C75492A157E952C379E2F2C486_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m10264E489A7433C75492A157E952C379E2F2C486(__this, SubsystemProvider_1__ctor_m10264E489A7433C75492A157E952C379E2F2C486_RuntimeMethod_var);
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
// Conversion methods for marshalling of: QCHT.Interactions.Core.HandTrackingInputState
IL2CPP_EXTERN_C void HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshal_pinvoke(const HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A& unmarshaled, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_pinvoke& marshaled)
{
	marshaled.___trackingState_0 = unmarshaled.___trackingState_0;
	marshaled.___isTracked_1 = static_cast<int32_t>(unmarshaled.___isTracked_1);
	marshaled.___devicePosition_2 = unmarshaled.___devicePosition_2;
	marshaled.___deviceRotation_3 = unmarshaled.___deviceRotation_3;
	marshaled.___trigger_4 = unmarshaled.___trigger_4;
	marshaled.___selectPressed_5 = static_cast<int32_t>(unmarshaled.___selectPressed_5);
	marshaled.___grip_6 = unmarshaled.___grip_6;
	marshaled.___gripPressed_7 = static_cast<int32_t>(unmarshaled.___gripPressed_7);
	marshaled.___pointerPosition_8 = unmarshaled.___pointerPosition_8;
	marshaled.___pointerRotation_9 = unmarshaled.___pointerRotation_9;
}
IL2CPP_EXTERN_C void HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshal_pinvoke_back(const HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_pinvoke& marshaled, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A& unmarshaled)
{
	int32_t unmarshaledtrackingState_temp_0 = 0;
	unmarshaledtrackingState_temp_0 = marshaled.___trackingState_0;
	unmarshaled.___trackingState_0 = unmarshaledtrackingState_temp_0;
	bool unmarshaledisTracked_temp_1 = false;
	unmarshaledisTracked_temp_1 = static_cast<bool>(marshaled.___isTracked_1);
	unmarshaled.___isTracked_1 = unmarshaledisTracked_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddevicePosition_temp_2;
	memset((&unmarshaleddevicePosition_temp_2), 0, sizeof(unmarshaleddevicePosition_temp_2));
	unmarshaleddevicePosition_temp_2 = marshaled.___devicePosition_2;
	unmarshaled.___devicePosition_2 = unmarshaleddevicePosition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaleddeviceRotation_temp_3;
	memset((&unmarshaleddeviceRotation_temp_3), 0, sizeof(unmarshaleddeviceRotation_temp_3));
	unmarshaleddeviceRotation_temp_3 = marshaled.___deviceRotation_3;
	unmarshaled.___deviceRotation_3 = unmarshaleddeviceRotation_temp_3;
	float unmarshaledtrigger_temp_4 = 0.0f;
	unmarshaledtrigger_temp_4 = marshaled.___trigger_4;
	unmarshaled.___trigger_4 = unmarshaledtrigger_temp_4;
	bool unmarshaledselectPressed_temp_5 = false;
	unmarshaledselectPressed_temp_5 = static_cast<bool>(marshaled.___selectPressed_5);
	unmarshaled.___selectPressed_5 = unmarshaledselectPressed_temp_5;
	float unmarshaledgrip_temp_6 = 0.0f;
	unmarshaledgrip_temp_6 = marshaled.___grip_6;
	unmarshaled.___grip_6 = unmarshaledgrip_temp_6;
	bool unmarshaledgripPressed_temp_7 = false;
	unmarshaledgripPressed_temp_7 = static_cast<bool>(marshaled.___gripPressed_7);
	unmarshaled.___gripPressed_7 = unmarshaledgripPressed_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledpointerPosition_temp_8;
	memset((&unmarshaledpointerPosition_temp_8), 0, sizeof(unmarshaledpointerPosition_temp_8));
	unmarshaledpointerPosition_temp_8 = marshaled.___pointerPosition_8;
	unmarshaled.___pointerPosition_8 = unmarshaledpointerPosition_temp_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledpointerRotation_temp_9;
	memset((&unmarshaledpointerRotation_temp_9), 0, sizeof(unmarshaledpointerRotation_temp_9));
	unmarshaledpointerRotation_temp_9 = marshaled.___pointerRotation_9;
	unmarshaled.___pointerRotation_9 = unmarshaledpointerRotation_temp_9;
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Core.HandTrackingInputState
IL2CPP_EXTERN_C void HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshal_pinvoke_cleanup(HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QCHT.Interactions.Core.HandTrackingInputState
IL2CPP_EXTERN_C void HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshal_com(const HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A& unmarshaled, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_com& marshaled)
{
	marshaled.___trackingState_0 = unmarshaled.___trackingState_0;
	marshaled.___isTracked_1 = static_cast<int32_t>(unmarshaled.___isTracked_1);
	marshaled.___devicePosition_2 = unmarshaled.___devicePosition_2;
	marshaled.___deviceRotation_3 = unmarshaled.___deviceRotation_3;
	marshaled.___trigger_4 = unmarshaled.___trigger_4;
	marshaled.___selectPressed_5 = static_cast<int32_t>(unmarshaled.___selectPressed_5);
	marshaled.___grip_6 = unmarshaled.___grip_6;
	marshaled.___gripPressed_7 = static_cast<int32_t>(unmarshaled.___gripPressed_7);
	marshaled.___pointerPosition_8 = unmarshaled.___pointerPosition_8;
	marshaled.___pointerRotation_9 = unmarshaled.___pointerRotation_9;
}
IL2CPP_EXTERN_C void HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshal_com_back(const HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_com& marshaled, HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A& unmarshaled)
{
	int32_t unmarshaledtrackingState_temp_0 = 0;
	unmarshaledtrackingState_temp_0 = marshaled.___trackingState_0;
	unmarshaled.___trackingState_0 = unmarshaledtrackingState_temp_0;
	bool unmarshaledisTracked_temp_1 = false;
	unmarshaledisTracked_temp_1 = static_cast<bool>(marshaled.___isTracked_1);
	unmarshaled.___isTracked_1 = unmarshaledisTracked_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddevicePosition_temp_2;
	memset((&unmarshaleddevicePosition_temp_2), 0, sizeof(unmarshaleddevicePosition_temp_2));
	unmarshaleddevicePosition_temp_2 = marshaled.___devicePosition_2;
	unmarshaled.___devicePosition_2 = unmarshaleddevicePosition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaleddeviceRotation_temp_3;
	memset((&unmarshaleddeviceRotation_temp_3), 0, sizeof(unmarshaleddeviceRotation_temp_3));
	unmarshaleddeviceRotation_temp_3 = marshaled.___deviceRotation_3;
	unmarshaled.___deviceRotation_3 = unmarshaleddeviceRotation_temp_3;
	float unmarshaledtrigger_temp_4 = 0.0f;
	unmarshaledtrigger_temp_4 = marshaled.___trigger_4;
	unmarshaled.___trigger_4 = unmarshaledtrigger_temp_4;
	bool unmarshaledselectPressed_temp_5 = false;
	unmarshaledselectPressed_temp_5 = static_cast<bool>(marshaled.___selectPressed_5);
	unmarshaled.___selectPressed_5 = unmarshaledselectPressed_temp_5;
	float unmarshaledgrip_temp_6 = 0.0f;
	unmarshaledgrip_temp_6 = marshaled.___grip_6;
	unmarshaled.___grip_6 = unmarshaledgrip_temp_6;
	bool unmarshaledgripPressed_temp_7 = false;
	unmarshaledgripPressed_temp_7 = static_cast<bool>(marshaled.___gripPressed_7);
	unmarshaled.___gripPressed_7 = unmarshaledgripPressed_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledpointerPosition_temp_8;
	memset((&unmarshaledpointerPosition_temp_8), 0, sizeof(unmarshaledpointerPosition_temp_8));
	unmarshaledpointerPosition_temp_8 = marshaled.___pointerPosition_8;
	unmarshaled.___pointerPosition_8 = unmarshaledpointerPosition_temp_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledpointerRotation_temp_9;
	memset((&unmarshaledpointerRotation_temp_9), 0, sizeof(unmarshaledpointerRotation_temp_9));
	unmarshaledpointerRotation_temp_9 = marshaled.___pointerRotation_9;
	unmarshaled.___pointerRotation_9 = unmarshaledpointerRotation_temp_9;
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Core.HandTrackingInputState
IL2CPP_EXTERN_C void HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshal_com_cleanup(HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A_marshaled_com& marshaled)
{
}
// UnityEngine.InputSystem.Utilities.FourCC QCHT.Interactions.Core.HandTrackingInputState::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED HandTrackingInputState_get_format_mE42E6C395B45B106C577314C5237C660EB68F18F (HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* __this, const RuntimeMethod* method) 
{
	{
		// public FourCC format => new FourCC('Q', 'C', 'H', 'T');
		FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED L_0;
		memset((&L_0), 0, sizeof(L_0));
		FourCC__ctor_mFE3A3F80C6900CD18CB9BDD3C9B604823F2E791F((&L_0), ((int32_t)81), ((int32_t)67), ((int32_t)72), ((int32_t)84), /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED HandTrackingInputState_get_format_mE42E6C395B45B106C577314C5237C660EB68F18F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HandTrackingInputState_t863A0B1C191C55070B87B7E8CE610C9550B87F1A*>(__this + _offset);
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED _returnValue;
	_returnValue = HandTrackingInputState_get_format_mE42E6C395B45B106C577314C5237C660EB68F18F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.InputSystem.Controls.AxisControl QCHT.Interactions.Core.HandTrackingDevice::get_select()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* HandTrackingDevice_get_select_m6FD8FEE979DB899C45BDFCDC82D7349EC9C097BB (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl select { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CselectU3Ek__BackingField_44;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_select(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_set_select_mEC719363C29C00BCCE859E65865609FAEF1F2929 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisControl select { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___value0;
		__this->___U3CselectU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CselectU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl QCHT.Interactions.Core.HandTrackingDevice::get_selectPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* HandTrackingDevice_get_selectPressed_mA0C81F1F984DE65699298453E371D085DC3C7A18 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl selectPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CselectPressedU3Ek__BackingField_45;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_selectPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_set_selectPressed_m120217290209C8955EA4F18590AE6F403807AA78 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl selectPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CselectPressedU3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CselectPressedU3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl QCHT.Interactions.Core.HandTrackingDevice::get_grip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* HandTrackingDevice_get_grip_m3FC0F4B8801C329E24D411C7E715C5CAAE9DF7FE (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CgripU3Ek__BackingField_46;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_grip(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_set_grip_mA4A618FF0615706FDCA559788D6F49503B032500 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___value0;
		__this->___U3CgripU3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripU3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl QCHT.Interactions.Core.HandTrackingDevice::get_gripPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* HandTrackingDevice_get_gripPressed_m816E7F8E9D645122786BE48F533DDE307BDE5275 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CgripPressedU3Ek__BackingField_47;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_gripPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_set_gripPressed_m74B12514C2A5A59FCC1C77E23DFC695B640526BE (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CgripPressedU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripPressedU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control QCHT.Interactions.Core.HandTrackingDevice::get_pointerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* HandTrackingDevice_get_pointerPosition_mC9ECDD2CA8D179B8120515D6F843355513CFF3E5 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CpointerPositionU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_pointerPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_set_pointerPosition_mBF1D150D421C40821316CBA6296CF48E912AB313 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___value0;
		__this->___U3CpointerPositionU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerPositionU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl QCHT.Interactions.Core.HandTrackingDevice::get_pointerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* HandTrackingDevice_get_pointerRotation_m13AF1163F238BBDDB4F33BB53E483634A74928A6 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CpointerRotationU3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::set_pointerRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_set_pointerRotation_mB63FCB1FBCF42D59F734A38E14F8D498107B47FD (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___value0;
		__this->___U3CpointerRotationU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerRotationU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice__cctor_m72656AFFEC2D89B69BBC59C558F2231A4E019C39 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_mC0B790C91D677BA75C8E01CC0B60BE3648AF9265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD17B42C2B5CE9499E9A309128720C2F6F46200E);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InputSystem.RegisterLayout<HandTrackingDevice>(
		//     matches:
		//     new InputDeviceMatcher()
		//         .WithProduct(kDeviceName));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_1;
		L_1 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_0, _stringLiteralFD17B42C2B5CE9499E9A309128720C2F6F46200E, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_mC0B790C91D677BA75C8E01CC0B60BE3648AF9265((String_t*)NULL, L_2, InputSystem_RegisterLayout_TisHandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0_mC0B790C91D677BA75C8E01CC0B60BE3648AF9265_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_FinishSetup_mD72BF86C229A35C33369772DFB04ED21AC2240A2 (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		XRController_FinishSetup_mF6E943DE3B32052071293EC7F337E704717C2128(__this, NULL);
		// select = GetChildControl<AxisControl>("trigger");
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0;
		L_0 = InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841(__this, _stringLiteral9FE5967523CA0E49A247084021DB0C0C2C996FDF, InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		HandTrackingDevice_set_select_mEC719363C29C00BCCE859E65865609FAEF1F2929_inline(__this, L_0, NULL);
		// selectPressed = GetChildControl<ButtonControl>("triggerPressed");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral9C0461316058197D67FFB59CE6A345F2B7BEA590, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		HandTrackingDevice_set_selectPressed_m120217290209C8955EA4F18590AE6F403807AA78_inline(__this, L_1, NULL);
		// grip = GetChildControl<AxisControl>("grip");
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_2;
		L_2 = InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841(__this, _stringLiteral4FAF1332EAA22ED62546993B44D1AE07024AA9C9, InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		HandTrackingDevice_set_grip_mA4A618FF0615706FDCA559788D6F49503B032500_inline(__this, L_2, NULL);
		// gripPressed = GetChildControl<ButtonControl>("gripPressed");
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_3;
		L_3 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral836BEF03CDF7F78C55ADABFC8E7F1FC31387E456, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		HandTrackingDevice_set_gripPressed_m74B12514C2A5A59FCC1C77E23DFC695B640526BE_inline(__this, L_3, NULL);
		// pointerPosition = GetChildControl<Vector3Control>("pointerPosition");
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_4;
		L_4 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteralBAB78FE52E1FDB7FF399F8778E6696CD0042FF45, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		HandTrackingDevice_set_pointerPosition_mBF1D150D421C40821316CBA6296CF48E912AB313_inline(__this, L_4, NULL);
		// pointerRotation = GetChildControl<QuaternionControl>("pointerRotation");
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_5;
		L_5 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteralF6CFDC1274B766A282F7B3F8F7CCC8BDF8038D7B, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		HandTrackingDevice_set_pointerRotation_mB63FCB1FBCF42D59F734A38E14F8D498107B47FD_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::InitializeInPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice_InitializeInPlayer_m08EC0CAB81FEBC4ED2A3DC82062C58352BA75E22 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingDevice__ctor_mBD77A722B0BAA8BBA0FA993A443AE95C6379381A (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, const RuntimeMethod* method) 
{
	{
		XRController__ctor_mB780698DBF866160CF7C7D6198D115CE263593ED(__this, NULL);
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
// System.Boolean QCHT.Interactions.Core.HandTrackingFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandTrackingFeature_OnInstanceCreate_m4B15A1D8F86B4C796CFF692C1757E68D24B4F1FB (HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// return base.OnInstanceCreate(xrInstance);
		uint64_t L_0 = ___xrInstance0;
		bool L_1;
		L_1 = OpenXRFeature_OnInstanceCreate_m8A79D0660AD16403FFEE29D92DDD867B3732109D(__this, L_0, NULL);
		return L_1;
	}
}
// System.IntPtr QCHT.Interactions.Core.HandTrackingFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandTrackingFeature_HookGetInstanceProcAddr_m59428242ED67C649A17D8185B67551BB66D8E541 (HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085* __this, intptr_t ___func0, const RuntimeMethod* method) 
{
	{
		// protected override IntPtr HookGetInstanceProcAddr(IntPtr func) => QCHTOpenXRPlugin.GetInterceptedInstanceProcAddr(func);
		intptr_t L_0 = ___func0;
		intptr_t L_1;
		L_1 = QCHTOpenXRPlugin_GetInterceptedInstanceProcAddr_mD842FA7DE9B87704A5064EB34ECBF57F2D9EAB7B(L_0, NULL);
		return L_1;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingFeature::OnSubsystemCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_OnSubsystemCreate_m6ACF4CF0A89A9E2F5E8A32A304434C278D318FA4 (HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_CreateSubsystem_TisXRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m6B6F7678F9C383BA05847B982B0A51A6EFC72279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7CCB5DE756ACDB6722F098490487A178ED463E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemCreate() => CreateSubsystem<XRHandTrackingSubsystemDescriptor, XRHandTrackingSubsystem>(s_handTrackingSubsystemDescriptors, HandTrackingSubsystem.ID);
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_il2cpp_TypeInfo_var);
		List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7* L_0 = ((HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_il2cpp_TypeInfo_var))->___s_handTrackingSubsystemDescriptors_19;
		OpenXRFeature_CreateSubsystem_TisXRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m6B6F7678F9C383BA05847B982B0A51A6EFC72279(__this, L_0, _stringLiteralFE7CCB5DE756ACDB6722F098490487A178ED463E, OpenXRFeature_CreateSubsystem_TisXRHandTrackingSubsystemDescriptor_t46ED168ACFAC3A54DB0FC0A6F1891BC1C7EB8DF9_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m6B6F7678F9C383BA05847B982B0A51A6EFC72279_RuntimeMethod_var);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingFeature::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_OnSubsystemStop_mA1B43C49D68602B762FB7A16037EA68ECC5CEB5B (HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_StopSubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m5DCD58D311F5638F3D0E63B4EF4CC25ED7E490B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemStop() => StopSubsystem<XRHandTrackingSubsystem>();
		OpenXRFeature_StopSubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m5DCD58D311F5638F3D0E63B4EF4CC25ED7E490B7(__this, OpenXRFeature_StopSubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_m5DCD58D311F5638F3D0E63B4EF4CC25ED7E490B7_RuntimeMethod_var);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingFeature::OnSubsystemDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_OnSubsystemDestroy_m9C2FDBE9A1373E67927A3CD29A52222BEA8CF323 (HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_DestroySubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_mB92E18A5D342BBA79C6CB661027C43C0874B5572_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override void OnSubsystemDestroy() => DestroySubsystem<XRHandTrackingSubsystem>();
		OpenXRFeature_DestroySubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_mB92E18A5D342BBA79C6CB661027C43C0874B5572(__this, OpenXRFeature_DestroySubsystem_TisXRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562_mB92E18A5D342BBA79C6CB661027C43C0874B5572_RuntimeMethod_var);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature__ctor_mA02F7AC54BEADA093615FDD0FB490347F422142D (HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature__cctor_mB46D0076B9139B37BE18D857C196F3F1A1EA7D24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0238383518B03B78D7B6A8B031F6DB864EAC4BC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<XRHandTrackingSubsystemDescriptor> s_handTrackingSubsystemDescriptors = new List<XRHandTrackingSubsystemDescriptor>();
		List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7* L_0 = (List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7*)il2cpp_codegen_object_new(List_1_tC2C8798887D99E0CE9B88CEE833B2379D02EF0C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0238383518B03B78D7B6A8B031F6DB864EAC4BC5(L_0, List_1__ctor_m0238383518B03B78D7B6A8B031F6DB864EAC4BC5_RuntimeMethod_var);
		((HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_il2cpp_TypeInfo_var))->___s_handTrackingSubsystemDescriptors_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_tE470B3BD7A46F8C70F6DF636CAB8042AFB3EE085_il2cpp_TypeInfo_var))->___s_handTrackingSubsystemDescriptors_19), (void*)L_0);
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
// System.Void QCHT.Interactions.Core.QCHTAvatar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTAvatar_Awake_mE023C52923AA97D951E257EFA472E7808EFFFA70 (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) 
{
	{
		// if (!TryToGetHeadProvider())
		bool L_0;
		L_0 = QCHTAvatar_TryToGetHeadProvider_m8DD860CD9761916C00FA6D79E6AFB8F18C0BE095(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.QCHTAvatar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTAvatar_Start_mCBFED194790E77AF088B55C09DDCA50BAD37619D (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) 
{
	{
		// IgnoreAllCollisions();
		QCHTAvatar_IgnoreAllCollisions_mAA2261248F93CDF878D333195B1C6F8DBE95037C(__this, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.QCHTAvatar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTAvatar_Update_mB5CE9FC79A31077C355B9F1C83A44BFC6C0167A0 (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHeadProvider_t60DEE5233D93B8E55E5CAB4D61B269F4A40B1714_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!relativeToHead) return;
		bool L_0 = __this->___relativeToHead_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!relativeToHead) return;
		return;
	}

IL_0009:
	{
		// var t = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		// t.position = _headProvider.Head.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		RuntimeObject* L_3 = __this->____headProvider_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QCHT.Interactions.Core.IHeadProvider::get_Head() */, IHeadProvider_t60DEE5233D93B8E55E5CAB4D61B269F4A40B1714_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_5, NULL);
		// t.rotation = _headProvider.Head.rotation;
		RuntimeObject* L_6 = __this->____headProvider_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = InterfaceFuncInvoker0< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* >::Invoke(0 /* UnityEngine.Transform QCHT.Interactions.Core.IHeadProvider::get_Head() */, IHeadProvider_t60DEE5233D93B8E55E5CAB4D61B269F4A40B1714_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_8, NULL);
		// }
		return;
	}
}
// System.Boolean QCHT.Interactions.Core.QCHTAvatar::TryToGetHeadProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QCHTAvatar_TryToGetHeadProvider_m8DD860CD9761916C00FA6D79E6AFB8F18C0BE095 (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHeadProvider_t60DEE5233D93B8E55E5CAB4D61B269F4A40B1714_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* G_B1_1 = NULL;
	{
		// _headProvider = headProvider as IHeadProvider ?? QCHTManager.Instance;
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___headProvider_4;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IHeadProvider_t60DEE5233D93B8E55E5CAB4D61B269F4A40B1714_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0015;
		}
	}
	{
		QCHTManager_t7E2F1D01D3BD894C83D9E6CA57DEE29B360193F8* L_2;
		L_2 = QCHTManager_get_Instance_m89BEF50CB8C6BD0ACEE6B4B4E2C69F58F0C01996(NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0015:
	{
		NullCheck(G_B2_1);
		G_B2_1->____headProvider_6 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____headProvider_6), (void*)G_B2_0);
		// return _headProvider != null;
		RuntimeObject* L_3 = __this->____headProvider_6;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void QCHT.Interactions.Core.QCHTAvatar::IgnoreAllCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTAvatar_IgnoreAllCollisions_mAA2261248F93CDF878D333195B1C6F8DBE95037C (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_1 = NULL;
	int32_t V_2 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_3 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_6 = NULL;
	{
		// var colliders = GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_0;
		L_0 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var colA in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_1 = V_0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_003a;
	}

IL_000d:
	{
		// foreach (var colA in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// foreach (var colB in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_6 = V_0;
		V_4 = L_6;
		V_5 = 0;
		goto IL_002e;
	}

IL_0019:
	{
		// foreach (var colB in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_6 = L_10;
		// Physics.IgnoreCollision(colA, colB);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = V_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = V_6;
		Physics_IgnoreCollision_mFBAAD9B91D488802086C1A1C96447CE4C869211D(L_11, L_12, NULL);
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002e:
	{
		// foreach (var colB in colliders)
		int32_t L_14 = V_5;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_15 = V_4;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003a:
	{
		// foreach (var colA in colliders)
		int32_t L_17 = V_2;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.QCHTAvatar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTAvatar__ctor_m9964AAF854337DD4BE5825D7E5DC055C30241C26 (QCHTAvatar_t8465278E0DDAF70D7B0FC7D2D09204E7234809A4* __this, const RuntimeMethod* method) 
{
	{
		// private bool relativeToHead = true;
		__this->___relativeToHead_5 = (bool)1;
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
// System.IntPtr QCHT.Interactions.Core.QCHTOpenXRPlugin::GetInterceptedInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t QCHTOpenXRPlugin_GetInterceptedInstanceProcAddr_mD842FA7DE9B87704A5064EB34ECBF57F2D9EAB7B (intptr_t ___func0, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("QCHTOpenXRPlugin"), "GetInterceptedInstanceProcAddr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetInterceptedInstanceProcAddr)(___func0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___func0);
	#endif

	return returnValue;
}
// System.Int32 QCHT.Interactions.Core.QCHTOpenXRPlugin::StartHandTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QCHTOpenXRPlugin_StartHandTracking_m448378CC8332F9769DC441BF0220439E71BA634F (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("QCHTOpenXRPlugin"), "StartHandTracking", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StartHandTracking)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 QCHT.Interactions.Core.QCHTOpenXRPlugin::StopHandTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QCHTOpenXRPlugin_StopHandTracking_m1E96EDCF1109C48527692BB6FD5907FB23887547 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("QCHTOpenXRPlugin"), "StopHandTracking", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(StopHandTracking)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 QCHT.Interactions.Core.QCHTOpenXRPlugin::TryLocateHandJoints(QCHT.Interactions.Core.QCHTOpenXRPlugin/XrHandSide,System.Boolean&,QCHT.Interactions.Core.XrPose[],System.Single[],System.Int32&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QCHTOpenXRPlugin_TryLocateHandJoints_m9BA4FD8AA405253E5469E55371850B45A5A96496 (int32_t ___handedness0, bool* ___isTracked1, XrPoseU5BU5D_t621A2F97E4AFB92ECEFDCDFC03D2C6573519E7BE* ___handPoses2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___radius3, int32_t* ___gesture4, float* ___gestureRatio5, float* ___flipRatio6, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t*, XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D*, float*, int32_t*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t*) + sizeof(void*) + sizeof(void*) + sizeof(int32_t*) + sizeof(float*) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("QCHTOpenXRPlugin"), "TryLocateHandJoints", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___isTracked1' to native representation
	int32_t* ____isTracked1_marshaled = NULL;
	int32_t ____isTracked1_marshaled_dereferenced = 0;
	____isTracked1_marshaled_dereferenced = static_cast<int32_t>(*___isTracked1);
	____isTracked1_marshaled = &____isTracked1_marshaled_dereferenced;

	// Marshaling of parameter '___handPoses2' to native representation
	XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* ____handPoses2_marshaled = NULL;
	if (___handPoses2 != NULL)
	{
		____handPoses2_marshaled = reinterpret_cast<XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D*>((___handPoses2)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___radius3' to native representation
	float* ____radius3_marshaled = NULL;
	if (___radius3 != NULL)
	{
		____radius3_marshaled = reinterpret_cast<float*>((___radius3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_QCHTOpenXRPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TryLocateHandJoints)(___handedness0, ____isTracked1_marshaled, ____handPoses2_marshaled, ____radius3_marshaled, ___gesture4, ___gestureRatio5, ___flipRatio6);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___handedness0, ____isTracked1_marshaled, ____handPoses2_marshaled, ____radius3_marshaled, ___gesture4, ___gestureRatio5, ___flipRatio6);
	#endif

	// Marshaling of parameter '___isTracked1' back from native representation
	bool _____isTracked1_marshaled_unmarshaled_dereferenced = false;
	_____isTracked1_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____isTracked1_marshaled);
	*___isTracked1 = _____isTracked1_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void QCHT.Interactions.Core.QCHTOpenXRPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTOpenXRPlugin__ctor_m2D1D8E6191C68A5BA1D30659DA1EF4540A7A9AC7 (QCHTOpenXRPlugin_t9DFCA626C779EB6A9AD9AB56E0215C879F15E48F* __this, const RuntimeMethod* method) 
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
// System.Void QCHT.Interactions.Core.HandTrackingSimulationSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSimulationSubsystem_RegisterDescriptor_mA43671E4EA90575FA6520977517C4882C455C8EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB214A52E047699F73D4F15CE75B0D56C371B541C);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRHandTrackingSubsystemDescriptor.Create(new XRHandTrackingSubsystemDescriptor.Cinfo {
		//   id = ID,
		//   providerType = typeof(HandTrackingSimulationProvider),
		//   subsystemTypeOverride = typeof(HandTrackingSubsystem)
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6));
		Cinfo_set_id_m67DCB3B0F7C1FA86E9A9B61B19C1AD20C049EEEF_inline((&V_0), _stringLiteralB214A52E047699F73D4F15CE75B0D56C371B541C, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Cinfo_set_providerType_m3FE28A9DAE49659E3EDBB949BA88E7A7B0E3DF0B_inline((&V_0), L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (HandTrackingSubsystem_t7D4C77A54293A0053DA7C96098DCAEF4B65202A4_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Cinfo_set_subsystemTypeOverride_m5CA141654F5823923B1A7BC59A4234E62B5A543A_inline((&V_0), L_3, NULL);
		Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6 L_4 = V_0;
		XRHandTrackingSubsystemDescriptor_Create_mFE15B2554F6E34CF4BF88B9572E887DD61824A21(L_4, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSimulationSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSimulationSubsystem__ctor_m4D25D502B7BA09EC74050BB5BC69C96DBC5D9D3F (HandTrackingSimulationSubsystem_t187505919814DEA2A6D38A17E5516B55B0B210C9* __this, const RuntimeMethod* method) 
{
	{
		XRHandTrackingSubsystem__ctor_m3BA2B53B127BE165ACBE3C156CDB6C18544543C1(__this, NULL);
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
// System.Void QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::AssignPose(UnityEngine.Pose[]&,QCHT.Interactions.Hands.HandPose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSimulationProvider_AssignPose_m3D0C4B8EC03E2AF46F33FF8BA65489B3A94B066B (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** ___joints0, HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___poseAsset1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___wrist2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* V_0 = NULL;
	int32_t V_1 = 0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var poses = ConvertHandPoseToOpenXRData(poseAsset);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_0 = ___poseAsset1;
		il2cpp_codegen_runtime_class_init_inline(HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_1;
		L_1 = HandTrackingSimulationProvider_ConvertHandPoseToOpenXRData_m0C7D34EFFCB8D547F5C7B0837D67E000A408E933(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < poses.Length; i++) {
		V_1 = 0;
		goto IL_0069;
	}

IL_000b:
	{
		// var pose = poses[i];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// pose.rotation = wrist.rotation * pose.rotation * Quaternion.AngleAxis(-90f, Vector3.right);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ___wrist2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6.___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((-90.0f), L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_12, NULL);
		(&V_2)->___rotation_1 = L_13;
		// pose.position += wrist.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&(&V_2)->___position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_15);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17 = ___wrist2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_18, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_15 = L_19;
		// joints[i] = pose;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_20 = ___joints0;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_21 = *((PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB**)L_20);
		int32_t L_22 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_23);
		// for (var i = 0; i < poses.Length; i++) {
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0069:
	{
		// for (var i = 0; i < poses.Length; i++) {
		int32_t L_25 = V_1;
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::GetPoseAsset(QCHT.Interactions.Hands.XrHandGesture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* HandTrackingSimulationProvider_GetPoseAsset_mF2E3BFEDEDA56B528F94CF3A20A1BE6B19609F6E (int32_t ___gesture0, bool ___isLeft1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* V_0 = NULL;
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* G_B5_0 = NULL;
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* G_B9_0 = NULL;
	HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* G_B13_0 = NULL;
	{
		// return gesture switch {
		//   XrHandGesture.XR_HAND_PINCH => isLeft ? XRHandSimulationHandPosesSettings.Instance.leftPinchHand : XRHandSimulationHandPosesSettings.Instance.rightPinchHand,
		//   XrHandGesture.XR_HAND_GRAB => isLeft ? XRHandSimulationHandPosesSettings.Instance.leftGrabHand : XRHandSimulationHandPosesSettings.Instance.rightGrabHand,
		//   _ => isLeft ? XRHandSimulationHandPosesSettings.Instance.leftOpenHand : XRHandSimulationHandPosesSettings.Instance.rightOpenHand
		// };
		int32_t L_0 = ___gesture0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = ___gesture0;
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_0040;
		}
	}
	{
		// XrHandGesture.XR_HAND_PINCH => isLeft ? XRHandSimulationHandPosesSettings.Instance.leftPinchHand : XRHandSimulationHandPosesSettings.Instance.rightPinchHand,
		bool L_2 = ___isLeft1;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* L_3;
		L_3 = ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03(ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var);
		NullCheck(L_3);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_4 = L_3->___rightPinchHand_22;
		G_B5_0 = L_4;
		goto IL_0021;
	}

IL_0017:
	{
		XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* L_5;
		L_5 = ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03(ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var);
		NullCheck(L_5);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_6 = L_5->___leftPinchHand_19;
		G_B5_0 = L_6;
	}

IL_0021:
	{
		V_0 = G_B5_0;
		goto IL_005a;
	}

IL_0024:
	{
		// XrHandGesture.XR_HAND_GRAB => isLeft ? XRHandSimulationHandPosesSettings.Instance.leftGrabHand : XRHandSimulationHandPosesSettings.Instance.rightGrabHand,
		bool L_7 = ___isLeft1;
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* L_8;
		L_8 = ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03(ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var);
		NullCheck(L_8);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_9 = L_8->___rightGrabHand_23;
		G_B9_0 = L_9;
		goto IL_003d;
	}

IL_0033:
	{
		XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* L_10;
		L_10 = ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03(ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var);
		NullCheck(L_10);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_11 = L_10->___leftGrabHand_20;
		G_B9_0 = L_11;
	}

IL_003d:
	{
		V_0 = G_B9_0;
		goto IL_005a;
	}

IL_0040:
	{
		// _ => isLeft ? XRHandSimulationHandPosesSettings.Instance.leftOpenHand : XRHandSimulationHandPosesSettings.Instance.rightOpenHand
		bool L_12 = ___isLeft1;
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* L_13;
		L_13 = ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03(ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var);
		NullCheck(L_13);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_14 = L_13->___rightOpenHand_21;
		G_B13_0 = L_14;
		goto IL_0059;
	}

IL_004f:
	{
		XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* L_15;
		L_15 = ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03(ScriptableSettings_1_get_Instance_mC0148BF4881D5155E032978C87A08A2F46692B03_RuntimeMethod_var);
		NullCheck(L_15);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_16 = L_15->___leftOpenHand_18;
		G_B13_0 = L_16;
	}

IL_0059:
	{
		V_0 = G_B13_0;
	}

IL_005a:
	{
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_17 = V_0;
		return L_17;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::GetHandData(System.Boolean,System.Boolean&,UnityEngine.Pose[]&,System.Single[]&,System.Int32&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSimulationProvider_GetHandData_m849CBDF93C64D72007132A32FC615C4A57094D99 (HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75* __this, bool ___isLeft0, bool* ___isTracked1, PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** ___joints2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___scales3, int32_t* ___gesture4, float* ___gestureRatio5, float* ___flipRatio6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m0EE80E100B4444265310092FE80886EDB75C3519_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m11CFE84A67588F56C06C437949DF6C5CD88FE792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_GetDevice_TisXRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA_mEF924AE994CA96B0EAD10F9CE656777278A45FD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* V_0 = NULL;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* G_B3_0 = NULL;
	{
		// var ctrl = isLeft ? InputSystem.GetDevice<XRSimulatedController>(CommonUsages.LeftHand) : InputSystem.GetDevice<XRSimulatedController>(CommonUsages.RightHand);
		bool L_0 = ___isLeft0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_1 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___RightHand_25;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_2;
		L_2 = InputSystem_GetDevice_TisXRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA_mEF924AE994CA96B0EAD10F9CE656777278A45FD7(L_1, InputSystem_GetDevice_TisXRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA_mEF924AE994CA96B0EAD10F9CE656777278A45FD7_RuntimeMethod_var);
		G_B3_0 = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_3 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___LeftHand_24;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_4;
		L_4 = InputSystem_GetDevice_TisXRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA_mEF924AE994CA96B0EAD10F9CE656777278A45FD7(L_3, InputSystem_GetDevice_TisXRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA_mEF924AE994CA96B0EAD10F9CE656777278A45FD7_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_0019:
	{
		V_0 = G_B3_0;
		// if (ctrl == null) {
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_5 = V_0;
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		// AssignPose(ref joints, GetPoseAsset(XrHandGesture.XR_HAND_OPEN_HAND, isLeft), Pose.identity);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_6 = ___joints2;
		bool L_7 = ___isLeft0;
		il2cpp_codegen_runtime_class_init_inline(HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_8;
		L_8 = HandTrackingSimulationProvider_GetPoseAsset_mF2E3BFEDEDA56B528F94CF3A20A1BE6B19609F6E(0, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		HandTrackingSimulationProvider_AssignPose_m3D0C4B8EC03E2AF46F33FF8BA65489B3A94B066B(L_6, L_8, L_9, NULL);
		// isTracked = true;
		bool* L_10 = ___isTracked1;
		*((int8_t*)L_10) = (int8_t)1;
		// return;
		return;
	}

IL_0033:
	{
		// isTracked = ctrl.isTracked.IsPressed();
		bool* L_11 = ___isTracked1;
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_12 = V_0;
		NullCheck(L_12);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_13;
		L_13 = TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline(L_12, NULL);
		bool L_14;
		L_14 = InputControlExtensions_IsPressed_m27B19824E37A51A57A0D05D7EDE767653427DBAA(L_13, (0.0f), NULL);
		*((int8_t*)L_11) = (int8_t)L_14;
		// if (ctrl.trigger.IsPressed()) gesture = (int) XrHandGesture.XR_HAND_PINCH;
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_15 = V_0;
		NullCheck(L_15);
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_16;
		L_16 = XRSimulatedController_get_trigger_m27D6198CE632235EAD8D1F4718331303C51F1875_inline(L_15, NULL);
		bool L_17;
		L_17 = InputControlExtensions_IsPressed_m27B19824E37A51A57A0D05D7EDE767653427DBAA(L_16, (0.0f), NULL);
		if (!L_17)
		{
			goto IL_005d;
		}
	}
	{
		// if (ctrl.trigger.IsPressed()) gesture = (int) XrHandGesture.XR_HAND_PINCH;
		int32_t* L_18 = ___gesture4;
		*((int32_t*)L_18) = (int32_t)7;
		goto IL_0079;
	}

IL_005d:
	{
		// else if (ctrl.grip.IsPressed()) gesture = (int) XrHandGesture.XR_HAND_GRAB;
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_19 = V_0;
		NullCheck(L_19);
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_20;
		L_20 = XRSimulatedController_get_grip_m7A18FD9D5A4568D9798C26EEDA57C1DE9DE3CB25_inline(L_19, NULL);
		bool L_21;
		L_21 = InputControlExtensions_IsPressed_m27B19824E37A51A57A0D05D7EDE767653427DBAA(L_20, (0.0f), NULL);
		if (!L_21)
		{
			goto IL_0075;
		}
	}
	{
		// else if (ctrl.grip.IsPressed()) gesture = (int) XrHandGesture.XR_HAND_GRAB;
		int32_t* L_22 = ___gesture4;
		*((int32_t*)L_22) = (int32_t)2;
		goto IL_0079;
	}

IL_0075:
	{
		// else gesture = (int) XrHandGesture.XR_HAND_OPEN_HAND;
		int32_t* L_23 = ___gesture4;
		*((int32_t*)L_23) = (int32_t)0;
	}

IL_0079:
	{
		// var pose = new Pose(ctrl.devicePosition.ReadValue(), ctrl.deviceRotation.ReadValue());
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_24 = V_0;
		NullCheck(L_24);
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_25;
		L_25 = TrackedDevice_get_devicePosition_mF2A0B044A244D1A63ECD32AE48E42E3F24F0E84D_inline(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = InputControl_1_ReadValue_m11CFE84A67588F56C06C437949DF6C5CD88FE792(L_25, InputControl_1_ReadValue_m11CFE84A67588F56C06C437949DF6C5CD88FE792_RuntimeMethod_var);
		XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* L_27 = V_0;
		NullCheck(L_27);
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_28;
		L_28 = TrackedDevice_get_deviceRotation_m1A3BD5236736A1D4B5A60EDF72F231AA0A6FEF17_inline(L_27, NULL);
		NullCheck(L_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = InputControl_1_ReadValue_m0EE80E100B4444265310092FE80886EDB75C3519(L_28, InputControl_1_ReadValue_m0EE80E100B4444265310092FE80886EDB75C3519_RuntimeMethod_var);
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_1), L_26, L_29, NULL);
		// AssignPose(ref joints, GetPoseAsset((XrHandGesture) gesture, isLeft), pose);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB** L_30 = ___joints2;
		int32_t* L_31 = ___gesture4;
		int32_t L_32 = *((int32_t*)L_31);
		bool L_33 = ___isLeft0;
		il2cpp_codegen_runtime_class_init_inline(HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var);
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_34;
		L_34 = HandTrackingSimulationProvider_GetPoseAsset_mF2E3BFEDEDA56B528F94CF3A20A1BE6B19609F6E(L_32, L_33, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_35 = V_1;
		HandTrackingSimulationProvider_AssignPose_m3D0C4B8EC03E2AF46F33FF8BA65489B3A94B066B(L_30, L_34, L_35, NULL);
		// scales = s_scales;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_36 = ___scales3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = ((HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var))->___s_scales_1;
		*((RuntimeObject**)L_36) = (RuntimeObject*)L_37;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_36, (void*)(RuntimeObject*)L_37);
		// }
		return;
	}
}
// UnityEngine.Pose[] QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::ConvertHandPoseToOpenXRData(QCHT.Interactions.Hands.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* HandTrackingSimulationProvider_ConvertHandPoseToOpenXRData_m0C7D34EFFCB8D547F5C7B0837D67E000A408E933 (HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* ___pose0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pose == null) return new Pose [(int) XrHandJoint.XR_HAND_JOINT_MAX];
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_0 = ___pose0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (pose == null) return new Pose [(int) XrHandJoint.XR_HAND_JOINT_MAX];
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_2 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		return L_2;
	}

IL_0011:
	{
		// return new Pose[] {
		//   new Pose(pose.Palm.Position, pose.Palm.Rotation),
		//   new Pose(pose.Root.Position, pose.Root.Rotation),
		//   new Pose(pose.Thumb.BaseData.Position, pose.Thumb.BaseData.Rotation),
		//   new Pose(pose.Thumb.MiddleData.Position, pose.Thumb.MiddleData.Rotation),
		//   new Pose(pose.Thumb.TopData.Position, pose.Thumb.TopData.Rotation),
		//   new Pose(), //fake
		//   new Pose(), //fake
		//   new Pose(pose.Index.BaseData.Position, pose.Index.BaseData.Rotation),
		//   new Pose(pose.Index.MiddleData.Position, pose.Index.MiddleData.Rotation),
		//   new Pose(pose.Index.TopData.Position, pose.Index.TopData.Rotation),
		//   new Pose(), //fake
		//   new Pose(), //fake
		//   new Pose(pose.Middle.BaseData.Position, pose.Middle.BaseData.Rotation),
		//   new Pose(pose.Middle.MiddleData.Position, pose.Middle.MiddleData.Rotation),
		//   new Pose(pose.Middle.TopData.Position, pose.Middle.TopData.Rotation),
		//   new Pose(), //fake
		//   new Pose(), //fake
		//   new Pose(pose.Ring.BaseData.Position, pose.Ring.BaseData.Rotation),
		//   new Pose(pose.Ring.MiddleData.Position, pose.Ring.MiddleData.Rotation),
		//   new Pose(pose.Ring.TopData.Position, pose.Ring.TopData.Rotation),
		//   new Pose(), //fake
		//   new Pose(), //fake
		//   new Pose(pose.Pinky.BaseData.Position, pose.Pinky.BaseData.Rotation),
		//   new Pose(pose.Pinky.MiddleData.Position, pose.Pinky.MiddleData.Rotation),
		//   new Pose(pose.Pinky.TopData.Position, pose.Pinky.TopData.Rotation),
		//   new Pose() //fake
		// };
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_3 = (PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB*)SZArrayNew(PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_4 = L_3;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_5 = ___pose0;
		NullCheck(L_5);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_6 = (&L_5->___Palm_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_8 = ___pose0;
		NullCheck(L_8);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_9 = (&L_8->___Palm_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_11), L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_11);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_12 = L_4;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_13 = ___pose0;
		NullCheck(L_13);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_14 = (&L_13->___Root_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_16 = ___pose0;
		NullCheck(L_16);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_17 = (&L_16->___Root_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_19), L_15, L_18, /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_19);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_20 = L_12;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_21 = ___pose0;
		NullCheck(L_21);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_22 = (&L_21->___Thumb_9);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_23 = (&L_22->___BaseData_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_25 = ___pose0;
		NullCheck(L_25);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_26 = (&L_25->___Thumb_9);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_27 = (&L_26->___BaseData_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = L_27->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_29), L_24, L_28, /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_29);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_30 = L_20;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_31 = ___pose0;
		NullCheck(L_31);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_32 = (&L_31->___Thumb_9);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_33 = (&L_32->___MiddleData_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_35 = ___pose0;
		NullCheck(L_35);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_36 = (&L_35->___Thumb_9);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_37 = (&L_36->___MiddleData_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = L_37->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_39), L_34, L_38, /*hidden argument*/NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_39);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_40 = L_30;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_41 = ___pose0;
		NullCheck(L_41);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_42 = (&L_41->___Thumb_9);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_43 = (&L_42->___TopData_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = L_43->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_45 = ___pose0;
		NullCheck(L_45);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_46 = (&L_45->___Thumb_9);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_47 = (&L_46->___TopData_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = L_47->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_49), L_44, L_48, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(4), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_49);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_50 = L_40;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_51 = ___pose0;
		NullCheck(L_51);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_52 = (&L_51->___Index_10);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_53 = (&L_52->___BaseData_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_55 = ___pose0;
		NullCheck(L_55);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_56 = (&L_55->___Index_10);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_57 = (&L_56->___BaseData_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = L_57->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_59), L_54, L_58, /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(7), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_59);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_60 = L_50;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_61 = ___pose0;
		NullCheck(L_61);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_62 = (&L_61->___Index_10);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_63 = (&L_62->___MiddleData_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = L_63->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_65 = ___pose0;
		NullCheck(L_65);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_66 = (&L_65->___Index_10);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_67 = (&L_66->___MiddleData_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_68 = L_67->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_69), L_64, L_68, /*hidden argument*/NULL);
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(8), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_69);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_70 = L_60;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_71 = ___pose0;
		NullCheck(L_71);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_72 = (&L_71->___Index_10);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_73 = (&L_72->___TopData_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = L_73->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_75 = ___pose0;
		NullCheck(L_75);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_76 = (&L_75->___Index_10);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_77 = (&L_76->___TopData_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_78 = L_77->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_79), L_74, L_78, /*hidden argument*/NULL);
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_79);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_80 = L_70;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_81 = ___pose0;
		NullCheck(L_81);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_82 = (&L_81->___Middle_11);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_83 = (&L_82->___BaseData_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = L_83->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_85 = ___pose0;
		NullCheck(L_85);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_86 = (&L_85->___Middle_11);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_87 = (&L_86->___BaseData_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88 = L_87->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_89), L_84, L_88, /*hidden argument*/NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_89);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_90 = L_80;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_91 = ___pose0;
		NullCheck(L_91);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_92 = (&L_91->___Middle_11);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_93 = (&L_92->___MiddleData_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = L_93->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_95 = ___pose0;
		NullCheck(L_95);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_96 = (&L_95->___Middle_11);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_97 = (&L_96->___MiddleData_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98 = L_97->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_99;
		memset((&L_99), 0, sizeof(L_99));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_99), L_94, L_98, /*hidden argument*/NULL);
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_99);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_100 = L_90;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_101 = ___pose0;
		NullCheck(L_101);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_102 = (&L_101->___Middle_11);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_103 = (&L_102->___TopData_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = L_103->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_105 = ___pose0;
		NullCheck(L_105);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_106 = (&L_105->___Middle_11);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_107 = (&L_106->___TopData_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_108 = L_107->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_109), L_104, L_108, /*hidden argument*/NULL);
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_109);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_110 = L_100;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_111 = ___pose0;
		NullCheck(L_111);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_112 = (&L_111->___Ring_12);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_113 = (&L_112->___BaseData_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = L_113->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_115 = ___pose0;
		NullCheck(L_115);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_116 = (&L_115->___Ring_12);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_117 = (&L_116->___BaseData_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_118 = L_117->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_119;
		memset((&L_119), 0, sizeof(L_119));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_119), L_114, L_118, /*hidden argument*/NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_119);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_120 = L_110;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_121 = ___pose0;
		NullCheck(L_121);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_122 = (&L_121->___Ring_12);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_123 = (&L_122->___MiddleData_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = L_123->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_125 = ___pose0;
		NullCheck(L_125);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_126 = (&L_125->___Ring_12);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_127 = (&L_126->___MiddleData_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_128 = L_127->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_129;
		memset((&L_129), 0, sizeof(L_129));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_129), L_124, L_128, /*hidden argument*/NULL);
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_129);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_130 = L_120;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_131 = ___pose0;
		NullCheck(L_131);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_132 = (&L_131->___Ring_12);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_133 = (&L_132->___TopData_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = L_133->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_135 = ___pose0;
		NullCheck(L_135);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_136 = (&L_135->___Ring_12);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_137 = (&L_136->___TopData_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_138 = L_137->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_139;
		memset((&L_139), 0, sizeof(L_139));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_139), L_134, L_138, /*hidden argument*/NULL);
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_139);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_140 = L_130;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_141 = ___pose0;
		NullCheck(L_141);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_142 = (&L_141->___Pinky_13);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_143 = (&L_142->___BaseData_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = L_143->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_145 = ___pose0;
		NullCheck(L_145);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_146 = (&L_145->___Pinky_13);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_147 = (&L_146->___BaseData_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_148 = L_147->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_149;
		memset((&L_149), 0, sizeof(L_149));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_149), L_144, L_148, /*hidden argument*/NULL);
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_149);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_150 = L_140;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_151 = ___pose0;
		NullCheck(L_151);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_152 = (&L_151->___Pinky_13);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_153 = (&L_152->___MiddleData_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = L_153->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_155 = ___pose0;
		NullCheck(L_155);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_156 = (&L_155->___Pinky_13);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_157 = (&L_156->___MiddleData_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_158 = L_157->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_159;
		memset((&L_159), 0, sizeof(L_159));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_159), L_154, L_158, /*hidden argument*/NULL);
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_159);
		PoseU5BU5D_tFC818445A5F54FE4CD8B53D645FF0AD0E2A133EB* L_160 = L_150;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_161 = ___pose0;
		NullCheck(L_161);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_162 = (&L_161->___Pinky_13);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_163 = (&L_162->___TopData_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = L_163->___Position_5;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_165 = ___pose0;
		NullCheck(L_165);
		FingerData_tE4DC3740832B6166B4D3FF97B60B0605BD7EFB88* L_166 = (&L_165->___Pinky_13);
		BoneData_tF94BE196097BD66EC4B529397521E56086E4064C* L_167 = (&L_166->___TopData_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_168 = L_167->___Rotation_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_169;
		memset((&L_169), 0, sizeof(L_169));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_169), L_164, L_168, /*hidden argument*/NULL);
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)L_169);
		return L_160;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSimulationProvider__ctor_mAF43F7476C38692BFB3210738BF7285D15E6C9A4 (HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75* __this, const RuntimeMethod* method) 
{
	{
		Provider__ctor_m739F00094227162EF56ADEEB8306FDBB540AE063(__this, NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Core.HandTrackingSimulationSubsystem/HandTrackingSimulationProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingSimulationProvider__cctor_m583AAFA3E6A67C2EDFCAEBD6978DE0EDD0E29A2A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Repeat_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m88D8BFF47C137D3847FABBBA41FE5A0FFBBAD090_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly float[] s_scales = Enumerable.Repeat(1f, (int) XrHandJoint.XR_HAND_JOINT_MAX).ToArray();
		RuntimeObject* L_0;
		L_0 = Enumerable_Repeat_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m88D8BFF47C137D3847FABBBA41FE5A0FFBBAD090((1.0f), ((int32_t)26), Enumerable_Repeat_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m88D8BFF47C137D3847FABBBA41FE5A0FFBBAD090_RuntimeMethod_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1;
		L_1 = Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1(L_0, Enumerable_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mF0AED1993946FF775115C47514B29636472220A1_RuntimeMethod_var);
		((HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var))->___s_scales_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingSimulationProvider_t68F81B3B5ECD5CA0EE127BF5906CC77C394EBC75_il2cpp_TypeInfo_var))->___s_scales_1), (void*)L_1);
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
// System.Void QCHT.Interactions.Core.XRHandSimulationHandPosesSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSimulationHandPosesSettings__ctor_m0CB2B9F507952E5BB9A120680ECCC2030C0C4772 (XRHandSimulationHandPosesSettings_t27C4A9B2CB9811BD9BB85B243169850AEB8094AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableSettings_1__ctor_m387C9BBF83A353BB7BCD71E17610C345BF3ABDC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableSettings_1__ctor_m387C9BBF83A353BB7BCD71E17610C345BF3ABDC5(__this, ScriptableSettings_1__ctor_m387C9BBF83A353BB7BCD71E17610C345BF3ABDC5_RuntimeMethod_var);
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
// System.Void QCHT.Interactions.Core.XrPose::.ctor(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrPose__ctor_mE69C9C2AB7C2DA475F4B876FF8D3886B04C9ADA0 (XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) 
{
	{
		// _orientation = new XrQuaternion(pose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___pose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0.___rotation_1;
		XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B L_2;
		memset((&L_2), 0, sizeof(L_2));
		XrQuaternion__ctor_m27EED99CACED957DF3CB347ED55752DDC20C905C((&L_2), L_1, /*hidden argument*/NULL);
		__this->____orientation_0 = L_2;
		// _position = new XrVector3(pose.position);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_0;
		XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C L_5;
		memset((&L_5), 0, sizeof(L_5));
		XrVector3__ctor_m4B1418C4EDEB95638B11A336CB6FAEADAF7ABDFD((&L_5), L_4, /*hidden argument*/NULL);
		__this->____position_1 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrPose__ctor_mE69C9C2AB7C2DA475F4B876FF8D3886B04C9ADA0_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method)
{
	XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D*>(__this + _offset);
	XrPose__ctor_mE69C9C2AB7C2DA475F4B876FF8D3886B04C9ADA0(_thisAdjusted, ___pose0, method);
}
// System.Void QCHT.Interactions.Core.XrPose::.ctor(QCHT.Interactions.Core.XrQuaternion,QCHT.Interactions.Core.XrVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrPose__ctor_m7F008699FA092A9CC65EA7CE9F069D49372820C4 (XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* __this, XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B ___orientation0, XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C ___position1, const RuntimeMethod* method) 
{
	{
		// _orientation = orientation;
		XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B L_0 = ___orientation0;
		__this->____orientation_0 = L_0;
		// _position = position;
		XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C L_1 = ___position1;
		__this->____position_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrPose__ctor_m7F008699FA092A9CC65EA7CE9F069D49372820C4_AdjustorThunk (RuntimeObject* __this, XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B ___orientation0, XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C ___position1, const RuntimeMethod* method)
{
	XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D*>(__this + _offset);
	XrPose__ctor_m7F008699FA092A9CC65EA7CE9F069D49372820C4(_thisAdjusted, ___orientation0, ___position1, method);
}
// UnityEngine.Pose QCHT.Interactions.Core.XrPose::ToPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XrPose_ToPose_mE2408D52A7F021B43BA1180DEF482D8FFB9FA680 (XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* __this, const RuntimeMethod* method) 
{
	{
		// return new Pose(_position.ToVector3(), _orientation.ToQuaternion());
		XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C* L_0 = (&__this->____position_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = XrVector3_ToVector3_mBF030D761C60F11DF70D7B101A8C649501093B8E(L_0, NULL);
		XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B* L_2 = (&__this->____orientation_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = XrQuaternion_ToQuaternion_mC22FD8D96162B213B722184B59404914D5F24A92(L_2, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XrPose_ToPose_mE2408D52A7F021B43BA1180DEF482D8FFB9FA680_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrPose_t3811B54777E546707DA1357939BCB4FDD4D0D87D*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XrPose_ToPose_mE2408D52A7F021B43BA1180DEF482D8FFB9FA680(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QCHT.Interactions.Core.XrQuaternion::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrQuaternion__ctor_m27EED99CACED957DF3CB347ED55752DDC20C905C (XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method) 
{
	{
		// _x = quaternion.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___quaternion0;
		float L_1 = L_0.___x_0;
		__this->____x_0 = L_1;
		// _y = quaternion.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___quaternion0;
		float L_3 = L_2.___y_1;
		__this->____y_1 = L_3;
		// _z = -quaternion.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___quaternion0;
		float L_5 = L_4.___z_2;
		__this->____z_2 = ((-L_5));
		// _w = -quaternion.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___quaternion0;
		float L_7 = L_6.___w_3;
		__this->____w_3 = ((-L_7));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrQuaternion__ctor_m27EED99CACED957DF3CB347ED55752DDC20C905C_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___quaternion0, const RuntimeMethod* method)
{
	XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B*>(__this + _offset);
	XrQuaternion__ctor_m27EED99CACED957DF3CB347ED55752DDC20C905C(_thisAdjusted, ___quaternion0, method);
}
// QCHT.Interactions.Core.XrQuaternion QCHT.Interactions.Core.XrQuaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B XrQuaternion_get_identity_m34ADECC76F0A8A917440E3D592B154DBEF160C44 (const RuntimeMethod* method) 
{
	{
		// public static XrQuaternion identity => new XrQuaternion(new Quaternion(0, 0, -0, -1));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_0), (0.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B L_1;
		memset((&L_1), 0, sizeof(L_1));
		XrQuaternion__ctor_m27EED99CACED957DF3CB347ED55752DDC20C905C((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion QCHT.Interactions.Core.XrQuaternion::ToQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XrQuaternion_ToQuaternion_mC22FD8D96162B213B722184B59404914D5F24A92 (XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B* __this, const RuntimeMethod* method) 
{
	{
		// return new Quaternion(_x, _y, -_z, -_w);
		float L_0 = __this->____x_0;
		float L_1 = __this->____y_1;
		float L_2 = __this->____z_2;
		float L_3 = __this->____w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_4), L_0, L_1, ((-L_2)), ((-L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 XrQuaternion_ToQuaternion_mC22FD8D96162B213B722184B59404914D5F24A92_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrQuaternion_t43838873A0863BA465AEA9E2C4D99F9AA2E8B65B*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = XrQuaternion_ToQuaternion_mC22FD8D96162B213B722184B59404914D5F24A92(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QCHT.Interactions.Core.XrVector3::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrVector3__ctor_m4B1418C4EDEB95638B11A336CB6FAEADAF7ABDFD (XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// _x = position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		float L_1 = L_0.___x_2;
		__this->____x_0 = L_1;
		// _y = position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		float L_3 = L_2.___y_3;
		__this->____y_1 = L_3;
		// _z = -position.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		float L_5 = L_4.___z_4;
		__this->____z_2 = ((-L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrVector3__ctor_m4B1418C4EDEB95638B11A336CB6FAEADAF7ABDFD_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C*>(__this + _offset);
	XrVector3__ctor_m4B1418C4EDEB95638B11A336CB6FAEADAF7ABDFD(_thisAdjusted, ___position0, method);
}
// QCHT.Interactions.Core.XrVector3 QCHT.Interactions.Core.XrVector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C XrVector3_get_zero_m6413214B0A0B310A8F27FBCE53F0B393E2D0D85B (const RuntimeMethod* method) 
{
	{
		// public static XrVector3 zero => new XrVector3(new Vector3(0, 0, -0));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C L_1;
		memset((&L_1), 0, sizeof(L_1));
		XrVector3__ctor_m4B1418C4EDEB95638B11A336CB6FAEADAF7ABDFD((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 QCHT.Interactions.Core.XrVector3::ToVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XrVector3_ToVector3_mBF030D761C60F11DF70D7B101A8C649501093B8E (XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector3(_x, _y, -_z);
		float L_0 = __this->____x_0;
		float L_1 = __this->____y_1;
		float L_2 = __this->____z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, ((-L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XrVector3_ToVector3_mBF030D761C60F11DF70D7B101A8C649501093B8E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrVector3_tBDC27FADC11FD07FEFCB725DC157859D1D3A4E2C*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = XrVector3_ToVector3_mBF030D761C60F11DF70D7B101A8C649501093B8E(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9192DA958C66DB10D526949EE9B2B4124E3D3EB5 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m67DCB3B0F7C1FA86E9A9B61B19C1AD20C049EEEF_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m3FE28A9DAE49659E3EDBB949BA88E7A7B0E3DF0B_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5CA141654F5823923B1A7BC59A4234E62B5A543A_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Camera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* XROrigin_get_Camera_m8959027D616F5BD9AEAE3E41ADEE23BBC2CE3629_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Camera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* HandRiggedVisualizer_get_HandPose_m0B9F82015E25BF2F5F070E866A8A6573A08B5917_inline (HandRiggedVisualizer_tCF62BA6B7197B6D67C53D047CD68FBD2348E4A45* __this, const RuntimeMethod* method) 
{
	{
		// public HandPose HandPose => _handPose;
		HandPose_t286B42FE76B6066715CC0E4258A81B5218986498* L_0 = __this->____handPose_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XROrigin_get_TrackablesParent_m6F7933DF03A5376C31D328F865F77D28EEC18E9C_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// public Transform TrackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_LeftHandPrefab_m5C0249EB39DC4CD303D25E50C8B90B3A0687584B_inline (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// get => leftHandPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___leftHandPrefab_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mBA1412FDC5BE7CEC2BA916E5097F83539B2A5BBA_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m0995F84CB44F54023C33BFF8B0B0B1BFE5C77F02_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_mCCCE85B7ED59FEBB05A85009A628BFA9B51742CA_inline (Cinfo_t082D526ADC336114DCFD051EFF79A4F2DAFF0AA6* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_select_mEC719363C29C00BCCE859E65865609FAEF1F2929_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisControl select { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___value0;
		__this->___U3CselectU3Ek__BackingField_44 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CselectU3Ek__BackingField_44), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_selectPressed_m120217290209C8955EA4F18590AE6F403807AA78_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl selectPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CselectPressedU3Ek__BackingField_45 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CselectPressedU3Ek__BackingField_45), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_grip_mA4A618FF0615706FDCA559788D6F49503B032500_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___value0;
		__this->___U3CgripU3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripU3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_gripPressed_m74B12514C2A5A59FCC1C77E23DFC695B640526BE_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___value0, const RuntimeMethod* method) 
{
	{
		// public ButtonControl gripPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___value0;
		__this->___U3CgripPressedU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripPressedU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_pointerPosition_mBF1D150D421C40821316CBA6296CF48E912AB313_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pointerPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___value0;
		__this->___U3CpointerPositionU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerPositionU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandTrackingDevice_set_pointerRotation_mB63FCB1FBCF42D59F734A38E14F8D498107B47FD_inline (HandTrackingDevice_t60EF06C7F16C2EA28B51939A2F3B9A6BD60978E0* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___value0, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pointerRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___value0;
		__this->___U3CpointerRotationU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerRotationU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CisTrackedU3Ek__BackingField_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* XRSimulatedController_get_trigger_m27D6198CE632235EAD8D1F4718331303C51F1875_inline (XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl trigger { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CtriggerU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* XRSimulatedController_get_grip_m7A18FD9D5A4568D9798C26EEDA57C1DE9DE3CB25_inline (XRSimulatedController_t44B51DE4F7BD07BE41450B9EF3AFBE65025FC6DA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl grip { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CgripU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* TrackedDevice_get_devicePosition_mF2A0B044A244D1A63ECD32AE48E42E3F24F0E84D_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CdevicePositionU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* TrackedDevice_get_deviceRotation_m1A3BD5236736A1D4B5A60EDF72F231AA0A6FEF17_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CdeviceRotationU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRSubsystemLifeCycleManager_3_get_subsystem_m3F4B54D6B769DD6879C7241B3BFF433E7202BBD1_gshared_inline (const RuntimeMethod* method) 
{
	{
		// protected static TSubsystem subsystem { get; set; }
		RuntimeObject* L_0 = ((XRSubsystemLifeCycleManager_3_t00F996CDA6FA62442A3CA16917F547D543BE72C3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
