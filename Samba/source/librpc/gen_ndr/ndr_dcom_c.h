#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/dcom.h"
#ifndef _HEADER_RPC_dcom_Unknown
#define _HEADER_RPC_dcom_Unknown

extern const struct dcerpc_interface_table dcerpc_table_dcom_Unknown;

struct rpc_request *dcerpc_UseProtSeq_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct UseProtSeq *r);
NTSTATUS dcerpc_UseProtSeq(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct UseProtSeq *r);

struct rpc_request *dcerpc_GetCustomProtseqInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetCustomProtseqInfo *r);
NTSTATUS dcerpc_GetCustomProtseqInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetCustomProtseqInfo *r);

struct rpc_request *dcerpc_UpdateResolverBindings_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct UpdateResolverBindings *r);
NTSTATUS dcerpc_UpdateResolverBindings(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct UpdateResolverBindings *r);
#endif /* _HEADER_RPC_dcom_Unknown */
#ifndef _HEADER_RPC_IUnknown
#define _HEADER_RPC_IUnknown

extern const struct dcerpc_interface_table dcerpc_table_IUnknown;

struct rpc_request *dcerpc_QueryInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct QueryInterface *r);
NTSTATUS dcerpc_QueryInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct QueryInterface *r);

struct rpc_request *dcerpc_AddRef_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct AddRef *r);
NTSTATUS dcerpc_AddRef(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct AddRef *r);

struct rpc_request *dcerpc_Release_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Release *r);
NTSTATUS dcerpc_Release(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Release *r);
#endif /* _HEADER_RPC_IUnknown */
#ifndef _HEADER_RPC_IClassFactory
#define _HEADER_RPC_IClassFactory

extern const struct dcerpc_interface_table dcerpc_table_IClassFactory;

struct rpc_request *dcerpc_CreateInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateInstance *r);
NTSTATUS dcerpc_CreateInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateInstance *r);

struct rpc_request *dcerpc_RemoteCreateInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteCreateInstance *r);
NTSTATUS dcerpc_RemoteCreateInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteCreateInstance *r);

struct rpc_request *dcerpc_LockServer_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct LockServer *r);
NTSTATUS dcerpc_LockServer(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct LockServer *r);

struct rpc_request *dcerpc_RemoteLockServer_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteLockServer *r);
NTSTATUS dcerpc_RemoteLockServer(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemoteLockServer *r);
#endif /* _HEADER_RPC_IClassFactory */
#ifndef _HEADER_RPC_IRemUnknown
#define _HEADER_RPC_IRemUnknown

extern const struct dcerpc_interface_table dcerpc_table_IRemUnknown;

struct rpc_request *dcerpc_RemQueryInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemQueryInterface *r);
NTSTATUS dcerpc_RemQueryInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemQueryInterface *r);

struct rpc_request *dcerpc_RemAddRef_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemAddRef *r);
NTSTATUS dcerpc_RemAddRef(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemAddRef *r);

struct rpc_request *dcerpc_RemRelease_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemRelease *r);
NTSTATUS dcerpc_RemRelease(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemRelease *r);
#endif /* _HEADER_RPC_IRemUnknown */
#ifndef _HEADER_RPC_IClassActivator
#define _HEADER_RPC_IClassActivator

extern const struct dcerpc_interface_table dcerpc_table_IClassActivator;

struct rpc_request *dcerpc_GetClassObject_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetClassObject *r);
NTSTATUS dcerpc_GetClassObject(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetClassObject *r);
#endif /* _HEADER_RPC_IClassActivator */
#ifndef _HEADER_RPC_ISCMLocalActivator
#define _HEADER_RPC_ISCMLocalActivator

extern const struct dcerpc_interface_table dcerpc_table_ISCMLocalActivator;

struct rpc_request *dcerpc_ISCMLocalActivator_CreateInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ISCMLocalActivator_CreateInstance *r);
NTSTATUS dcerpc_ISCMLocalActivator_CreateInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ISCMLocalActivator_CreateInstance *r);
#endif /* _HEADER_RPC_ISCMLocalActivator */
#ifndef _HEADER_RPC_IMachineLocalActivator
#define _HEADER_RPC_IMachineLocalActivator

extern const struct dcerpc_interface_table dcerpc_table_IMachineLocalActivator;

struct rpc_request *dcerpc_IMachineLocalActivator_foo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IMachineLocalActivator_foo *r);
NTSTATUS dcerpc_IMachineLocalActivator_foo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IMachineLocalActivator_foo *r);
#endif /* _HEADER_RPC_IMachineLocalActivator */
#ifndef _HEADER_RPC_ILocalObjectExporter
#define _HEADER_RPC_ILocalObjectExporter

