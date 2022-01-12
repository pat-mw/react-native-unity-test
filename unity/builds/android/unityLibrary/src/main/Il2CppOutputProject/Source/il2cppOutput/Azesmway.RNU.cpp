#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<Azesmway.RNU.RNCommand>
struct Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Azesmway.RNU.IRNCommandsReceiver
struct IRNCommandsReceiver_t4C5A1C76FE498B7A28F556AA3B3FB872283E9054;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// Azesmway.RNU.RNCommand
struct RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B;
// Azesmway.RNU.RNMessage
struct RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F;
// Azesmway.RNU.RNMessageEvent
struct RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7;
// Azesmway.RNU.RNMessageHandshake
struct RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A;
// Azesmway.RNU.RNMessageResult
struct RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Azesmway.RNU.RNBridge/<>c
struct U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2;
// Azesmway.RNU.RNBridge/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0;
// Azesmway.RNU.RNBridge/AndroidUnityReact
struct AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5;
// Azesmway.RNU.RNBridge/IUnityReact
struct IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695;
// Azesmway.RNU.RNBridge/NativeUnityReact
struct NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490;
// Azesmway.RNU.RNCommand/RNCommandResult
struct RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver
struct AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRNCommandsReceiver_t4C5A1C76FE498B7A28F556AA3B3FB872283E9054_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D799DBFBC127D20921B068D1759D2302236E4D6;
IL2CPP_EXTERN_C String_t* _stringLiteral17B3860BA38F52CCED39A7F2B90A301A30039248;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B;
IL2CPP_EXTERN_C String_t* _stringLiteral28E5D4242DE5FE5B51CEB04683FD07EE3CCD7131;
IL2CPP_EXTERN_C String_t* _stringLiteral508DA8A92E7880EB0BCC3DCAD38EF243302AFA44;
IL2CPP_EXTERN_C String_t* _stringLiteral5FBC79F49A0217FA5E82AF4574FF1B4D5BC85EDA;
IL2CPP_EXTERN_C String_t* _stringLiteral65111A2AF92AED43AC9AF8B0E03B28BD128E5E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral6619A5082134E19992F600F9A795D74322019A00;
IL2CPP_EXTERN_C String_t* _stringLiteral692BBDA2163E599AF6AE93C13119AD08A9907CF2;
IL2CPP_EXTERN_C String_t* _stringLiteral771E6BAE14EB6186ACA37AEE7E576F415DB09D9C;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5276BC0837B816E809EA494EBB324DAC3F5A56;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralAD7F4016F032E896BF09314DD68A27AC513837CF;
IL2CPP_EXTERN_C String_t* _stringLiteralBB247BB8DB433B9CB3FE0EEFF4E4E113597F9CF0;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE911539CBB37A838FA251E84C1108645398526F7;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7164F3CE4D67D62C0FE6D23A05A0234B89EA1CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mB743301674D775D54A6A35358D386932D36A0D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9FD0C48512D5C476356D3B15A0982E003EAA454B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_Value_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_mC88F273A8DCD1FA0498C6BF5C6A98FF7F2955BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_Value_TisString_t_m0CE2B91501214E262EF5BB96366171F6767031F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CReceiveHandshakeU3Eb__14_0_m3BD6A336BA74D97054DD690B56A8F096FCC893CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CReceiveCommandU3Eb__0_m3F2B92B40AC6BCA134A0FED109E94E881FFA7FDA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t7C2D6CEE3E2DF4CA6D903FCE2E62AEC519DD45E8 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Newtonsoft.Json.Linq.JToken
struct  JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_0)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_0() const { return ____parent_0; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_1() const { return ____previous_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_2() const { return ____next_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// Azesmway.RNU.RNBridge
struct  RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7  : public RuntimeObject
{
public:

public:
};

struct RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields
{
public:
	// System.Action`1<Azesmway.RNU.RNCommand> Azesmway.RNU.RNBridge::commandsReceivers
	Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * ___commandsReceivers_0;
	// Azesmway.RNU.RNBridge/IUnityReact Azesmway.RNU.RNBridge::unityReact
	RuntimeObject* ___unityReact_1;
	// System.Threading.Tasks.TaskScheduler Azesmway.RNU.RNBridge::unityScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___unityScheduler_2;

public:
	inline static int32_t get_offset_of_commandsReceivers_0() { return static_cast<int32_t>(offsetof(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields, ___commandsReceivers_0)); }
	inline Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * get_commandsReceivers_0() const { return ___commandsReceivers_0; }
	inline Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C ** get_address_of_commandsReceivers_0() { return &___commandsReceivers_0; }
	inline void set_commandsReceivers_0(Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * value)
	{
		___commandsReceivers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commandsReceivers_0), (void*)value);
	}

	inline static int32_t get_offset_of_unityReact_1() { return static_cast<int32_t>(offsetof(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields, ___unityReact_1)); }
	inline RuntimeObject* get_unityReact_1() const { return ___unityReact_1; }
	inline RuntimeObject** get_address_of_unityReact_1() { return &___unityReact_1; }
	inline void set_unityReact_1(RuntimeObject* value)
	{
		___unityReact_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityReact_1), (void*)value);
	}

	inline static int32_t get_offset_of_unityScheduler_2() { return static_cast<int32_t>(offsetof(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields, ___unityScheduler_2)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_unityScheduler_2() const { return ___unityScheduler_2; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_unityScheduler_2() { return &___unityScheduler_2; }
	inline void set_unityScheduler_2(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___unityScheduler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityScheduler_2), (void*)value);
	}
};


