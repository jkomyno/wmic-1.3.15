#include "librpc/gen_ndr/orpc.h"
#include "librpc/gen_ndr/ndr_dcom.h"

struct IUnknown;
struct IClassFactory;
struct IRemUnknown;
struct REMQIRESULT;
struct REMINTERFACEREF;
struct IClassActivator;
struct ISCMLocalActivator;
struct ISystemActivator;
struct IRemUnknown2;
struct IDispatch;
struct REF_ITypeInfo;
struct VARIANT;
struct DISPPARAMS;
struct EXCEPINFO;
struct IMarshal;
struct ICoffeeMachine;
struct IStream;
struct IWbemClassObject;
struct IWbemServices;
struct arr_int8;
struct arr_uint8;
struct arr_int16;
struct arr_uint16;
struct arr_int32;
struct arr_uint32;
struct arr_dlong;
struct arr_udlong;
struct arr_CIMSTRING;
struct arr_WbemClassObject;
struct WbemQualifier;
struct WbemQualifiers;
struct WbemPropertyDesc;
struct WbemProperty;
struct CIMSTRINGS;
struct WbemClass;
struct WbemMethod;
struct WbemMethods;
struct WbemInstance;
struct WbemClassObject;
struct IEnumWbemClassObject;
struct IWbemContext;
struct IWbemLevel1Login;
struct IWbemWCOSmartEnum;
struct WBEMDATA;
struct WBEMDATA4;
struct WBEMDATA3;
struct WBEMDATA2;
struct WBEMDATA1;
struct WBEMDATA0;
struct IWbemFetchSmartEnum;
struct IWbemCallResult;


/* IUnknown */
#define COM_IUNKNOWN_UUID "00000000-0000-0000-C000-000000000046"

struct IUnknown_vtable;

struct IUnknown {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IUnknown_vtable *vtable;
	void *object_data;
};

#define IUNKNOWN_METHODS \
	struct composite_context *(*QueryInterface_send) (struct IUnknown *d, TALLOC_CTX *mem_ctx, struct GUID *iid);\
	struct composite_context *(*AddRef_send) (struct IUnknown *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*Release_send) (struct IUnknown *d, TALLOC_CTX *mem_ctx);\

struct IUnknown_vtable {
	struct GUID iid;
	IUNKNOWN_METHODS
};

WERROR IUnknown_QueryInterface(struct IUnknown *interface, TALLOC_CTX *mem_ctx, struct GUID *iid, struct IUnknown **data);
#define IUnknown_QueryInterface_send(interface, mem_ctx, iid) ((interface)->vtable->QueryInterface_send(interface, mem_ctx, iid))
WERROR IUnknown_QueryInterface_recv(struct composite_context *c, struct IUnknown **data);

uint32_t IUnknown_AddRef(struct IUnknown *interface, TALLOC_CTX *mem_ctx);
#define IUnknown_AddRef_send(interface, mem_ctx) ((interface)->vtable->AddRef_send(interface, mem_ctx))
uint32_t IUnknown_AddRef_recv(struct composite_context *c);

uint32_t IUnknown_Release(struct IUnknown *interface, TALLOC_CTX *mem_ctx);
#define IUnknown_Release_send(interface, mem_ctx) ((interface)->vtable->Release_send(interface, mem_ctx))
uint32_t IUnknown_Release_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IUnknown_init(void);


/* IClassFactory */
#define COM_ICLASSFACTORY_UUID "00000001-0000-0000-C000-000000000046"

struct IClassFactory_vtable;

struct IClassFactory {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IClassFactory_vtable *vtable;
	void *object_data;
};

#define ICLASSFACTORY_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*CreateInstance_send) (struct IClassFactory *d, TALLOC_CTX *mem_ctx, struct MInterfacePointer *pUnknown, struct GUID *iid);\
	struct composite_context *(*RemoteCreateInstance_send) (struct IClassFactory *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*LockServer_send) (struct IClassFactory *d, TALLOC_CTX *mem_ctx, uint8_t lock);\
	struct composite_context *(*RemoteLockServer_send) (struct IClassFactory *d, TALLOC_CTX *mem_ctx);\

struct IClassFactory_vtable {
	struct GUID iid;
	ICLASSFACTORY_METHODS
};

WERROR IClassFactory_CreateInstance(struct IClassFactory *interface, TALLOC_CTX *mem_ctx, struct MInterfacePointer *pUnknown, struct GUID *iid, struct MInterfacePointer **ppv);
#define IClassFactory_CreateInstance_send(interface, mem_ctx, pUnknown, iid) ((interface)->vtable->CreateInstance_send(interface, mem_ctx, pUnknown, iid))
WERROR IClassFactory_CreateInstance_recv(struct composite_context *c, struct MInterfacePointer **ppv);

WERROR IClassFactory_RemoteCreateInstance(struct IClassFactory *interface, TALLOC_CTX *mem_ctx);
#define IClassFactory_RemoteCreateInstance_send(interface, mem_ctx) ((interface)->vtable->RemoteCreateInstance_send(interface, mem_ctx))
WERROR IClassFactory_RemoteCreateInstance_recv(struct composite_context *c);

WERROR IClassFactory_LockServer(struct IClassFactory *interface, TALLOC_CTX *mem_ctx, uint8_t lock);
#define IClassFactory_LockServer_send(interface, mem_ctx, lock) ((interface)->vtable->LockServer_send(interface, mem_ctx, lock))
WERROR IClassFactory_LockServer_recv(struct composite_context *c);

WERROR IClassFactory_RemoteLockServer(struct IClassFactory *interface, TALLOC_CTX *mem_ctx);
#define IClassFactory_RemoteLockServer_send(interface, mem_ctx) ((interface)->vtable->RemoteLockServer_send(interface, mem_ctx))
WERROR IClassFactory_RemoteLockServer_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IClassFactory_init(void);


/* IRemUnknown */
#define COM_IREMUNKNOWN_UUID "00000131-0000-0000-C000-000000000046"

struct IRemUnknown_vtable;

struct IRemUnknown {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IRemUnknown_vtable *vtable;
	void *object_data;
};