extern const struct dcerpc_interface_table dcerpc_table_ILocalObjectExporter;

struct rpc_request *dcerpc_ILocalObjectExporter_Foo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ILocalObjectExporter_Foo *r);
NTSTATUS dcerpc_ILocalObjectExporter_Foo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ILocalObjectExporter_Foo *r);
#endif /* _HEADER_RPC_ILocalObjectExporter */
#ifndef _HEADER_RPC_ISystemActivator
#define _HEADER_RPC_ISystemActivator

extern const struct dcerpc_interface_table dcerpc_table_ISystemActivator;

struct rpc_request *dcerpc_ISystemActivatorRemoteCreateInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ISystemActivatorRemoteCreateInstance *r);
NTSTATUS dcerpc_ISystemActivatorRemoteCreateInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ISystemActivatorRemoteCreateInstance *r);
#endif /* _HEADER_RPC_ISystemActivator */
#ifndef _HEADER_RPC_IRemUnknown2
#define _HEADER_RPC_IRemUnknown2

extern const struct dcerpc_interface_table dcerpc_table_IRemUnknown2;

struct rpc_request *dcerpc_RemQueryInterface2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemQueryInterface2 *r);
NTSTATUS dcerpc_RemQueryInterface2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RemQueryInterface2 *r);
#endif /* _HEADER_RPC_IRemUnknown2 */
#ifndef _HEADER_RPC_IDispatch
#define _HEADER_RPC_IDispatch

extern const struct dcerpc_interface_table dcerpc_table_IDispatch;

struct rpc_request *dcerpc_GetTypeInfoCount_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetTypeInfoCount *r);
NTSTATUS dcerpc_GetTypeInfoCount(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetTypeInfoCount *r);

struct rpc_request *dcerpc_GetTypeInfo_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetTypeInfo *r);
NTSTATUS dcerpc_GetTypeInfo(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetTypeInfo *r);

struct rpc_request *dcerpc_GetIDsOfNames_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetIDsOfNames *r);
NTSTATUS dcerpc_GetIDsOfNames(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetIDsOfNames *r);

struct rpc_request *dcerpc_Invoke_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Invoke *r);
NTSTATUS dcerpc_Invoke(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Invoke *r);
#endif /* _HEADER_RPC_IDispatch */
#ifndef _HEADER_RPC_IMarshal
#define _HEADER_RPC_IMarshal

extern const struct dcerpc_interface_table dcerpc_table_IMarshal;

struct rpc_request *dcerpc_MarshalInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct MarshalInterface *r);
NTSTATUS dcerpc_MarshalInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct MarshalInterface *r);

struct rpc_request *dcerpc_UnMarshalInterface_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct UnMarshalInterface *r);
NTSTATUS dcerpc_UnMarshalInterface(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct UnMarshalInterface *r);
#endif /* _HEADER_RPC_IMarshal */
#ifndef _HEADER_RPC_ICoffeeMachine
#define _HEADER_RPC_ICoffeeMachine

extern const struct dcerpc_interface_table dcerpc_table_ICoffeeMachine;

struct rpc_request *dcerpc_MakeCoffee_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct MakeCoffee *r);
NTSTATUS dcerpc_MakeCoffee(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct MakeCoffee *r);
#endif /* _HEADER_RPC_ICoffeeMachine */
#ifndef _HEADER_RPC_IStream
#define _HEADER_RPC_IStream

extern const struct dcerpc_interface_table dcerpc_table_IStream;

struct rpc_request *dcerpc_Read_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Read *r);
NTSTATUS dcerpc_Read(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Read *r);

struct rpc_request *dcerpc_Write_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Write *r);
NTSTATUS dcerpc_Write(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Write *r);
#endif /* _HEADER_RPC_IStream */
#ifndef _HEADER_RPC_IWbemClassObject
#define _HEADER_RPC_IWbemClassObject

extern const struct dcerpc_interface_table dcerpc_table_IWbemClassObject;

struct rpc_request *dcerpc_Delete_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Delete *r);
NTSTATUS dcerpc_Delete(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Delete *r);
#endif /* _HEADER_RPC_IWbemClassObject */
#ifndef _HEADER_RPC_IWbemServices
#define _HEADER_RPC_IWbemServices

extern const struct dcerpc_interface_table dcerpc_table_IWbemServices;

struct rpc_request *dcerpc_OpenNamespace_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct OpenNamespace *r);
NTSTATUS dcerpc_OpenNamespace(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct OpenNamespace *r);

struct rpc_request *dcerpc_CancelAsyncCall_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CancelAsyncCall *r);
NTSTATUS dcerpc_CancelAsyncCall(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CancelAsyncCall *r);

