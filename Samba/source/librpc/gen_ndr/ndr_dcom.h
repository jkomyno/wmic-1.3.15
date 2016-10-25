/* header auto-generated by pidl */

#include "librpc/gen_ndr/dcom.h"

#ifndef _HEADER_NDR_dcom_Unknown
#define _HEADER_NDR_dcom_Unknown

#include "librpc/ndr/libndr.h"
#define DCERPC_DCOM_UNKNOWN_UUID "18f70770-8e64-11cf-9af1-0020af6e72f4"
#define DCERPC_DCOM_UNKNOWN_VERSION 0.0
#define DCERPC_DCOM_UNKNOWN_NAME "dcom_Unknown"
#define DCERPC_DCOM_UNKNOWN_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_dcom_Unknown;
NTSTATUS dcerpc_server_dcom_Unknown_init(void);
#define DCERPC_USEPROTSEQ (0x00)

#define DCERPC_GETCUSTOMPROTSEQINFO (0x01)

#define DCERPC_UPDATERESOLVERBINDINGS (0x02)

#define DCERPC_DCOM_UNKNOWN_CALL_COUNT (3)
void ndr_print_UseProtSeq(struct ndr_print *ndr, const char *name, int flags, const struct UseProtSeq *r);
void ndr_print_GetCustomProtseqInfo(struct ndr_print *ndr, const char *name, int flags, const struct GetCustomProtseqInfo *r);
void ndr_print_UpdateResolverBindings(struct ndr_print *ndr, const char *name, int flags, const struct UpdateResolverBindings *r);
#endif /* _HEADER_NDR_dcom_Unknown */
#ifndef _HEADER_NDR_IUnknown
#define _HEADER_NDR_IUnknown

#include "librpc/ndr/libndr.h"
#define DCERPC_IUNKNOWN_UUID "00000000-0000-0000-c000-000000000046"
#define DCERPC_IUNKNOWN_VERSION 0.0
#define DCERPC_IUNKNOWN_NAME "IUnknown"
#define DCERPC_IUNKNOWN_HELPSTRING "Base interface for all COM interfaces"
extern const struct dcerpc_interface_table dcerpc_table_IUnknown;
NTSTATUS dcerpc_server_IUnknown_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_IUNKNOWN_CALL_COUNT (3)
void ndr_print_QueryInterface(struct ndr_print *ndr, const char *name, int flags, const struct QueryInterface *r);
void ndr_print_AddRef(struct ndr_print *ndr, const char *name, int flags, const struct AddRef *r);
void ndr_print_Release(struct ndr_print *ndr, const char *name, int flags, const struct Release *r);
#endif /* _HEADER_NDR_IUnknown */
#ifndef _HEADER_NDR_IClassFactory
#define _HEADER_NDR_IClassFactory

#include "librpc/ndr/libndr.h"
#define DCERPC_ICLASSFACTORY_UUID "00000001-0000-0000-c000-000000000046"
#define DCERPC_ICLASSFACTORY_VERSION 0.0
#define DCERPC_ICLASSFACTORY_NAME "IClassFactory"
#define DCERPC_ICLASSFACTORY_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IClassFactory;
NTSTATUS dcerpc_server_IClassFactory_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_CREATEINSTANCE (0x03)

#define DCERPC_REMOTECREATEINSTANCE (0x04)

#define DCERPC_LOCKSERVER (0x05)

#define DCERPC_REMOTELOCKSERVER (0x06)

#define DCERPC_ICLASSFACTORY_CALL_COUNT (7)
void ndr_print_CreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct CreateInstance *r);
void ndr_print_RemoteCreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct RemoteCreateInstance *r);
void ndr_print_LockServer(struct ndr_print *ndr, const char *name, int flags, const struct LockServer *r);
void ndr_print_RemoteLockServer(struct ndr_print *ndr, const char *name, int flags, const struct RemoteLockServer *r);
#endif /* _HEADER_NDR_IClassFactory */
#ifndef _HEADER_NDR_IRemUnknown
#define _HEADER_NDR_IRemUnknown

#include "librpc/ndr/libndr.h"
#define DCERPC_IREMUNKNOWN_UUID "00000131-0000-0000-c000-000000000046"
#define DCERPC_IREMUNKNOWN_VERSION 0.0
#define DCERPC_IREMUNKNOWN_NAME "IRemUnknown"
#define DCERPC_IREMUNKNOWN_HELPSTRING "Remote version of IUnknown"
extern const struct dcerpc_interface_table dcerpc_table_IRemUnknown;
NTSTATUS dcerpc_server_IRemUnknown_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_REMQUERYINTERFACE (0x03)

#define DCERPC_REMADDREF (0x04)

#define DCERPC_REMRELEASE (0x05)

#define DCERPC_IREMUNKNOWN_CALL_COUNT (6)
NTSTATUS ndr_push_REMQIRESULT(struct ndr_push *ndr, int ndr_flags, const struct REMQIRESULT *r);
NTSTATUS ndr_pull_REMQIRESULT(struct ndr_pull *ndr, int ndr_flags, struct REMQIRESULT *r);
void ndr_print_REMQIRESULT(struct ndr_print *ndr, const char *name, const struct REMQIRESULT *r);
void ndr_print_REMINTERFACEREF(struct ndr_print *ndr, const char *name, const struct REMINTERFACEREF *r);
void ndr_print_RemQueryInterface(struct ndr_print *ndr, const char *name, int flags, const struct RemQueryInterface *r);
void ndr_print_RemAddRef(struct ndr_print *ndr, const char *name, int flags, const struct RemAddRef *r);
void ndr_print_RemRelease(struct ndr_print *ndr, const char *name, int flags, const struct RemRelease *r);
#endif /* _HEADER_NDR_IRemUnknown */
#ifndef _HEADER_NDR_IClassActivator
#define _HEADER_NDR_IClassActivator