#define IREMUNKNOWN_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*RemQueryInterface_send) (struct IRemUnknown *d, TALLOC_CTX *mem_ctx, struct GUID *ripid, uint32_t cRefs, uint16_t cIids, struct GUID *iids);\
	struct composite_context *(*RemAddRef_send) (struct IRemUnknown *d, TALLOC_CTX *mem_ctx, uint16_t cInterfaceRefs, struct REMINTERFACEREF *InterfaceRefs);\
	struct composite_context *(*RemRelease_send) (struct IRemUnknown *d, TALLOC_CTX *mem_ctx, uint16_t cInterfaceRefs, struct REMINTERFACEREF *InterfaceRefs);\

struct IRemUnknown_vtable {
	struct GUID iid;
	IREMUNKNOWN_METHODS
};

WERROR IRemUnknown_RemQueryInterface(struct IRemUnknown *interface, TALLOC_CTX *mem_ctx, struct GUID *ripid, uint32_t cRefs, uint16_t cIids, struct GUID *iids, struct REMQIRESULT **rqir);
#define IRemUnknown_RemQueryInterface_send(interface, mem_ctx, ripid, cRefs, cIids, iids) ((interface)->vtable->RemQueryInterface_send(interface, mem_ctx, ripid, cRefs, cIids, iids))
WERROR IRemUnknown_RemQueryInterface_recv(struct composite_context *c, struct REMQIRESULT **rqir);

WERROR IRemUnknown_RemAddRef(struct IRemUnknown *interface, TALLOC_CTX *mem_ctx, uint16_t cInterfaceRefs, struct REMINTERFACEREF *InterfaceRefs, WERROR **pResults);
#define IRemUnknown_RemAddRef_send(interface, mem_ctx, cInterfaceRefs, InterfaceRefs) ((interface)->vtable->RemAddRef_send(interface, mem_ctx, cInterfaceRefs, InterfaceRefs))
WERROR IRemUnknown_RemAddRef_recv(struct composite_context *c, WERROR **pResults);

WERROR IRemUnknown_RemRelease(struct IRemUnknown *interface, TALLOC_CTX *mem_ctx, uint16_t cInterfaceRefs, struct REMINTERFACEREF *InterfaceRefs);
#define IRemUnknown_RemRelease_send(interface, mem_ctx, cInterfaceRefs, InterfaceRefs) ((interface)->vtable->RemRelease_send(interface, mem_ctx, cInterfaceRefs, InterfaceRefs))
WERROR IRemUnknown_RemRelease_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IRemUnknown_init(void);


/* IClassActivator */
#define COM_ICLASSACTIVATOR_UUID "00000140-0000-0000-c000-000000000046"

struct IClassActivator_vtable;

struct IClassActivator {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IClassActivator_vtable *vtable;
	void *object_data;
};

#define ICLASSACTIVATOR_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*GetClassObject_send) (struct IClassActivator *d, TALLOC_CTX *mem_ctx, struct GUID clsid, uint32_t context, uint32_t locale, struct GUID iid);\

struct IClassActivator_vtable {
	struct GUID iid;
	ICLASSACTIVATOR_METHODS
};

void IClassActivator_GetClassObject(struct IClassActivator *interface, TALLOC_CTX *mem_ctx, struct GUID clsid, uint32_t context, uint32_t locale, struct GUID iid, struct MInterfacePointer *data);
#define IClassActivator_GetClassObject_send(interface, mem_ctx, clsid, context, locale, iid) ((interface)->vtable->GetClassObject_send(interface, mem_ctx, clsid, context, locale, iid))
void IClassActivator_GetClassObject_recv(struct composite_context *c, struct MInterfacePointer *data);


NTSTATUS dcom_proxy_IClassActivator_init(void);


/* ISCMLocalActivator */
#define COM_ISCMLOCALACTIVATOR_UUID "00000136-0000-0000-c000-000000000046"

struct ISCMLocalActivator_vtable;

struct ISCMLocalActivator {
	struct OBJREF obj;
	struct com_context *ctx;
	struct ISCMLocalActivator_vtable *vtable;
	void *object_data;
};

#define ISCMLOCALACTIVATOR_METHODS \
	ICLASSACTIVATOR_METHODS\
	struct composite_context *(*ISCMLocalActivator_CreateInstance_send) (struct ISCMLocalActivator *d, TALLOC_CTX *mem_ctx);\

struct ISCMLocalActivator_vtable {
	struct GUID iid;
	ISCMLOCALACTIVATOR_METHODS
};

WERROR ISCMLocalActivator_CreateInstance(struct ISCMLocalActivator *interface, TALLOC_CTX *mem_ctx);
#define ISCMLocalActivator_CreateInstance_send(interface, mem_ctx) ((interface)->vtable->ISCMLocalActivator_CreateInstance_send(interface, mem_ctx))
WERROR ISCMLocalActivator_CreateInstance_recv(struct composite_context *c);


NTSTATUS dcom_proxy_ISCMLocalActivator_init(void);


/* ISystemActivator */
#define COM_ISYSTEMACTIVATOR_UUID "000001a0-0000-0000-c000-000000000046"

struct ISystemActivator_vtable;

struct ISystemActivator {
	struct OBJREF obj;
	struct com_context *ctx;
	struct ISystemActivator_vtable *vtable;
	void *object_data;
};

#define ISYSTEMACTIVATOR_METHODS \
	ICLASSACTIVATOR_METHODS\
	struct composite_context *(*ISystemActivatorRemoteCreateInstance_send) (struct ISystemActivator *d, TALLOC_CTX *mem_ctx, uint64_t unknown1, struct MInterfacePointer iface1, uint64_t unknown2);\

struct ISystemActivator_vtable {
	struct GUID iid;
	ISYSTEMACTIVATOR_METHODS
};

WERROR ISystemActivator_ISystemActivatorRemoteCreateInstance(struct ISystemActivator *interface, TALLOC_CTX *mem_ctx, uint64_t unknown1, struct MInterfacePointer iface1, uint64_t unknown2, uint32_t *unknown3, struct MInterfacePointer *iface2);
#define ISystemActivator_ISystemActivatorRemoteCreateInstance_send(interface, mem_ctx, unknown1, iface1, unknown2) ((interface)->vtable->ISystemActivatorRemoteCreateInstance_send(interface, mem_ctx, unknown1, iface1, unknown2))
WERROR ISystemActivator_ISystemActivatorRemoteCreateInstance_recv(struct composite_context *c, uint32_t *unknown3, struct MInterfacePointer *iface2);