struct rpc_request *dcerpc_QueryObjectSink_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct QueryObjectSink *r);
NTSTATUS dcerpc_QueryObjectSink(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct QueryObjectSink *r);

struct rpc_request *dcerpc_GetObject_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetObject *r);
NTSTATUS dcerpc_GetObject(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetObject *r);

struct rpc_request *dcerpc_GetObjectAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetObjectAsync *r);
NTSTATUS dcerpc_GetObjectAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetObjectAsync *r);

struct rpc_request *dcerpc_PutClass_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutClass *r);
NTSTATUS dcerpc_PutClass(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutClass *r);

struct rpc_request *dcerpc_PutClassAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutClassAsync *r);
NTSTATUS dcerpc_PutClassAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutClassAsync *r);

struct rpc_request *dcerpc_DeleteClass_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteClass *r);
NTSTATUS dcerpc_DeleteClass(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteClass *r);

struct rpc_request *dcerpc_DeleteClassAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteClassAsync *r);
NTSTATUS dcerpc_DeleteClassAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteClassAsync *r);

struct rpc_request *dcerpc_CreateClassEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateClassEnum *r);
NTSTATUS dcerpc_CreateClassEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateClassEnum *r);

struct rpc_request *dcerpc_CreateClassEnumAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateClassEnumAsync *r);
NTSTATUS dcerpc_CreateClassEnumAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateClassEnumAsync *r);

struct rpc_request *dcerpc_PutInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutInstance *r);
NTSTATUS dcerpc_PutInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutInstance *r);

struct rpc_request *dcerpc_PutInstanceAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutInstanceAsync *r);
NTSTATUS dcerpc_PutInstanceAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct PutInstanceAsync *r);

struct rpc_request *dcerpc_DeleteInstance_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteInstance *r);
NTSTATUS dcerpc_DeleteInstance(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteInstance *r);

struct rpc_request *dcerpc_DeleteInstanceAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteInstanceAsync *r);
NTSTATUS dcerpc_DeleteInstanceAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteInstanceAsync *r);

struct rpc_request *dcerpc_CreateInstanceEnum_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateInstanceEnum *r);
NTSTATUS dcerpc_CreateInstanceEnum(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateInstanceEnum *r);

struct rpc_request *dcerpc_CreateInstanceEnumAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateInstanceEnumAsync *r);
NTSTATUS dcerpc_CreateInstanceEnumAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct CreateInstanceEnumAsync *r);

struct rpc_request *dcerpc_ExecQuery_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecQuery *r);
NTSTATUS dcerpc_ExecQuery(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecQuery *r);

struct rpc_request *dcerpc_ExecQueryAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecQueryAsync *r);
NTSTATUS dcerpc_ExecQueryAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecQueryAsync *r);

struct rpc_request *dcerpc_ExecNotificationQuery_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecNotificationQuery *r);
NTSTATUS dcerpc_ExecNotificationQuery(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecNotificationQuery *r);

struct rpc_request *dcerpc_ExecNotificationQueryAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecNotificationQueryAsync *r);
NTSTATUS dcerpc_ExecNotificationQueryAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecNotificationQueryAsync *r);

struct rpc_request *dcerpc_ExecMethod_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecMethod *r);
NTSTATUS dcerpc_ExecMethod(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecMethod *r);

struct rpc_request *dcerpc_ExecMethodAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecMethodAsync *r);
NTSTATUS dcerpc_ExecMethodAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct ExecMethodAsync *r);
#endif /* _HEADER_RPC_IWbemServices */
#ifndef _HEADER_RPC_IEnumWbemClassObject
#define _HEADER_RPC_IEnumWbemClassObject

extern const struct dcerpc_interface_table dcerpc_table_IEnumWbemClassObject;

struct rpc_request *dcerpc_Reset_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Reset *r);
NTSTATUS dcerpc_Reset(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Reset *r);

struct rpc_request *dcerpc_IEnumWbemClassObject_Next_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IEnumWbemClassObject_Next *r);
NTSTATUS dcerpc_IEnumWbemClassObject_Next(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IEnumWbemClassObject_Next *r);

struct rpc_request *dcerpc_NextAsync_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NextAsync *r);
NTSTATUS dcerpc_NextAsync(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NextAsync *r);

struct rpc_request *dcerpc_IEnumWbemClassObject_Clone_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IEnumWbemClassObject_Clone *r);
NTSTATUS dcerpc_IEnumWbemClassObject_Clone(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IEnumWbemClassObject_Clone *r);

