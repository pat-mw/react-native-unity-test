#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508_RuntimeMethod_var;
extern const RuntimeMethod* RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18_RuntimeMethod_var;



// 0x00000001 System.Void Azesmway.RNU.RNMessage::.ctor(System.String,System.String,System.Object)
extern void RNMessage__ctor_m02849884A21FA3BF5525DB4080D1FBC330A28D28 (void);
// 0x00000002 System.String Azesmway.RNU.RNMessage::ToJsonString()
extern void RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA (void);
// 0x00000003 System.Void Azesmway.RNU.RNMessageEvent::.ctor(System.String,System.Object)
extern void RNMessageEvent__ctor_m1256711BE30E4E56B6FA02C7C6B1D542AE849851 (void);
// 0x00000004 System.Void Azesmway.RNU.RNMessageResult::.ctor(System.String,System.Object)
extern void RNMessageResult__ctor_m3E0CE810C7C87E3B63AF38F1BEEC85DE803A40E8 (void);
// 0x00000005 System.Void Azesmway.RNU.RNMessageHandshake::.ctor()
extern void RNMessageHandshake__ctor_m2145024A9BF9EC876C1FD935C966B2DA83DDB1B3 (void);
// 0x00000006 System.Void Azesmway.RNU.IRNCommandsReceiver::HandleCommand(Azesmway.RNU.RNCommand)
// 0x00000007 System.Void Azesmway.RNU.RNCommand::.ctor(System.String)
extern void RNCommand__ctor_mAC1FC17E0BD5637EEDB6DCB67FD7D7F8D10DAA59 (void);
// 0x00000008 System.Void Azesmway.RNU.RNCommand::.ctor(Newtonsoft.Json.Linq.JObject)
extern void RNCommand__ctor_m669D67F3AA0804A068E85FEA4BE464F2FBA23742 (void);
// 0x00000009 System.Void Azesmway.RNU.RNCommand::.ctor(System.Int32,System.String,Newtonsoft.Json.Linq.JObject)
extern void RNCommand__ctor_m0FFA28590A5F76BA11A9FD3796B981E8E9454818 (void);
// 0x0000000A System.Void Azesmway.RNU.RNCommand::Resolve(System.Object)
extern void RNCommand_Resolve_m36944FBF45C80B3828D6F64AC7BAF3116B773BC0 (void);
// 0x0000000B System.Void Azesmway.RNU.RNCommand::Reject(System.Object)
extern void RNCommand_Reject_m8F7FAE7E598EAB9D9910358F3D784080E51A0FD4 (void);
// 0x0000000C System.Void Azesmway.RNU.RNCommand::SendResult(System.Object)
extern void RNCommand_SendResult_m70B6C273A69D59D392D2F987377D94F19369CBFD (void);
// 0x0000000D System.Void Azesmway.RNU.RNCommand/RNCommandResult::.ctor(System.Int32,System.Boolean,System.Object)
extern void RNCommandResult__ctor_m1AF6013351F17895B2C53A2B163592AF8C82E34E (void);
// 0x0000000E System.Void Azesmway.RNU.RNBridge::RegisterCommandsReceiver(Azesmway.RNU.IRNCommandsReceiver)
extern void RNBridge_RegisterCommandsReceiver_m651F72BBE41F5D0A43E727BA85C6E0C29E94BBB7 (void);
// 0x0000000F System.Boolean Azesmway.RNU.RNBridge::IsAvailable()
extern void RNBridge_IsAvailable_m9E73A210115E89463AA9F6C81E1A5DB362D9816D (void);
// 0x00000010 System.Void Azesmway.RNU.RNBridge::SendEvent(System.String,System.Object)
extern void RNBridge_SendEvent_m0B4B0A7DE495AA3008DB5765D3FBB6B8D757AD29 (void);
// 0x00000011 System.Void Azesmway.RNU.RNBridge::SendEvent(Azesmway.RNU.RNMessageEvent)
extern void RNBridge_SendEvent_m3D8067EE4B6A2BA48F0ED00149FBB6A37EB75758 (void);
// 0x00000012 System.Void Azesmway.RNU.RNBridge::SendResult(Azesmway.RNU.RNMessageResult)
extern void RNBridge_SendResult_m51C981DD3241BB43D9B4EC3DC39D904955A8B0F9 (void);
// 0x00000013 System.Void Azesmway.RNU.RNBridge::SendHandshake(Azesmway.RNU.RNMessageHandshake)
extern void RNBridge_SendHandshake_m2E1715A2303881A3D1BEBC8D642D2185E57950FD (void);
// 0x00000014 System.Void Azesmway.RNU.RNBridge::SendMessage(Azesmway.RNU.RNMessage)
extern void RNBridge_SendMessage_mDA06EDD6CA883B5637B988A8EF797BAD24A8633C (void);
// 0x00000015 System.Void Azesmway.RNU.RNBridge::Initialize()
extern void RNBridge_Initialize_m41C3A3A2218CA7D372E0B9E6B7CA9F244169944C (void);
// 0x00000016 System.Void Azesmway.RNU.RNBridge::RegisterReceiver(Azesmway.RNU.IRNCommandsReceiver)
extern void RNBridge_RegisterReceiver_m8411B3D8BF96AAE1676090DD750E89786E749AB3 (void);
// 0x00000017 System.Void Azesmway.RNU.RNBridge::SentReceiver()
extern void RNBridge_SentReceiver_m17D0A2527899DD624E8F321443B29ADEE28F1848 (void);
// 0x00000018 System.Void Azesmway.RNU.RNBridge::SendMessage(System.String)
extern void RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0 (void);
// 0x00000019 System.Void Azesmway.RNU.RNBridge::ReceiveHandshake()
extern void RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18 (void);
// 0x0000001A System.Void Azesmway.RNU.RNBridge::ReceiveCommand(System.String)
extern void RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508 (void);
// 0x0000001B System.Boolean Azesmway.RNU.RNBridge/IUnityReact::IsAvailable()
// 0x0000001C System.Void Azesmway.RNU.RNBridge/IUnityReact::SetReceiver(System.Action,System.Action`1<System.String>)
// 0x0000001D System.Void Azesmway.RNU.RNBridge/IUnityReact::SendMessage(System.String)
// 0x0000001E System.Boolean Azesmway.RNU.RNBridge/NativeUnityReact::Azesmway.RNU.RNBridge.IUnityReact.IsAvailable()
extern void NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_IsAvailable_m46D916A403605D77810D0C698B5122A8F908AFB6 (void);
// 0x0000001F System.Void Azesmway.RNU.RNBridge/NativeUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SetReceiver(System.Action,System.Action`1<System.String>)
extern void NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SetReceiver_m4D536CF486E1D241D632D221125335A18FAE28ED (void);
// 0x00000020 System.Void Azesmway.RNU.RNBridge/NativeUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SendMessage(System.String)
extern void NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SendMessage_mEDAA3ADEC3D60369F65B1200EF292863D05D4AE3 (void);
// 0x00000021 System.Boolean Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxyIsAvailable()
extern void NativeUnityReact_RNUProxyIsAvailable_mB43C7F9D036DC454235CA20A63EF53BEEDA9201D (void);
// 0x00000022 System.Void Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxySetReceiver(System.Action,System.Action`1<System.String>)
extern void NativeUnityReact_RNUProxySetReceiver_mFC0673949D4EFB98A9B277EDC42D66943F3552B8 (void);
// 0x00000023 System.Void Azesmway.RNU.RNBridge/NativeUnityReact::RNUProxySendMessage(System.String)
extern void NativeUnityReact_RNUProxySendMessage_m325E51BBA0BA5772F522FD280D849F5D1A9EB1FA (void);
// 0x00000024 System.Void Azesmway.RNU.RNBridge/NativeUnityReact::.ctor()
extern void NativeUnityReact__ctor_m6DECFFE2A37F701999B9F22BF50B2D25E3C55589 (void);
// 0x00000025 System.Void Azesmway.RNU.RNBridge/AndroidUnityReact::.ctor()
extern void AndroidUnityReact__ctor_m0C54AC15E383A109E7E4BC50152088769D8D546A (void);
// 0x00000026 System.Boolean Azesmway.RNU.RNBridge/AndroidUnityReact::Azesmway.RNU.RNBridge.IUnityReact.IsAvailable()
extern void AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_IsAvailable_m37A916800FAD4623BB7F249154B765CCA66AF220 (void);
// 0x00000027 System.Void Azesmway.RNU.RNBridge/AndroidUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SetReceiver(System.Action,System.Action`1<System.String>)
extern void AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SetReceiver_mF298BC3959DF1DD8ECF843C1563843D07F52E46F (void);
// 0x00000028 System.Void Azesmway.RNU.RNBridge/AndroidUnityReact::Azesmway.RNU.RNBridge.IUnityReact.SendMessage(System.String)
extern void AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SendMessage_m8FACBA421BB85CCF43511EAABC6FF401E40D1AA9 (void);
// 0x00000029 System.Void Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::.ctor(System.Action,System.Action`1<System.String>)
extern void AndroidReceiver__ctor_m76690868D0C9F9C332018D97674ED9B05C02078A (void);
// 0x0000002A System.Void Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::receiveHandshake()
extern void AndroidReceiver_receiveHandshake_m2BF03AB9D9869688D9366517C0DDA6C48A911169 (void);
// 0x0000002B System.Void Azesmway.RNU.RNBridge/AndroidUnityReact/AndroidReceiver::receiveCommand(System.String)
extern void AndroidReceiver_receiveCommand_m805E2183B2D88DF81159FFAA2A63697F2298FD9D (void);
// 0x0000002C System.Void Azesmway.RNU.RNBridge/<>c::.cctor()
extern void U3CU3Ec__cctor_m05A59FE76DFC727FBA778689F2EFCF01538F0B17 (void);
// 0x0000002D System.Void Azesmway.RNU.RNBridge/<>c::.ctor()
extern void U3CU3Ec__ctor_m51C56E64CB54F39594335D202BD116636EFD525F (void);
// 0x0000002E System.Void Azesmway.RNU.RNBridge/<>c::<ReceiveHandshake>b__14_0()
extern void U3CU3Ec_U3CReceiveHandshakeU3Eb__14_0_m3BD6A336BA74D97054DD690B56A8F096FCC893CC (void);
// 0x0000002F System.Void Azesmway.RNU.RNBridge/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_mA6AAB34A4A8D32743F20FEB77A3DCD9AA4779057 (void);
// 0x00000030 System.Void Azesmway.RNU.RNBridge/<>c__DisplayClass15_0::<ReceiveCommand>b__0()
extern void U3CU3Ec__DisplayClass15_0_U3CReceiveCommandU3Eb__0_m3F2B92B40AC6BCA134A0FED109E94E881FFA7FDA (void);
static Il2CppMethodPointer s_methodPointers[48] = 
{
	RNMessage__ctor_m02849884A21FA3BF5525DB4080D1FBC330A28D28,
	RNMessage_ToJsonString_m61619A6EAE784FF01383D8AC4E914A956EEFE7DA,
	RNMessageEvent__ctor_m1256711BE30E4E56B6FA02C7C6B1D542AE849851,
	RNMessageResult__ctor_m3E0CE810C7C87E3B63AF38F1BEEC85DE803A40E8,
	RNMessageHandshake__ctor_m2145024A9BF9EC876C1FD935C966B2DA83DDB1B3,
	NULL,
	RNCommand__ctor_mAC1FC17E0BD5637EEDB6DCB67FD7D7F8D10DAA59,
	RNCommand__ctor_m669D67F3AA0804A068E85FEA4BE464F2FBA23742,
	RNCommand__ctor_m0FFA28590A5F76BA11A9FD3796B981E8E9454818,
	RNCommand_Resolve_m36944FBF45C80B3828D6F64AC7BAF3116B773BC0,
	RNCommand_Reject_m8F7FAE7E598EAB9D9910358F3D784080E51A0FD4,
	RNCommand_SendResult_m70B6C273A69D59D392D2F987377D94F19369CBFD,
	RNCommandResult__ctor_m1AF6013351F17895B2C53A2B163592AF8C82E34E,
	RNBridge_RegisterCommandsReceiver_m651F72BBE41F5D0A43E727BA85C6E0C29E94BBB7,
	RNBridge_IsAvailable_m9E73A210115E89463AA9F6C81E1A5DB362D9816D,
	RNBridge_SendEvent_m0B4B0A7DE495AA3008DB5765D3FBB6B8D757AD29,
	RNBridge_SendEvent_m3D8067EE4B6A2BA48F0ED00149FBB6A37EB75758,
	RNBridge_SendResult_m51C981DD3241BB43D9B4EC3DC39D904955A8B0F9,
	RNBridge_SendHandshake_m2E1715A2303881A3D1BEBC8D642D2185E57950FD,
	RNBridge_SendMessage_mDA06EDD6CA883B5637B988A8EF797BAD24A8633C,
	RNBridge_Initialize_m41C3A3A2218CA7D372E0B9E6B7CA9F244169944C,
	RNBridge_RegisterReceiver_m8411B3D8BF96AAE1676090DD750E89786E749AB3,
	RNBridge_SentReceiver_m17D0A2527899DD624E8F321443B29ADEE28F1848,
	RNBridge_SendMessage_m36A114C66A70B0B861F78DA817546BE767B203F0,
	RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18,
	RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508,
	NULL,
	NULL,
	NULL,
	NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_IsAvailable_m46D916A403605D77810D0C698B5122A8F908AFB6,
	NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SetReceiver_m4D536CF486E1D241D632D221125335A18FAE28ED,
	NativeUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SendMessage_mEDAA3ADEC3D60369F65B1200EF292863D05D4AE3,
	NativeUnityReact_RNUProxyIsAvailable_mB43C7F9D036DC454235CA20A63EF53BEEDA9201D,
	NativeUnityReact_RNUProxySetReceiver_mFC0673949D4EFB98A9B277EDC42D66943F3552B8,
	NativeUnityReact_RNUProxySendMessage_m325E51BBA0BA5772F522FD280D849F5D1A9EB1FA,
	NativeUnityReact__ctor_m6DECFFE2A37F701999B9F22BF50B2D25E3C55589,
	AndroidUnityReact__ctor_m0C54AC15E383A109E7E4BC50152088769D8D546A,
	AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_IsAvailable_m37A916800FAD4623BB7F249154B765CCA66AF220,
	AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SetReceiver_mF298BC3959DF1DD8ECF843C1563843D07F52E46F,
	AndroidUnityReact_Azesmway_RNU_RNBridge_IUnityReact_SendMessage_m8FACBA421BB85CCF43511EAABC6FF401E40D1AA9,
	AndroidReceiver__ctor_m76690868D0C9F9C332018D97674ED9B05C02078A,
	AndroidReceiver_receiveHandshake_m2BF03AB9D9869688D9366517C0DDA6C48A911169,
	AndroidReceiver_receiveCommand_m805E2183B2D88DF81159FFAA2A63697F2298FD9D,
	U3CU3Ec__cctor_m05A59FE76DFC727FBA778689F2EFCF01538F0B17,
	U3CU3Ec__ctor_m51C56E64CB54F39594335D202BD116636EFD525F,
	U3CU3Ec_U3CReceiveHandshakeU3Eb__14_0_m3BD6A336BA74D97054DD690B56A8F096FCC893CC,
	U3CU3Ec__DisplayClass15_0__ctor_mA6AAB34A4A8D32743F20FEB77A3DCD9AA4779057,
	U3CU3Ec__DisplayClass15_0_U3CReceiveCommandU3Eb__0_m3F2B92B40AC6BCA134A0FED109E94E881FFA7FDA,
};
static const int32_t s_InvokerIndices[48] = 
{
	718,
	1997,
	1055,
	1055,
	2035,
	1712,
	1712,
	1712,
	688,
	1712,
	1712,
	1712,
	690,
	3198,
	3234,
	2905,
	3198,
	3198,
	3198,
	3198,
	3238,
	3198,
	3238,
	3198,
	3238,
	3198,
	2015,
	1055,
	1712,
	2015,
	1055,
	1712,
	3234,
	2905,
	3198,
	2035,
	2035,
	2015,
	1055,
	1712,
	1055,
	2035,
	1712,
	3238,
	2035,
	2035,
	2035,
	2035,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[2] = 
{
	{ 0x06000019, 4,  (void**)&RNBridge_ReceiveHandshake_m8DED8ED034AE769A937ACA83EFF3D6D032C83B18_RuntimeMethod_var, 0 },
	{ 0x0600001A, 3,  (void**)&RNBridge_ReceiveCommand_m51E3E0307C1CA0545002009B65E5C36A96DB1508_RuntimeMethod_var, 0 },
};
extern const CustomAttributesCacheGenerator g_Azesmway_RNU_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Azesmway_RNU_CodeGenModule;
const Il2CppCodeGenModule g_Azesmway_RNU_CodeGenModule = 
{
	"Azesmway.RNU.dll",
	48,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	2,
	s_reversePInvokeIndices,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Azesmway_RNU_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
