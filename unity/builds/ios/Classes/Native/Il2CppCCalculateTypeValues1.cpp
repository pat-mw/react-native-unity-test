#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Action`1<Azesmway.RNU.RNCommand>
struct Action_1_t3D2188EC6370D6401DF3723A3E12437AA3143B4C;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807;
// System.String
struct String_t;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Azesmway.RNU.RNBridge/IUnityReact
struct IUnityReact_t056F6424E617DC117093A96E7D96BC14025CA695;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// <Module>
struct U3CModuleU3E_tE7281C0E269ACF224AB82F00FE8D46ED8C621032 
{
public:

public:
};


// System.Object


// Azesmway.RNU.RNBridge
struct RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7  : public RuntimeObject
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
struct RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2  : public RuntimeObject
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
struct U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0  : public RuntimeObject
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
struct AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5  : public RuntimeObject
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
struct NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490  : public RuntimeObject
{
public:

public:
};


// Azesmway.RNU.RNCommand/RNCommandResult
struct RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF  : public RuntimeObject
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


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
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


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver
struct AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AutoRotate
struct AutoRotate_t7923B13C850A4A2A791362F25E7FD780DF3BC2CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single AutoRotate::xSpeed
	float ___xSpeed_4;
	// System.Single AutoRotate::ySpeed
	float ___ySpeed_5;
	// System.Single AutoRotate::zSpeed
	float ___zSpeed_6;

public:
	inline static int32_t get_offset_of_xSpeed_4() { return static_cast<int32_t>(offsetof(AutoRotate_t7923B13C850A4A2A791362F25E7FD780DF3BC2CE, ___xSpeed_4)); }
	inline float get_xSpeed_4() const { return ___xSpeed_4; }
	inline float* get_address_of_xSpeed_4() { return &___xSpeed_4; }
	inline void set_xSpeed_4(float value)
	{
		___xSpeed_4 = value;
	}

	inline static int32_t get_offset_of_ySpeed_5() { return static_cast<int32_t>(offsetof(AutoRotate_t7923B13C850A4A2A791362F25E7FD780DF3BC2CE, ___ySpeed_5)); }
	inline float get_ySpeed_5() const { return ___ySpeed_5; }
	inline float* get_address_of_ySpeed_5() { return &___ySpeed_5; }
	inline void set_ySpeed_5(float value)
	{
		___ySpeed_5 = value;
	}

	inline static int32_t get_offset_of_zSpeed_6() { return static_cast<int32_t>(offsetof(AutoRotate_t7923B13C850A4A2A791362F25E7FD780DF3BC2CE, ___zSpeed_6)); }
	inline float get_zSpeed_6() const { return ___zSpeed_6; }
	inline float* get_address_of_zSpeed_6() { return &___zSpeed_6; }
	inline void set_zSpeed_6(float value)
	{
		___zSpeed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4641;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4641 = { sizeof (RNCommandResult_t677C6DE8E24DC4119D7F8C47D9E7D232DDD498AF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4642;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4642 = { sizeof (RNCommand_t6910BDC4D1FBC3089421318CE6A675E665C5C50B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4643;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4643 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4644;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4644 = { sizeof (NativeUnityReact_tE86E34526E17A8553F10A16FC3A679D30D862490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4645;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4645 = { sizeof (AndroidReceiver_tC661981439D59D730AD5E8ECF0C77B5D54D4CD46), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4646;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4646 = { sizeof (AndroidUnityReact_t23C1A4A11C29DBEC88FA33289F8BE4D03E08C2E5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4647;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4647 = { sizeof (U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2), -1, sizeof(U3CU3Ec_t202418EF7867F7B9E002B729744DF85267DB01E2_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4648;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4648 = { sizeof (U3CU3Ec__DisplayClass15_0_t20B589B8F6EE26A77DDC8C8E2EFCF4CF6E0273F0), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4649;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4649 = { sizeof (RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7), -1, sizeof(RNBridge_t28E1F2F184522A209B67DA43091DAD99839EE3D7_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4650;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4650 = { sizeof (U3CModuleU3E_tE7281C0E269ACF224AB82F00FE8D46ED8C621032), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4651;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4651 = { sizeof (U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4652;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize4652 = { sizeof (AutoRotate_t7923B13C850A4A2A791362F25E7FD780DF3BC2CE), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
