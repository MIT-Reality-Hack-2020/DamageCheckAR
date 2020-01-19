#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`4<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>
struct Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.iOS.ARHitTestResult>
struct IEnumerable_1_tE0EAE6B4A0CA76F7F6AD52F8E91C9ED543AF94C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>
struct List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251;
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat>
struct List_1_t1FB88C8E3461A17705B4E068B7F9412324D4EC5B;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5;
// System.Text.EncoderFallback
struct EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2;
// System.Text.Encoding
struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.iOS.ARHitTestResult[]
struct ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588;
// UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189;
// UnityEngine.XR.iOS.ARPlaneGeometry
struct ARPlaneGeometry_t31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F;
// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate
struct UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorAdded
struct ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorRemoved
struct ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFaceAnchorUpdated
struct ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorAdded
struct ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorRemoved
struct ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARImageAnchorUpdated
struct ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionLocalizeCallback
struct ARSessionLocalizeCallback_t639D87EE7A908EF8C7CF864CC81418DC25C1ADA1;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorAdded
struct internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorRemoved
struct internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFaceAnchorUpdated
struct internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorAdded
struct internal_ARImageAnchorAdded_t7F4E10B8127B30BA2B4BBB2602385E8AE2288958;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorRemoved
struct internal_ARImageAnchorRemoved_t022F3C662F10FCD6E655761503138602FD34A28C;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARImageAnchorUpdated
struct internal_ARImageAnchorUpdated_t9BAA541A1BDBB1623354CB38D224A742FDC3CF32;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9;
// UnityEngine.XR.iOS.Utils.SerializableVector4
struct SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028;
// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry
struct serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9;
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731;
// UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2;
// UnityEngine.XR.iOS.VideoFormatEnumerator
struct VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D;
// UnityPointCloudExample
struct UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3;
// Utils.RectangleMarker
struct RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56;

extern RuntimeClass* ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var;
extern RuntimeClass* Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0_FieldInfo_var;
extern String_t* _stringLiteralF13C907A286DA02DEEB013130BA1D6F92182C8AB;
extern const RuntimeMethod* Action_4_Invoke_mDC4EBD16C7365A07D80C3B7F4D5A9E099F7B0565_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Any_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mDDFBE9E4EE4CB801A2F34FC979EDBE26ACE7C654_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_First_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mCEDC54E9769CB1792469C6BD5B96F664D8F0A694_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var;
extern const RuntimeMethod* UnityPointCloudExample_ARFrameUpdated_mA23CF03C1765B1DB84B8120911E052AA532719D3_RuntimeMethod_var;
extern const uint32_t ARHitTest_CastRectangle_m3584E4D7171942710CFAA259A54FB6A15EEB89DA_MetadataUsageId;
extern const uint32_t ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B_MetadataUsageId;
extern const uint32_t RectangleMarker_Awake_m1A37D578BE923B17ED17B66E5FF3FCA1A2A688F8_MetadataUsageId;
extern const uint32_t RectangleMarker_Update_m15C78E848A6D557E771C93861F1CAC8A06226585_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Start_m9EAB3968FBEA2D49A42AE271480BC2626AA0CA3A_MetadataUsageId;
extern const uint32_t UnityPointCloudExample_Update_m617C80F6FD76499AF3CBC72ACCF39F435247FB44_MetadataUsageId;
extern const uint32_t VideoFormatEnumerator_BeginInvoke_m9FF7492924AFEED42DABA62CCAD377D87FDA22BC_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_mE88E10AB4A7642175F8B1A1CF1BD77B678885B20_MetadataUsageId;
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ;

struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
struct TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#define LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____items_1)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_StaticFields, ___EmptyArray_4)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBA8D772D87B6502B2A4D0EFE166C846285F50650_H
#ifndef LIST_1_TF6C4667A19201F88DE1C1CBDE50EF4433C0B7251_H
#define LIST_1_TF6C4667A19201F88DE1C1CBDE50EF4433C0B7251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult>
struct  List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251, ____items_1)); }
	inline ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588* get__items_1() const { return ____items_1; }
	inline ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251_StaticFields, ___EmptyArray_4)); }
	inline ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ARHitTestResultU5BU5D_t1F41AB81509971EA02FE35CDE6F10612FF4CF588* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TF6C4667A19201F88DE1C1CBDE50EF4433C0B7251_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#define ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___decoder_fallback_3)); }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoder_fallback_4)); }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef SERIALIZABLEVECTOR4_TAFABF6000A7891F39F5BB3C32EE4D002F4B44028_H