NTSTATUS dcom_proxy_ISystemActivator_init(void);


/* IRemUnknown2 */
#define COM_IREMUNKNOWN2_UUID "00000143-0000-0000-C000-000000000046"

struct IRemUnknown2_vtable;

struct IRemUnknown2 {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IRemUnknown2_vtable *vtable;
	void *object_data;
};

#define IREMUNKNOWN2_METHODS \
	IREMUNKNOWN_METHODS\
	struct composite_context *(*RemQueryInterface2_send) (struct IRemUnknown2 *d, TALLOC_CTX *mem_ctx, struct GUID *ripid, uint16_t cIids, struct GUID **iids);\

struct IRemUnknown2_vtable {
	struct GUID iid;
	IREMUNKNOWN2_METHODS
};

WERROR IRemUnknown2_RemQueryInterface2(struct IRemUnknown2 *interface, TALLOC_CTX *mem_ctx, struct GUID *ripid, uint16_t cIids, struct GUID **iids, WERROR **phr, struct MInterfacePointer **ppMIF);
#define IRemUnknown2_RemQueryInterface2_send(interface, mem_ctx, ripid, cIids, iids) ((interface)->vtable->RemQueryInterface2_send(interface, mem_ctx, ripid, cIids, iids))
WERROR IRemUnknown2_RemQueryInterface2_recv(struct composite_context *c, WERROR **phr, struct MInterfacePointer **ppMIF);


NTSTATUS dcom_proxy_IRemUnknown2_init(void);


/* IDispatch */
#define COM_IDISPATCH_UUID "00020400-0000-0000-C000-000000000046"

struct IDispatch_vtable;

struct IDispatch {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IDispatch_vtable *vtable;
	void *object_data;
};

#define IDISPATCH_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*GetTypeInfoCount_send) (struct IDispatch *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*GetTypeInfo_send) (struct IDispatch *d, TALLOC_CTX *mem_ctx, uint16_t iTInfo, uint32_t lcid);\
	struct composite_context *(*GetIDsOfNames_send) (struct IDispatch *d, TALLOC_CTX *mem_ctx, struct GUID *riid, uint16_t cNames, uint32_t lcid);\
	struct composite_context *(*Invoke_send) (struct IDispatch *d, TALLOC_CTX *mem_ctx, uint32_t dispIdMember, struct GUID *riid, uint32_t lcid, uint16_t wFlags, struct DISPPARAMS *pDispParams);\

struct IDispatch_vtable {
	struct GUID iid;
	IDISPATCH_METHODS
};

WERROR IDispatch_GetTypeInfoCount(struct IDispatch *interface, TALLOC_CTX *mem_ctx, uint16_t *pctinfo);
#define IDispatch_GetTypeInfoCount_send(interface, mem_ctx) ((interface)->vtable->GetTypeInfoCount_send(interface, mem_ctx))
WERROR IDispatch_GetTypeInfoCount_recv(struct composite_context *c, uint16_t *pctinfo);

WERROR IDispatch_GetTypeInfo(struct IDispatch *interface, TALLOC_CTX *mem_ctx, uint16_t iTInfo, uint32_t lcid, struct REF_ITypeInfo **ppTInfo);
#define IDispatch_GetTypeInfo_send(interface, mem_ctx, iTInfo, lcid) ((interface)->vtable->GetTypeInfo_send(interface, mem_ctx, iTInfo, lcid))
WERROR IDispatch_GetTypeInfo_recv(struct composite_context *c, struct REF_ITypeInfo **ppTInfo);

WERROR IDispatch_GetIDsOfNames(struct IDispatch *interface, TALLOC_CTX *mem_ctx, struct GUID *riid, uint16_t cNames, uint32_t lcid, uint32_t **rgDispId);
#define IDispatch_GetIDsOfNames_send(interface, mem_ctx, riid, cNames, lcid) ((interface)->vtable->GetIDsOfNames_send(interface, mem_ctx, riid, cNames, lcid))
WERROR IDispatch_GetIDsOfNames_recv(struct composite_context *c, uint32_t **rgDispId);

WERROR IDispatch_Invoke(struct IDispatch *interface, TALLOC_CTX *mem_ctx, uint32_t dispIdMember, struct GUID *riid, uint32_t lcid, uint16_t wFlags, struct DISPPARAMS *pDispParams, struct VARIANT **pVarResult, struct EXCEPINFO **pExcepInfo, uint16_t **puArgErr);
#define IDispatch_Invoke_send(interface, mem_ctx, dispIdMember, riid, lcid, wFlags, pDispParams) ((interface)->vtable->Invoke_send(interface, mem_ctx, dispIdMember, riid, lcid, wFlags, pDispParams))
WERROR IDispatch_Invoke_recv(struct composite_context *c, struct DISPPARAMS *pDispParams, struct VARIANT **pVarResult, struct EXCEPINFO **pExcepInfo, uint16_t **puArgErr);


NTSTATUS dcom_proxy_IDispatch_init(void);


/* IMarshal */
#define COM_IMARSHAL_UUID "00000003-0000-0000-C000-000000000046"

struct IMarshal_vtable;

struct IMarshal {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IMarshal_vtable *vtable;
	void *object_data;
};

#define IMARSHAL_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*MarshalInterface_send) (struct IMarshal *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*UnMarshalInterface_send) (struct IMarshal *d, TALLOC_CTX *mem_ctx);\

struct IMarshal_vtable {
	struct GUID iid;
	IMARSHAL_METHODS
};

WERROR IMarshal_MarshalInterface(struct IMarshal *interface, TALLOC_CTX *mem_ctx);
#define IMarshal_MarshalInterface_send(interface, mem_ctx) ((interface)->vtable->MarshalInterface_send(interface, mem_ctx))
WERROR IMarshal_MarshalInterface_recv(struct composite_context *c);

WERROR IMarshal_UnMarshalInterface(struct IMarshal *interface, TALLOC_CTX *mem_ctx);
#define IMarshal_UnMarshalInterface_send(interface, mem_ctx) ((interface)->vtable->UnMarshalInterface_send(interface, mem_ctx))
WERROR IMarshal_UnMarshalInterface_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IMarshal_init(void);