#include "librpc/ndr/libndr.h"
#define DCERPC_ICLASSACTIVATOR_UUID "00000140-0000-0000-c000-000000000046"
#define DCERPC_ICLASSACTIVATOR_VERSION 0.0
#define DCERPC_ICLASSACTIVATOR_NAME "IClassActivator"
#define DCERPC_ICLASSACTIVATOR_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IClassActivator;
NTSTATUS dcerpc_server_IClassActivator_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_GETCLASSOBJECT (0x03)

#define DCERPC_ICLASSACTIVATOR_CALL_COUNT (4)
void ndr_print_GetClassObject(struct ndr_print *ndr, const char *name, int flags, const struct GetClassObject *r);
#endif /* _HEADER_NDR_IClassActivator */
#ifndef _HEADER_NDR_ISCMLocalActivator
#define _HEADER_NDR_ISCMLocalActivator

#include "librpc/ndr/libndr.h"
#define DCERPC_ISCMLOCALACTIVATOR_UUID "00000136-0000-0000-c000-000000000046"
#define DCERPC_ISCMLOCALACTIVATOR_VERSION 0.0
#define DCERPC_ISCMLOCALACTIVATOR_NAME "ISCMLocalActivator"
#define DCERPC_ISCMLOCALACTIVATOR_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_ISCMLocalActivator;
NTSTATUS dcerpc_server_ISCMLocalActivator_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_GETCLASSOBJECT (0x03)

#define DCERPC_ISCMLOCALACTIVATOR_CREATEINSTANCE (0x04)

#define DCERPC_ISCMLOCALACTIVATOR_CALL_COUNT (5)
void ndr_print_ISCMLocalActivator_CreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct ISCMLocalActivator_CreateInstance *r);
#endif /* _HEADER_NDR_ISCMLocalActivator */
#ifndef _HEADER_NDR_IMachineLocalActivator
#define _HEADER_NDR_IMachineLocalActivator

#include "librpc/ndr/libndr.h"
#define DCERPC_IMACHINELOCALACTIVATOR_UUID "c6f3ee72-ce7e-11d1-b71e-00c04fc3111a"
#define DCERPC_IMACHINELOCALACTIVATOR_VERSION 0.0
#define DCERPC_IMACHINELOCALACTIVATOR_NAME "IMachineLocalActivator"
#define DCERPC_IMACHINELOCALACTIVATOR_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IMachineLocalActivator;
NTSTATUS dcerpc_server_IMachineLocalActivator_init(void);
#define DCERPC_IMACHINELOCALACTIVATOR_FOO (0x00)

#define DCERPC_IMACHINELOCALACTIVATOR_CALL_COUNT (1)
void ndr_print_IMachineLocalActivator_foo(struct ndr_print *ndr, const char *name, int flags, const struct IMachineLocalActivator_foo *r);
#endif /* _HEADER_NDR_IMachineLocalActivator */
#ifndef _HEADER_NDR_ILocalObjectExporter
#define _HEADER_NDR_ILocalObjectExporter

#include "librpc/ndr/libndr.h"
#define DCERPC_ILOCALOBJECTEXPORTER_UUID "e60c73e6-88f9-11cf-9af1-0020af6e72f4"
#define DCERPC_ILOCALOBJECTEXPORTER_VERSION 0.0
#define DCERPC_ILOCALOBJECTEXPORTER_NAME "ILocalObjectExporter"
#define DCERPC_ILOCALOBJECTEXPORTER_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_ILocalObjectExporter;
NTSTATUS dcerpc_server_ILocalObjectExporter_init(void);
#define DCERPC_ILOCALOBJECTEXPORTER_FOO (0x00)

#define DCERPC_ILOCALOBJECTEXPORTER_CALL_COUNT (1)
void ndr_print_ILocalObjectExporter_Foo(struct ndr_print *ndr, const char *name, int flags, const struct ILocalObjectExporter_Foo *r);
#endif /* _HEADER_NDR_ILocalObjectExporter */
#ifndef _HEADER_NDR_ISystemActivator
#define _HEADER_NDR_ISystemActivator

#include "librpc/ndr/libndr.h"
#define DCERPC_ISYSTEMACTIVATOR_UUID "000001a0-0000-0000-c000-000000000046"
#define DCERPC_ISYSTEMACTIVATOR_VERSION 0.0
#define DCERPC_ISYSTEMACTIVATOR_NAME "ISystemActivator"
#define DCERPC_ISYSTEMACTIVATOR_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_ISystemActivator;
NTSTATUS dcerpc_server_ISystemActivator_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_GETCLASSOBJECT (0x03)

#define DCERPC_ISYSTEMACTIVATORREMOTECREATEINSTANCE (0x04)

#define DCERPC_ISYSTEMACTIVATOR_CALL_COUNT (5)
void ndr_print_ISystemActivatorRemoteCreateInstance(struct ndr_print *ndr, const char *name, int flags, const struct ISystemActivatorRemoteCreateInstance *r);
#endif /* _HEADER_NDR_ISystemActivator */
#ifndef _HEADER_NDR_IRemUnknown2
#define _HEADER_NDR_IRemUnknown2