#define SERIALIZABLEVECTOR4_TAFABF6000A7891F39F5BB3C32EE4D002F4B44028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.SerializableVector4
struct  SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028  : public RuntimeObject
{
public:
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::x
	float ___x_0;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::y
	float ___y_1;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::z
	float ___z_2;
	// System.Single UnityEngine.XR.iOS.Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_TAFABF6000A7891F39F5BB3C32EE4D002F4B44028_H
#ifndef SERIALIZABLEPLANEGEOMETRY_T32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9_H
#define SERIALIZABLEPLANEGEOMETRY_T32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry
struct  serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::vertices
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___vertices_0;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::texCoords
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___texCoords_1;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::triIndices
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___triIndices_2;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::boundaryVertices
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___boundaryVertices_3;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9, ___vertices_0)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_vertices_0() const { return ___vertices_0; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_0), value);
	}

	inline static int32_t get_offset_of_texCoords_1() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9, ___texCoords_1)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_texCoords_1() const { return ___texCoords_1; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_texCoords_1() { return &___texCoords_1; }
	inline void set_texCoords_1(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___texCoords_1 = value;
		Il2CppCodeGenWriteBarrier((&___texCoords_1), value);
	}

	inline static int32_t get_offset_of_triIndices_2() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9, ___triIndices_2)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_triIndices_2() const { return ___triIndices_2; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_triIndices_2() { return &___triIndices_2; }
	inline void set_triIndices_2(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___triIndices_2 = value;
		Il2CppCodeGenWriteBarrier((&___triIndices_2), value);
	}

	inline static int32_t get_offset_of_boundaryVertices_3() { return static_cast<int32_t>(offsetof(serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9, ___boundaryVertices_3)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_boundaryVertices_3() const { return ___boundaryVertices_3; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_boundaryVertices_3() { return &___boundaryVertices_3; }
	inline void set_boundaryVertices_3(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___boundaryVertices_3 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVertices_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPLANEGEOMETRY_T32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731_H
#define SERIALIZABLEUNITYARMATRIX4X4_T2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___column0_0;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___column1_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___column2_2;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731, ___column0_0)); }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731, ___column1_1)); }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731, ___column2_2)); }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731, ___column3_3)); }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731_H
#ifndef ARHITTEST_T81E0F23A293F04352C9DB71450ACB23BA243AFB4_H
#define ARHITTEST_T81E0F23A293F04352C9DB71450ACB23BA243AFB4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.ARHitTest
struct  ARHitTest_t81E0F23A293F04352C9DB71450ACB23BA243AFB4  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTEST_T81E0F23A293F04352C9DB71450ACB23BA243AFB4_H
#ifndef U24ARRAYTYPEU3D24_TC113CF2B22B82EF93FE8A567BDAB748BE1EE1292_H
#define U24ARRAYTYPEU3D24_TC113CF2B22B82EF93FE8A567BDAB748BE1EE1292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>_U24ArrayTypeU3D24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_tC113CF2B22B82EF93FE8A567BDAB748BE1EE1292 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_tC113CF2B22B82EF93FE8A567BDAB748BE1EE1292__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_TC113CF2B22B82EF93FE8A567BDAB748BE1EE1292_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#define BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifndef DOUBLE_T2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159_H
#define DOUBLE_T2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#define INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_tF61270729FC90F8A705A5FA6FE222C9644374ADF 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_tF61270729FC90F8A705A5FA6FE222C9644374ADF, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_TF61270729FC90F8A705A5FA6FE222C9644374ADF_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#define SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifndef UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#define UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef ARPOINT_T88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2_H
#define ARPOINT_T88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPoint
struct  ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2 
{
public:
	// System.Double UnityEngine.XR.iOS.ARPoint::x
	double ___x_0;
	// System.Double UnityEngine.XR.iOS.ARPoint::y
	double ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPOINT_T88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2_H
#ifndef UNITYARLIGHTESTIMATE_TCC7C13BED276766FF1F846160D0E9A61746B5132_H
#define UNITYARLIGHTESTIMATE_TCC7C13BED276766FF1F846160D0E9A61746B5132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_TCC7C13BED276766FF1F846160D0E9A61746B5132_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields
{
public:
	// <PrivateImplementationDetails>_U24ArrayTypeU3D24 <PrivateImplementationDetails>::U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE
	U24ArrayTypeU3D24_tC113CF2B22B82EF93FE8A567BDAB748BE1EE1292  ___U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields, ___U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0)); }
	inline U24ArrayTypeU3D24_tC113CF2B22B82EF93FE8A567BDAB748BE1EE1292  get_U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0() const { return ___U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0; }
	inline U24ArrayTypeU3D24_tC113CF2B22B82EF93FE8A567BDAB748BE1EE1292 * get_address_of_U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0() { return &___U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0; }
	inline void set_U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0(U24ArrayTypeU3D24_tC113CF2B22B82EF93FE8A567BDAB748BE1EE1292  value)
	{
		___U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_H
#ifndef VISIONRECTANGLE_T27763449AABD39B5ADF76C57B18A9AAB6893CD9F_H
#define VISIONRECTANGLE_T27763449AABD39B5ADF76C57B18A9AAB6893CD9F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Possible.Vision.Managed.VisionRectangle
struct  VisionRectangle_t27763449AABD39B5ADF76C57B18A9AAB6893CD9F 
{
public:
	// UnityEngine.Vector2 Possible.Vision.Managed.VisionRectangle::topLeft
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___topLeft_0;
	// UnityEngine.Vector2 Possible.Vision.Managed.VisionRectangle::topRight
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___topRight_1;
	// UnityEngine.Vector2 Possible.Vision.Managed.VisionRectangle::bottomRight
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___bottomRight_2;
	// UnityEngine.Vector2 Possible.Vision.Managed.VisionRectangle::bottomLeft
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___bottomLeft_3;
	// System.Single Possible.Vision.Managed.VisionRectangle::area
	float ___area_4;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VisionRectangle_t27763449AABD39B5ADF76C57B18A9AAB6893CD9F, ___topLeft_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_topLeft_0() const { return ___topLeft_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VisionRectangle_t27763449AABD39B5ADF76C57B18A9AAB6893CD9F, ___topRight_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_topRight_1() const { return ___topRight_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomRight_2() { return static_cast<int32_t>(offsetof(VisionRectangle_t27763449AABD39B5ADF76C57B18A9AAB6893CD9F, ___bottomRight_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_bottomRight_2() const { return ___bottomRight_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_bottomRight_2() { return &___bottomRight_2; }
	inline void set_bottomRight_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___bottomRight_2 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_3() { return static_cast<int32_t>(offsetof(VisionRectangle_t27763449AABD39B5ADF76C57B18A9AAB6893CD9F, ___bottomLeft_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_bottomLeft_3() const { return ___bottomLeft_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_bottomLeft_3() { return &___bottomLeft_3; }
	inline void set_bottomLeft_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___bottomLeft_3 = value;
	}

	inline static int32_t get_offset_of_area_4() { return static_cast<int32_t>(offsetof(VisionRectangle_t27763449AABD39B5ADF76C57B18A9AAB6893CD9F, ___area_4)); }
	inline float get_area_4() const { return ___area_4; }
	inline float* get_address_of_area_4() { return &___area_4; }
	inline void set_area_4(float value)
	{
		___area_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIONRECTANGLE_T27763449AABD39B5ADF76C57B18A9AAB6893CD9F_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef RUNTIMEFIELDHANDLE_TDDEB9F6EC2C3875C313750A5C3C33488A2F7A703_H
#define RUNTIMEFIELDHANDLE_TDDEB9F6EC2C3875C313750A5C3C33488A2F7A703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_TDDEB9F6EC2C3875C313750A5C3C33488A2F7A703_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef ARHITTESTRESULTTYPE_T814937A1EF21002C977A5DD0BB084C31A591EDD2_H
#define ARHITTESTRESULTTYPE_T814937A1EF21002C977A5DD0BB084C31A591EDD2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t814937A1EF21002C977A5DD0BB084C31A591EDD2 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t814937A1EF21002C977A5DD0BB084C31A591EDD2, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T814937A1EF21002C977A5DD0BB084C31A591EDD2_H
#ifndef ARPLANEANCHORALIGNMENT_T89145CE9B639FC3F45383357FE7914660E1E0E36_H
#define ARPLANEANCHORALIGNMENT_T89145CE9B639FC3F45383357FE7914660E1E0E36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t89145CE9B639FC3F45383357FE7914660E1E0E36, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T89145CE9B639FC3F45383357FE7914660E1E0E36_H
#ifndef ARTRACKINGSTATE_T904937D92845C4D5954E4E16182F7BC33F5F744B_H
#define ARTRACKINGSTATE_T904937D92845C4D5954E4E16182F7BC33F5F744B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t904937D92845C4D5954E4E16182F7BC33F5F744B, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T904937D92845C4D5954E4E16182F7BC33F5F744B_H
#ifndef ARTRACKINGSTATEREASON_T4E957429E93991E43643D4C64AC81F488B71A17C_H
#define ARTRACKINGSTATEREASON_T4E957429E93991E43643D4C64AC81F488B71A17C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t4E957429E93991E43643D4C64AC81F488B71A17C, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T4E957429E93991E43643D4C64AC81F488B71A17C_H
#ifndef LIGHTDATATYPE_TA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553_H
#define LIGHTDATATYPE_TA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.LightDataType
struct  LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553 
{
public:
	// System.Int32 UnityEngine.XR.iOS.LightDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LightDataType_tA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIGHTDATATYPE_TA5D0C6CF82D21E2FC4D91A139ABEF4A2E4FB3553_H
#ifndef MARSHALDIRECTIONALLIGHTESTIMATE_T7BC98B612AADA17BDB3050D34DE74696570F5760_H
#define MARSHALDIRECTIONALLIGHTESTIMATE_T7BC98B612AADA17BDB3050D34DE74696570F5760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate
struct  MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::primaryDirAndIntensity
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___primaryDirAndIntensity_0;
	// System.IntPtr UnityEngine.XR.iOS.MarshalDirectionalLightEstimate::sphericalHarmonicCoefficientsPtr
	intptr_t ___sphericalHarmonicCoefficientsPtr_1;

public:
	inline static int32_t get_offset_of_primaryDirAndIntensity_0() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___primaryDirAndIntensity_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_primaryDirAndIntensity_0() const { return ___primaryDirAndIntensity_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_primaryDirAndIntensity_0() { return &___primaryDirAndIntensity_0; }
	inline void set_primaryDirAndIntensity_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___primaryDirAndIntensity_0 = value;
	}

	inline static int32_t get_offset_of_sphericalHarmonicCoefficientsPtr_1() { return static_cast<int32_t>(offsetof(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760, ___sphericalHarmonicCoefficientsPtr_1)); }
	inline intptr_t get_sphericalHarmonicCoefficientsPtr_1() const { return ___sphericalHarmonicCoefficientsPtr_1; }
	inline intptr_t* get_address_of_sphericalHarmonicCoefficientsPtr_1() { return &___sphericalHarmonicCoefficientsPtr_1; }
	inline void set_sphericalHarmonicCoefficientsPtr_1(intptr_t value)
	{
		___sphericalHarmonicCoefficientsPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIONALLIGHTESTIMATE_T7BC98B612AADA17BDB3050D34DE74696570F5760_H
#ifndef UNITYARMATRIX4X4_TCA18409E5A55B83BF0A0792631F365070E6018B3_H
#define UNITYARMATRIX4X4_TCA18409E5A55B83BF0A0792631F365070E6018B3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column0_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column0_0() const { return ___column0_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column1_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column1_1() const { return ___column1_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column2_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column2_2() const { return ___column2_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3, ___column3_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_column3_3() const { return ___column3_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_TCA18409E5A55B83BF0A0792631F365070E6018B3_H
#ifndef UNITYARPLANEGEOMETRY_T67C6D1B87DC3D305EC3239FF33E783B4FD7BC026_H
#define UNITYARPLANEGEOMETRY_T67C6D1B87DC3D305EC3239FF33E783B4FD7BC026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneGeometry
struct  UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::vertexCount
	int32_t ___vertexCount_0;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::vertices
	intptr_t ___vertices_1;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinateCount
	int32_t ___textureCoordinateCount_2;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::textureCoordinates
	intptr_t ___textureCoordinates_3;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleCount
	int32_t ___triangleCount_4;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::triangleIndices
	intptr_t ___triangleIndices_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertexCount
	int32_t ___boundaryVertexCount_6;
	// System.IntPtr UnityEngine.XR.iOS.UnityARPlaneGeometry::boundaryVertices
	intptr_t ___boundaryVertices_7;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}

	inline static int32_t get_offset_of_vertices_1() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___vertices_1)); }
	inline intptr_t get_vertices_1() const { return ___vertices_1; }
	inline intptr_t* get_address_of_vertices_1() { return &___vertices_1; }
	inline void set_vertices_1(intptr_t value)
	{
		___vertices_1 = value;
	}

	inline static int32_t get_offset_of_textureCoordinateCount_2() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___textureCoordinateCount_2)); }
	inline int32_t get_textureCoordinateCount_2() const { return ___textureCoordinateCount_2; }
	inline int32_t* get_address_of_textureCoordinateCount_2() { return &___textureCoordinateCount_2; }
	inline void set_textureCoordinateCount_2(int32_t value)
	{
		___textureCoordinateCount_2 = value;
	}

	inline static int32_t get_offset_of_textureCoordinates_3() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___textureCoordinates_3)); }
	inline intptr_t get_textureCoordinates_3() const { return ___textureCoordinates_3; }
	inline intptr_t* get_address_of_textureCoordinates_3() { return &___textureCoordinates_3; }
	inline void set_textureCoordinates_3(intptr_t value)
	{
		___textureCoordinates_3 = value;
	}

	inline static int32_t get_offset_of_triangleCount_4() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___triangleCount_4)); }
	inline int32_t get_triangleCount_4() const { return ___triangleCount_4; }
	inline int32_t* get_address_of_triangleCount_4() { return &___triangleCount_4; }
	inline void set_triangleCount_4(int32_t value)
	{
		___triangleCount_4 = value;
	}

	inline static int32_t get_offset_of_triangleIndices_5() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___triangleIndices_5)); }
	inline intptr_t get_triangleIndices_5() const { return ___triangleIndices_5; }
	inline intptr_t* get_address_of_triangleIndices_5() { return &___triangleIndices_5; }
	inline void set_triangleIndices_5(intptr_t value)
	{
		___triangleIndices_5 = value;
	}

	inline static int32_t get_offset_of_boundaryVertexCount_6() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___boundaryVertexCount_6)); }
	inline int32_t get_boundaryVertexCount_6() const { return ___boundaryVertexCount_6; }
	inline int32_t* get_address_of_boundaryVertexCount_6() { return &___boundaryVertexCount_6; }
	inline void set_boundaryVertexCount_6(int32_t value)
	{
		___boundaryVertexCount_6 = value;
	}

	inline static int32_t get_offset_of_boundaryVertices_7() { return static_cast<int32_t>(offsetof(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026, ___boundaryVertices_7)); }
	inline intptr_t get_boundaryVertices_7() const { return ___boundaryVertices_7; }
	inline intptr_t* get_address_of_boundaryVertices_7() { return &___boundaryVertices_7; }
	inline void set_boundaryVertices_7(intptr_t value)
	{
		___boundaryVertices_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEGEOMETRY_T67C6D1B87DC3D305EC3239FF33E783B4FD7BC026_H
#ifndef UNITYARVIDEOFORMAT_TB838BB6F342C0F1A4201980B03B869BA2E9E2E95_H
#define UNITYARVIDEOFORMAT_TB838BB6F342C0F1A4201980B03B869BA2E9E2E95_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideoFormat
struct  UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatPtr
	intptr_t ___videoFormatPtr_0;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionWidth
	float ___imageResolutionWidth_1;
	// System.Single UnityEngine.XR.iOS.UnityARVideoFormat::imageResolutionHeight
	float ___imageResolutionHeight_2;
	// System.Int32 UnityEngine.XR.iOS.UnityARVideoFormat::framesPerSecond
	int32_t ___framesPerSecond_3;

public:
	inline static int32_t get_offset_of_videoFormatPtr_0() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___videoFormatPtr_0)); }
	inline intptr_t get_videoFormatPtr_0() const { return ___videoFormatPtr_0; }
	inline intptr_t* get_address_of_videoFormatPtr_0() { return &___videoFormatPtr_0; }
	inline void set_videoFormatPtr_0(intptr_t value)
	{
		___videoFormatPtr_0 = value;
	}

	inline static int32_t get_offset_of_imageResolutionWidth_1() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___imageResolutionWidth_1)); }
	inline float get_imageResolutionWidth_1() const { return ___imageResolutionWidth_1; }
	inline float* get_address_of_imageResolutionWidth_1() { return &___imageResolutionWidth_1; }
	inline void set_imageResolutionWidth_1(float value)
	{
		___imageResolutionWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageResolutionHeight_2() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___imageResolutionHeight_2)); }
	inline float get_imageResolutionHeight_2() const { return ___imageResolutionHeight_2; }
	inline float* get_address_of_imageResolutionHeight_2() { return &___imageResolutionHeight_2; }
	inline void set_imageResolutionHeight_2(float value)
	{
		___imageResolutionHeight_2 = value;
	}

	inline static int32_t get_offset_of_framesPerSecond_3() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95, ___framesPerSecond_3)); }
	inline int32_t get_framesPerSecond_3() const { return ___framesPerSecond_3; }
	inline int32_t* get_address_of_framesPerSecond_3() { return &___framesPerSecond_3; }
	inline void set_framesPerSecond_3(int32_t value)
	{
		___framesPerSecond_3 = value;
	}
};