struct rpc_request *dcerpc_Skip_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Skip *r);
NTSTATUS dcerpc_Skip(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Skip *r);
#endif /* _HEADER_RPC_IEnumWbemClassObject */
#ifndef _HEADER_RPC_IWbemContext
#define _HEADER_RPC_IWbemContext

extern const struct dcerpc_interface_table dcerpc_table_IWbemContext;

struct rpc_request *dcerpc_Clone_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Clone *r);
NTSTATUS dcerpc_Clone(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Clone *r);

struct rpc_request *dcerpc_GetNames_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetNames *r);
NTSTATUS dcerpc_GetNames(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetNames *r);

struct rpc_request *dcerpc_BeginEnumeration_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BeginEnumeration *r);
NTSTATUS dcerpc_BeginEnumeration(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct BeginEnumeration *r);

struct rpc_request *dcerpc_Next_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Next *r);
NTSTATUS dcerpc_Next(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Next *r);

struct rpc_request *dcerpc_EndEnumeration_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EndEnumeration *r);
NTSTATUS dcerpc_EndEnumeration(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EndEnumeration *r);

struct rpc_request *dcerpc_SetValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct SetValue *r);
NTSTATUS dcerpc_SetValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct SetValue *r);

struct rpc_request *dcerpc_GetValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetValue *r);
NTSTATUS dcerpc_GetValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetValue *r);

struct rpc_request *dcerpc_DeleteValue_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteValue *r);
NTSTATUS dcerpc_DeleteValue(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteValue *r);

struct rpc_request *dcerpc_DeleteAll_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteAll *r);
NTSTATUS dcerpc_DeleteAll(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct DeleteAll *r);
#endif /* _HEADER_RPC_IWbemContext */
#ifndef _HEADER_RPC_IWbemLevel1Login
#define _HEADER_RPC_IWbemLevel1Login

extern const struct dcerpc_interface_table dcerpc_table_IWbemLevel1Login;

struct rpc_request *dcerpc_EstablishPosition_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EstablishPosition *r);
NTSTATUS dcerpc_EstablishPosition(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct EstablishPosition *r);

struct rpc_request *dcerpc_RequestChallenge_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RequestChallenge *r);
NTSTATUS dcerpc_RequestChallenge(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct RequestChallenge *r);

struct rpc_request *dcerpc_WBEMLogin_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WBEMLogin *r);
NTSTATUS dcerpc_WBEMLogin(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct WBEMLogin *r);

struct rpc_request *dcerpc_NTLMLogin_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NTLMLogin *r);
NTSTATUS dcerpc_NTLMLogin(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct NTLMLogin *r);
#endif /* _HEADER_RPC_IWbemLevel1Login */
#ifndef _HEADER_RPC_IWbemWCOSmartEnum
#define _HEADER_RPC_IWbemWCOSmartEnum

extern const struct dcerpc_interface_table dcerpc_table_IWbemWCOSmartEnum;

struct rpc_request *dcerpc_IWbemWCOSmartEnum_Next_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IWbemWCOSmartEnum_Next *r);
NTSTATUS dcerpc_IWbemWCOSmartEnum_Next(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct IWbemWCOSmartEnum_Next *r);
#endif /* _HEADER_RPC_IWbemWCOSmartEnum */
#ifndef _HEADER_RPC_IWbemFetchSmartEnum
#define _HEADER_RPC_IWbemFetchSmartEnum

extern const struct dcerpc_interface_table dcerpc_table_IWbemFetchSmartEnum;

struct rpc_request *dcerpc_Fetch_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Fetch *r);
NTSTATUS dcerpc_Fetch(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Fetch *r);

struct rpc_request *dcerpc_Test_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Test *r);
NTSTATUS dcerpc_Test(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct Test *r);
#endif /* _HEADER_RPC_IWbemFetchSmartEnum */
#ifndef _HEADER_RPC_IWbemCallResult
#define _HEADER_RPC_IWbemCallResult

extern const struct dcerpc_interface_table dcerpc_table_IWbemCallResult;

struct rpc_request *dcerpc_GetResultObject_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetResultObject *r);
NTSTATUS dcerpc_GetResultObject(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetResultObject *r);

struct rpc_request *dcerpc_GetResultString_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetResultString *r);
NTSTATUS dcerpc_GetResultString(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetResultString *r);

struct rpc_request *dcerpc_GetResultServices_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetResultServices *r);
NTSTATUS dcerpc_GetResultServices(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetResultServices *r);

struct rpc_request *dcerpc_GetCallStatus_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetCallStatus *r);
NTSTATUS dcerpc_GetCallStatus(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct GetCallStatus *r);
#endif /* _HEADER_RPC_IWbemCallResult */