#include "librpc/ndr/libndr.h"
#define DCERPC_IREMUNKNOWN2_UUID "00000143-0000-0000-c000-000000000046"
#define DCERPC_IREMUNKNOWN2_VERSION 0.0
#define DCERPC_IREMUNKNOWN2_NAME "IRemUnknown2"
#define DCERPC_IREMUNKNOWN2_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IRemUnknown2;
NTSTATUS dcerpc_server_IRemUnknown2_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_REMQUERYINTERFACE (0x03)

#define DCERPC_REMADDREF (0x04)

#define DCERPC_REMRELEASE (0x05)

#define DCERPC_REMQUERYINTERFACE2 (0x06)

#define DCERPC_IREMUNKNOWN2_CALL_COUNT (7)
void ndr_print_RemQueryInterface2(struct ndr_print *ndr, const char *name, int flags, const struct RemQueryInterface2 *r);
#endif /* _HEADER_NDR_IRemUnknown2 */
#ifndef _HEADER_NDR_IDispatch
#define _HEADER_NDR_IDispatch

#include "librpc/ndr/libndr.h"
#define DCERPC_IDISPATCH_UUID "00020400-0000-0000-c000-000000000046"
#define DCERPC_IDISPATCH_VERSION 0.0
#define DCERPC_IDISPATCH_NAME "IDispatch"
#define DCERPC_IDISPATCH_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IDispatch;
NTSTATUS dcerpc_server_IDispatch_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_GETTYPEINFOCOUNT (0x03)

#define DCERPC_GETTYPEINFO (0x04)

#define DCERPC_GETIDSOFNAMES (0x05)

#define DCERPC_INVOKE (0x06)

#define DCERPC_IDISPATCH_CALL_COUNT (7)
void ndr_print_REF_ITypeInfo(struct ndr_print *ndr, const char *name, const struct REF_ITypeInfo *r);
void ndr_print_VARIANT(struct ndr_print *ndr, const char *name, const struct VARIANT *r);
void ndr_print_DISPPARAMS(struct ndr_print *ndr, const char *name, const struct DISPPARAMS *r);
void ndr_print_EXCEPINFO(struct ndr_print *ndr, const char *name, const struct EXCEPINFO *r);
void ndr_print_GetTypeInfoCount(struct ndr_print *ndr, const char *name, int flags, const struct GetTypeInfoCount *r);
void ndr_print_GetTypeInfo(struct ndr_print *ndr, const char *name, int flags, const struct GetTypeInfo *r);
void ndr_print_GetIDsOfNames(struct ndr_print *ndr, const char *name, int flags, const struct GetIDsOfNames *r);
void ndr_print_Invoke(struct ndr_print *ndr, const char *name, int flags, const struct Invoke *r);
#endif /* _HEADER_NDR_IDispatch */
#ifndef _HEADER_NDR_IMarshal
#define _HEADER_NDR_IMarshal

#include "librpc/ndr/libndr.h"
#define DCERPC_IMARSHAL_UUID "00000003-0000-0000-c000-000000000046"
#define DCERPC_IMARSHAL_VERSION 0.0
#define DCERPC_IMARSHAL_NAME "IMarshal"
#define DCERPC_IMARSHAL_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IMarshal;
NTSTATUS dcerpc_server_IMarshal_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_MARSHALINTERFACE (0x03)

#define DCERPC_UNMARSHALINTERFACE (0x04)

#define DCERPC_IMARSHAL_CALL_COUNT (5)
void ndr_print_MarshalInterface(struct ndr_print *ndr, const char *name, int flags, const struct MarshalInterface *r);
void ndr_print_UnMarshalInterface(struct ndr_print *ndr, const char *name, int flags, const struct UnMarshalInterface *r);
#endif /* _HEADER_NDR_IMarshal */
#ifndef _HEADER_NDR_ICoffeeMachine
#define _HEADER_NDR_ICoffeeMachine

#include "librpc/ndr/libndr.h"
#define DCERPC_ICOFFEEMACHINE_UUID "da23f6db-6f45-466c-9eed-0b65286f2d78"
#define DCERPC_ICOFFEEMACHINE_VERSION 0.0
#define DCERPC_ICOFFEEMACHINE_NAME "ICoffeeMachine"
#define DCERPC_ICOFFEEMACHINE_HELPSTRING "ICoffeeMachine Interface"
extern const struct dcerpc_interface_table dcerpc_table_ICoffeeMachine;
NTSTATUS dcerpc_server_ICoffeeMachine_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_MAKECOFFEE (0x03)

#define DCERPC_ICOFFEEMACHINE_CALL_COUNT (4)
void ndr_print_MakeCoffee(struct ndr_print *ndr, const char *name, int flags, const struct MakeCoffee *r);
#endif /* _HEADER_NDR_ICoffeeMachine */
#ifndef _HEADER_NDR_IStream
#define _HEADER_NDR_IStream

#include "librpc/ndr/libndr.h"
#define DCERPC_ISTREAM_UUID "0000000c-0000-0000-c000-000000000046"
#define DCERPC_ISTREAM_VERSION 0.0
#define DCERPC_ISTREAM_NAME "IStream"
#define DCERPC_ISTREAM_HELPSTRING "Stream"
extern const struct dcerpc_interface_table dcerpc_table_IStream;
NTSTATUS dcerpc_server_IStream_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_READ (0x03)

#define DCERPC_WRITE (0x04)

