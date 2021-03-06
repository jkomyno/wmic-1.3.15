
/* Automatically generated by tables.pl. DO NOT EDIT */

#include "includes.h"
#include "librpc/rpc/dcerpc.h"
#include "librpc/rpc/dcerpc_table.h"
#include "librpc/gen_ndr/ndr_atsvc.h"
#include "librpc/gen_ndr/ndr_audiosrv.h"
#include "librpc/gen_ndr/ndr_browser.h"
#include "librpc/gen_ndr/ndr_dbgidl.h"
#include "librpc/gen_ndr/ndr_dcom.h"
#include "librpc/gen_ndr/ndr_dfs.h"
#include "librpc/gen_ndr/ndr_dnsserver.h"
#include "librpc/gen_ndr/ndr_drsblobs.h"
#include "librpc/gen_ndr/ndr_drsuapi.h"
#include "librpc/gen_ndr/ndr_dsbackup.h"
#include "librpc/gen_ndr/ndr_dssetup.h"
#include "librpc/gen_ndr/ndr_echo.h"
#include "librpc/gen_ndr/ndr_efs.h"
#include "librpc/gen_ndr/ndr_epmapper.h"
#include "librpc/gen_ndr/ndr_eventlog.h"
#include "librpc/gen_ndr/ndr_frsapi.h"
#include "librpc/gen_ndr/ndr_frsrpc.h"
#include "librpc/gen_ndr/ndr_initshutdown.h"
#include "librpc/gen_ndr/ndr_irpc.h"
#include "librpc/gen_ndr/ndr_keysvc.h"
#include "librpc/gen_ndr/ndr_krb5pac.h"
#include "librpc/gen_ndr/ndr_lsa.h"
#include "librpc/gen_ndr/ndr_mgmt.h"
#include "librpc/gen_ndr/ndr_msgsvc.h"
#include "librpc/gen_ndr/ndr_netlogon.h"
#include "librpc/gen_ndr/ndr_nfs4acl.h"
#include "librpc/gen_ndr/ndr_ntsvcs.h"
#include "librpc/gen_ndr/ndr_oxidresolver.h"
#include "librpc/gen_ndr/ndr_policyagent.h"
#include "librpc/gen_ndr/ndr_protected_storage.h"
#include "librpc/gen_ndr/ndr_remact.h"
#include "librpc/gen_ndr/ndr_rot.h"
#include "librpc/gen_ndr/ndr_samr.h"
#include "librpc/gen_ndr/ndr_scerpc.h"
#include "librpc/gen_ndr/ndr_spoolss.h"
#include "librpc/gen_ndr/ndr_srvsvc.h"
#include "librpc/gen_ndr/ndr_svcctl.h"
#include "librpc/gen_ndr/ndr_trkwks.h"
#include "librpc/gen_ndr/ndr_unixinfo.h"
#include "librpc/gen_ndr/ndr_w32time.h"
#include "librpc/gen_ndr/ndr_winbind.h"
#include "librpc/gen_ndr/ndr_winreg.h"
#include "librpc/gen_ndr/ndr_wins.h"
#include "librpc/gen_ndr/ndr_winstation.h"
#include "librpc/gen_ndr/ndr_wkssvc.h"
#include "librpc/gen_ndr/ndr_wzcsvc.h"

NTSTATUS dcerpc_register_builtin_interfaces(void)
{
	NTSTATUS status;

	status = librpc_register_interface(&dcerpc_table_atsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_audiosrv);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_browser);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_dbgidl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_dcom_Unknown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IUnknown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IClassFactory);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IRemUnknown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IClassActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_ISCMLocalActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IMachineLocalActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_ILocalObjectExporter);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_ISystemActivator);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IRemUnknown2);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IDispatch);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IMarshal);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_ICoffeeMachine);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IStream);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IWbemClassObject);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IWbemServices);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IEnumWbemClassObject);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IWbemContext);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IWbemLevel1Login);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IWbemWCOSmartEnum);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IWbemFetchSmartEnum);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IWbemCallResult);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_netdfs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_dnsserver);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_drsblobs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_drsuapi);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_ad_backup);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_ad_restore);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_dssetup);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_rpcecho);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_efs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_epmapper);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_eventlog);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_frsapi);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_frsrpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_initshutdown);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_irpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_keysvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_krb5pac);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_lsarpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_mgmt);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_msgsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_msgsvcsend);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_netlogon);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_nfs4acl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_ntsvcs);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IOXIDResolver);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_policyagent);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_protected_storage);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_IRemoteActivation);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_rot);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_samr);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_scerpc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_spoolss);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_srvsvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_svcctl);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_trkwks);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_unixinfo);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_w32time);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_winbind);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_winreg);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_WinsPipe);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_winstation);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_wkssvc);
	if (NT_STATUS_IS_ERR(status)) return status;

	status = librpc_register_interface(&dcerpc_table_wzcsvc);
	if (NT_STATUS_IS_ERR(status)) return status;


	
	return NT_STATUS_OK;
}