struct UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.iOS.UnityARVideoFormat> UnityEngine.XR.iOS.UnityARVideoFormat::videoFormatsList
	List_1_t1FB88C8E3461A17705B4E068B7F9412324D4EC5B * ___videoFormatsList_4;
	// UnityEngine.XR.iOS.VideoFormatEnumerator UnityEngine.XR.iOS.UnityARVideoFormat::<>f__mgU24cache0
	VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_videoFormatsList_4() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_StaticFields, ___videoFormatsList_4)); }
	inline List_1_t1FB88C8E3461A17705B4E068B7F9412324D4EC5B * get_videoFormatsList_4() const { return ___videoFormatsList_4; }
	inline List_1_t1FB88C8E3461A17705B4E068B7F9412324D4EC5B ** get_address_of_videoFormatsList_4() { return &___videoFormatsList_4; }
	inline void set_videoFormatsList_4(List_1_t1FB88C8E3461A17705B4E068B7F9412324D4EC5B * value)
	{
		___videoFormatsList_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoFormatsList_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEOFORMAT_TB838BB6F342C0F1A4201980B03B869BA2E9E2E95_H
#ifndef UNITYVIDEOPARAMS_T04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1_H
#define UNITYVIDEOPARAMS_T04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef ARHITTESTRESULT_T6D839CA592EDD681A7EA5C081F652A15865EDD8E_H
#define ARHITTESTRESULT_T6D839CA592EDD681A7EA5C081F652A15865EDD8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResult
struct  ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.ARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.ARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::localTransform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::worldTransform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___worldTransform_3;
	// System.String UnityEngine.XR.iOS.ARHitTestResult::anchorIdentifier
	String_t* ___anchorIdentifier_4;
	// System.Boolean UnityEngine.XR.iOS.ARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E, ___localTransform_2)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E, ___worldTransform_3)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchorIdentifier_4() { return static_cast<int32_t>(offsetof(ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E, ___anchorIdentifier_4)); }
	inline String_t* get_anchorIdentifier_4() const { return ___anchorIdentifier_4; }
	inline String_t** get_address_of_anchorIdentifier_4() { return &___anchorIdentifier_4; }
	inline void set_anchorIdentifier_4(String_t* value)
	{
		___anchorIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier((&___anchorIdentifier_4), value);
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___localTransform_2;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___worldTransform_3;
	char* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___localTransform_2;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___worldTransform_3;
	Il2CppChar* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
#endif // ARHITTESTRESULT_T6D839CA592EDD681A7EA5C081F652A15865EDD8E_H
#ifndef ARPLANEGEOMETRY_T31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F_H
#define ARPLANEGEOMETRY_T31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneGeometry
struct  ARPlaneGeometry_t31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.ARPlaneGeometry::uPlaneGeometry
	UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  ___uPlaneGeometry_0;

public:
	inline static int32_t get_offset_of_uPlaneGeometry_0() { return static_cast<int32_t>(offsetof(ARPlaneGeometry_t31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F, ___uPlaneGeometry_0)); }
	inline UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  get_uPlaneGeometry_0() const { return ___uPlaneGeometry_0; }
	inline UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026 * get_address_of_uPlaneGeometry_0() { return &___uPlaneGeometry_0; }
	inline void set_uPlaneGeometry_0(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  value)
	{
		___uPlaneGeometry_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEGEOMETRY_T31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F_H
#ifndef UNITYARANCHORDATA_T1B8580CF3564F44D8BA78ACFCB3E75B897EECB13_H
#define UNITYARANCHORDATA_T1B8580CF3564F44D8BA78ACFCB3E75B897EECB13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___extent_4;
	// UnityEngine.XR.iOS.UnityARPlaneGeometry UnityEngine.XR.iOS.UnityARAnchorData::planeGeometry
	UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  ___planeGeometry_5;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___transform_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___center_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_center_3() const { return ___center_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___extent_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_extent_4() const { return ___extent_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___extent_4 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_5() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13, ___planeGeometry_5)); }
	inline UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  get_planeGeometry_5() const { return ___planeGeometry_5; }
	inline UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026 * get_address_of_planeGeometry_5() { return &___planeGeometry_5; }
	inline void set_planeGeometry_5(UnityARPlaneGeometry_t67C6D1B87DC3D305EC3239FF33E783B4FD7BC026  value)
	{
		___planeGeometry_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1B8580CF3564F44D8BA78ACFCB3E75B897EECB13_H
#ifndef UNITYARLIGHTDATA_T65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_H
#define UNITYARLIGHTDATA_T65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightData
struct  UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityARLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.UnityARDirectionalLightEstimate UnityEngine.XR.iOS.UnityARLightData::arDirectonalLightEstimate
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C, ___arDirectonalLightEstimate_2)); }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 ** get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * value)
	{
		___arDirectonalLightEstimate_2 = value;
		Il2CppCodeGenWriteBarrier((&___arDirectonalLightEstimate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARLightData
struct UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com
{
	int32_t ___arLightingType_0;
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	UnityARDirectionalLightEstimate_tF5324C28AA41BAADD17EBBCF55EEC46DC8B43AB9 * ___arDirectonalLightEstimate_2;
};
#endif // UNITYARLIGHTDATA_T65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_H
#ifndef UNITYMARSHALLIGHTDATA_TF77EE50423BA991FDB1DECDD23E914C3D3928F9C_H
#define UNITYMARSHALLIGHTDATA_TF77EE50423BA991FDB1DECDD23E914C3D3928F9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityMarshalLightData
struct  UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C 
{
public:
	// UnityEngine.XR.iOS.LightDataType UnityEngine.XR.iOS.UnityMarshalLightData::arLightingType
	int32_t ___arLightingType_0;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arLightEstimate
	UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  ___arLightEstimate_1;
	// UnityEngine.XR.iOS.MarshalDirectionalLightEstimate UnityEngine.XR.iOS.UnityMarshalLightData::arDirectonalLightEstimate
	MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  ___arDirectonalLightEstimate_2;

public:
	inline static int32_t get_offset_of_arLightingType_0() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightingType_0)); }
	inline int32_t get_arLightingType_0() const { return ___arLightingType_0; }
	inline int32_t* get_address_of_arLightingType_0() { return &___arLightingType_0; }
	inline void set_arLightingType_0(int32_t value)
	{
		___arLightingType_0 = value;
	}

	inline static int32_t get_offset_of_arLightEstimate_1() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arLightEstimate_1)); }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  get_arLightEstimate_1() const { return ___arLightEstimate_1; }
	inline UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132 * get_address_of_arLightEstimate_1() { return &___arLightEstimate_1; }
	inline void set_arLightEstimate_1(UnityARLightEstimate_tCC7C13BED276766FF1F846160D0E9A61746B5132  value)
	{
		___arLightEstimate_1 = value;
	}

	inline static int32_t get_offset_of_arDirectonalLightEstimate_2() { return static_cast<int32_t>(offsetof(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C, ___arDirectonalLightEstimate_2)); }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  get_arDirectonalLightEstimate_2() const { return ___arDirectonalLightEstimate_2; }
	inline MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760 * get_address_of_arDirectonalLightEstimate_2() { return &___arDirectonalLightEstimate_2; }
	inline void set_arDirectonalLightEstimate_2(MarshalDirectionalLightEstimate_t7BC98B612AADA17BDB3050D34DE74696570F5760  value)
	{
		___arDirectonalLightEstimate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYMARSHALLIGHTDATA_TF77EE50423BA991FDB1DECDD23E914C3D3928F9C_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_TEC527188F73D5D313F88F1871C5CCA575F084AE2_H
#define SERIALIZABLEUNITYARPLANEANCHOR_TEC527188F73D5D313F88F1871C5CCA575F084AE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * ___worldTransform_0;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___center_1;
	// UnityEngine.XR.iOS.Utils.SerializableVector4 UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::planeGeometry
	serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * ___planeGeometry_4;
	// System.Byte[] UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___identifierStr_5;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2, ___center_1)); }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2, ___extent_2)); }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_planeGeometry_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2, ___planeGeometry_4)); }
	inline serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * get_planeGeometry_4() const { return ___planeGeometry_4; }
	inline serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 ** get_address_of_planeGeometry_4() { return &___planeGeometry_4; }
	inline void set_planeGeometry_4(serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * value)
	{
		___planeGeometry_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeGeometry_4), value);
	}

	inline static int32_t get_offset_of_identifierStr_5() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2, ___identifierStr_5)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_identifierStr_5() const { return ___identifierStr_5; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_identifierStr_5() { return &___identifierStr_5; }
	inline void set_identifierStr_5(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___identifierStr_5 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_TEC527188F73D5D313F88F1871C5CCA575F084AE2_H
#ifndef ACTION_4_T6F1D95C8E698069AA80F3C969644A81F56FB3ACB_H
#define ACTION_4_T6F1D95C8E698069AA80F3C969644A81F56FB3ACB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`4<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>
struct  Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_4_T6F1D95C8E698069AA80F3C969644A81F56FB3ACB_H
#ifndef ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#define ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#define MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifndef TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#define TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T327D0DAFEF431170D8C2882083D442AF4D4A0E4A_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef ARPLANEANCHOR_T0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_H
#define ARPLANEANCHOR_T0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAnchorData UnityEngine.XR.iOS.ARPlaneAnchor::planeAnchorData
	UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13  ___planeAnchorData_0;

public:
	inline static int32_t get_offset_of_planeAnchorData_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189, ___planeAnchorData_0)); }
	inline UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13  get_planeAnchorData_0() const { return ___planeAnchorData_0; }
	inline UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13 * get_address_of_planeAnchorData_0() { return &___planeAnchorData_0; }
	inline void set_planeAnchorData_0(UnityARAnchorData_t1B8580CF3564F44D8BA78ACFCB3E75B897EECB13  value)
	{
		___planeAnchorData_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHOR_T0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189_H
#ifndef UNITYARCAMERA_T4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_H
#define UNITYARCAMERA_T4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightData UnityEngine.XR.iOS.UnityARCamera::lightData
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___lightData_5)); }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  get_lightData_5() const { return ___lightData_5; }
	inline UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4, ___pointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_pinvoke
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_pinvoke ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_marshaled_com
{
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	UnityARLightData_t65CE5E12F3A5F26CF443B38F432BD4CD5CF7B39C_marshaled_com ___lightData_5;
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4_H
#ifndef VIDEOFORMATENUMERATOR_TE8B6480DBDEBDC141AA932D8696673C644A2006D_H
#define VIDEOFORMATENUMERATOR_TE8B6480DBDEBDC141AA932D8696673C644A2006D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.VideoFormatEnumerator
struct  VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOFORMATENUMERATOR_TE8B6480DBDEBDC141AA932D8696673C644A2006D_H
#ifndef INTERNAL_UNITYARCAMERA_T4AB8B121A980DA87721B883E394951D15D80D8E8_H
#define INTERNAL_UNITYARCAMERA_T4AB8B121A980DA87721B883E394951D15D80D8E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityMarshalLightData UnityEngine.XR.iOS.internal_UnityARCamera::lightData
	UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  ___lightData_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getLightEstimation
	uint32_t ___getLightEstimation_8;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___worldTransform_0)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___videoParams_4)); }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t04F1C5CAB973672CE34BD6A2D8BC0FD7DF4397A1  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightData_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___lightData_5)); }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  get_lightData_5() const { return ___lightData_5; }
	inline UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C * get_address_of_lightData_5() { return &___lightData_5; }
	inline void set_lightData_5(UnityMarshalLightData_tF77EE50423BA991FDB1DECDD23E914C3D3928F9C  value)
	{
		___lightData_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___displayTransform_6)); }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_tCA18409E5A55B83BF0A0792631F365070E6018B3  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}

	inline static int32_t get_offset_of_getLightEstimation_8() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t4AB8B121A980DA87721B883E394951D15D80D8E8, ___getLightEstimation_8)); }
	inline uint32_t get_getLightEstimation_8() const { return ___getLightEstimation_8; }
	inline uint32_t* get_address_of_getLightEstimation_8() { return &___getLightEstimation_8; }
	inline void set_getLightEstimation_8(uint32_t value)
	{
		___getLightEstimation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T4AB8B121A980DA87721B883E394951D15D80D8E8_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T2B98848E3007C1EB61DE6B168237EA7D57880760_H
#define UNITYARSESSIONNATIVEINTERFACE_T2B98848E3007C1EB61DE6B168237EA7D57880760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_19;

public:
	inline static int32_t get_offset_of_m_NativeARSession_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760, ___m_NativeARSession_19)); }
	inline intptr_t get_m_NativeARSession_19() const { return ___m_NativeARSession_19; }
	inline intptr_t* get_address_of_m_NativeARSession_19() { return &___m_NativeARSession_19; }
	inline void set_m_NativeARSession_19(intptr_t value)
	{
		___m_NativeARSession_19 = value;
	}
};