#define DCERPC_ISTREAM_CALL_COUNT (5)
void ndr_print_Read(struct ndr_print *ndr, const char *name, int flags, const struct Read *r);
void ndr_print_Write(struct ndr_print *ndr, const char *name, int flags, const struct Write *r);
#endif /* _HEADER_NDR_IStream */
#ifndef _HEADER_NDR_IWbemClassObject
#define _HEADER_NDR_IWbemClassObject

#include "librpc/ndr/libndr.h"
#define DCERPC_IWBEMCLASSOBJECT_UUID "dc12a681-737f-11cf-884d-00aa004b2e24"
#define DCERPC_IWBEMCLASSOBJECT_VERSION 0.0
#define DCERPC_IWBEMCLASSOBJECT_NAME "IWbemClassObject"
#define DCERPC_IWBEMCLASSOBJECT_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IWbemClassObject;
NTSTATUS dcerpc_server_IWbemClassObject_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_DELETE (0x03)

#define DCERPC_IWBEMCLASSOBJECT_CALL_COUNT (4)
void ndr_print_Delete(struct ndr_print *ndr, const char *name, int flags, const struct Delete *r);
#endif /* _HEADER_NDR_IWbemClassObject */
#ifndef _HEADER_NDR_IWbemServices
#define _HEADER_NDR_IWbemServices

#include "librpc/ndr/libndr.h"
#define DCERPC_IWBEMSERVICES_UUID "9556dc99-828c-11cf-a37e-00aa003240c7"
#define DCERPC_IWBEMSERVICES_VERSION 0.0
#define DCERPC_IWBEMSERVICES_NAME "IWbemServices"
#define DCERPC_IWBEMSERVICES_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IWbemServices;
NTSTATUS dcerpc_server_IWbemServices_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_OPENNAMESPACE (0x03)

#define DCERPC_CANCELASYNCCALL (0x04)

#define DCERPC_QUERYOBJECTSINK (0x05)

#define DCERPC_GETOBJECT (0x06)

#define DCERPC_GETOBJECTASYNC (0x07)

#define DCERPC_PUTCLASS (0x08)

#define DCERPC_PUTCLASSASYNC (0x09)

#define DCERPC_DELETECLASS (0x0a)

#define DCERPC_DELETECLASSASYNC (0x0b)

#define DCERPC_CREATECLASSENUM (0x0c)

#define DCERPC_CREATECLASSENUMASYNC (0x0d)

#define DCERPC_PUTINSTANCE (0x0e)

#define DCERPC_PUTINSTANCEASYNC (0x0f)

#define DCERPC_DELETEINSTANCE (0x10)

#define DCERPC_DELETEINSTANCEASYNC (0x11)

#define DCERPC_CREATEINSTANCEENUM (0x12)

#define DCERPC_CREATEINSTANCEENUMASYNC (0x13)

#define DCERPC_EXECQUERY (0x14)

#define DCERPC_EXECQUERYASYNC (0x15)

#define DCERPC_EXECNOTIFICATIONQUERY (0x16)

#define DCERPC_EXECNOTIFICATIONQUERYASYNC (0x17)

#define DCERPC_EXECMETHOD (0x18)

#define DCERPC_EXECMETHODASYNC (0x19)