/* ICoffeeMachine */
#define COM_ICOFFEEMACHINE_UUID DA23F6DB-6F45-466C-9EED-0B65286F2D78

struct ICoffeeMachine_vtable;

struct ICoffeeMachine {
	struct OBJREF obj;
	struct com_context *ctx;
	struct ICoffeeMachine_vtable *vtable;
	void *object_data;
};

#define ICOFFEEMACHINE_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*MakeCoffee_send) (struct ICoffeeMachine *d, TALLOC_CTX *mem_ctx, const char *flavor);\

struct ICoffeeMachine_vtable {
	struct GUID iid;
	ICOFFEEMACHINE_METHODS
};

WERROR ICoffeeMachine_MakeCoffee(struct ICoffeeMachine *interface, TALLOC_CTX *mem_ctx, const char *flavor);
#define ICoffeeMachine_MakeCoffee_send(interface, mem_ctx, flavor) ((interface)->vtable->MakeCoffee_send(interface, mem_ctx, flavor))
WERROR ICoffeeMachine_MakeCoffee_recv(struct composite_context *c);


NTSTATUS dcom_proxy_ICoffeeMachine_init(void);
#define CLSID_COFFEEMACHINE "db7c21f8-fe33-4c11-aea5-ceb56f076fbb"



/* IStream */
#define COM_ISTREAM_UUID "0000000C-0000-0000-C000-000000000046"

struct IStream_vtable;

struct IStream {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IStream_vtable *vtable;
	void *object_data;
};

#define ISTREAM_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*Read_send) (struct IStream *d, TALLOC_CTX *mem_ctx, uint32_t num_requested, uint32_t *num_readx);\
	struct composite_context *(*Write_send) (struct IStream *d, TALLOC_CTX *mem_ctx, uint8_t *data, uint32_t num_requested);\

struct IStream_vtable {
	struct GUID iid;
	ISTREAM_METHODS
};

WERROR IStream_Read(struct IStream *interface, TALLOC_CTX *mem_ctx, uint8_t *pv, uint32_t num_requested, uint32_t *num_readx, uint32_t *num_read);
#define IStream_Read_send(interface, mem_ctx, num_requested, num_readx) ((interface)->vtable->Read_send(interface, mem_ctx, num_requested, num_readx))
WERROR IStream_Read_recv(struct composite_context *c, uint8_t *pv, uint32_t *num_read);

WERROR IStream_Write(struct IStream *interface, TALLOC_CTX *mem_ctx, uint8_t *data, uint32_t num_requested, uint32_t *num_written);
#define IStream_Write_send(interface, mem_ctx, data, num_requested) ((interface)->vtable->Write_send(interface, mem_ctx, data, num_requested))
WERROR IStream_Write_recv(struct composite_context *c, uint32_t *num_written);


NTSTATUS dcom_proxy_IStream_init(void);
#define CLSID_SIMPLE "5e9ddec7-5767-11cf-beab-00aa006c3606"
#define PROGID_SIMPLE "Samba.Simple"

#define CLSID_WBEMLEVEL1LOGIN "8BC3F05E-D86B-11d0-A075-00C04FB68820"



/* IWbemClassObject */
#define COM_IWBEMCLASSOBJECT_UUID "dc12a681-737f-11cf-884d-00aa004b2e24"

struct IWbemClassObject_vtable;

struct IWbemClassObject {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IWbemClassObject_vtable *vtable;
	void *object_data;
};

#define IWBEMCLASSOBJECT_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*Delete_send) (struct IWbemClassObject *d, TALLOC_CTX *mem_ctx, const char *wszName);\

struct IWbemClassObject_vtable {
	struct GUID iid;
	IWBEMCLASSOBJECT_METHODS
};

WERROR IWbemClassObject_Delete(struct IWbemClassObject *interface, TALLOC_CTX *mem_ctx, const char *wszName);
#define IWbemClassObject_Delete_send(interface, mem_ctx, wszName) ((interface)->vtable->Delete_send(interface, mem_ctx, wszName))
WERROR IWbemClassObject_Delete_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IWbemClassObject_init(void);


/* IWbemServices */
#define COM_IWBEMSERVICES_UUID "9556dc99-828c-11cf-a37e-00aa003240c7"

struct IWbemServices_vtable;

struct IWbemServices {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IWbemServices_vtable *vtable;
	void *object_data;
};

#define IWBEMSERVICES_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*OpenNamespace_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*CancelAsyncCall_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*QueryObjectSink_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*GetObject_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx, BSTR strObjectPath, int32_t lFlags, struct IWbemContext *pCtx, struct IWbemClassObject **ppObject, struct IWbemCallResult **ppCallResult);\
	struct composite_context *(*GetObjectAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*PutClass_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*PutClassAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*DeleteClass_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*DeleteClassAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*CreateClassEnum_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*CreateClassEnumAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*PutInstance_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*PutInstanceAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*DeleteInstance_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*DeleteInstanceAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*CreateInstanceEnum_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx, BSTR strFilter, int32_t lFlags, struct IWbemContext *pCtx);\
	struct composite_context *(*CreateInstanceEnumAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*ExecQuery_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx, BSTR strQueryLanguage, BSTR strQuery, int32_t lFlags, struct IWbemContext *pCtx);\
	struct composite_context *(*ExecQueryAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*ExecNotificationQuery_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx, BSTR strQueryLanguage, BSTR strQuery, int32_t lFlags, struct IWbemContext *pCtx);\
	struct composite_context *(*ExecNotificationQueryAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*ExecMethod_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx, BSTR strObjectPath, BSTR strMethodName, int32_t lFlags, struct IWbemContext *pCtx, struct IWbemClassObject *pInParams, struct IWbemClassObject **ppOutParams, struct IWbemCallResult **ppCallResult);\
	struct composite_context *(*ExecMethodAsync_send) (struct IWbemServices *d, TALLOC_CTX *mem_ctx);\

struct IWbemServices_vtable {
	struct GUID iid;
	IWBEMSERVICES_METHODS
};