// Azesmway.RNU.RNCommand
struct  RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B  : public RuntimeObject
{
public:
	// System.Int32 Azesmway.RNU.RNCommand::id
	int32_t ___id_0;
	// System.String Azesmway.RNU.RNCommand::name
	String_t* ___name_1;
	// Newtonsoft.Json.Linq.JObject Azesmway.RNU.RNCommand::data
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___data_2;
	// System.Boolean Azesmway.RNU.RNCommand::resolved
	bool ___resolved_3;
	// System.Boolean Azesmway.RNU.RNCommand::completed
	bool ___completed_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B, ___data_2)); }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * get_data_2() const { return ___data_2; }
	inline JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_resolved_3() { return static_cast<int32_t>(offsetof(RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B, ___resolved_3)); }
	inline bool get_resolved_3() const { return ___resolved_3; }
	inline bool* get_address_of_resolved_3() { return &___resolved_3; }
	inline void set_resolved_3(bool value)
	{
		___resolved_3 = value;
	}

	inline static int32_t get_offset_of_completed_4() { return static_cast<int32_t>(offsetof(RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B, ___completed_4)); }
	inline bool get_completed_4() const { return ___completed_4; }
	inline bool* get_address_of_completed_4() { return &___completed_4; }
	inline void set_completed_4(bool value)
	{
		___completed_4 = value;
	}
};


// Azesmway.RNU.RNMessage
struct  RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F  : public RuntimeObject
{
public:
	// System.String Azesmway.RNU.RNMessage::type
	String_t* ___type_0;
	// System.String Azesmway.RNU.RNMessage::name
	String_t* ___name_1;
	// System.Object Azesmway.RNU.RNMessage::data
	RuntimeObject * ___data_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F, ___data_2)); }
	inline RuntimeObject * get_data_2() const { return ___data_2; }
	inline RuntimeObject ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(RuntimeObject * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Azesmway.RNU.RNBridge/<>c
struct  U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields
{
public:
	// Azesmway.RNU.RNBridge/<>c Azesmway.RNU.RNBridge/<>c::<>9
	U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * ___U3CU3E9_0;
	// System.Action Azesmway.RNU.RNBridge/<>c::<>9__14_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__14_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}
};


// Azesmway.RNU.RNBridge/<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0  : public RuntimeObject
{
public:
	// System.String Azesmway.RNU.RNBridge/<>c__DisplayClass15_0::message
	String_t* ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0, ___message_0)); }
	inline String_t* get_message_0() const { return ___message_0; }
	inline String_t** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(String_t* value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_0), (void*)value);
	}
};


// Azesmway.RNU.RNBridge/AndroidUnityReact
struct  AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaObject Azesmway.RNU.RNBridge/AndroidUnityReact::unityReactActivity
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___unityReactActivity_0;

public:
	inline static int32_t get_offset_of_unityReactActivity_0() { return static_cast<int32_t>(offsetof(AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5, ___unityReactActivity_0)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_unityReactActivity_0() const { return ___unityReactActivity_0; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_unityReactActivity_0() { return &___unityReactActivity_0; }
	inline void set_unityReactActivity_0(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___unityReactActivity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityReactActivity_0), (void*)value);
	}
};


// Azesmway.RNU.RNBridge/NativeUnityReact
struct  NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490  : public RuntimeObject
{
public:

public:
};


// Azesmway.RNU.RNCommand/RNCommandResult
struct  RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF  : public RuntimeObject
{
public:
	// System.Int32 Azesmway.RNU.RNCommand/RNCommandResult::id
	int32_t ___id_0;
	// System.Boolean Azesmway.RNU.RNCommand/RNCommandResult::resolved
	bool ___resolved_1;
	// System.Object Azesmway.RNU.RNCommand/RNCommandResult::result
	RuntimeObject * ___result_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_resolved_1() { return static_cast<int32_t>(offsetof(RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF, ___resolved_1)); }
	inline bool get_resolved_1() const { return ___resolved_1; }
	inline bool* get_address_of_resolved_1() { return &___resolved_1; }
	inline void set_resolved_1(bool value)
	{
		___resolved_1 = value;
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_2), (void*)value);
	}
};


// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// Newtonsoft.Json.Linq.JContainer
struct  JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_15)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_15() const { return ____collectionChanged_15; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_15() { return &____collectionChanged_15; }
	inline void set__collectionChanged_15(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// Azesmway.RNU.RNMessageEvent
struct  RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7  : public RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F
{
public:

public:
};


// Azesmway.RNU.RNMessageHandshake
struct  RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A  : public RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F
{
public:

public:
};


// Azesmway.RNU.RNMessageResult
struct  RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5  : public RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F
{
public:

public:
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Newtonsoft.Json.Linq.JObject
struct  JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_18)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver
struct  AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// System.Action Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::proxyHandshake
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___proxyHandshake_4;
	// System.Action`1<System.String> Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::proxyCommand
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___proxyCommand_5;

public:
	inline static int32_t get_offset_of_proxyHandshake_4() { return static_cast<int32_t>(offsetof(AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46, ___proxyHandshake_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_proxyHandshake_4() const { return ___proxyHandshake_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_proxyHandshake_4() { return &___proxyHandshake_4; }
	inline void set_proxyHandshake_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___proxyHandshake_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxyHandshake_4), (void*)value);
	}

	inline static int32_t get_offset_of_proxyCommand_5() { return static_cast<int32_t>(offsetof(AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46, ___proxyCommand_5)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_proxyCommand_5() const { return ___proxyCommand_5; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_proxyCommand_5() { return &___proxyCommand_5; }
	inline void set_proxyCommand_5(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___proxyCommand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxyCommand_5), (void*)value);
	}
};


// System.Action`1<Azesmway.RNU.RNCommand>
struct  Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);

// System.Void Azesmway.RNU.RNBridge::ReceiveHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18 (const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge::ReceiveCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge::RegisterReceiver(Azesmway.RNU.IRNCommandsReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_RegisterReceiver_m8411B3D8BF96AAE1676090DD750E89786E749AB3 (RuntimeObject* ___receiver0, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNMessageEvent::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessageEvent__ctor_m1256711BE30E4E56B6FA02C7C6B1D542AE849851 (RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7 * __this, String_t* ___name0, RuntimeObject * ___data1, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge::SendMessage(Azesmway.RNU.RNMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendMessage_mDA06EDD6CA883B5637B988A8EF797BAD24A8633C (RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * ___message0, const RuntimeMethod* method);
// System.String Azesmway.RNU.RNMessage::ToJsonString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA (RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * __this, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0 (String_t* ___message0, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_FromCurrentSynchronizationContext_m0C14AFBD067489E31AFAA6CE72784F2587904636 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityReact__ctor_m0C54AC15E383A109E7E4BC50152088769D8D546A (AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5 * __this, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact__ctor_m6DECFFE2A37F701999B9F22BF50B2D25E3C55589 (NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<Azesmway.RNU.RNCommand>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB743301674D775D54A6A35358D386932D36A0D50 (Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge::SentReceiver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SentReceiver_m17D0A2527899DD624E8F321443B29ADEE28F1848 (const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::StartNew(System.Action,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskFactory_StartNew_m5617E5F6A6D949C2E21A7E525FAC899E4B871904 (TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, int32_t ___creationOptions2, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler3, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mA6AAB34A4A8D32743F20FEB77A3DCD9AA4779057 (U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21 (String_t* ___json0, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNCommand::.ctor(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand__ctor_m669D67F3AA0804A068E85FEA4BE464F2FBA23742 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___obj0, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNCommand::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand__ctor_m0FFA28590A5F76BA11A9FD3796B981E8E9454818 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, int32_t ___id0, String_t* ___name1, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___data2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNCommand::SendResult(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand_SendResult_m70B6C273A69D59D392D2F987377D94F19369CBFD (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, RuntimeObject * ___resultData0, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNCommand/RNCommandResult::.ctor(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommandResult__ctor_m1AF6013351F17895B2C53A2B163592AF8C82E34E (RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF * __this, int32_t ___id0, bool ___resolved1, RuntimeObject * ___resultData2, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNMessageResult::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessageResult__ctor_m3E0CE810C7C87E3B63AF38F1BEEC85DE803A40E8 (RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5 * __this, String_t* ___name0, RuntimeObject * ___data1, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge::SendResult(Azesmway.RNU.RNMessageResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendResult_m51C981DD3241BB43D9B4EC3DC39D904955A8B0F9 (RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5 * ___messageResult0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233 (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNMessage::.ctor(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessage__ctor_m02849884A21FA3BF5525DB4080D1FBC330A28D28 (RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * __this, String_t* ___type0, String_t* ___name1, RuntimeObject * ___data2, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m51C56E64CB54F39594335D202BD116636EFD525F (U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * __this, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNMessageHandshake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessageHandshake__ctor_m2145024A9BF9EC876C1FD935C966B2DA83DDB1B3 (RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A * __this, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge::SendHandshake(Azesmway.RNU.RNMessageHandshake)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendHandshake_m2E1715A2303881A3D1BEBC8D642D2185E57950FD (RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A * ___messageHandshake0, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNCommand::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand__ctor_mAC1FC17E0BD5637EEDB6DCB67FD7D7F8D10DAA59 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<Azesmway.RNU.RNCommand>::Invoke(!0)
inline void Action_1_Invoke_m7164F3CE4D67D62C0FE6D23A05A0234B89EA1CE1 (Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * __this, RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C *, RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::.ctor(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceiver__ctor_m76690868D0C9F9C332018D97674ED9B05C02078A (AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handshake0, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___command1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxyIsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeUnityReact_RNUProxyIsAvailable_mB43C7F9D036DC454235CA20A63EF53BEEDA9201D (const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxySetReceiver(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact_RNUProxySetReceiver_mFC0673949D4EFB98A9B277EDC42D66943F3552B8 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handshake0, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___command1, const RuntimeMethod* method);
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxySendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact_RNUProxySendMessage_m325E51BBA0BA5772F522FD280D849F5D1A9EB1FA (String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238 (AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF * __this, String_t* ___javaInterface0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RNUProxyIsAvailable();
IL2CPP_EXTERN_C void DEFAULT_CALL RNUProxySetReceiver(Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL RNUProxySendMessage(char*);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18(NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508(____message0_unmarshaled, NULL);

}
// System.Void Azesmway.RNU.RNBridge::RegisterCommandsReceiver(Azesmway.RNU.IRNCommandsReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_RegisterCommandsReceiver_m651F72BBE41F5D0A43E727BA85C6E0C29E94BBB7 (RuntimeObject* ___cReceiver0, const RuntimeMethod* method)
{
	{
		// RegisterReceiver(cReceiver);
		RuntimeObject* L_0 = ___cReceiver0;
		RNBridge_RegisterReceiver_m8411B3D8BF96AAE1676090DD750E89786E749AB3(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Azesmway.RNU.RNBridge::IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RNBridge_IsAvailable_m9E73A210115E89463AA9F6C81E1A5DB362D9816D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// return unityReact?.IsAvailable() ?? false;
		RuntimeObject* L_0 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_unityReact_1();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Azesmway.RNU.RNBridge/IUnityReact::IsAvailable() */, IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Void Azesmway.RNU.RNBridge::SendEvent(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendEvent_m0B4B0A7DE495AA3008DB5765D3FBB6B8D757AD29 (String_t* ___name0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void SendEvent(string name, object data = null) => SendMessage(new RNMessageEvent(name, data));
		String_t* L_0 = ___name0;
		RuntimeObject * L_1 = ___data1;
		RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7 * L_2 = (RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7 *)il2cpp_codegen_object_new(RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7_il2cpp_TypeInfo_var);
		RNMessageEvent__ctor_m1256711BE30E4E56B6FA02C7C6B1D542AE849851(L_2, L_0, L_1, /*hidden argument*/NULL);
		RNBridge_SendMessage_mDA06EDD6CA883B5637B988A8EF797BAD24A8633C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::SendEvent(Azesmway.RNU.RNMessageEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendEvent_m3D8067EE4B6A2BA48F0ED00149FBB6A37EB75758 (RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7 * ___messageEvent0, const RuntimeMethod* method)
{
	{
		// public static void SendEvent(RNMessageEvent messageEvent) => SendMessage(messageEvent.ToJsonString());
		RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7 * L_0 = ___messageEvent0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA(L_0, /*hidden argument*/NULL);
		RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::SendResult(Azesmway.RNU.RNMessageResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendResult_m51C981DD3241BB43D9B4EC3DC39D904955A8B0F9 (RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5 * ___messageResult0, const RuntimeMethod* method)
{
	{
		// public static void SendResult(RNMessageResult messageResult) => SendMessage(messageResult.ToJsonString());
		RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5 * L_0 = ___messageResult0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA(L_0, /*hidden argument*/NULL);
		RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::SendHandshake(Azesmway.RNU.RNMessageHandshake)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendHandshake_m2E1715A2303881A3D1BEBC8D642D2185E57950FD (RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A * ___messageHandshake0, const RuntimeMethod* method)
{
	{
		// public static void SendHandshake(RNMessageHandshake messageHandshake) => SendMessage(messageHandshake.ToJsonString());
		RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A * L_0 = ___messageHandshake0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA(L_0, /*hidden argument*/NULL);
		RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::SendMessage(Azesmway.RNU.RNMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendMessage_mDA06EDD6CA883B5637B988A8EF797BAD24A8633C (RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * ___message0, const RuntimeMethod* method)
{
	{
		// public static void SendMessage(RNMessage message) => SendMessage(message.ToJsonString());
		RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * L_0 = ___message0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA(L_0, /*hidden argument*/NULL);
		RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_Initialize_m41C3A3A2218CA7D372E0B9E6B7CA9F244169944C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral771E6BAE14EB6186ACA37AEE7E576F415DB09D9C);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// unityScheduler = System.Threading.Tasks.TaskScheduler.FromCurrentSynchronizationContext();
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0;
		L_0 = TaskScheduler_FromCurrentSynchronizationContext_m0C14AFBD067489E31AFAA6CE72784F2587904636(/*hidden argument*/NULL);
		((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->set_unityScheduler_2(L_0);
		// if (!Application.isEditor)
		bool L_1;
		L_1 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0061;
		}
	}
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.Log($"{nameof(RNBridge)}: try initialize");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral771E6BAE14EB6186ACA37AEE7E576F415DB09D9C, /*hidden argument*/NULL);
	}

IL_0022:
	{
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			// if (Application.platform == RuntimePlatform.Android)
			int32_t L_3;
			L_3 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_0038;
			}
		}

IL_002c:
		{
			// unityReact = new AndroidUnityReact();
			AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5 * L_4 = (AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5 *)il2cpp_codegen_object_new(AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5_il2cpp_TypeInfo_var);
			AndroidUnityReact__ctor_m0C54AC15E383A109E7E4BC50152088769D8D546A(L_4, /*hidden argument*/NULL);
			((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->set_unityReact_1(L_4);
			// }
			goto IL_0042;
		}

IL_0038:
		{
			// unityReact = new NativeUnityReact();
			NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490 * L_5 = (NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490 *)il2cpp_codegen_object_new(NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490_il2cpp_TypeInfo_var);
			NativeUnityReact__ctor_m6DECFFE2A37F701999B9F22BF50B2D25E3C55589(L_5, /*hidden argument*/NULL);
			((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->set_unityReact_1(L_5);
		}

IL_0042:
		{
			// }
			goto IL_0061;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_0044:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError($"{nameof(RNBridge)}: exception during try initialize <{e.Message}>");
		Exception_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17B3860BA38F52CCED39A7F2B90A301A30039248)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	} // end catch (depth: 1)

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::RegisterReceiver(Azesmway.RNU.IRNCommandsReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_RegisterReceiver_m8411B3D8BF96AAE1676090DD750E89786E749AB3 (RuntimeObject* ___receiver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mB743301674D775D54A6A35358D386932D36A0D50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRNCommandsReceiver_t4C5A1C76FE498B7A28F556AA3B3FB872283E9054_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool exist = commandsReceivers != null;
		Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * L_0 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_commandsReceivers_0();
		// commandsReceivers += receiver.HandleCommand;
		Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * L_1 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_commandsReceivers_0();
		RuntimeObject* L_2 = ___receiver0;
		RuntimeObject* L_3 = L_2;
		Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * L_4 = (Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C *)il2cpp_codegen_object_new(Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C_il2cpp_TypeInfo_var);
		Action_1__ctor_mB743301674D775D54A6A35358D386932D36A0D50(L_4, L_3, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_3, 0, IRNCommandsReceiver_t4C5A1C76FE498B7A28F556AA3B3FB872283E9054_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_mB743301674D775D54A6A35358D386932D36A0D50_RuntimeMethod_var);
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_1, L_4, /*hidden argument*/NULL);
		((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->set_commandsReceivers_0(((Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C *)CastclassSealed((RuntimeObject*)L_5, Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C_il2cpp_TypeInfo_var)));
		// if (!exist)
		if (((!(((RuntimeObject*)(Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0))
		{
			goto IL_0030;
		}
	}
	{
		// SentReceiver();
		RNBridge_SentReceiver_m17D0A2527899DD624E8F321443B29ADEE28F1848(/*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::SentReceiver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SentReceiver_m17D0A2527899DD624E8F321443B29ADEE28F1848 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65111A2AF92AED43AC9AF8B0E03B28BD128E5E2D);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Debug.Log($"{nameof(RNBridge)}: try set receiver");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral65111A2AF92AED43AC9AF8B0E03B28BD128E5E2D, /*hidden argument*/NULL);
	}

IL_0011:
	{
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			// unityReact?.SetReceiver(ReceiveHandshake, ReceiveCommand);
			RuntimeObject* L_1 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_unityReact_1();
			RuntimeObject* L_2 = L_1;
			G_B4_0 = L_2;
			if (L_2)
			{
				G_B5_0 = L_2;
				goto IL_001d;
			}
		}

IL_001a:
		{
			goto IL_003a;
		}

IL_001d:
		{
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_3, NULL, (intptr_t)((intptr_t)RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18_RuntimeMethod_var), /*hidden argument*/NULL);
			Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)il2cpp_codegen_object_new(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3_il2cpp_TypeInfo_var);
			Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161(L_4, NULL, (intptr_t)((intptr_t)RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m090CD607C7652B994D986F12CB18450A24FD8161_RuntimeMethod_var);
			NullCheck(G_B5_0);
			InterfaceActionInvoker2< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * >::Invoke(1 /* System.Void Azesmway.RNU.RNBridge/IUnityReact::SetReceiver(System.Action,System.Action`1<System.String>) */, IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695_il2cpp_TypeInfo_var, G_B5_0, L_3, L_4);
		}

IL_003a:
		{
			// }
			goto IL_0059;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError($"{nameof(RNBridge)}: exception during try set receiver <{e.Message}>");
		Exception_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD7F4016F032E896BF09314DD68A27AC513837CF)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	} // end catch (depth: 1)

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28E5D4242DE5FE5B51CEB04683FD07EE3CCD7131);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Debug.Log($"{nameof(RNBridge)}: try send message <{message}>");
		String_t* L_1 = ___message0;
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral28E5D4242DE5FE5B51CEB04683FD07EE3CCD7131, L_1, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			// unityReact?.SendMessage(message);
			RuntimeObject* L_3 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_unityReact_1();
			RuntimeObject* L_4 = L_3;
			G_B4_0 = L_4;
			if (L_4)
			{
				G_B5_0 = L_4;
				goto IL_0028;
			}
		}

IL_0025:
		{
			goto IL_002e;
		}

IL_0028:
		{
			String_t* L_5 = ___message0;
			NullCheck(G_B5_0);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Azesmway.RNU.RNBridge/IUnityReact::SendMessage(System.String) */, IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695_il2cpp_TypeInfo_var, G_B5_0, L_5);
		}

IL_002e:
		{
			// }
			goto IL_004d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.Exception)
		// catch (System.Exception e)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.LogError($"{nameof(RNBridge)}: exception during send message <{e.Message}>");
		Exception_t * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB247BB8DB433B9CB3FE0EEFF4E4E113597F9CF0)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_8, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::ReceiveHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CReceiveHandshakeU3Eb__14_0_m3BD6A336BA74D97054DD690B56A8F096FCC893CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * G_B2_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * G_B1_1 = NULL;
	{
		// System.Threading.Tasks.Task.Factory.StartNew(() =>
		//     {
		//         if (commandsReceivers != null)
		//         {
		//             if (Debug.isDebugBuild)
		//             {
		//                 Debug.Log($"{nameof(RNBridge)}: receive handshake");
		//             }
		//             RNBridge.SendHandshake(new RNMessageHandshake());
		//         }
		//     },
		//     System.Threading.CancellationToken.None,
		//     System.Threading.Tasks.TaskCreationOptions.None,
		//     unityScheduler);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_0;
		L_0 = Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var))->get_U3CU3E9__14_0_1();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var);
		U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * L_3 = ((U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CReceiveHandshakeU3Eb__14_0_m3BD6A336BA74D97054DD690B56A8F096FCC893CC_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = L_4;
		((U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var))->set_U3CU3E9__14_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6;
		L_6 = CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF(/*hidden argument*/NULL);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_7 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_unityScheduler_2();
		NullCheck(G_B2_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = TaskFactory_StartNew_m5617E5F6A6D949C2E21A7E525FAC899E4B871904(G_B2_1, G_B2_0, L_6, 0, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge::ReceiveCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CReceiveCommandU3Eb__0_m3F2B92B40AC6BCA134A0FED109E94E881FFA7FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 * L_0 = (U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_mA6AAB34A4A8D32743F20FEB77A3DCD9AA4779057(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 * L_1 = V_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		L_1->set_message_0(L_2);
		// System.Threading.Tasks.Task.Factory.StartNew(() =>
		//     {
		//         if (commandsReceivers != null)
		//         {
		//             if (Debug.isDebugBuild)
		//             {
		//                 Debug.Log($"{nameof(RNBridge)}: receive command <{message}>");
		//             }
		//             commandsReceivers?.Invoke(new RNCommand(message));
		//         }
		//     },
		//     System.Threading.CancellationToken.None,
		//     System.Threading.Tasks.TaskCreationOptions.None,
		//     unityScheduler);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_3;
		L_3 = Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 * L_4 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass15_0_U3CReceiveCommandU3Eb__0_m3F2B92B40AC6BCA134A0FED109E94E881FFA7FDA_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_6;
		L_6 = CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF(/*hidden argument*/NULL);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_7 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_unityScheduler_2();
		NullCheck(L_3);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = TaskFactory_StartNew_m5617E5F6A6D949C2E21A7E525FAC899E4B871904(L_3, L_5, L_6, 0, L_7, /*hidden argument*/NULL);
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
// System.Void Azesmway.RNU.RNCommand::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand__ctor_mAC1FC17E0BD5637EEDB6DCB67FD7D7F8D10DAA59 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// : this(JObject.Parse(message)) {}
		String_t* L_0 = ___message0;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_1;
		L_1 = JObject_Parse_mC11381640E6167C288580E6797E60FC950896C21(L_0, /*hidden argument*/NULL);
		RNCommand__ctor_m669D67F3AA0804A068E85FEA4BE464F2FBA23742(__this, L_1, /*hidden argument*/NULL);
		// : this(JObject.Parse(message)) {}
		return;
	}
}
// System.Void Azesmway.RNU.RNCommand::.ctor(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand__ctor_m669D67F3AA0804A068E85FEA4BE464F2FBA23742 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9FD0C48512D5C476356D3B15A0982E003EAA454B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_Value_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_mC88F273A8DCD1FA0498C6BF5C6A98FF7F2955BFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_Value_TisString_t_m0CE2B91501214E262EF5BB96366171F6767031F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(obj.Value<int>(nameof(id)),
		//     obj.Value<string>(nameof(name)),
		//     obj.Value<JObject>(nameof(data))) {}
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GenericVirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(JToken_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9FD0C48512D5C476356D3B15A0982E003EAA454B_RuntimeMethod_var, L_0, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_2 = ___obj0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GenericVirtFuncInvoker1< String_t*, RuntimeObject * >::Invoke(JToken_Value_TisString_t_m0CE2B91501214E262EF5BB96366171F6767031F9_RuntimeMethod_var, L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_4 = ___obj0;
		NullCheck(L_4);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_5;
		L_5 = GenericVirtFuncInvoker1< JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *, RuntimeObject * >::Invoke(JToken_Value_TisJObject_t55E456F4BAFC1A97265C571EDE7F421663976807_mC88F273A8DCD1FA0498C6BF5C6A98FF7F2955BFA_RuntimeMethod_var, L_4, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		RNCommand__ctor_m0FFA28590A5F76BA11A9FD3796B981E8E9454818(__this, L_1, L_3, L_5, /*hidden argument*/NULL);
		// obj.Value<JObject>(nameof(data))) {}
		return;
	}
}
// System.Void Azesmway.RNU.RNCommand::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand__ctor_m0FFA28590A5F76BA11A9FD3796B981E8E9454818 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, int32_t ___id0, String_t* ___name1, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * ___data2, const RuntimeMethod* method)
{
	{
		// public RNCommand(int id, string name, JObject data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.data = data;
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_2 = ___data2;
		__this->set_data_2(L_2);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNCommand::Resolve(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand_Resolve_m36944FBF45C80B3828D6F64AC7BAF3116B773BC0 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, RuntimeObject * ___resultData0, const RuntimeMethod* method)
{
	{
		// resolved = true;
		__this->set_resolved_3((bool)1);
		// SendResult(resultData);
		RuntimeObject * L_0 = ___resultData0;
		RNCommand_SendResult_m70B6C273A69D59D392D2F987377D94F19369CBFD(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNCommand::Reject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand_Reject_m8F7FAE7E598EAB9D9910358F3D784080E51A0FD4 (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, RuntimeObject * ___resultData0, const RuntimeMethod* method)
{
	{
		// resolved = false;
		__this->set_resolved_3((bool)0);
		// SendResult(resultData);
		RuntimeObject * L_0 = ___resultData0;
		RNCommand_SendResult_m70B6C273A69D59D392D2F987377D94F19369CBFD(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNCommand::SendResult(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommand_SendResult_m70B6C273A69D59D392D2F987377D94F19369CBFD (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * __this, RuntimeObject * ___resultData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF * V_0 = NULL;
	{
		// if (!completed)
		bool L_0 = __this->get_completed_4();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		// completed = true;
		__this->set_completed_4((bool)1);
		// RNCommandResult data = new RNCommandResult(id, resolved, resultData);
		int32_t L_1 = __this->get_id_0();
		bool L_2 = __this->get_resolved_3();
		RuntimeObject * L_3 = ___resultData0;
		RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF * L_4 = (RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF *)il2cpp_codegen_object_new(RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF_il2cpp_TypeInfo_var);
		RNCommandResult__ctor_m1AF6013351F17895B2C53A2B163592AF8C82E34E(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// RNMessageResult result = new RNMessageResult(name, data);
		String_t* L_5 = __this->get_name_1();
		RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF * L_6 = V_0;
		RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5 * L_7 = (RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5 *)il2cpp_codegen_object_new(RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5_il2cpp_TypeInfo_var);
		RNMessageResult__ctor_m3E0CE810C7C87E3B63AF38F1BEEC85DE803A40E8(L_7, L_5, L_6, /*hidden argument*/NULL);
		// RNBridge.SendResult(result);
		RNBridge_SendResult_m51C981DD3241BB43D9B4EC3DC39D904955A8B0F9(L_7, /*hidden argument*/NULL);
	}

IL_0033:
	{
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
// System.Void Azesmway.RNU.RNMessage::.ctor(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessage__ctor_m02849884A21FA3BF5525DB4080D1FBC330A28D28 (RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * __this, String_t* ___type0, String_t* ___name1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * G_B1_1 = NULL;
	{
		// public RNMessage(string type, string name, object data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.type = type;
		String_t* L_0 = ___type0;
		__this->set_type_0(L_0);
		// this.name = name;
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		// this.data = data ?? new JObject();
		RuntimeObject * L_2 = ___data2;
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001f;
		}
	}
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_4 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_4, /*hidden argument*/NULL);
		G_B2_0 = ((RuntimeObject *)(L_4));
		G_B2_1 = G_B1_1;
	}

IL_001f:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_data_2(G_B2_0);
		// }
		return;
	}
}
// System.String Azesmway.RNU.RNMessage::ToJsonString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA (RNMessage_t2C6F96EF91DE1BA89339EF569E2C44C40BB2266F * __this, const RuntimeMethod* method)
{
	{
		// var jobject = JObject.FromObject(this);
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_0;
		L_0 = JObject_FromObject_m467B80E8812E8B4494FCCED0AE9CBC7A050C10CE(__this, /*hidden argument*/NULL);
		// return jobject.ToString();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void Azesmway.RNU.RNMessageEvent::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessageEvent__ctor_m1256711BE30E4E56B6FA02C7C6B1D542AE849851 (RNMessageEvent_tDD2A87E04D998249A30DA80563D943DAA446AFD7 * __this, String_t* ___name0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("event", name, data) {}
		String_t* L_0 = ___name0;
		RuntimeObject * L_1 = ___data1;
		RNMessage__ctor_m02849884A21FA3BF5525DB4080D1FBC330A28D28(__this, _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F, L_0, L_1, /*hidden argument*/NULL);
		// : base("event", name, data) {}
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
// System.Void Azesmway.RNU.RNMessageHandshake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessageHandshake__ctor_m2145024A9BF9EC876C1FD935C966B2DA83DDB1B3 (RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5276BC0837B816E809EA494EBB324DAC3F5A56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("handshake", string.Empty, null) {}
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		RNMessage__ctor_m02849884A21FA3BF5525DB4080D1FBC330A28D28(__this, _stringLiteral9E5276BC0837B816E809EA494EBB324DAC3F5A56, L_0, NULL, /*hidden argument*/NULL);
		// : base("handshake", string.Empty, null) {}
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
// System.Void Azesmway.RNU.RNMessageResult::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNMessageResult__ctor_m3E0CE810C7C87E3B63AF38F1BEEC85DE803A40E8 (RNMessageResult_t38451BCF39EFEAAF5B078A3BB0FBB285F002B0E5 * __this, String_t* ___name0, RuntimeObject * ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("result", name, data) {}
		String_t* L_0 = ___name0;
		RuntimeObject * L_1 = ___data1;
		RNMessage__ctor_m02849884A21FA3BF5525DB4080D1FBC330A28D28(__this, _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B, L_0, L_1, /*hidden argument*/NULL);
		// : base("result", name, data) {}
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
// System.Void Azesmway.RNU.RNBridge/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m05A59FE76DFC727FBA778689F2EFCF01538F0B17 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * L_0 = (U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 *)il2cpp_codegen_object_new(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m51C56E64CB54F39594335D202BD116636EFD525F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m51C56E64CB54F39594335D202BD116636EFD525F (U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge/<>c::<ReceiveHandshake>b__14_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CReceiveHandshakeU3Eb__14_0_m3BD6A336BA74D97054DD690B56A8F096FCC893CC (U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508DA8A92E7880EB0BCC3DCAD38EF243302AFA44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (commandsReceivers != null)
		Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * L_0 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_commandsReceivers_0();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.Log($"{nameof(RNBridge)}: receive handshake");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral508DA8A92E7880EB0BCC3DCAD38EF243302AFA44, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// RNBridge.SendHandshake(new RNMessageHandshake());
		RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A * L_2 = (RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A *)il2cpp_codegen_object_new(RNMessageHandshake_t8219F39F789BE1C33782E40C067D9A22620A9B1A_il2cpp_TypeInfo_var);
		RNMessageHandshake__ctor_m2145024A9BF9EC876C1FD935C966B2DA83DDB1B3(L_2, /*hidden argument*/NULL);
		RNBridge_SendHandshake_m2E1715A2303881A3D1BEBC8D642D2185E57950FD(L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// },
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
// System.Void Azesmway.RNU.RNBridge/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mA6AAB34A4A8D32743F20FEB77A3DCD9AA4779057 (U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge/<>c__DisplayClass15_0::<ReceiveCommand>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CReceiveCommandU3Eb__0_m3F2B92B40AC6BCA134A0FED109E94E881FFA7FDA (U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m7164F3CE4D67D62C0FE6D23A05A0234B89EA1CE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D799DBFBC127D20921B068D1759D2302236E4D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * G_B5_0 = NULL;
	Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * G_B4_0 = NULL;
	{
		// if (commandsReceivers != null)
		Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * L_0 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_commandsReceivers_0();
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// Debug.Log($"{nameof(RNBridge)}: receive command <{message}>");
		String_t* L_2 = __this->get_message_0();
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral0D799DBFBC127D20921B068D1759D2302236E4D6, L_2, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// commandsReceivers?.Invoke(new RNCommand(message));
		Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * L_4 = ((RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields*)il2cpp_codegen_static_fields_for(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_il2cpp_TypeInfo_var))->get_commandsReceivers_0();
		Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C * L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_0032;
		}
	}
	{
		return;
	}

IL_0032:
	{
		String_t* L_6 = __this->get_message_0();
		RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B * L_7 = (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B *)il2cpp_codegen_object_new(RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B_il2cpp_TypeInfo_var);
		RNCommand__ctor_mAC1FC17E0BD5637EEDB6DCB67FD7D7F8D10DAA59(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(G_B5_0);
		Action_1_Invoke_m7164F3CE4D67D62C0FE6D23A05A0234B89EA1CE1(G_B5_0, L_7, /*hidden argument*/Action_1_Invoke_m7164F3CE4D67D62C0FE6D23A05A0234B89EA1CE1_RuntimeMethod_var);
	}

IL_0042:
	{
		// },
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
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityReact__ctor_m0C54AC15E383A109E7E4BC50152088769D8D546A (AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE911539CBB37A838FA251E84C1108645398526F7);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * V_0 = NULL;
	{
		// public AndroidUnityReact()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// AndroidJavaClass jc = new AndroidJavaClass("com.azesmway.rnunity.UnityReactActivity");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteralE911539CBB37A838FA251E84C1108645398526F7, /*hidden argument*/NULL);
		V_0 = L_0;
		// unityReactActivity = jc.CallStatic<AndroidJavaObject>("getInstance");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_1 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2(L_1, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mAD48C38D66AB67D0F0274D195F4A99CB7AB589F2_RuntimeMethod_var);
		__this->set_unityReactActivity_0(L_3);
		// }
		return;
	}
}
// System.Boolean Azesmway.RNU.RNBridge/AndroidUnityReact::Azesmway.RNU.RNBridge.IUnityReact.IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_IsAvailable_m37A916800FAD4623BB7F249154B765CCA66AF220 (AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5 * __this, const RuntimeMethod* method)
{
	{
		// return unityReactActivity != null;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_unityReactActivity_0();
		return (bool)((!(((RuntimeObject*)(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SetReceiver(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SetReceiver_mF298BC3959DF1DD8ECF843C1563843D07F52E46F (AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handshake0, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___command1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6619A5082134E19992F600F9A795D74322019A00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityReactActivity.Call("setReceiver", new AndroidReceiver(handshake, command));
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_unityReactActivity_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___handshake0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_4 = ___command1;
		AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46 * L_5 = (AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46 *)il2cpp_codegen_object_new(AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46_il2cpp_TypeInfo_var);
		AndroidReceiver__ctor_m76690868D0C9F9C332018D97674ED9B05C02078A(L_5, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral6619A5082134E19992F600F9A795D74322019A00, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SendMessage_m8FACBA421BB85CCF43511EAABC6FF401E40D1AA9 (AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FBC79F49A0217FA5E82AF4574FF1B4D5BC85EDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unityReactActivity.Call("sendMessage", message);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_0 = __this->get_unityReactActivity_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_Call_mBB226DA52CE5A2FCD9A2D42BC7FB4272E094B76D(L_0, _stringLiteral5FBC79F49A0217FA5E82AF4574FF1B4D5BC85EDA, L_2, /*hidden argument*/NULL);
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
// System.Boolean Azesmway.RNU.RNBridge/NativeUnityReact::Azesmway.RNU.RNBridge.IUnityReact.IsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_IsAvailable_m46D916A403605D77810D0C698B5122A8F908AFB6 (NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490 * __this, const RuntimeMethod* method)
{
	{
		// return RNUProxyIsAvailable();
		bool L_0;
		L_0 = NativeUnityReact_RNUProxyIsAvailable_mB43C7F9D036DC454235CA20A63EF53BEEDA9201D(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SetReceiver(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SetReceiver_m4D536CF486E1D241D632D221125335A18FAE28ED (NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handshake0, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___command1, const RuntimeMethod* method)
{
	{
		// RNUProxySetReceiver(handshake, command);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___handshake0;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ___command1;
		NativeUnityReact_RNUProxySetReceiver_mFC0673949D4EFB98A9B277EDC42D66943F3552B8(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SendMessage_mEDAA3ADEC3D60369F65B1200EF292863D05D4AE3 (NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// RNUProxySendMessage(message);
		String_t* L_0 = ___message0;
		NativeUnityReact_RNUProxySendMessage_m325E51BBA0BA5772F522FD280D849F5D1A9EB1FA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxyIsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeUnityReact_RNUProxyIsAvailable_mB43C7F9D036DC454235CA20A63EF53BEEDA9201D (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RNUProxyIsAvailable)();

	return static_cast<bool>(returnValue);
}
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxySetReceiver(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact_RNUProxySetReceiver_mFC0673949D4EFB98A9B277EDC42D66943F3552B8 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handshake0, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___command1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___handshake0' to native representation
	Il2CppMethodPointer ____handshake0_marshaled = NULL;
	____handshake0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___handshake0));

	// Marshaling of parameter '___command1' to native representation
	Il2CppMethodPointer ____command1_marshaled = NULL;
	____command1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___command1));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(RNUProxySetReceiver)(____handshake0_marshaled, ____command1_marshaled);

}
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxySendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact_RNUProxySendMessage_m325E51BBA0BA5772F522FD280D849F5D1A9EB1FA (String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(RNUProxySendMessage)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Azesmway.RNU.RNBridge/NativeUnityReact::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeUnityReact__ctor_m6DECFFE2A37F701999B9F22BF50B2D25E3C55589 (NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Azesmway.RNU.RNCommand/RNCommandResult::.ctor(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RNCommandResult__ctor_m1AF6013351F17895B2C53A2B163592AF8C82E34E (RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF * __this, int32_t ___id0, bool ___resolved1, RuntimeObject * ___resultData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF * G_B1_1 = NULL;
	{
		// public RNCommandResult(int id, bool resolved, object resultData)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.resolved = resolved;
		bool L_1 = ___resolved1;
		__this->set_resolved_1(L_1);
		// this.result = resultData ?? new JObject();
		RuntimeObject * L_2 = ___resultData2;
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001f;
		}
	}
	{
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_4 = (JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)il2cpp_codegen_object_new(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		JObject__ctor_mE7A2D87036C874CD9D47947A6AC8C62528CAD233(L_4, /*hidden argument*/NULL);
		G_B2_0 = ((RuntimeObject *)(L_4));
		G_B2_1 = G_B1_1;
	}

IL_001f:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_result_2(G_B2_0);
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
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::.ctor(System.Action,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceiver__ctor_m76690868D0C9F9C332018D97674ED9B05C02078A (AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handshake0, Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___command1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral692BBDA2163E599AF6AE93C13119AD08A9907CF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.azesmway.rnunity.UnityReactActivity$IUnityReceiver")
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m1E8F4C0D87B74B81C64A54A584B2FF4ECE571238(__this, _stringLiteral692BBDA2163E599AF6AE93C13119AD08A9907CF2, /*hidden argument*/NULL);
		// proxyHandshake = handshake;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___handshake0;
		__this->set_proxyHandshake_4(L_0);
		// proxyCommand = command;
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_1 = ___command1;
		__this->set_proxyCommand_5(L_1);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::receiveHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceiver_receiveHandshake_m2BF03AB9D9869688D9366517C0DDA6C48A911169 (AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46 * __this, const RuntimeMethod* method)
{
	{
		// proxyHandshake();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_proxyHandshake_4();
		NullCheck(L_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::receiveCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidReceiver_receiveCommand_m805E2183B2D88DF81159FFAA2A63697F2298FD9D (AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46 * __this, String_t* ___arg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// proxyCommand(arg);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = __this->get_proxyCommand_5();
		String_t* L_1 = ___arg0;
		NullCheck(L_0);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_0, L_1, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * Task_get_Factory_m452D636F3D5CBE5AA8746078C35C42F69BE61722_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * L_0 = ((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields*)il2cpp_codegen_static_fields_for(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var))->get_s_factory_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