#define DCERPC_IWBEMSERVICES_CALL_COUNT (26)
NTSTATUS ndr_push_WBEM_GENERIC_FLAG_TYPE(struct ndr_push *ndr, int ndr_flags, enum WBEM_GENERIC_FLAG_TYPE r);
NTSTATUS ndr_pull_WBEM_GENERIC_FLAG_TYPE(struct ndr_pull *ndr, int ndr_flags, enum WBEM_GENERIC_FLAG_TYPE *r);
void ndr_print_WBEM_GENERIC_FLAG_TYPE(struct ndr_print *ndr, const char *name, enum WBEM_GENERIC_FLAG_TYPE r);
NTSTATUS ndr_push_WBEM_TIMEOUT_TYPE(struct ndr_push *ndr, int ndr_flags, enum WBEM_TIMEOUT_TYPE r);
NTSTATUS ndr_pull_WBEM_TIMEOUT_TYPE(struct ndr_pull *ndr, int ndr_flags, enum WBEM_TIMEOUT_TYPE *r);
void ndr_print_WBEM_TIMEOUT_TYPE(struct ndr_print *ndr, const char *name, enum WBEM_TIMEOUT_TYPE r);
NTSTATUS ndr_push_CIMSTRING(struct ndr_push *ndr, int ndr_flags, const CIMSTRING *r);
NTSTATUS ndr_pull_CIMSTRING(struct ndr_pull *ndr, int ndr_flags, CIMSTRING *r);
void ndr_print_CIMSTRING(struct ndr_print *ndr, const char *name, const CIMSTRING *r);
NTSTATUS ndr_push_CIMTYPE_ENUMERATION(struct ndr_push *ndr, int ndr_flags, enum CIMTYPE_ENUMERATION r);
NTSTATUS ndr_pull_CIMTYPE_ENUMERATION(struct ndr_pull *ndr, int ndr_flags, enum CIMTYPE_ENUMERATION *r);
void ndr_print_CIMTYPE_ENUMERATION(struct ndr_print *ndr, const char *name, enum CIMTYPE_ENUMERATION r);
NTSTATUS ndr_push_arr_int8(struct ndr_push *ndr, int ndr_flags, const struct arr_int8 *r);
NTSTATUS ndr_pull_arr_int8(struct ndr_pull *ndr, int ndr_flags, struct arr_int8 *r);
void ndr_print_arr_int8(struct ndr_print *ndr, const char *name, const struct arr_int8 *r);
NTSTATUS ndr_push_arr_uint8(struct ndr_push *ndr, int ndr_flags, const struct arr_uint8 *r);
NTSTATUS ndr_pull_arr_uint8(struct ndr_pull *ndr, int ndr_flags, struct arr_uint8 *r);
void ndr_print_arr_uint8(struct ndr_print *ndr, const char *name, const struct arr_uint8 *r);
NTSTATUS ndr_push_arr_int16(struct ndr_push *ndr, int ndr_flags, const struct arr_int16 *r);
NTSTATUS ndr_pull_arr_int16(struct ndr_pull *ndr, int ndr_flags, struct arr_int16 *r);
void ndr_print_arr_int16(struct ndr_print *ndr, const char *name, const struct arr_int16 *r);
NTSTATUS ndr_push_arr_uint16(struct ndr_push *ndr, int ndr_flags, const struct arr_uint16 *r);
NTSTATUS ndr_pull_arr_uint16(struct ndr_pull *ndr, int ndr_flags, struct arr_uint16 *r);
void ndr_print_arr_uint16(struct ndr_print *ndr, const char *name, const struct arr_uint16 *r);
NTSTATUS ndr_push_arr_int32(struct ndr_push *ndr, int ndr_flags, const struct arr_int32 *r);
NTSTATUS ndr_pull_arr_int32(struct ndr_pull *ndr, int ndr_flags, struct arr_int32 *r);
void ndr_print_arr_int32(struct ndr_print *ndr, const char *name, const struct arr_int32 *r);
NTSTATUS ndr_push_arr_uint32(struct ndr_push *ndr, int ndr_flags, const struct arr_uint32 *r);
NTSTATUS ndr_pull_arr_uint32(struct ndr_pull *ndr, int ndr_flags, struct arr_uint32 *r);
void ndr_print_arr_uint32(struct ndr_print *ndr, const char *name, const struct arr_uint32 *r);
NTSTATUS ndr_push_arr_dlong(struct ndr_push *ndr, int ndr_flags, const struct arr_dlong *r);
NTSTATUS ndr_pull_arr_dlong(struct ndr_pull *ndr, int ndr_flags, struct arr_dlong *r);
void ndr_print_arr_dlong(struct ndr_print *ndr, const char *name, const struct arr_dlong *r);
NTSTATUS ndr_push_arr_udlong(struct ndr_push *ndr, int ndr_flags, const struct arr_udlong *r);
NTSTATUS ndr_pull_arr_udlong(struct ndr_pull *ndr, int ndr_flags, struct arr_udlong *r);
void ndr_print_arr_udlong(struct ndr_print *ndr, const char *name, const struct arr_udlong *r);
NTSTATUS ndr_push_arr_CIMSTRING(struct ndr_push *ndr, int ndr_flags, const struct arr_CIMSTRING *r);
NTSTATUS ndr_pull_arr_CIMSTRING(struct ndr_pull *ndr, int ndr_flags, struct arr_CIMSTRING *r);
void ndr_print_arr_CIMSTRING(struct ndr_print *ndr, const char *name, const struct arr_CIMSTRING *r);
NTSTATUS ndr_push_arr_WbemClassObject(struct ndr_push *ndr, int ndr_flags, const struct arr_WbemClassObject *r);
NTSTATUS ndr_pull_arr_WbemClassObject(struct ndr_pull *ndr, int ndr_flags, struct arr_WbemClassObject *r);
void ndr_print_arr_WbemClassObject(struct ndr_print *ndr, const char *name, const struct arr_WbemClassObject *r);
NTSTATUS ndr_push_CIMVAR(struct ndr_push *ndr, int ndr_flags, const union CIMVAR *r);
NTSTATUS ndr_pull_CIMVAR(struct ndr_pull *ndr, int ndr_flags, union CIMVAR *r);
void ndr_print_CIMVAR(struct ndr_print *ndr, const char *name, const union CIMVAR *r);
NTSTATUS ndr_push_WBEM_FLAVOR_TYPE(struct ndr_push *ndr, int ndr_flags, uint8_t r);
NTSTATUS ndr_pull_WBEM_FLAVOR_TYPE(struct ndr_pull *ndr, int ndr_flags, uint8_t *r);
void ndr_print_WBEM_FLAVOR_TYPE(struct ndr_print *ndr, const char *name, uint8_t r);
NTSTATUS ndr_push_WCO_FLAGS(struct ndr_push *ndr, int ndr_flags, uint8_t r);
NTSTATUS ndr_pull_WCO_FLAGS(struct ndr_pull *ndr, int ndr_flags, uint8_t *r);
void ndr_print_WCO_FLAGS(struct ndr_print *ndr, const char *name, uint8_t r);
NTSTATUS ndr_push_WbemQualifier(struct ndr_push *ndr, int ndr_flags, const struct WbemQualifier *r);
NTSTATUS ndr_pull_WbemQualifier(struct ndr_pull *ndr, int ndr_flags, struct WbemQualifier *r);
void ndr_print_WbemQualifier(struct ndr_print *ndr, const char *name, const struct WbemQualifier *r);
NTSTATUS ndr_push_WbemQualifiers(struct ndr_push *ndr, int ndr_flags, const struct WbemQualifiers *r);
NTSTATUS ndr_pull_WbemQualifiers(struct ndr_pull *ndr, int ndr_flags, struct WbemQualifiers *r);
void ndr_print_WbemQualifiers(struct ndr_print *ndr, const char *name, const struct WbemQualifiers *r);
NTSTATUS ndr_push_WbemPropertyDesc(struct ndr_push *ndr, int ndr_flags, const struct WbemPropertyDesc *r);
NTSTATUS ndr_pull_WbemPropertyDesc(struct ndr_pull *ndr, int ndr_flags, struct WbemPropertyDesc *r);
void ndr_print_WbemPropertyDesc(struct ndr_print *ndr, const char *name, const struct WbemPropertyDesc *r);
NTSTATUS ndr_push_WbemProperty(struct ndr_push *ndr, int ndr_flags, const struct WbemProperty *r);
NTSTATUS ndr_pull_WbemProperty(struct ndr_pull *ndr, int ndr_flags, struct WbemProperty *r);
void ndr_print_WbemProperty(struct ndr_print *ndr, const char *name, const struct WbemProperty *r);
NTSTATUS ndr_push_CIMSTRINGS(struct ndr_push *ndr, int ndr_flags, const struct CIMSTRINGS *r);
NTSTATUS ndr_pull_CIMSTRINGS(struct ndr_pull *ndr, int ndr_flags, struct CIMSTRINGS *r);
void ndr_print_CIMSTRINGS(struct ndr_print *ndr, const char *name, const struct CIMSTRINGS *r);
NTSTATUS ndr_push_DEFAULT_FLAGS(struct ndr_push *ndr, int ndr_flags, uint8_t r);
NTSTATUS ndr_pull_DEFAULT_FLAGS(struct ndr_pull *ndr, int ndr_flags, uint8_t *r);
void ndr_print_DEFAULT_FLAGS(struct ndr_print *ndr, const char *name, uint8_t r);
NTSTATUS ndr_push_WbemClass(struct ndr_push *ndr, int ndr_flags, const struct WbemClass *r);
NTSTATUS ndr_pull_WbemClass(struct ndr_pull *ndr, int ndr_flags, struct WbemClass *r);
void ndr_print_WbemClass(struct ndr_print *ndr, const char *name, const struct WbemClass *r);
NTSTATUS ndr_push_WbemMethod(struct ndr_push *ndr, int ndr_flags, const struct WbemMethod *r);
NTSTATUS ndr_pull_WbemMethod(struct ndr_pull *ndr, int ndr_flags, struct WbemMethod *r);
void ndr_print_WbemMethod(struct ndr_print *ndr, const char *name, const struct WbemMethod *r);
NTSTATUS ndr_push_WbemMethods(struct ndr_push *ndr, int ndr_flags, const struct WbemMethods *r);
NTSTATUS ndr_pull_WbemMethods(struct ndr_pull *ndr, int ndr_flags, struct WbemMethods *r);
void ndr_print_WbemMethods(struct ndr_print *ndr, const char *name, const struct WbemMethods *r);
NTSTATUS ndr_push_WbemInstance(struct ndr_push *ndr, int ndr_flags, const struct WbemInstance *r);
NTSTATUS ndr_pull_WbemInstance(struct ndr_pull *ndr, int ndr_flags, struct WbemInstance *r);
void ndr_print_WbemInstance(struct ndr_print *ndr, const char *name, const struct WbemInstance *r);
NTSTATUS ndr_push_WbemClassObject(struct ndr_push *ndr, int ndr_flags, const struct WbemClassObject *r);
NTSTATUS ndr_pull_WbemClassObject(struct ndr_pull *ndr, int ndr_flags, struct WbemClassObject *r);
void ndr_print_WbemClassObject(struct ndr_print *ndr, const char *name, const struct WbemClassObject *r);
NTSTATUS ndr_push_BSTR(struct ndr_push *ndr, int ndr_flags, const BSTR *r);
NTSTATUS ndr_pull_BSTR(struct ndr_pull *ndr, int ndr_flags, BSTR *r);
void ndr_print_BSTR(struct ndr_print *ndr, const char *name, const BSTR *r);
void ndr_print_OpenNamespace(struct ndr_print *ndr, const char *name, int flags, const struct OpenNamespace *r);
void ndr_print_CancelAsyncCall(struct ndr_print *ndr, const char *name, int flags, const struct CancelAsyncCall *r);
void ndr_print_QueryObjectSink(struct ndr_print *ndr, const char *name, int flags, const struct QueryObjectSink *r);
void ndr_print_GetObject(struct ndr_print *ndr, const char *name, int flags, const struct GetObject *r);
void ndr_print_GetObjectAsync(struct ndr_print *ndr, const char *name, int flags, const struct GetObjectAsync *r);
void ndr_print_PutClass(struct ndr_print *ndr, const char *name, int flags, const struct PutClass *r);
void ndr_print_PutClassAsync(struct ndr_print *ndr, const char *name, int flags, const struct PutClassAsync *r);
void ndr_print_DeleteClass(struct ndr_print *ndr, const char *name, int flags, const struct DeleteClass *r);
void ndr_print_DeleteClassAsync(struct ndr_print *ndr, const char *name, int flags, const struct DeleteClassAsync *r);
void ndr_print_CreateClassEnum(struct ndr_print *ndr, const char *name, int flags, const struct CreateClassEnum *r);
void ndr_print_CreateClassEnumAsync(struct ndr_print *ndr, const char *name, int flags, const struct CreateClassEnumAsync *r);
void ndr_print_PutInstance(struct ndr_print *ndr, const char *name, int flags, const struct PutInstance *r);
void ndr_print_PutInstanceAsync(struct ndr_print *ndr, const char *name, int flags, const struct PutInstanceAsync *r);
void ndr_print_DeleteInstance(struct ndr_print *ndr, const char *name, int flags, const struct DeleteInstance *r);
void ndr_print_DeleteInstanceAsync(struct ndr_print *ndr, const char *name, int flags, const struct DeleteInstanceAsync *r);
void ndr_print_CreateInstanceEnum(struct ndr_print *ndr, const char *name, int flags, const struct CreateInstanceEnum *r);
void ndr_print_CreateInstanceEnumAsync(struct ndr_print *ndr, const char *name, int flags, const struct CreateInstanceEnumAsync *r);
void ndr_print_ExecQuery(struct ndr_print *ndr, const char *name, int flags, const struct ExecQuery *r);
void ndr_print_ExecQueryAsync(struct ndr_print *ndr, const char *name, int flags, const struct ExecQueryAsync *r);
void ndr_print_ExecNotificationQuery(struct ndr_print *ndr, const char *name, int flags, const struct ExecNotificationQuery *r);
void ndr_print_ExecNotificationQueryAsync(struct ndr_print *ndr, const char *name, int flags, const struct ExecNotificationQueryAsync *r);
void ndr_print_ExecMethod(struct ndr_print *ndr, const char *name, int flags, const struct ExecMethod *r);
void ndr_print_ExecMethodAsync(struct ndr_print *ndr, const char *name, int flags, const struct ExecMethodAsync *r);
#endif /* _HEADER_NDR_IWbemServices */
#ifndef _HEADER_NDR_IEnumWbemClassObject
#define _HEADER_NDR_IEnumWbemClassObject