struct UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorAddedEvent
	ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * ___ARFaceAnchorAddedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorUpdatedEvent
	ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * ___ARFaceAnchorUpdatedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFaceAnchorRemovedEvent
	ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * ___ARFaceAnchorRemovedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorAddedEvent
	ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 * ___ARImageAnchorAddedEvent_10;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorUpdatedEvent
	ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 * ___ARImageAnchorUpdatedEvent_11;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARImageAnchorRemovedEvent
	ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 * ___ARImageAnchorRemovedEvent_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * ___ARSessionFailedEvent_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessionInterruptedEvent_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___ARSessioninterruptionEndedEvent_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * ___ARSessionTrackingChangedEvent_16;
	// System.Boolean UnityEngine.XR.iOS.UnityARSessionNativeInterface::<ARSessionShouldAttemptRelocalization>k__BackingField
	bool ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___s_Camera_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * ___s_UnityARSessionNativeInterface_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache0
	internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 * ___U3CU3Ef__mgU24cache0_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache1
	ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * ___U3CU3Ef__mgU24cache1_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache2
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___U3CU3Ef__mgU24cache2_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache3
	ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * ___U3CU3Ef__mgU24cache3_24;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARSessionLocalizeCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache4
	ARSessionLocalizeCallback_t639D87EE7A908EF8C7CF864CC81418DC25C1ADA1 * ___U3CU3Ef__mgU24cache4_25;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache5
	internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 * ___U3CU3Ef__mgU24cache5_26;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache6
	internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 * ___U3CU3Ef__mgU24cache6_27;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache7
	internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 * ___U3CU3Ef__mgU24cache7_28;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache8
	internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 * ___U3CU3Ef__mgU24cache8_29;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache9
	internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 * ___U3CU3Ef__mgU24cache9_30;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheA
	internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * ___U3CU3Ef__mgU24cacheA_31;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheB
	internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * ___U3CU3Ef__mgU24cacheB_32;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFaceAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheC
	internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 * ___U3CU3Ef__mgU24cacheC_33;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFaceAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheD
	internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A * ___U3CU3Ef__mgU24cacheD_34;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARFaceAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheE
	internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 * ___U3CU3Ef__mgU24cacheE_35;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARImageAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cacheF
	internal_ARImageAnchorAdded_t7F4E10B8127B30BA2B4BBB2602385E8AE2288958 * ___U3CU3Ef__mgU24cacheF_36;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARImageAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache10
	internal_ARImageAnchorUpdated_t9BAA541A1BDBB1623354CB38D224A742FDC3CF32 * ___U3CU3Ef__mgU24cache10_37;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface_internal_ARImageAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mgU24cache11
	internal_ARImageAnchorRemoved_t022F3C662F10FCD6E655761503138602FD34A28C * ___U3CU3Ef__mgU24cache11_38;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t6277A20DBBA2E63B85B55B429C008406053F7523 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_tE476B1348DE6CE5FA8935A67EA790CC3BB99D151 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t13C2AF3BC2C3615FCECA1B2705B7874CC4B0D584 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_tCBF6BB842498500A7E02669D8A22995FCD3F58A8 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_tAB2AC251FF9E7CA5179BEF03D3E46C929A86DC1F * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_tD5C26EFD62DE28608B965D94537FD66C5D914411 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorAddedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorAddedEvent_7)); }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * get_ARFaceAnchorAddedEvent_7() const { return ___ARFaceAnchorAddedEvent_7; }
	inline ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 ** get_address_of_ARFaceAnchorAddedEvent_7() { return &___ARFaceAnchorAddedEvent_7; }
	inline void set_ARFaceAnchorAddedEvent_7(ARFaceAnchorAdded_t219D3D70464F8BB12D6A399E8064715E168A8EF8 * value)
	{
		___ARFaceAnchorAddedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorAddedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorUpdatedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorUpdatedEvent_8)); }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * get_ARFaceAnchorUpdatedEvent_8() const { return ___ARFaceAnchorUpdatedEvent_8; }
	inline ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 ** get_address_of_ARFaceAnchorUpdatedEvent_8() { return &___ARFaceAnchorUpdatedEvent_8; }
	inline void set_ARFaceAnchorUpdatedEvent_8(ARFaceAnchorUpdated_tDCA0EF503312CB7AE89357A3FD5529FF55CC6C35 * value)
	{
		___ARFaceAnchorUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorUpdatedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARFaceAnchorRemovedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARFaceAnchorRemovedEvent_9)); }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * get_ARFaceAnchorRemovedEvent_9() const { return ___ARFaceAnchorRemovedEvent_9; }
	inline ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C ** get_address_of_ARFaceAnchorRemovedEvent_9() { return &___ARFaceAnchorRemovedEvent_9; }
	inline void set_ARFaceAnchorRemovedEvent_9(ARFaceAnchorRemoved_t0077E6ADE5395C6F773A98EB147FDD18B2D09E0C * value)
	{
		___ARFaceAnchorRemovedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARFaceAnchorRemovedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorAddedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARImageAnchorAddedEvent_10)); }
	inline ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 * get_ARImageAnchorAddedEvent_10() const { return ___ARImageAnchorAddedEvent_10; }
	inline ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 ** get_address_of_ARImageAnchorAddedEvent_10() { return &___ARImageAnchorAddedEvent_10; }
	inline void set_ARImageAnchorAddedEvent_10(ARImageAnchorAdded_t71A8F5EF09FE7FFD5FFA8E35FE2409FE59893A44 * value)
	{
		___ARImageAnchorAddedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorAddedEvent_10), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorUpdatedEvent_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARImageAnchorUpdatedEvent_11)); }
	inline ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 * get_ARImageAnchorUpdatedEvent_11() const { return ___ARImageAnchorUpdatedEvent_11; }
	inline ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 ** get_address_of_ARImageAnchorUpdatedEvent_11() { return &___ARImageAnchorUpdatedEvent_11; }
	inline void set_ARImageAnchorUpdatedEvent_11(ARImageAnchorUpdated_t552C60653C0710AD7312589A16E6E8B4F00CE036 * value)
	{
		___ARImageAnchorUpdatedEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorUpdatedEvent_11), value);
	}

	inline static int32_t get_offset_of_ARImageAnchorRemovedEvent_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARImageAnchorRemovedEvent_12)); }
	inline ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 * get_ARImageAnchorRemovedEvent_12() const { return ___ARImageAnchorRemovedEvent_12; }
	inline ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 ** get_address_of_ARImageAnchorRemovedEvent_12() { return &___ARImageAnchorRemovedEvent_12; }
	inline void set_ARImageAnchorRemovedEvent_12(ARImageAnchorRemoved_t55233D152AF70F8970D7F4598DADE918A99C82B2 * value)
	{
		___ARImageAnchorRemovedEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___ARImageAnchorRemovedEvent_12), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionFailedEvent_13)); }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * get_ARSessionFailedEvent_13() const { return ___ARSessionFailedEvent_13; }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 ** get_address_of_ARSessionFailedEvent_13() { return &___ARSessionFailedEvent_13; }
	inline void set_ARSessionFailedEvent_13(ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * value)
	{
		___ARSessionFailedEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_13), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionInterruptedEvent_14)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessionInterruptedEvent_14() const { return ___ARSessionInterruptedEvent_14; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessionInterruptedEvent_14() { return &___ARSessionInterruptedEvent_14; }
	inline void set_ARSessionInterruptedEvent_14(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessionInterruptedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_14), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessioninterruptionEndedEvent_15)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_ARSessioninterruptionEndedEvent_15() const { return ___ARSessioninterruptionEndedEvent_15; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_ARSessioninterruptionEndedEvent_15() { return &___ARSessioninterruptionEndedEvent_15; }
	inline void set_ARSessioninterruptionEndedEvent_15(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___ARSessioninterruptionEndedEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_15), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___ARSessionTrackingChangedEvent_16)); }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * get_ARSessionTrackingChangedEvent_16() const { return ___ARSessionTrackingChangedEvent_16; }
	inline ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 ** get_address_of_ARSessionTrackingChangedEvent_16() { return &___ARSessionTrackingChangedEvent_16; }
	inline void set_ARSessionTrackingChangedEvent_16(ARSessionTrackingChanged_t7D0F492F6B75A165F790A69F3F1ED307E00B1AB2 * value)
	{
		___ARSessionTrackingChangedEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_16), value);
	}

	inline static int32_t get_offset_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17)); }
	inline bool get_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() const { return ___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17() { return &___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17; }
	inline void set_U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17(bool value)
	{
		___U3CARSessionShouldAttemptRelocalizationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_s_Camera_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_Camera_18)); }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  get_s_Camera_18() const { return ___s_Camera_18; }
	inline UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4 * get_address_of_s_Camera_18() { return &___s_Camera_18; }
	inline void set_s_Camera_18(UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  value)
	{
		___s_Camera_18 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___s_UnityARSessionNativeInterface_20)); }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * get_s_UnityARSessionNativeInterface_20() const { return ___s_UnityARSessionNativeInterface_20; }
	inline UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 ** get_address_of_s_UnityARSessionNativeInterface_20() { return &___s_UnityARSessionNativeInterface_20; }
	inline void set_s_UnityARSessionNativeInterface_20(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * value)
	{
		___s_UnityARSessionNativeInterface_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache0_21)); }
	inline internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 * get_U3CU3Ef__mgU24cache0_21() const { return ___U3CU3Ef__mgU24cache0_21; }
	inline internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 ** get_address_of_U3CU3Ef__mgU24cache0_21() { return &___U3CU3Ef__mgU24cache0_21; }
	inline void set_U3CU3Ef__mgU24cache0_21(internal_ARFrameUpdate_t2B76D688F1867F73D929D7E32287BA21150A8061 * value)
	{
		___U3CU3Ef__mgU24cache0_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache1_22)); }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * get_U3CU3Ef__mgU24cache1_22() const { return ___U3CU3Ef__mgU24cache1_22; }
	inline ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 ** get_address_of_U3CU3Ef__mgU24cache1_22() { return &___U3CU3Ef__mgU24cache1_22; }
	inline void set_U3CU3Ef__mgU24cache1_22(ARSessionFailed_tA00FB2F831AFF99EBDFAC43C61499421BDF9BE00 * value)
	{
		___U3CU3Ef__mgU24cache1_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache2_23)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_U3CU3Ef__mgU24cache2_23() const { return ___U3CU3Ef__mgU24cache2_23; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_U3CU3Ef__mgU24cache2_23() { return &___U3CU3Ef__mgU24cache2_23; }
	inline void set_U3CU3Ef__mgU24cache2_23(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___U3CU3Ef__mgU24cache2_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache3_24)); }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * get_U3CU3Ef__mgU24cache3_24() const { return ___U3CU3Ef__mgU24cache3_24; }
	inline ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 ** get_address_of_U3CU3Ef__mgU24cache3_24() { return &___U3CU3Ef__mgU24cache3_24; }
	inline void set_U3CU3Ef__mgU24cache3_24(ARSessionCallback_t309401D5599524DA96703ADFE0AC1702928C7151 * value)
	{
		___U3CU3Ef__mgU24cache3_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_25() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache4_25)); }
	inline ARSessionLocalizeCallback_t639D87EE7A908EF8C7CF864CC81418DC25C1ADA1 * get_U3CU3Ef__mgU24cache4_25() const { return ___U3CU3Ef__mgU24cache4_25; }
	inline ARSessionLocalizeCallback_t639D87EE7A908EF8C7CF864CC81418DC25C1ADA1 ** get_address_of_U3CU3Ef__mgU24cache4_25() { return &___U3CU3Ef__mgU24cache4_25; }
	inline void set_U3CU3Ef__mgU24cache4_25(ARSessionLocalizeCallback_t639D87EE7A908EF8C7CF864CC81418DC25C1ADA1 * value)
	{
		___U3CU3Ef__mgU24cache4_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_26() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache5_26)); }
	inline internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 * get_U3CU3Ef__mgU24cache5_26() const { return ___U3CU3Ef__mgU24cache5_26; }
	inline internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 ** get_address_of_U3CU3Ef__mgU24cache5_26() { return &___U3CU3Ef__mgU24cache5_26; }
	inline void set_U3CU3Ef__mgU24cache5_26(internal_ARSessionTrackingChanged_tB3DFD71470944D6370E634F337BBF39A5616DD89 * value)
	{
		___U3CU3Ef__mgU24cache5_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_27() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache6_27)); }
	inline internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 * get_U3CU3Ef__mgU24cache6_27() const { return ___U3CU3Ef__mgU24cache6_27; }
	inline internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 ** get_address_of_U3CU3Ef__mgU24cache6_27() { return &___U3CU3Ef__mgU24cache6_27; }
	inline void set_U3CU3Ef__mgU24cache6_27(internal_ARAnchorAdded_t1DC1BFE366457201FF10F3397AFF538774102CE2 * value)
	{
		___U3CU3Ef__mgU24cache6_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_28() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache7_28)); }
	inline internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 * get_U3CU3Ef__mgU24cache7_28() const { return ___U3CU3Ef__mgU24cache7_28; }
	inline internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 ** get_address_of_U3CU3Ef__mgU24cache7_28() { return &___U3CU3Ef__mgU24cache7_28; }
	inline void set_U3CU3Ef__mgU24cache7_28(internal_ARAnchorUpdated_tFB1A275B5116DBED3E3D0B1D5BB61063F76B6A75 * value)
	{
		___U3CU3Ef__mgU24cache7_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_29() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache8_29)); }
	inline internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 * get_U3CU3Ef__mgU24cache8_29() const { return ___U3CU3Ef__mgU24cache8_29; }
	inline internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 ** get_address_of_U3CU3Ef__mgU24cache8_29() { return &___U3CU3Ef__mgU24cache8_29; }
	inline void set_U3CU3Ef__mgU24cache8_29(internal_ARAnchorRemoved_t3B0017FC7404A4D953C19A81B92B674C88AC69B5 * value)
	{
		___U3CU3Ef__mgU24cache8_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_30() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache9_30)); }
	inline internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 * get_U3CU3Ef__mgU24cache9_30() const { return ___U3CU3Ef__mgU24cache9_30; }
	inline internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 ** get_address_of_U3CU3Ef__mgU24cache9_30() { return &___U3CU3Ef__mgU24cache9_30; }
	inline void set_U3CU3Ef__mgU24cache9_30(internal_ARUserAnchorAdded_tA6FEAC716383C82FFBA1EE103C6D886F0FF36328 * value)
	{
		___U3CU3Ef__mgU24cache9_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_31() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheA_31)); }
	inline internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * get_U3CU3Ef__mgU24cacheA_31() const { return ___U3CU3Ef__mgU24cacheA_31; }
	inline internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 ** get_address_of_U3CU3Ef__mgU24cacheA_31() { return &___U3CU3Ef__mgU24cacheA_31; }
	inline void set_U3CU3Ef__mgU24cacheA_31(internal_ARUserAnchorUpdated_t5879DD34C76E50F20701BECA2A05680D1CDE15E9 * value)
	{
		___U3CU3Ef__mgU24cacheA_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_32() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheB_32)); }
	inline internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * get_U3CU3Ef__mgU24cacheB_32() const { return ___U3CU3Ef__mgU24cacheB_32; }
	inline internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 ** get_address_of_U3CU3Ef__mgU24cacheB_32() { return &___U3CU3Ef__mgU24cacheB_32; }
	inline void set_U3CU3Ef__mgU24cacheB_32(internal_ARUserAnchorRemoved_t35E6F1259D940FFE1325AF4346824A5DCDA7F3F2 * value)
	{
		___U3CU3Ef__mgU24cacheB_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_33() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheC_33)); }
	inline internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 * get_U3CU3Ef__mgU24cacheC_33() const { return ___U3CU3Ef__mgU24cacheC_33; }
	inline internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 ** get_address_of_U3CU3Ef__mgU24cacheC_33() { return &___U3CU3Ef__mgU24cacheC_33; }
	inline void set_U3CU3Ef__mgU24cacheC_33(internal_ARFaceAnchorAdded_t365B295C359AEBAC2AAD8013E00C02BC75F63807 * value)
	{
		___U3CU3Ef__mgU24cacheC_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_34() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheD_34)); }
	inline internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A * get_U3CU3Ef__mgU24cacheD_34() const { return ___U3CU3Ef__mgU24cacheD_34; }
	inline internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A ** get_address_of_U3CU3Ef__mgU24cacheD_34() { return &___U3CU3Ef__mgU24cacheD_34; }
	inline void set_U3CU3Ef__mgU24cacheD_34(internal_ARFaceAnchorUpdated_tBE8086BE58C775CF9E9E47D822BCCCB18453737A * value)
	{
		___U3CU3Ef__mgU24cacheD_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_35() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheE_35)); }
	inline internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 * get_U3CU3Ef__mgU24cacheE_35() const { return ___U3CU3Ef__mgU24cacheE_35; }
	inline internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 ** get_address_of_U3CU3Ef__mgU24cacheE_35() { return &___U3CU3Ef__mgU24cacheE_35; }
	inline void set_U3CU3Ef__mgU24cacheE_35(internal_ARFaceAnchorRemoved_tAD4C751D5D11D8A4B5C0118226E5CD33F1835873 * value)
	{
		___U3CU3Ef__mgU24cacheE_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_36() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cacheF_36)); }
	inline internal_ARImageAnchorAdded_t7F4E10B8127B30BA2B4BBB2602385E8AE2288958 * get_U3CU3Ef__mgU24cacheF_36() const { return ___U3CU3Ef__mgU24cacheF_36; }
	inline internal_ARImageAnchorAdded_t7F4E10B8127B30BA2B4BBB2602385E8AE2288958 ** get_address_of_U3CU3Ef__mgU24cacheF_36() { return &___U3CU3Ef__mgU24cacheF_36; }
	inline void set_U3CU3Ef__mgU24cacheF_36(internal_ARImageAnchorAdded_t7F4E10B8127B30BA2B4BBB2602385E8AE2288958 * value)
	{
		___U3CU3Ef__mgU24cacheF_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_37() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache10_37)); }
	inline internal_ARImageAnchorUpdated_t9BAA541A1BDBB1623354CB38D224A742FDC3CF32 * get_U3CU3Ef__mgU24cache10_37() const { return ___U3CU3Ef__mgU24cache10_37; }
	inline internal_ARImageAnchorUpdated_t9BAA541A1BDBB1623354CB38D224A742FDC3CF32 ** get_address_of_U3CU3Ef__mgU24cache10_37() { return &___U3CU3Ef__mgU24cache10_37; }
	inline void set_U3CU3Ef__mgU24cache10_37(internal_ARImageAnchorUpdated_t9BAA541A1BDBB1623354CB38D224A742FDC3CF32 * value)
	{
		___U3CU3Ef__mgU24cache10_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_38() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_StaticFields, ___U3CU3Ef__mgU24cache11_38)); }
	inline internal_ARImageAnchorRemoved_t022F3C662F10FCD6E655761503138602FD34A28C * get_U3CU3Ef__mgU24cache11_38() const { return ___U3CU3Ef__mgU24cache11_38; }
	inline internal_ARImageAnchorRemoved_t022F3C662F10FCD6E655761503138602FD34A28C ** get_address_of_U3CU3Ef__mgU24cache11_38() { return &___U3CU3Ef__mgU24cache11_38; }
	inline void set_U3CU3Ef__mgU24cache11_38(internal_ARImageAnchorRemoved_t022F3C662F10FCD6E655761503138602FD34A28C * value)
	{
		___U3CU3Ef__mgU24cache11_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache11_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T2B98848E3007C1EB61DE6B168237EA7D57880760_H
#ifndef ARFRAMEUPDATE_T8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_H
#define ARFRAMEUPDATE_T8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface_ARFrameUpdate
struct  ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T4930D5B5791439A468257532D992AAAAA9139FA3_H
#define UNITYPOINTCLOUDEXAMPLE_T4930D5B5791439A468257532D992AAAAA9139FA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_4;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PointCloudPrefab_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * ___pointCloudObjects_6;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_PointCloudData_7;

public:
	inline static int32_t get_offset_of_numPointsToShow_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___numPointsToShow_4)); }
	inline uint32_t get_numPointsToShow_4() const { return ___numPointsToShow_4; }
	inline uint32_t* get_address_of_numPointsToShow_4() { return &___numPointsToShow_4; }
	inline void set_numPointsToShow_4(uint32_t value)
	{
		___numPointsToShow_4 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___PointCloudPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PointCloudPrefab_5() const { return ___PointCloudPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PointCloudPrefab_5() { return &___PointCloudPrefab_5; }
	inline void set_PointCloudPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PointCloudPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_5), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_6() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___pointCloudObjects_6)); }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * get_pointCloudObjects_6() const { return ___pointCloudObjects_6; }
	inline List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 ** get_address_of_pointCloudObjects_6() { return &___pointCloudObjects_6; }
	inline void set_pointCloudObjects_6(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * value)
	{
		___pointCloudObjects_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_6), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_7() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3, ___m_PointCloudData_7)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_PointCloudData_7() const { return ___m_PointCloudData_7; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_PointCloudData_7() { return &___m_PointCloudData_7; }
	inline void set_m_PointCloudData_7(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_PointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T4930D5B5791439A468257532D992AAAAA9139FA3_H
#ifndef RECTANGLEMARKER_T82DE99A93567BB500541D6786A0C063596DABD56_H
#define RECTANGLEMARKER_T82DE99A93567BB500541D6786A0C063596DABD56_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.RectangleMarker
struct  RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Utils.RectangleMarker::_lerpSpeed
	float ____lerpSpeed_4;
	// UnityEngine.TextMesh[] Utils.RectangleMarker::_sizeTexts
	TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* ____sizeTexts_5;
	// UnityEngine.Mesh Utils.RectangleMarker::_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ____mesh_6;
	// UnityEngine.MeshFilter Utils.RectangleMarker::_meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ____meshFilter_7;
	// UnityEngine.Vector3 Utils.RectangleMarker::_topLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____topLeft_8;
	// UnityEngine.Vector3 Utils.RectangleMarker::_topRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____topRight_9;
	// UnityEngine.Vector3 Utils.RectangleMarker::_bottomRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____bottomRight_10;
	// UnityEngine.Vector3 Utils.RectangleMarker::_bottomLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____bottomLeft_11;
	// UnityEngine.Vector3 Utils.RectangleMarker::_targetTopLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____targetTopLeft_12;
	// UnityEngine.Vector3 Utils.RectangleMarker::_targetTopRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____targetTopRight_13;
	// UnityEngine.Vector3 Utils.RectangleMarker::_targetBottomRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____targetBottomRight_14;
	// UnityEngine.Vector3 Utils.RectangleMarker::_targetBottomLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____targetBottomLeft_15;

public:
	inline static int32_t get_offset_of__lerpSpeed_4() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____lerpSpeed_4)); }
	inline float get__lerpSpeed_4() const { return ____lerpSpeed_4; }
	inline float* get_address_of__lerpSpeed_4() { return &____lerpSpeed_4; }
	inline void set__lerpSpeed_4(float value)
	{
		____lerpSpeed_4 = value;
	}

	inline static int32_t get_offset_of__sizeTexts_5() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____sizeTexts_5)); }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* get__sizeTexts_5() const { return ____sizeTexts_5; }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE** get_address_of__sizeTexts_5() { return &____sizeTexts_5; }
	inline void set__sizeTexts_5(TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* value)
	{
		____sizeTexts_5 = value;
		Il2CppCodeGenWriteBarrier((&____sizeTexts_5), value);
	}

	inline static int32_t get_offset_of__mesh_6() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____mesh_6)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get__mesh_6() const { return ____mesh_6; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of__mesh_6() { return &____mesh_6; }
	inline void set__mesh_6(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		____mesh_6 = value;
		Il2CppCodeGenWriteBarrier((&____mesh_6), value);
	}

	inline static int32_t get_offset_of__meshFilter_7() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____meshFilter_7)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get__meshFilter_7() const { return ____meshFilter_7; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of__meshFilter_7() { return &____meshFilter_7; }
	inline void set__meshFilter_7(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		____meshFilter_7 = value;
		Il2CppCodeGenWriteBarrier((&____meshFilter_7), value);
	}

	inline static int32_t get_offset_of__topLeft_8() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____topLeft_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__topLeft_8() const { return ____topLeft_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__topLeft_8() { return &____topLeft_8; }
	inline void set__topLeft_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____topLeft_8 = value;
	}

	inline static int32_t get_offset_of__topRight_9() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____topRight_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__topRight_9() const { return ____topRight_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__topRight_9() { return &____topRight_9; }
	inline void set__topRight_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____topRight_9 = value;
	}

	inline static int32_t get_offset_of__bottomRight_10() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____bottomRight_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__bottomRight_10() const { return ____bottomRight_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__bottomRight_10() { return &____bottomRight_10; }
	inline void set__bottomRight_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____bottomRight_10 = value;
	}

	inline static int32_t get_offset_of__bottomLeft_11() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____bottomLeft_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__bottomLeft_11() const { return ____bottomLeft_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__bottomLeft_11() { return &____bottomLeft_11; }
	inline void set__bottomLeft_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____bottomLeft_11 = value;
	}

	inline static int32_t get_offset_of__targetTopLeft_12() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____targetTopLeft_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__targetTopLeft_12() const { return ____targetTopLeft_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__targetTopLeft_12() { return &____targetTopLeft_12; }
	inline void set__targetTopLeft_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____targetTopLeft_12 = value;
	}

	inline static int32_t get_offset_of__targetTopRight_13() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____targetTopRight_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__targetTopRight_13() const { return ____targetTopRight_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__targetTopRight_13() { return &____targetTopRight_13; }
	inline void set__targetTopRight_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____targetTopRight_13 = value;
	}

	inline static int32_t get_offset_of__targetBottomRight_14() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____targetBottomRight_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__targetBottomRight_14() const { return ____targetBottomRight_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__targetBottomRight_14() { return &____targetBottomRight_14; }
	inline void set__targetBottomRight_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____targetBottomRight_14 = value;
	}

	inline static int32_t get_offset_of__targetBottomLeft_15() { return static_cast<int32_t>(offsetof(RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56, ____targetBottomLeft_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__targetBottomLeft_15() const { return ____targetBottomLeft_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__targetBottomLeft_15() { return &____targetBottomLeft_15; }
	inline void set__targetBottomLeft_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____targetBottomLeft_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEMARKER_T82DE99A93567BB500541D6786A0C063596DABD56_H
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * m_Items[1];

public:
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m66ACE80424582788B769E061E2FEB145E4035121_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m577B976D78F1DACF68D429257CC0FE38FC9DD8BF_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.XR.iOS.ARHitTestResult>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR bool Enumerable_Any_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mDDFBE9E4EE4CB801A2F34FC979EDBE26ACE7C654_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<UnityEngine.XR.iOS.ARHitTestResult>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E  Enumerable_First_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mCEDC54E9769CB1792469C6BD5B96F664D8F0A694_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Action`4<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(!0,!1,!2,!3)
extern "C" IL2CPP_METHOD_ATTR void Action_4_Invoke_mDC4EBD16C7365A07D80C3B7F4D5A9E099F7B0565_gshared (Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p3, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::get_transform()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ARPlaneAnchor_get_transform_mBC7C579783340435BE4868A0020921C8FCA0886D (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4 UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * serializableUnityARMatrix4x4_op_Implicit_mF58960747F434BF218CE3F52051849B587D46AF7 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rValue0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ARPlaneAnchor_get_center_m382C11C684B0B5530CD41B1BFDC1C972C53C9D17 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void SerializableVector4__ctor_mB1EF9DD81F67AB50B42B2CE5E8936DD7826C3833 (SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::get_extent()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ARPlaneAnchor_get_extent_mC6F66259922C54B969558ABCAEFD05DAEBA6F277 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845 (const RuntimeMethod* method);
// System.String UnityEngine.XR.iOS.ARPlaneAnchor::get_identifier()
extern "C" IL2CPP_METHOD_ATTR String_t* ARPlaneAnchor_get_identifier_mB06BED4A43D810283ED7CFE88A5FEC7BD39D6C88 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARPlaneGeometry UnityEngine.XR.iOS.ARPlaneAnchor::get_planeGeometry()
extern "C" IL2CPP_METHOD_ATTR ARPlaneGeometry_t31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F * ARPlaneAnchor_get_planeGeometry_m2E46DBE0A49AB4BFDA8E64CC3F46ABC0311C642F (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * __this, const RuntimeMethod* method);
// UnityEngine.XR.iOS.Utils.serializablePlaneGeometry UnityEngine.XR.iOS.Utils.serializablePlaneGeometry::op_Implicit(UnityEngine.XR.iOS.ARPlaneGeometry)
extern "C" IL2CPP_METHOD_ATTR serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * serializablePlaneGeometry_op_Implicit_mA0947EE12EBC0F29654661E1D2A16F7729687765 (ARPlaneGeometry_t31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F * ___planeGeom0, const RuntimeMethod* method);
// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::get_alignment()
extern "C" IL2CPP_METHOD_ATTR int64_t ARPlaneAnchor_get_alignment_m5D7354378BEC1B21A9B2A0086102F5AF0959F453 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,UnityEngine.XR.iOS.Utils.serializablePlaneGeometry,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m77716DAB4A818AF32236E0E4C35E7A9E69680F30 (serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2 * __this, serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * ___wt0, SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___ctr1, SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___ext2, int64_t ___apaa3, serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * ___spg4, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___idstr5, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator_Invoke_m3B683B112F0674A6D4CF2A7199A7B8A24133804C (VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ARFrameUpdate__ctor_mB2173A9FEC2F439B8C2D0C4E8D02EF5424DA1E9F (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.iOS.UnityARSessionNativeInterface::add_ARFrameUpdatedEvent(UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate)
extern "C" IL2CPP_METHOD_ATTR void UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_mFCCCC928C7B32D12F7D822435CE7D261B89190B6 (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, const RuntimeMethod*))List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared)(p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m66ACE80424582788B769E061E2FEB145E4035121_gshared)(__this, p0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8 (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *, int32_t, const RuntimeMethod*))List_1_get_Item_m577B976D78F1DACF68D429257CC0FE38FC9DD8BF_gshared)(__this, p0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Int64 System.Math::Min(System.Int64,System.Int64)
extern "C" IL2CPP_METHOD_ATTR int64_t Math_Min_m134D5BCDDFA54295919D4FE9A31F9B89DE36B85B (int64_t p0, int64_t p1, const RuntimeMethod* method);
// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::GetARSessionNativeInterface()
extern "C" IL2CPP_METHOD_ATTR UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67 (const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.iOS.ARHitTestResult> UnityEngine.XR.iOS.UnityARSessionNativeInterface::HitTest(UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType)
extern "C" IL2CPP_METHOD_ATTR List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251 * UnityARSessionNativeInterface_HitTest_m8FCE7523A3F7A520CDB7D2870558A9FE02F8D313 (UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * __this, ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  ___point0, int64_t ___types1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<UnityEngine.XR.iOS.ARHitTestResult>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mDDFBE9E4EE4CB801A2F34FC979EDBE26ACE7C654 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mDDFBE9E4EE4CB801A2F34FC979EDBE26ACE7C654_gshared)(p0, method);
}
// !!0 System.Linq.Enumerable::First<UnityEngine.XR.iOS.ARHitTestResult>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E  Enumerable_First_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mCEDC54E9769CB1792469C6BD5B96F664D8F0A694 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E  (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mCEDC54E9769CB1792469C6BD5B96F664D8F0A694_gshared)(p0, method);
}
// System.Boolean Utils.ARHitTest::HitTestWithResultType(UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType,UnityEngine.Matrix4x4&)
extern "C" IL2CPP_METHOD_ATTR bool ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B (ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  ___point0, int64_t ___resultTypes1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * ___hitTransform2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.iOS.UnityARMatrixOps::GetPosition(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityARMatrixOps_GetPosition_m54E6ADA8EBCA4AE705C6C12768F187D3D41B419C (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix0, const RuntimeMethod* method);
// System.Void System.Action`4<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(!0,!1,!2,!3)
inline void Action_4_Invoke_mDC4EBD16C7365A07D80C3B7F4D5A9E099F7B0565 (Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p3, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))Action_4_Invoke_mDC4EBD16C7365A07D80C3B7F4D5A9E099F7B0565_gshared)(__this, p0, p1, p2, p3, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Mesh__ctor_m3AEBC82AB71D4F9498F6E254174BEBA8372834B4 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void Utils.RectangleMarker::set_TopLeft(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_TopLeft_mEEAD7B3B1E135D1A15342D3C078BD73E99DDE4BE (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// System.Void Utils.RectangleMarker::set_TopRight(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_TopRight_mE1F10329545BCC82C53AFD1B1D8E8DCA4D21CC9C (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7 (const RuntimeMethod* method);
// System.Void Utils.RectangleMarker::set_BottomRight(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_BottomRight_m9652A57BDBD7D6266D55FDC6BD415083EAE7E384 (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Utils.RectangleMarker::set_BottomLeft(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_BottomLeft_m2D75807111DDC328BB6133A7BAA18CC42C6889C8 (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::Clear()
extern "C" IL2CPP_METHOD_ATTR void Mesh_Clear_mB750E1DCAB658124AAD81A02B93DED7601047B60 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv_m56E4B52315669FBDA89DC9C550AC89EEE8A4E7C8 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m30641073F263B5F108E2CFA92FC054AE66BA986F (RuntimeArray * p0, RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_triangles_m143A1C262BADCFACE43587EBA2CDC6EBEB5DFAED (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m1EE7C67FC8F7497353EBDE007D3ED35774C82E4C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::.ctor(UnityEngine.XR.iOS.Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,UnityEngine.XR.iOS.Utils.serializablePlaneGeometry,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void serializableUnityARPlaneAnchor__ctor_m77716DAB4A818AF32236E0E4C35E7A9E69680F30 (serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2 * __this, serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * ___wt0, SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___ctr1, SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * ___ext2, int64_t ___apaa3, serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * ___spg4, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___idstr5, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = ___idstr5;
		__this->set_identifierStr_5(L_4);
		serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * L_5 = ___spg4;
		__this->set_planeGeometry_4(L_5);
		return;
	}
}
// UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor UnityEngine.XR.iOS.Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C" IL2CPP_METHOD_ATTR serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2 * serializableUnityARPlaneAnchor_op_Implicit_mE88E10AB4A7642175F8B1A1CF1BD77B678885B20 (ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_mE88E10AB4A7642175F8B1A1CF1BD77B678885B20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * V_0 = NULL;
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * V_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * V_5 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_9 = NULL;
	serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * V_10 = NULL;
	{
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_0 = ___rValue0;
		NullCheck(L_0);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = ARPlaneAnchor_get_transform_mBC7C579783340435BE4868A0020921C8FCA0886D(L_0, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * L_2 = serializableUnityARMatrix4x4_op_Implicit_mF58960747F434BF218CE3F52051849B587D46AF7(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_3 = ___rValue0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ARPlaneAnchor_get_center_m382C11C684B0B5530CD41B1BFDC1C972C53C9D17(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_6 = ___rValue0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ARPlaneAnchor_get_center_m382C11C684B0B5530CD41B1BFDC1C972C53C9D17(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_9 = ___rValue0;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ARPlaneAnchor_get_center_m382C11C684B0B5530CD41B1BFDC1C972C53C9D17(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_z_4();
		SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * L_12 = (SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 *)il2cpp_codegen_object_new(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_mB1EF9DD81F67AB50B42B2CE5E8936DD7826C3833(L_12, L_5, L_8, L_11, (1.0f), /*hidden argument*/NULL);
		V_1 = L_12;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_13 = ___rValue0;
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ARPlaneAnchor_get_extent_mC6F66259922C54B969558ABCAEFD05DAEBA6F277(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = (&V_6)->get_x_2();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_16 = ___rValue0;
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ARPlaneAnchor_get_extent_mC6F66259922C54B969558ABCAEFD05DAEBA6F277(L_16, /*hidden argument*/NULL);
		V_7 = L_17;
		float L_18 = (&V_7)->get_y_3();
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_19 = ___rValue0;
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ARPlaneAnchor_get_extent_mC6F66259922C54B969558ABCAEFD05DAEBA6F277(L_19, /*hidden argument*/NULL);
		V_8 = L_20;
		float L_21 = (&V_8)->get_z_4();
		SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * L_22 = (SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 *)il2cpp_codegen_object_new(SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_mB1EF9DD81F67AB50B42B2CE5E8936DD7826C3833(L_22, L_15, L_18, L_21, (1.0f), /*hidden argument*/NULL);
		V_5 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_23 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_24 = ___rValue0;
		NullCheck(L_24);
		String_t* L_25 = ARPlaneAnchor_get_identifier_mB06BED4A43D810283ED7CFE88A5FEC7BD39D6C88(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_26 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_25);
		V_9 = L_26;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_27 = ___rValue0;
		NullCheck(L_27);
		ARPlaneGeometry_t31A4DDA70BF10DDBB063D2FD148CDCE517B8D75F * L_28 = ARPlaneAnchor_get_planeGeometry_m2E46DBE0A49AB4BFDA8E64CC3F46ABC0311C642F(L_27, /*hidden argument*/NULL);
		serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * L_29 = serializablePlaneGeometry_op_Implicit_mA0947EE12EBC0F29654661E1D2A16F7729687765(L_28, /*hidden argument*/NULL);
		V_10 = L_29;
		serializableUnityARMatrix4x4_t2D3F0DADA6346AFB8330B5CFEA26B4AA7604B731 * L_30 = V_0;
		SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * L_31 = V_1;
		SerializableVector4_tAFABF6000A7891F39F5BB3C32EE4D002F4B44028 * L_32 = V_5;
		ARPlaneAnchor_t0FFC0A1F23FF68703D127AFF1D9D11BB18EAC189 * L_33 = ___rValue0;
		NullCheck(L_33);
		int64_t L_34 = ARPlaneAnchor_get_alignment_m5D7354378BEC1B21A9B2A0086102F5AF0959F453(L_33, /*hidden argument*/NULL);
		serializablePlaneGeometry_t32B3123C8DFA669D8FAE918A37B3B5D9FEBDB3D9 * L_35 = V_10;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_36 = V_9;
		serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2 * L_37 = (serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_tEC527188F73D5D313F88F1871C5CCA575F084AE2_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m77716DAB4A818AF32236E0E4C35E7A9E69680F30(L_37, L_30, L_31, L_32, L_34, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
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
extern "C"  void DelegatePInvokeWrapper_VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D (VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___videoFormat0);

}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator__ctor_m3775B53A4444AFFAFC3286383192F9D042154FCD (VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::Invoke(UnityEngine.XR.iOS.UnityARVideoFormat)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator_Invoke_m3B683B112F0674A6D4CF2A7199A7B8A24133804C (VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		VideoFormatEnumerator_Invoke_m3B683B112F0674A6D4CF2A7199A7B8A24133804C((VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D *)__this->get_prev_9(), ___videoFormat0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	}
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 1)
		{
			// open
			typedef void (*FunctionPointerType) (UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___videoFormat0, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___videoFormat0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(targetMethod, targetThis, ___videoFormat0);
					else
						GenericVirtActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(targetMethod, targetThis, ___videoFormat0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___videoFormat0);
					else
						VirtActionInvoker1< UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___videoFormat0);
				}
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (void*, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95 , const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___videoFormat0, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.XR.iOS.VideoFormatEnumerator::BeginInvoke(UnityEngine.XR.iOS.UnityARVideoFormat,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VideoFormatEnumerator_BeginInvoke_m9FF7492924AFEED42DABA62CCAD377D87FDA22BC (VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * __this, UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95  ___videoFormat0, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoFormatEnumerator_BeginInvoke_m9FF7492924AFEED42DABA62CCAD377D87FDA22BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UnityARVideoFormat_tB838BB6F342C0F1A4201980B03B869BA2E9E2E95_il2cpp_TypeInfo_var, &___videoFormat0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.iOS.VideoFormatEnumerator::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void VideoFormatEnumerator_EndInvoke_mB9A4FA7160D1A199319DF00B963591D0BBF6A160 (VideoFormatEnumerator_tE8B6480DBDEBDC141AA932D8696673C644A2006D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityPointCloudExample::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample__ctor_mCA2A61A12500DDB08846F35276062A66359AE2DF (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numPointsToShow_4(((int32_t)100));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityPointCloudExample::Start()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Start_m9EAB3968FBEA2D49A42AE271480BC2626AA0CA3A (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Start_m9EAB3968FBEA2D49A42AE271480BC2626AA0CA3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 * L_0 = (ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67 *)il2cpp_codegen_object_new(ARFrameUpdate_t8A1092923CD7B733CB1B71B1EA5BC85B017E7A67_il2cpp_TypeInfo_var);
		ARFrameUpdate__ctor_mB2173A9FEC2F439B8C2D0C4E8D02EF5424DA1E9F(L_0, __this, (intptr_t)((intptr_t)UnityPointCloudExample_ARFrameUpdated_mA23CF03C1765B1DB84B8120911E052AA532719D3_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_add_ARFrameUpdatedEvent_mFCCCC928C7B32D12F7D822435CE7D261B89190B6(L_0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_3 = (List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 *)il2cpp_codegen_object_new(List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_3, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		__this->set_pointCloudObjects_6(L_3);
		V_0 = 0;
		goto IL_004e;
	}

IL_0034:
	{
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_4 = __this->get_pointCloudObjects_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_4, L_6, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_8 = V_0;
		uint32_t L_9 = __this->get_numPointsToShow_4();
		if ((((int64_t)(((int64_t)((int64_t)L_8)))) < ((int64_t)(((int64_t)((uint64_t)L_9))))))
		{
			goto IL_0034;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityPointCloudExample::ARFrameUpdated(UnityEngine.XR.iOS.UnityARCamera)
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_ARFrameUpdated_mA23CF03C1765B1DB84B8120911E052AA532719D3 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, UnityARCamera_t4C2AF5738761FACBA2DCDE8B87228F38FE12EFE4  ___camera0, const RuntimeMethod* method)
{
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = (&___camera0)->get_pointCloudData_7();
		__this->set_m_PointCloudData_7(L_0);
		return;
	}
}
// System.Void UnityPointCloudExample::Update()
extern "C" IL2CPP_METHOD_ATTR void UnityPointCloudExample_Update_m617C80F6FD76499AF3CBC72ACCF39F435247FB44 (UnityPointCloudExample_t4930D5B5791439A468257532D992AAAAA9139FA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPointCloudExample_Update_m617C80F6FD76499AF3CBC72ACCF39F435247FB44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_PointCloudPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008c;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = __this->get_m_PointCloudData_7();
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		V_0 = 0;
		goto IL_0070;
	}

IL_0023:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = __this->get_m_PointCloudData_7();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))));
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = Vector4_op_Implicit_m5BFA8D95F88CB2AEA6E02B200A61B718314A8495(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		List_1_tBA8D772D87B6502B2A4D0EFE166C846285F50650 * L_7 = __this->get_pointCloudObjects_6();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_7, L_8, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_2 = L_9;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_2;
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		float L_12 = (&V_1)->get_x_1();
		float L_13 = (&V_1)->get_y_2();
		float L_14 = (&V_1)->get_z_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_11, L_15, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0070:
	{
		int32_t L_17 = V_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_18 = __this->get_m_PointCloudData_7();
		NullCheck(L_18);
		uint32_t L_19 = __this->get_numPointsToShow_4();
		int64_t L_20 = Math_Min_m134D5BCDDFA54295919D4FE9A31F9B89DE36B85B((((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length))))))), (((int64_t)((uint64_t)L_19))), /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_17)))) < ((int64_t)L_20)))
		{
			goto IL_0023;
		}
	}

IL_008c:
	{
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
// System.Boolean Utils.ARHitTest::HitTestWithResultType(UnityEngine.XR.iOS.ARPoint,UnityEngine.XR.iOS.ARHitTestResultType,UnityEngine.Matrix4x4U26)
extern "C" IL2CPP_METHOD_ATTR bool ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B (ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  ___point0, int64_t ___resultTypes1, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * ___hitTransform2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251 * V_0 = NULL;
	ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760_il2cpp_TypeInfo_var);
		UnityARSessionNativeInterface_t2B98848E3007C1EB61DE6B168237EA7D57880760 * L_0 = UnityARSessionNativeInterface_GetARSessionNativeInterface_m1BE99E7A463CFC435889D1AFEF569BB4E7F69E67(/*hidden argument*/NULL);
		ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  L_1 = ___point0;
		int64_t L_2 = ___resultTypes1;
		NullCheck(L_0);
		List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251 * L_3 = UnityARSessionNativeInterface_HitTest_m8FCE7523A3F7A520CDB7D2870558A9FE02F8D313(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251 * L_4 = V_0;
		bool L_5 = Enumerable_Any_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mDDFBE9E4EE4CB801A2F34FC979EDBE26ACE7C654(L_4, /*hidden argument*/Enumerable_Any_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mDDFBE9E4EE4CB801A2F34FC979EDBE26ACE7C654_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_6 = ___hitTransform2;
		List_1_tF6C4667A19201F88DE1C1CBDE50EF4433C0B7251 * L_7 = V_0;
		ARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E  L_8 = Enumerable_First_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mCEDC54E9769CB1792469C6BD5B96F664D8F0A694(L_7, /*hidden argument*/Enumerable_First_TisARHitTestResult_t6D839CA592EDD681A7EA5C081F652A15865EDD8E_mCEDC54E9769CB1792469C6BD5B96F664D8F0A694_RuntimeMethod_var);
		V_1 = L_8;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_9 = (&V_1)->get_worldTransform_3();
		*(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_6 = L_9;
		return (bool)1;
	}

IL_002e:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * L_10 = ___hitTransform2;
		il2cpp_codegen_initobj((&V_2), sizeof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA ));
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_11 = V_2;
		*(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)L_10 = L_11;
		return (bool)0;
	}
}
// System.Void Utils.ARHitTest::CastRectangle(Possible.Vision.Managed.VisionRectangle,System.Action`4<UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3>)
extern "C" IL2CPP_METHOD_ATTR void ARHitTest_CastRectangle_m3584E4D7171942710CFAA259A54FB6A15EEB89DA (VisionRectangle_t27763449AABD39B5ADF76C57B18A9AAB6893CD9F  ___rectangle0, Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB * ___onHit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARHitTest_CastRectangle_m3584E4D7171942710CFAA259A54FB6A15EEB89DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset(&V_7, 0, sizeof(V_7));
	ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_10;
	memset(&V_10, 0, sizeof(V_10));
	ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_13;
	memset(&V_13, 0, sizeof(V_13));
	ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_16;
	memset(&V_16, 0, sizeof(V_16));
	{
		il2cpp_codegen_initobj((&V_5), sizeof(ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2 ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (&___rectangle0)->get_topLeft_0();
		V_6 = L_0;
		float L_1 = (&V_6)->get_x_0();
		(&V_5)->set_x_0((((double)((double)L_1))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = (&___rectangle0)->get_topLeft_0();
		V_7 = L_2;
		float L_3 = (&V_7)->get_y_1();
		(&V_5)->set_y_1((((double)((double)L_3))));
		ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  L_4 = V_5;
		bool L_5 = ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B(L_4, (((int64_t)((int64_t)((int32_t)16)))), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_6 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = UnityARMatrixOps_GetPosition_m54E6ADA8EBCA4AE705C6C12768F187D3D41B419C(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0056;
	}

IL_0055:
	{
		return;
	}

IL_0056:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2 ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = (&___rectangle0)->get_topRight_1();
		V_9 = L_8;
		float L_9 = (&V_9)->get_x_0();
		(&V_8)->set_x_0((((double)((double)L_9))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = (&___rectangle0)->get_topRight_1();
		V_10 = L_10;
		float L_11 = (&V_10)->get_y_1();
		(&V_8)->set_y_1((((double)((double)L_11))));
		ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  L_12 = V_8;
		bool L_13 = ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B(L_12, (((int64_t)((int64_t)((int32_t)16)))), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00ab;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_14 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = UnityARMatrixOps_GetPosition_m54E6ADA8EBCA4AE705C6C12768F187D3D41B419C(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_00ac;
	}

IL_00ab:
	{
		return;
	}

IL_00ac:
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2 ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = (&___rectangle0)->get_bottomRight_2();
		V_12 = L_16;
		float L_17 = (&V_12)->get_x_0();
		(&V_11)->set_x_0((((double)((double)L_17))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = (&___rectangle0)->get_bottomRight_2();
		V_13 = L_18;
		float L_19 = (&V_13)->get_y_1();
		(&V_11)->set_y_1((((double)((double)L_19))));
		ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  L_20 = V_11;
		bool L_21 = ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B(L_20, (((int64_t)((int64_t)((int32_t)16)))), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0101;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_22 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = UnityARMatrixOps_GetPosition_m54E6ADA8EBCA4AE705C6C12768F187D3D41B419C(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		goto IL_0102;
	}

IL_0101:
	{
		return;
	}

IL_0102:
	{
		il2cpp_codegen_initobj((&V_14), sizeof(ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2 ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_24 = (&___rectangle0)->get_bottomLeft_3();
		V_15 = L_24;
		float L_25 = (&V_15)->get_x_0();
		(&V_14)->set_x_0((((double)((double)L_25))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = (&___rectangle0)->get_bottomLeft_3();
		V_16 = L_26;
		float L_27 = (&V_16)->get_y_1();
		(&V_14)->set_y_1((((double)((double)L_27))));
		ARPoint_t88E48F1C5C439AA12E4F178D93A44F5EA6EB21E2  L_28 = V_14;
		bool L_29 = ARHitTest_HitTestWithResultType_mBDA60F8FD5EEBEDF8848482F50EC85405B23754B(L_28, (((int64_t)((int64_t)((int32_t)16)))), (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0158;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_30 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = UnityARMatrixOps_GetPosition_m54E6ADA8EBCA4AE705C6C12768F187D3D41B419C(L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		goto IL_0159;
	}

IL_0158:
	{
		return;
	}

IL_0159:
	{
		Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB * L_32 = ___onHit1;
		if (!L_32)
		{
			goto IL_016a;
		}
	}
	{
		Action_4_t6F1D95C8E698069AA80F3C969644A81F56FB3ACB * L_33 = ___onHit1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = V_4;
		NullCheck(L_33);
		Action_4_Invoke_mDC4EBD16C7365A07D80C3B7F4D5A9E099F7B0565(L_33, L_34, L_35, L_36, L_37, /*hidden argument*/Action_4_Invoke_mDC4EBD16C7365A07D80C3B7F4D5A9E099F7B0565_RuntimeMethod_var);
	}

IL_016a:
	{
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
// System.Void Utils.RectangleMarker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker__ctor_m70B62638F42801C218703957F934F00A65302734 (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, const RuntimeMethod* method)
{
	{
		__this->set__lerpSpeed_4((10.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Utils.RectangleMarker::set_TopLeft(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_TopLeft_mEEAD7B3B1E135D1A15342D3C078BD73E99DDE4BE (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set__targetTopLeft_12(L_0);
		return;
	}
}
// System.Void Utils.RectangleMarker::set_TopRight(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_TopRight_mE1F10329545BCC82C53AFD1B1D8E8DCA4D21CC9C (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set__targetTopRight_13(L_0);
		return;
	}
}
// System.Void Utils.RectangleMarker::set_BottomRight(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_BottomRight_m9652A57BDBD7D6266D55FDC6BD415083EAE7E384 (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set__targetBottomRight_14(L_0);
		return;
	}
}
// System.Void Utils.RectangleMarker::set_BottomLeft(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_set_BottomLeft_m2D75807111DDC328BB6133A7BAA18CC42C6889C8 (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set__targetBottomLeft_15(L_0);
		return;
	}
}
// System.Void Utils.RectangleMarker::Awake()
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_Awake_m1A37D578BE923B17ED17B66E5FF3FCA1A2A688F8 (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectangleMarker_Awake_m1A37D578BE923B17ED17B66E5FF3FCA1A2A688F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mF3F89565A9CEFF85AA1FB27C6EC64BE590DC386B_RuntimeMethod_var);
		__this->set__meshFilter_7(L_0);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_1 = (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *)il2cpp_codegen_object_new(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C_il2cpp_TypeInfo_var);
		Mesh__ctor_m3AEBC82AB71D4F9498F6E254174BEBA8372834B4(L_1, /*hidden argument*/NULL);
		__this->set__mesh_6(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_2, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_5, /*hidden argument*/NULL);
		RectangleMarker_set_TopLeft_mEEAD7B3B1E135D1A15342D3C078BD73E99DDE4BE(__this, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_7, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_9, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_8, L_10, /*hidden argument*/NULL);
		RectangleMarker_set_TopRight_mE1F10329545BCC82C53AFD1B1D8E8DCA4D21CC9C(__this, L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_15, /*hidden argument*/NULL);
		RectangleMarker_set_BottomRight_m9652A57BDBD7D6266D55FDC6BD415083EAE7E384(__this, L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_back_mE7EF8625637E6F8B9E6B42A6AE140777C51E02F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_left_m74B52D8CFD8C62138067B2EB6846B6E9E51B7C20(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_19, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_20, /*hidden argument*/NULL);
		RectangleMarker_set_BottomLeft_m2D75807111DDC328BB6133A7BAA18CC42C6889C8(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Utils.RectangleMarker::Update()
extern "C" IL2CPP_METHOD_ATTR void RectangleMarker_Update_m15C78E848A6D557E771C93861F1CAC8A06226585 (RectangleMarker_t82DE99A93567BB500541D6786A0C063596DABD56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RectangleMarker_Update_m15C78E848A6D557E771C93861F1CAC8A06226585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get__topLeft_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get__targetTopLeft_12();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_3 = __this->get__lerpSpeed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_0, L_1, ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		__this->set__topLeft_8(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get__topRight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get__targetTopRight_13();
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_8 = __this->get__lerpSpeed_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_5, L_6, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		__this->set__topRight_9(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get__bottomRight_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = __this->get__targetBottomRight_14();
		float L_12 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_13 = __this->get__lerpSpeed_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_10, L_11, ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), /*hidden argument*/NULL);
		__this->set__bottomRight_10(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get__bottomLeft_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = __this->get__targetBottomLeft_15();
		float L_17 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_18 = __this->get__lerpSpeed_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_15, L_16, ((float)il2cpp_codegen_multiply((float)L_17, (float)L_18)), /*hidden argument*/NULL);
		__this->set__bottomLeft_11(L_19);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_20 = __this->get__mesh_6();
		NullCheck(L_20);
		Mesh_Clear_mB750E1DCAB658124AAD81A02B93DED7601047B60(L_20, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_21 = __this->get__mesh_6();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_22 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_23 = L_22;
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get__topLeft_8();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_24;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_25 = L_23;
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = __this->get__bottomLeft_11();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_26;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_27 = L_25;
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get__bottomRight_10();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_28;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_29 = L_27;
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = __this->get__topRight_9();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_30;
		NullCheck(L_21);
		Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6(L_21, L_29, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_31 = __this->get__mesh_6();
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_32 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_33 = L_32;
		NullCheck(L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_34;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_35 = L_33;
		NullCheck(L_35);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_36;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_37 = L_35;
		NullCheck(L_37);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_38;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_39 = L_37;
		NullCheck(L_39);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_40 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_40, L_41, /*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_42;
		NullCheck(L_31);
		Mesh_set_uv_m56E4B52315669FBDA89DC9C550AC89EEE8A4E7C8(L_31, L_39, /*hidden argument*/NULL);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_43 = __this->get__mesh_6();
		Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* L_44 = (Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074*)SZArrayNew(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* L_45 = L_44;
		RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703  L_46 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____U24fieldU2D89A0099374A5746F12D728CDE3233EB874AA88EE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m30641073F263B5F108E2CFA92FC054AE66BA986F((RuntimeArray *)(RuntimeArray *)L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_43);
		Mesh_set_triangles_m143A1C262BADCFACE43587EBA2CDC6EBEB5DFAED(L_43, L_45, /*hidden argument*/NULL);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_47 = __this->get__meshFilter_7();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_48 = __this->get__mesh_6();
		NullCheck(L_47);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_47, L_48, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_49 = __this->get__sizeTexts_5();
		NullCheck(L_49);
		int32_t L_50 = 0;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = __this->get__topLeft_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = __this->get__topRight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_53, L_54, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_55, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_57, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_56, L_58, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_52, L_59, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_60 = __this->get__sizeTexts_5();
		NullCheck(L_60);
		int32_t L_61 = 0;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_63 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_62, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = __this->get__topRight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = __this->get__topLeft_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_64, L_65, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_69 = Vector3_SignedAngle_m1EE7C67FC8F7497353EBDE007D3ED35774C82E4C(L_66, L_67, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_70 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((90.0f), ((-L_69)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_63, L_70, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_71 = __this->get__sizeTexts_5();
		NullCheck(L_71);
		int32_t L_72 = 0;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = __this->get__topRight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = __this->get__topLeft_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_74, L_75, /*hidden argument*/NULL);
		V_0 = L_76;
		float L_77 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		float L_78 = ((float)il2cpp_codegen_multiply((float)L_77, (float)(100.0f)));
		RuntimeObject * L_79 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_78);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_80 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_79, _stringLiteralF13C907A286DA02DEEB013130BA1D6F92182C8AB, /*hidden argument*/NULL);
		NullCheck(L_73);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_73, L_80, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_81 = __this->get__sizeTexts_5();
		NullCheck(L_81);
		int32_t L_82 = 1;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_83, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = __this->get__bottomRight_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = __this->get__bottomLeft_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_85, L_86, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_87, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_89, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_88, L_90, /*hidden argument*/NULL);
		NullCheck(L_84);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_84, L_91, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_92 = __this->get__sizeTexts_5();
		NullCheck(L_92);
		int32_t L_93 = 1;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_95 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_94, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = __this->get__bottomRight_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = __this->get__bottomLeft_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_96, L_97, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_101 = Vector3_SignedAngle_m1EE7C67FC8F7497353EBDE007D3ED35774C82E4C(L_98, L_99, L_100, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_102 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((90.0f), ((-L_101)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_95);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_95, L_102, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_103 = __this->get__sizeTexts_5();
		NullCheck(L_103);
		int32_t L_104 = 1;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_106 = __this->get__bottomRight_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107 = __this->get__bottomLeft_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_108 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_106, L_107, /*hidden argument*/NULL);
		V_1 = L_108;
		float L_109 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		float L_110 = ((float)il2cpp_codegen_multiply((float)L_109, (float)(100.0f)));
		RuntimeObject * L_111 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_110);
		String_t* L_112 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_111, _stringLiteralF13C907A286DA02DEEB013130BA1D6F92182C8AB, /*hidden argument*/NULL);
		NullCheck(L_105);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_105, L_112, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_113 = __this->get__sizeTexts_5();
		NullCheck(L_113);
		int32_t L_114 = 2;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_116 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_115, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = __this->get__bottomLeft_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_118 = __this->get__topLeft_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_119 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_117, L_118, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_120 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_119, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_121 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_122 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_121, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_123 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_120, L_122, /*hidden argument*/NULL);
		NullCheck(L_116);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_116, L_123, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_124 = __this->get__sizeTexts_5();
		NullCheck(L_124);
		int32_t L_125 = 2;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_126);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_127 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_126, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_128 = __this->get__topLeft_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_129 = __this->get__bottomLeft_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_130 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_128, L_129, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_133 = Vector3_SignedAngle_m1EE7C67FC8F7497353EBDE007D3ED35774C82E4C(L_130, L_131, L_132, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_134 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((90.0f), ((float)il2cpp_codegen_subtract((float)(-90.0f), (float)L_133)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_127);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_127, L_134, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_135 = __this->get__sizeTexts_5();
		NullCheck(L_135);
		int32_t L_136 = 2;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_138 = __this->get__topLeft_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = __this->get__bottomLeft_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_140 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_138, L_139, /*hidden argument*/NULL);
		V_2 = L_140;
		float L_141 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		float L_142 = ((float)il2cpp_codegen_multiply((float)L_141, (float)(100.0f)));
		RuntimeObject * L_143 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_142);
		String_t* L_144 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_143, _stringLiteralF13C907A286DA02DEEB013130BA1D6F92182C8AB, /*hidden argument*/NULL);
		NullCheck(L_137);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_137, L_144, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_145 = __this->get__sizeTexts_5();
		NullCheck(L_145);
		int32_t L_146 = 3;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		NullCheck(L_147);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_148 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_147, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_149 = __this->get__topRight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = __this->get__bottomRight_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_151 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_149, L_150, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_151, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_153 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_154 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_153, (0.1f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_155 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_152, L_154, /*hidden argument*/NULL);
		NullCheck(L_148);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_148, L_155, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_156 = __this->get__sizeTexts_5();
		NullCheck(L_156);
		int32_t L_157 = 3;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		NullCheck(L_158);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_159 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_158, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_160 = __this->get__topRight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_161 = __this->get__bottomRight_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_162 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_160, L_161, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_163 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_164 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_165 = Vector3_SignedAngle_m1EE7C67FC8F7497353EBDE007D3ED35774C82E4C(L_162, L_163, L_164, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_166 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((90.0f), ((float)il2cpp_codegen_subtract((float)(-90.0f), (float)L_165)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_159);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_159, L_166, /*hidden argument*/NULL);
		TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* L_167 = __this->get__sizeTexts_5();
		NullCheck(L_167);
		int32_t L_168 = 3;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_170 = __this->get__topRight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_171 = __this->get__bottomRight_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_172 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_170, L_171, /*hidden argument*/NULL);
		V_3 = L_172;
		float L_173 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		float L_174 = ((float)il2cpp_codegen_multiply((float)L_173, (float)(100.0f)));
		RuntimeObject * L_175 = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &L_174);
		String_t* L_176 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_175, _stringLiteralF13C907A286DA02DEEB013130BA1D6F92182C8AB, /*hidden argument*/NULL);
		NullCheck(L_169);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_169, L_176, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