WERROR IWbemServices_OpenNamespace(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_OpenNamespace_send(interface, mem_ctx) ((interface)->vtable->OpenNamespace_send(interface, mem_ctx))
WERROR IWbemServices_OpenNamespace_recv(struct composite_context *c);

WERROR IWbemServices_CancelAsyncCall(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_CancelAsyncCall_send(interface, mem_ctx) ((interface)->vtable->CancelAsyncCall_send(interface, mem_ctx))
WERROR IWbemServices_CancelAsyncCall_recv(struct composite_context *c);

WERROR IWbemServices_QueryObjectSink(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_QueryObjectSink_send(interface, mem_ctx) ((interface)->vtable->QueryObjectSink_send(interface, mem_ctx))
WERROR IWbemServices_QueryObjectSink_recv(struct composite_context *c);

WERROR IWbemServices_GetObject(struct IWbemServices *interface, TALLOC_CTX *mem_ctx, BSTR strObjectPath, int32_t lFlags, struct IWbemContext *pCtx, struct IWbemClassObject **ppObject, struct IWbemCallResult **ppCallResult);
#define IWbemServices_GetObject_send(interface, mem_ctx, strObjectPath, lFlags, pCtx, ppObject, ppCallResult) ((interface)->vtable->GetObject_send(interface, mem_ctx, strObjectPath, lFlags, pCtx, ppObject, ppCallResult))
WERROR IWbemServices_GetObject_recv(struct composite_context *c, struct IWbemClassObject **ppObject, struct IWbemCallResult **ppCallResult);

WERROR IWbemServices_GetObjectAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_GetObjectAsync_send(interface, mem_ctx) ((interface)->vtable->GetObjectAsync_send(interface, mem_ctx))
WERROR IWbemServices_GetObjectAsync_recv(struct composite_context *c);

WERROR IWbemServices_PutClass(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_PutClass_send(interface, mem_ctx) ((interface)->vtable->PutClass_send(interface, mem_ctx))
WERROR IWbemServices_PutClass_recv(struct composite_context *c);

WERROR IWbemServices_PutClassAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_PutClassAsync_send(interface, mem_ctx) ((interface)->vtable->PutClassAsync_send(interface, mem_ctx))
WERROR IWbemServices_PutClassAsync_recv(struct composite_context *c);

WERROR IWbemServices_DeleteClass(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_DeleteClass_send(interface, mem_ctx) ((interface)->vtable->DeleteClass_send(interface, mem_ctx))
WERROR IWbemServices_DeleteClass_recv(struct composite_context *c);

WERROR IWbemServices_DeleteClassAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_DeleteClassAsync_send(interface, mem_ctx) ((interface)->vtable->DeleteClassAsync_send(interface, mem_ctx))
WERROR IWbemServices_DeleteClassAsync_recv(struct composite_context *c);

WERROR IWbemServices_CreateClassEnum(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_CreateClassEnum_send(interface, mem_ctx) ((interface)->vtable->CreateClassEnum_send(interface, mem_ctx))
WERROR IWbemServices_CreateClassEnum_recv(struct composite_context *c);

WERROR IWbemServices_CreateClassEnumAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_CreateClassEnumAsync_send(interface, mem_ctx) ((interface)->vtable->CreateClassEnumAsync_send(interface, mem_ctx))
WERROR IWbemServices_CreateClassEnumAsync_recv(struct composite_context *c);

WERROR IWbemServices_PutInstance(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_PutInstance_send(interface, mem_ctx) ((interface)->vtable->PutInstance_send(interface, mem_ctx))
WERROR IWbemServices_PutInstance_recv(struct composite_context *c);

WERROR IWbemServices_PutInstanceAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_PutInstanceAsync_send(interface, mem_ctx) ((interface)->vtable->PutInstanceAsync_send(interface, mem_ctx))
WERROR IWbemServices_PutInstanceAsync_recv(struct composite_context *c);

WERROR IWbemServices_DeleteInstance(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_DeleteInstance_send(interface, mem_ctx) ((interface)->vtable->DeleteInstance_send(interface, mem_ctx))
WERROR IWbemServices_DeleteInstance_recv(struct composite_context *c);

WERROR IWbemServices_DeleteInstanceAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_DeleteInstanceAsync_send(interface, mem_ctx) ((interface)->vtable->DeleteInstanceAsync_send(interface, mem_ctx))
WERROR IWbemServices_DeleteInstanceAsync_recv(struct composite_context *c);

WERROR IWbemServices_CreateInstanceEnum(struct IWbemServices *interface, TALLOC_CTX *mem_ctx, BSTR strFilter, int32_t lFlags, struct IWbemContext *pCtx, struct IEnumWbemClassObject **ppEnum);
#define IWbemServices_CreateInstanceEnum_send(interface, mem_ctx, strFilter, lFlags, pCtx) ((interface)->vtable->CreateInstanceEnum_send(interface, mem_ctx, strFilter, lFlags, pCtx))
WERROR IWbemServices_CreateInstanceEnum_recv(struct composite_context *c, struct IEnumWbemClassObject **ppEnum);

WERROR IWbemServices_CreateInstanceEnumAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_CreateInstanceEnumAsync_send(interface, mem_ctx) ((interface)->vtable->CreateInstanceEnumAsync_send(interface, mem_ctx))
WERROR IWbemServices_CreateInstanceEnumAsync_recv(struct composite_context *c);

WERROR IWbemServices_ExecQuery(struct IWbemServices *interface, TALLOC_CTX *mem_ctx, BSTR strQueryLanguage, BSTR strQuery, int32_t lFlags, struct IWbemContext *pCtx, struct IEnumWbemClassObject **ppEnum);
#define IWbemServices_ExecQuery_send(interface, mem_ctx, strQueryLanguage, strQuery, lFlags, pCtx) ((interface)->vtable->ExecQuery_send(interface, mem_ctx, strQueryLanguage, strQuery, lFlags, pCtx))
WERROR IWbemServices_ExecQuery_recv(struct composite_context *c, struct IEnumWbemClassObject **ppEnum);

WERROR IWbemServices_ExecQueryAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_ExecQueryAsync_send(interface, mem_ctx) ((interface)->vtable->ExecQueryAsync_send(interface, mem_ctx))
WERROR IWbemServices_ExecQueryAsync_recv(struct composite_context *c);

WERROR IWbemServices_ExecNotificationQuery(struct IWbemServices *interface, TALLOC_CTX *mem_ctx, BSTR strQueryLanguage, BSTR strQuery, int32_t lFlags, struct IWbemContext *pCtx, struct IEnumWbemClassObject **ppEnum);
#define IWbemServices_ExecNotificationQuery_send(interface, mem_ctx, strQueryLanguage, strQuery, lFlags, pCtx) ((interface)->vtable->ExecNotificationQuery_send(interface, mem_ctx, strQueryLanguage, strQuery, lFlags, pCtx))
WERROR IWbemServices_ExecNotificationQuery_recv(struct composite_context *c, struct IEnumWbemClassObject **ppEnum);

WERROR IWbemServices_ExecNotificationQueryAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_ExecNotificationQueryAsync_send(interface, mem_ctx) ((interface)->vtable->ExecNotificationQueryAsync_send(interface, mem_ctx))
WERROR IWbemServices_ExecNotificationQueryAsync_recv(struct composite_context *c);

WERROR IWbemServices_ExecMethod(struct IWbemServices *interface, TALLOC_CTX *mem_ctx, BSTR strObjectPath, BSTR strMethodName, int32_t lFlags, struct IWbemContext *pCtx, struct IWbemClassObject *pInParams, struct IWbemClassObject **ppOutParams, struct IWbemCallResult **ppCallResult);
#define IWbemServices_ExecMethod_send(interface, mem_ctx, strObjectPath, strMethodName, lFlags, pCtx, pInParams, ppOutParams, ppCallResult) ((interface)->vtable->ExecMethod_send(interface, mem_ctx, strObjectPath, strMethodName, lFlags, pCtx, pInParams, ppOutParams, ppCallResult))
WERROR IWbemServices_ExecMethod_recv(struct composite_context *c, struct IWbemClassObject **ppOutParams, struct IWbemCallResult **ppCallResult);

WERROR IWbemServices_ExecMethodAsync(struct IWbemServices *interface, TALLOC_CTX *mem_ctx);
#define IWbemServices_ExecMethodAsync_send(interface, mem_ctx) ((interface)->vtable->ExecMethodAsync_send(interface, mem_ctx))
WERROR IWbemServices_ExecMethodAsync_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IWbemServices_init(void);


/* IEnumWbemClassObject */
#define COM_IENUMWBEMCLASSOBJECT_UUID 027947e1-d731-11ce-a357-000000000001

struct IEnumWbemClassObject_vtable;

struct IEnumWbemClassObject {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IEnumWbemClassObject_vtable *vtable;
	void *object_data;
};

#define IENUMWBEMCLASSOBJECT_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*Reset_send) (struct IEnumWbemClassObject *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*IEnumWbemClassObject_Next_send) (struct IEnumWbemClassObject *d, TALLOC_CTX *mem_ctx, int32_t lTimeout, uint32_t uCount);\
	struct composite_context *(*NextAsync_send) (struct IEnumWbemClassObject *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*IEnumWbemClassObject_Clone_send) (struct IEnumWbemClassObject *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*Skip_send) (struct IEnumWbemClassObject *d, TALLOC_CTX *mem_ctx);\

struct IEnumWbemClassObject_vtable {
	struct GUID iid;
	IENUMWBEMCLASSOBJECT_METHODS
};

WERROR IEnumWbemClassObject_Reset(struct IEnumWbemClassObject *interface, TALLOC_CTX *mem_ctx);
#define IEnumWbemClassObject_Reset_send(interface, mem_ctx) ((interface)->vtable->Reset_send(interface, mem_ctx))
WERROR IEnumWbemClassObject_Reset_recv(struct composite_context *c);

WERROR IEnumWbemClassObject_Next(struct IEnumWbemClassObject *interface, TALLOC_CTX *mem_ctx, int32_t lTimeout, uint32_t uCount, struct IWbemClassObject **apObjects, uint32_t *puReturned);
#define IEnumWbemClassObject_Next_send(interface, mem_ctx, lTimeout, uCount) ((interface)->vtable->IEnumWbemClassObject_Next_send(interface, mem_ctx, lTimeout, uCount))
WERROR IEnumWbemClassObject_Next_recv(struct composite_context *c, struct IWbemClassObject **apObjects, uint32_t *puReturned);

WERROR IEnumWbemClassObject_NextAsync(struct IEnumWbemClassObject *interface, TALLOC_CTX *mem_ctx);
#define IEnumWbemClassObject_NextAsync_send(interface, mem_ctx) ((interface)->vtable->NextAsync_send(interface, mem_ctx))
WERROR IEnumWbemClassObject_NextAsync_recv(struct composite_context *c);

WERROR IEnumWbemClassObject_Clone(struct IEnumWbemClassObject *interface, TALLOC_CTX *mem_ctx);
#define IEnumWbemClassObject_Clone_send(interface, mem_ctx) ((interface)->vtable->IEnumWbemClassObject_Clone_send(interface, mem_ctx))
WERROR IEnumWbemClassObject_Clone_recv(struct composite_context *c);

WERROR IEnumWbemClassObject_Skip(struct IEnumWbemClassObject *interface, TALLOC_CTX *mem_ctx);
#define IEnumWbemClassObject_Skip_send(interface, mem_ctx) ((interface)->vtable->Skip_send(interface, mem_ctx))
WERROR IEnumWbemClassObject_Skip_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IEnumWbemClassObject_init(void);


/* IWbemContext */
#define COM_IWBEMCONTEXT_UUID "44aca674-e8fc-11d0-a07c-00c04fb68820"

struct IWbemContext_vtable;

struct IWbemContext {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IWbemContext_vtable *vtable;
	void *object_data;
};

#define IWBEMCONTEXT_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*Clone_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*GetNames_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*BeginEnumeration_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx, int32_t lFlags);\
	struct composite_context *(*Next_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*EndEnumeration_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*SetValue_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*GetValue_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*DeleteValue_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*DeleteAll_send) (struct IWbemContext *d, TALLOC_CTX *mem_ctx);\

struct IWbemContext_vtable {
	struct GUID iid;
	IWBEMCONTEXT_METHODS
};

WERROR IWbemContext_Clone(struct IWbemContext *interface, TALLOC_CTX *mem_ctx, struct IWbemContext **ppNewCopy);
#define IWbemContext_Clone_send(interface, mem_ctx) ((interface)->vtable->Clone_send(interface, mem_ctx))
WERROR IWbemContext_Clone_recv(struct composite_context *c, struct IWbemContext **ppNewCopy);

WERROR IWbemContext_GetNames(struct IWbemContext *interface, TALLOC_CTX *mem_ctx);
#define IWbemContext_GetNames_send(interface, mem_ctx) ((interface)->vtable->GetNames_send(interface, mem_ctx))
WERROR IWbemContext_GetNames_recv(struct composite_context *c);

WERROR IWbemContext_BeginEnumeration(struct IWbemContext *interface, TALLOC_CTX *mem_ctx, int32_t lFlags);
#define IWbemContext_BeginEnumeration_send(interface, mem_ctx, lFlags) ((interface)->vtable->BeginEnumeration_send(interface, mem_ctx, lFlags))
WERROR IWbemContext_BeginEnumeration_recv(struct composite_context *c);

WERROR IWbemContext_Next(struct IWbemContext *interface, TALLOC_CTX *mem_ctx);
#define IWbemContext_Next_send(interface, mem_ctx) ((interface)->vtable->Next_send(interface, mem_ctx))
WERROR IWbemContext_Next_recv(struct composite_context *c);

WERROR IWbemContext_EndEnumeration(struct IWbemContext *interface, TALLOC_CTX *mem_ctx);
#define IWbemContext_EndEnumeration_send(interface, mem_ctx) ((interface)->vtable->EndEnumeration_send(interface, mem_ctx))
WERROR IWbemContext_EndEnumeration_recv(struct composite_context *c);

WERROR IWbemContext_SetValue(struct IWbemContext *interface, TALLOC_CTX *mem_ctx);
#define IWbemContext_SetValue_send(interface, mem_ctx) ((interface)->vtable->SetValue_send(interface, mem_ctx))
WERROR IWbemContext_SetValue_recv(struct composite_context *c);

WERROR IWbemContext_GetValue(struct IWbemContext *interface, TALLOC_CTX *mem_ctx);
#define IWbemContext_GetValue_send(interface, mem_ctx) ((interface)->vtable->GetValue_send(interface, mem_ctx))
WERROR IWbemContext_GetValue_recv(struct composite_context *c);

WERROR IWbemContext_DeleteValue(struct IWbemContext *interface, TALLOC_CTX *mem_ctx);
#define IWbemContext_DeleteValue_send(interface, mem_ctx) ((interface)->vtable->DeleteValue_send(interface, mem_ctx))
WERROR IWbemContext_DeleteValue_recv(struct composite_context *c);

WERROR IWbemContext_DeleteAll(struct IWbemContext *interface, TALLOC_CTX *mem_ctx);
#define IWbemContext_DeleteAll_send(interface, mem_ctx) ((interface)->vtable->DeleteAll_send(interface, mem_ctx))
WERROR IWbemContext_DeleteAll_recv(struct composite_context *c);


NTSTATUS dcom_proxy_IWbemContext_init(void);


/* IWbemLevel1Login */
#define COM_IWBEMLEVEL1LOGIN_UUID "F309AD18-D86A-11d0-A075-00C04FB68820"

struct IWbemLevel1Login_vtable;

struct IWbemLevel1Login {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IWbemLevel1Login_vtable *vtable;
	void *object_data;
};

#define IWBEMLEVEL1LOGIN_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*EstablishPosition_send) (struct IWbemLevel1Login *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*RequestChallenge_send) (struct IWbemLevel1Login *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*WBEMLogin_send) (struct IWbemLevel1Login *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*NTLMLogin_send) (struct IWbemLevel1Login *d, TALLOC_CTX *mem_ctx, const char *wszNetworkResource, const char *wszPreferredLocale, int32_t lFlags, struct IWbemContext *pCtx);\

struct IWbemLevel1Login_vtable {
	struct GUID iid;
	IWBEMLEVEL1LOGIN_METHODS
};

WERROR IWbemLevel1Login_EstablishPosition(struct IWbemLevel1Login *interface, TALLOC_CTX *mem_ctx);
#define IWbemLevel1Login_EstablishPosition_send(interface, mem_ctx) ((interface)->vtable->EstablishPosition_send(interface, mem_ctx))
WERROR IWbemLevel1Login_EstablishPosition_recv(struct composite_context *c);

WERROR IWbemLevel1Login_RequestChallenge(struct IWbemLevel1Login *interface, TALLOC_CTX *mem_ctx);
#define IWbemLevel1Login_RequestChallenge_send(interface, mem_ctx) ((interface)->vtable->RequestChallenge_send(interface, mem_ctx))
WERROR IWbemLevel1Login_RequestChallenge_recv(struct composite_context *c);

WERROR IWbemLevel1Login_WBEMLogin(struct IWbemLevel1Login *interface, TALLOC_CTX *mem_ctx);
#define IWbemLevel1Login_WBEMLogin_send(interface, mem_ctx) ((interface)->vtable->WBEMLogin_send(interface, mem_ctx))
WERROR IWbemLevel1Login_WBEMLogin_recv(struct composite_context *c);

WERROR IWbemLevel1Login_NTLMLogin(struct IWbemLevel1Login *interface, TALLOC_CTX *mem_ctx, const char *wszNetworkResource, const char *wszPreferredLocale, int32_t lFlags, struct IWbemContext *pCtx, struct IWbemServices **ppNamespace);
#define IWbemLevel1Login_NTLMLogin_send(interface, mem_ctx, wszNetworkResource, wszPreferredLocale, lFlags, pCtx) ((interface)->vtable->NTLMLogin_send(interface, mem_ctx, wszNetworkResource, wszPreferredLocale, lFlags, pCtx))
WERROR IWbemLevel1Login_NTLMLogin_recv(struct composite_context *c, struct IWbemServices **ppNamespace);


NTSTATUS dcom_proxy_IWbemLevel1Login_init(void);


/* IWbemWCOSmartEnum */
#define COM_IWBEMWCOSMARTENUM_UUID "423ec01e-2e35-11d2-b604-00104b703efd"

struct IWbemWCOSmartEnum_vtable;

struct IWbemWCOSmartEnum {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IWbemWCOSmartEnum_vtable *vtable;
	void *object_data;
};

#define IWBEMWCOSMARTENUM_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*IWbemWCOSmartEnum_Next_send) (struct IWbemWCOSmartEnum *d, TALLOC_CTX *mem_ctx, struct GUID *gEWCO, uint32_t lTimeOut, uint32_t uCount);\

struct IWbemWCOSmartEnum_vtable {
	struct GUID iid;
	IWBEMWCOSMARTENUM_METHODS
};

WERROR IWbemWCOSmartEnum_Next(struct IWbemWCOSmartEnum *interface, TALLOC_CTX *mem_ctx, struct GUID *gEWCO, uint32_t lTimeOut, uint32_t uCount, uint32_t *puReturned, uint32_t *pSize, uint8_t **pData);
#define IWbemWCOSmartEnum_Next_send(interface, mem_ctx, gEWCO, lTimeOut, uCount) ((interface)->vtable->IWbemWCOSmartEnum_Next_send(interface, mem_ctx, gEWCO, lTimeOut, uCount))
WERROR IWbemWCOSmartEnum_Next_recv(struct composite_context *c, uint32_t *puReturned, uint32_t *pSize, uint8_t **pData);


NTSTATUS dcom_proxy_IWbemWCOSmartEnum_init(void);


/* IWbemFetchSmartEnum */
#define COM_IWBEMFETCHSMARTENUM_UUID "1c1c45ee-4395-11d2-b60b-00104b703efd"

struct IWbemFetchSmartEnum_vtable;

struct IWbemFetchSmartEnum {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IWbemFetchSmartEnum_vtable *vtable;
	void *object_data;
};

#define IWBEMFETCHSMARTENUM_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*Fetch_send) (struct IWbemFetchSmartEnum *d, TALLOC_CTX *mem_ctx);\
	struct composite_context *(*Test_send) (struct IWbemFetchSmartEnum *d, TALLOC_CTX *mem_ctx);\

struct IWbemFetchSmartEnum_vtable {
	struct GUID iid;
	IWBEMFETCHSMARTENUM_METHODS
};

WERROR IWbemFetchSmartEnum_Fetch(struct IWbemFetchSmartEnum *interface, TALLOC_CTX *mem_ctx, struct IWbemWCOSmartEnum **ppEnum);
#define IWbemFetchSmartEnum_Fetch_send(interface, mem_ctx) ((interface)->vtable->Fetch_send(interface, mem_ctx))
WERROR IWbemFetchSmartEnum_Fetch_recv(struct composite_context *c, struct IWbemWCOSmartEnum **ppEnum);

WERROR IWbemFetchSmartEnum_Test(struct IWbemFetchSmartEnum *interface, TALLOC_CTX *mem_ctx, struct WbemClassObject **ppEnum);
#define IWbemFetchSmartEnum_Test_send(interface, mem_ctx) ((interface)->vtable->Test_send(interface, mem_ctx))
WERROR IWbemFetchSmartEnum_Test_recv(struct composite_context *c, struct WbemClassObject **ppEnum);


NTSTATUS dcom_proxy_IWbemFetchSmartEnum_init(void);


/* IWbemCallResult */
#define COM_IWBEMCALLRESULT_UUID 44aca675-e8fc-11d0-a07c-00c04fb68820

struct IWbemCallResult_vtable;

struct IWbemCallResult {
	struct OBJREF obj;
	struct com_context *ctx;
	struct IWbemCallResult_vtable *vtable;
	void *object_data;
};

#define IWBEMCALLRESULT_METHODS \
	IUNKNOWN_METHODS\
	struct composite_context *(*GetResultObject_send) (struct IWbemCallResult *d, TALLOC_CTX *mem_ctx, int32_t lTimeout);\
	struct composite_context *(*GetResultString_send) (struct IWbemCallResult *d, TALLOC_CTX *mem_ctx, int32_t lTimeout);\
	struct composite_context *(*GetResultServices_send) (struct IWbemCallResult *d, TALLOC_CTX *mem_ctx, int32_t lTimeout);\
	struct composite_context *(*GetCallStatus_send) (struct IWbemCallResult *d, TALLOC_CTX *mem_ctx, int32_t lTimeout);\

struct IWbemCallResult_vtable {
	struct GUID iid;
	IWBEMCALLRESULT_METHODS
};

WERROR IWbemCallResult_GetResultObject(struct IWbemCallResult *interface, TALLOC_CTX *mem_ctx, int32_t lTimeout, struct IUnknown **ppResultObject);
#define IWbemCallResult_GetResultObject_send(interface, mem_ctx, lTimeout) ((interface)->vtable->GetResultObject_send(interface, mem_ctx, lTimeout))
WERROR IWbemCallResult_GetResultObject_recv(struct composite_context *c, struct IUnknown **ppResultObject);

WERROR IWbemCallResult_GetResultString(struct IWbemCallResult *interface, TALLOC_CTX *mem_ctx, int32_t lTimeout);
#define IWbemCallResult_GetResultString_send(interface, mem_ctx, lTimeout) ((interface)->vtable->GetResultString_send(interface, mem_ctx, lTimeout))
WERROR IWbemCallResult_GetResultString_recv(struct composite_context *c);

WERROR IWbemCallResult_GetResultServices(struct IWbemCallResult *interface, TALLOC_CTX *mem_ctx, int32_t lTimeout, struct IWbemServices **ppServices);
#define IWbemCallResult_GetResultServices_send(interface, mem_ctx, lTimeout) ((interface)->vtable->GetResultServices_send(interface, mem_ctx, lTimeout))
WERROR IWbemCallResult_GetResultServices_recv(struct composite_context *c, struct IWbemServices **ppServices);

WERROR IWbemCallResult_GetCallStatus(struct IWbemCallResult *interface, TALLOC_CTX *mem_ctx, int32_t lTimeout, int32_t *plStatus);
#define IWbemCallResult_GetCallStatus_send(interface, mem_ctx, lTimeout) ((interface)->vtable->GetCallStatus_send(interface, mem_ctx, lTimeout))
WERROR IWbemCallResult_GetCallStatus_recv(struct composite_context *c, int32_t *plStatus);


NTSTATUS dcom_proxy_IWbemCallResult_init(void);