#include "librpc/ndr/libndr.h"
#define DCERPC_IENUMWBEMCLASSOBJECT_UUID "027947e1-d731-11ce-a357-000000000001"
#define DCERPC_IENUMWBEMCLASSOBJECT_VERSION 0.0
#define DCERPC_IENUMWBEMCLASSOBJECT_NAME "IEnumWbemClassObject"
#define DCERPC_IENUMWBEMCLASSOBJECT_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IEnumWbemClassObject;
NTSTATUS dcerpc_server_IEnumWbemClassObject_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_RESET (0x03)

#define DCERPC_IENUMWBEMCLASSOBJECT_NEXT (0x04)

#define DCERPC_NEXTASYNC (0x05)

#define DCERPC_IENUMWBEMCLASSOBJECT_CLONE (0x06)

#define DCERPC_SKIP (0x07)

#define DCERPC_IENUMWBEMCLASSOBJECT_CALL_COUNT (8)
void ndr_print_Reset(struct ndr_print *ndr, const char *name, int flags, const struct Reset *r);
void ndr_print_IEnumWbemClassObject_Next(struct ndr_print *ndr, const char *name, int flags, const struct IEnumWbemClassObject_Next *r);
void ndr_print_NextAsync(struct ndr_print *ndr, const char *name, int flags, const struct NextAsync *r);
void ndr_print_IEnumWbemClassObject_Clone(struct ndr_print *ndr, const char *name, int flags, const struct IEnumWbemClassObject_Clone *r);
void ndr_print_Skip(struct ndr_print *ndr, const char *name, int flags, const struct Skip *r);
#endif /* _HEADER_NDR_IEnumWbemClassObject */
#ifndef _HEADER_NDR_IWbemContext
#define _HEADER_NDR_IWbemContext

#include "librpc/ndr/libndr.h"
#define DCERPC_IWBEMCONTEXT_UUID "44aca674-e8fc-11d0-a07c-00c04fb68820"
#define DCERPC_IWBEMCONTEXT_VERSION 0.0
#define DCERPC_IWBEMCONTEXT_NAME "IWbemContext"
#define DCERPC_IWBEMCONTEXT_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IWbemContext;
NTSTATUS dcerpc_server_IWbemContext_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_CLONE (0x03)

#define DCERPC_GETNAMES (0x04)

#define DCERPC_BEGINENUMERATION (0x05)

#define DCERPC_NEXT (0x06)

#define DCERPC_ENDENUMERATION (0x07)

#define DCERPC_SETVALUE (0x08)

#define DCERPC_GETVALUE (0x09)

#define DCERPC_DELETEVALUE (0x0a)

#define DCERPC_DELETEALL (0x0b)

#define DCERPC_IWBEMCONTEXT_CALL_COUNT (12)
void ndr_print_Clone(struct ndr_print *ndr, const char *name, int flags, const struct Clone *r);
void ndr_print_GetNames(struct ndr_print *ndr, const char *name, int flags, const struct GetNames *r);
void ndr_print_BeginEnumeration(struct ndr_print *ndr, const char *name, int flags, const struct BeginEnumeration *r);
void ndr_print_Next(struct ndr_print *ndr, const char *name, int flags, const struct Next *r);
void ndr_print_EndEnumeration(struct ndr_print *ndr, const char *name, int flags, const struct EndEnumeration *r);
void ndr_print_SetValue(struct ndr_print *ndr, const char *name, int flags, const struct SetValue *r);
void ndr_print_GetValue(struct ndr_print *ndr, const char *name, int flags, const struct GetValue *r);
void ndr_print_DeleteValue(struct ndr_print *ndr, const char *name, int flags, const struct DeleteValue *r);
void ndr_print_DeleteAll(struct ndr_print *ndr, const char *name, int flags, const struct DeleteAll *r);
#endif /* _HEADER_NDR_IWbemContext */
#ifndef _HEADER_NDR_IWbemLevel1Login
#define _HEADER_NDR_IWbemLevel1Login

#include "librpc/ndr/libndr.h"
#define DCERPC_IWBEMLEVEL1LOGIN_UUID "f309ad18-d86a-11d0-a075-00c04fb68820"
#define DCERPC_IWBEMLEVEL1LOGIN_VERSION 0.0
#define DCERPC_IWBEMLEVEL1LOGIN_NAME "IWbemLevel1Login"
#define DCERPC_IWBEMLEVEL1LOGIN_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IWbemLevel1Login;
NTSTATUS dcerpc_server_IWbemLevel1Login_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_ESTABLISHPOSITION (0x03)

#define DCERPC_REQUESTCHALLENGE (0x04)

#define DCERPC_WBEMLOGIN (0x05)

#define DCERPC_NTLMLOGIN (0x06)

#define DCERPC_IWBEMLEVEL1LOGIN_CALL_COUNT (7)
void ndr_print_EstablishPosition(struct ndr_print *ndr, const char *name, int flags, const struct EstablishPosition *r);
void ndr_print_RequestChallenge(struct ndr_print *ndr, const char *name, int flags, const struct RequestChallenge *r);
void ndr_print_WBEMLogin(struct ndr_print *ndr, const char *name, int flags, const struct WBEMLogin *r);
void ndr_print_NTLMLogin(struct ndr_print *ndr, const char *name, int flags, const struct NTLMLogin *r);
#endif /* _HEADER_NDR_IWbemLevel1Login */
#ifndef _HEADER_NDR_IWbemWCOSmartEnum
#define _HEADER_NDR_IWbemWCOSmartEnum

#include "librpc/ndr/libndr.h"
#define DCERPC_IWBEMWCOSMARTENUM_UUID "423ec01e-2e35-11d2-b604-00104b703efd"
#define DCERPC_IWBEMWCOSMARTENUM_VERSION 0.0
#define DCERPC_IWBEMWCOSMARTENUM_NAME "IWbemWCOSmartEnum"
#define DCERPC_IWBEMWCOSMARTENUM_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IWbemWCOSmartEnum;
NTSTATUS dcerpc_server_IWbemWCOSmartEnum_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_IWBEMWCOSMARTENUM_NEXT (0x03)

#define DCERPC_IWBEMWCOSMARTENUM_CALL_COUNT (4)
void ndr_print_IWbemWCOSmartEnum_Next(struct ndr_print *ndr, const char *name, int flags, const struct IWbemWCOSmartEnum_Next *r);
#endif /* _HEADER_NDR_IWbemWCOSmartEnum */
#ifndef _HEADER_NDR_IWbemFetchSmartEnum
#define _HEADER_NDR_IWbemFetchSmartEnum

#include "librpc/ndr/libndr.h"
#define DCERPC_IWBEMFETCHSMARTENUM_UUID "1c1c45ee-4395-11d2-b60b-00104b703efd"
#define DCERPC_IWBEMFETCHSMARTENUM_VERSION 0.0
#define DCERPC_IWBEMFETCHSMARTENUM_NAME "IWbemFetchSmartEnum"
#define DCERPC_IWBEMFETCHSMARTENUM_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IWbemFetchSmartEnum;
NTSTATUS dcerpc_server_IWbemFetchSmartEnum_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_FETCH (0x03)

#define DCERPC_TEST (0x04)

#define DCERPC_IWBEMFETCHSMARTENUM_CALL_COUNT (5)
void ndr_print_Fetch(struct ndr_print *ndr, const char *name, int flags, const struct Fetch *r);
void ndr_print_Test(struct ndr_print *ndr, const char *name, int flags, const struct Test *r);
#endif /* _HEADER_NDR_IWbemFetchSmartEnum */
#ifndef _HEADER_NDR_IWbemCallResult
#define _HEADER_NDR_IWbemCallResult

#include "librpc/ndr/libndr.h"
#define DCERPC_IWBEMCALLRESULT_UUID "44aca675-e8fc-11d0-a07c-00c04fb68820"
#define DCERPC_IWBEMCALLRESULT_VERSION 0.0
#define DCERPC_IWBEMCALLRESULT_NAME "IWbemCallResult"
#define DCERPC_IWBEMCALLRESULT_HELPSTRING NULL
extern const struct dcerpc_interface_table dcerpc_table_IWbemCallResult;
NTSTATUS dcerpc_server_IWbemCallResult_init(void);
#define DCERPC_QUERYINTERFACE (0x00)

#define DCERPC_ADDREF (0x01)

#define DCERPC_RELEASE (0x02)

#define DCERPC_GETRESULTOBJECT (0x03)

#define DCERPC_GETRESULTSTRING (0x04)

#define DCERPC_GETRESULTSERVICES (0x05)

#define DCERPC_GETCALLSTATUS (0x06)

#define DCERPC_IWBEMCALLRESULT_CALL_COUNT (7)
void ndr_print_GetResultObject(struct ndr_print *ndr, const char *name, int flags, const struct GetResultObject *r);
void ndr_print_GetResultString(struct ndr_print *ndr, const char *name, int flags, const struct GetResultString *r);
void ndr_print_GetResultServices(struct ndr_print *ndr, const char *name, int flags, const struct GetResultServices *r);
void ndr_print_GetCallStatus(struct ndr_print *ndr, const char *name, int flags, const struct GetCallStatus *r);
#endif /* _HEADER_NDR_IWbemCallResult */
