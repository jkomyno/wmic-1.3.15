#include "librpc/rpc/dcerpc.h"
#include "librpc/gen_ndr/spoolss.h"
#ifndef _HEADER_RPC_spoolss
#define _HEADER_RPC_spoolss

extern const struct dcerpc_interface_table dcerpc_table_spoolss;

struct rpc_request *dcerpc_spoolss_EnumPrinters_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinters *r);
NTSTATUS dcerpc_spoolss_EnumPrinters(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinters *r);

struct rpc_request *dcerpc_spoolss_OpenPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_OpenPrinter *r);
NTSTATUS dcerpc_spoolss_OpenPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_OpenPrinter *r);

struct rpc_request *dcerpc_spoolss_SetJob_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetJob *r);
NTSTATUS dcerpc_spoolss_SetJob(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetJob *r);

struct rpc_request *dcerpc_spoolss_GetJob_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetJob *r);
NTSTATUS dcerpc_spoolss_GetJob(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetJob *r);

struct rpc_request *dcerpc_spoolss_EnumJobs_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumJobs *r);
NTSTATUS dcerpc_spoolss_EnumJobs(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumJobs *r);

struct rpc_request *dcerpc_spoolss_AddPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinter *r);
NTSTATUS dcerpc_spoolss_AddPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinter *r);

struct rpc_request *dcerpc_spoolss_DeletePrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinter *r);
NTSTATUS dcerpc_spoolss_DeletePrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinter *r);

struct rpc_request *dcerpc_spoolss_SetPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetPrinter *r);
NTSTATUS dcerpc_spoolss_SetPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetPrinter *r);

struct rpc_request *dcerpc_spoolss_GetPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinter *r);
NTSTATUS dcerpc_spoolss_GetPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinter *r);

struct rpc_request *dcerpc_spoolss_AddPrinterDriver_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterDriver *r);
NTSTATUS dcerpc_spoolss_AddPrinterDriver(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterDriver *r);

struct rpc_request *dcerpc_spoolss_EnumPrinterDrivers_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterDrivers *r);
NTSTATUS dcerpc_spoolss_EnumPrinterDrivers(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterDrivers *r);

struct rpc_request *dcerpc_spoolss_GetPrinterDriver_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDriver *r);
NTSTATUS dcerpc_spoolss_GetPrinterDriver(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDriver *r);

struct rpc_request *dcerpc_spoolss_GetPrinterDriverDirectory_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDriverDirectory *r);
NTSTATUS dcerpc_spoolss_GetPrinterDriverDirectory(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDriverDirectory *r);

struct rpc_request *dcerpc_spoolss_DeletePrinterDriver_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterDriver *r);
NTSTATUS dcerpc_spoolss_DeletePrinterDriver(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterDriver *r);

struct rpc_request *dcerpc_spoolss_AddPrintProcessor_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrintProcessor *r);
NTSTATUS dcerpc_spoolss_AddPrintProcessor(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrintProcessor *r);

struct rpc_request *dcerpc_spoolss_EnumPrintProcessors_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrintProcessors *r);
NTSTATUS dcerpc_spoolss_EnumPrintProcessors(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrintProcessors *r);

struct rpc_request *dcerpc_spoolss_GetPrintProcessorDirectory_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrintProcessorDirectory *r);
NTSTATUS dcerpc_spoolss_GetPrintProcessorDirectory(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrintProcessorDirectory *r);

struct rpc_request *dcerpc_spoolss_StartDocPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_StartDocPrinter *r);
NTSTATUS dcerpc_spoolss_StartDocPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_StartDocPrinter *r);

struct rpc_request *dcerpc_spoolss_StartPagePrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_StartPagePrinter *r);
NTSTATUS dcerpc_spoolss_StartPagePrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_StartPagePrinter *r);

struct rpc_request *dcerpc_spoolss_WritePrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_WritePrinter *r);
NTSTATUS dcerpc_spoolss_WritePrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_WritePrinter *r);

struct rpc_request *dcerpc_spoolss_EndPagePrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EndPagePrinter *r);
NTSTATUS dcerpc_spoolss_EndPagePrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EndPagePrinter *r);

struct rpc_request *dcerpc_spoolss_AbortPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AbortPrinter *r);
NTSTATUS dcerpc_spoolss_AbortPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AbortPrinter *r);

struct rpc_request *dcerpc_spoolss_ReadPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ReadPrinter *r);
NTSTATUS dcerpc_spoolss_ReadPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ReadPrinter *r);

struct rpc_request *dcerpc_spoolss_EndDocPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EndDocPrinter *r);
NTSTATUS dcerpc_spoolss_EndDocPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EndDocPrinter *r);

struct rpc_request *dcerpc_spoolss_AddJob_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddJob *r);
NTSTATUS dcerpc_spoolss_AddJob(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddJob *r);

struct rpc_request *dcerpc_spoolss_ScheduleJob_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ScheduleJob *r);
NTSTATUS dcerpc_spoolss_ScheduleJob(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ScheduleJob *r);

struct rpc_request *dcerpc_spoolss_GetPrinterData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterData *r);
NTSTATUS dcerpc_spoolss_GetPrinterData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterData *r);

struct rpc_request *dcerpc_spoolss_SetPrinterData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetPrinterData *r);
NTSTATUS dcerpc_spoolss_SetPrinterData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetPrinterData *r);

struct rpc_request *dcerpc_spoolss_WaitForPrinterChange_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_WaitForPrinterChange *r);
NTSTATUS dcerpc_spoolss_WaitForPrinterChange(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_WaitForPrinterChange *r);

struct rpc_request *dcerpc_spoolss_ClosePrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ClosePrinter *r);
NTSTATUS dcerpc_spoolss_ClosePrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ClosePrinter *r);

struct rpc_request *dcerpc_spoolss_AddForm_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddForm *r);
NTSTATUS dcerpc_spoolss_AddForm(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddForm *r);

struct rpc_request *dcerpc_spoolss_DeleteForm_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeleteForm *r);
NTSTATUS dcerpc_spoolss_DeleteForm(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeleteForm *r);

struct rpc_request *dcerpc_spoolss_GetForm_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetForm *r);
NTSTATUS dcerpc_spoolss_GetForm(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetForm *r);

struct rpc_request *dcerpc_spoolss_SetForm_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetForm *r);
NTSTATUS dcerpc_spoolss_SetForm(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetForm *r);

struct rpc_request *dcerpc_spoolss_EnumForms_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumForms *r);
NTSTATUS dcerpc_spoolss_EnumForms(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumForms *r);

struct rpc_request *dcerpc_spoolss_EnumPorts_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPorts *r);
NTSTATUS dcerpc_spoolss_EnumPorts(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPorts *r);

struct rpc_request *dcerpc_spoolss_EnumMonitors_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumMonitors *r);
NTSTATUS dcerpc_spoolss_EnumMonitors(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumMonitors *r);

struct rpc_request *dcerpc_spoolss_AddPort_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPort *r);
NTSTATUS dcerpc_spoolss_AddPort(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPort *r);

struct rpc_request *dcerpc_spoolss_ConfigurePort_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ConfigurePort *r);
NTSTATUS dcerpc_spoolss_ConfigurePort(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ConfigurePort *r);

struct rpc_request *dcerpc_spoolss_DeletePort_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePort *r);
NTSTATUS dcerpc_spoolss_DeletePort(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePort *r);

struct rpc_request *dcerpc_spoolss_CreatePrinterIC_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_CreatePrinterIC *r);
NTSTATUS dcerpc_spoolss_CreatePrinterIC(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_CreatePrinterIC *r);

struct rpc_request *dcerpc_spoolss_PlayGDIScriptOnPrinterIC_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_PlayGDIScriptOnPrinterIC *r);
NTSTATUS dcerpc_spoolss_PlayGDIScriptOnPrinterIC(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_PlayGDIScriptOnPrinterIC *r);

struct rpc_request *dcerpc_spoolss_DeletePrinterIC_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterIC *r);
NTSTATUS dcerpc_spoolss_DeletePrinterIC(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterIC *r);

struct rpc_request *dcerpc_spoolss_AddPrinterConnection_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterConnection *r);
NTSTATUS dcerpc_spoolss_AddPrinterConnection(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterConnection *r);

struct rpc_request *dcerpc_spoolss_DeletePrinterConnection_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterConnection *r);
NTSTATUS dcerpc_spoolss_DeletePrinterConnection(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterConnection *r);

struct rpc_request *dcerpc_spoolss_PrinterMessageBox_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_PrinterMessageBox *r);
NTSTATUS dcerpc_spoolss_PrinterMessageBox(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_PrinterMessageBox *r);

struct rpc_request *dcerpc_spoolss_AddMonitor_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddMonitor *r);
NTSTATUS dcerpc_spoolss_AddMonitor(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddMonitor *r);

struct rpc_request *dcerpc_spoolss_DeleteMonitor_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeleteMonitor *r);
NTSTATUS dcerpc_spoolss_DeleteMonitor(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeleteMonitor *r);

struct rpc_request *dcerpc_spoolss_DeletePrintProcessor_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrintProcessor *r);
NTSTATUS dcerpc_spoolss_DeletePrintProcessor(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrintProcessor *r);

struct rpc_request *dcerpc_spoolss_AddPrintProvidor_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrintProvidor *r);
NTSTATUS dcerpc_spoolss_AddPrintProvidor(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrintProvidor *r);

struct rpc_request *dcerpc_spoolss_DeletePrintProvidor_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrintProvidor *r);
NTSTATUS dcerpc_spoolss_DeletePrintProvidor(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrintProvidor *r);

struct rpc_request *dcerpc_spoolss_EnumPrintProcDataTypes_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrintProcDataTypes *r);
NTSTATUS dcerpc_spoolss_EnumPrintProcDataTypes(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrintProcDataTypes *r);

struct rpc_request *dcerpc_spoolss_ResetPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ResetPrinter *r);
NTSTATUS dcerpc_spoolss_ResetPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ResetPrinter *r);

struct rpc_request *dcerpc_spoolss_GetPrinterDriver2_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDriver2 *r);
NTSTATUS dcerpc_spoolss_GetPrinterDriver2(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDriver2 *r);

struct rpc_request *dcerpc_spoolss_FindFirstPrinterChangeNotification_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_FindFirstPrinterChangeNotification *r);
NTSTATUS dcerpc_spoolss_FindFirstPrinterChangeNotification(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_FindFirstPrinterChangeNotification *r);

struct rpc_request *dcerpc_spoolss_FindNextPrinterChangeNotification_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_FindNextPrinterChangeNotification *r);
NTSTATUS dcerpc_spoolss_FindNextPrinterChangeNotification(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_FindNextPrinterChangeNotification *r);

struct rpc_request *dcerpc_spoolss_FindClosePrinterNotify_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_FindClosePrinterNotify *r);
NTSTATUS dcerpc_spoolss_FindClosePrinterNotify(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_FindClosePrinterNotify *r);

struct rpc_request *dcerpc_spoolss_RouterFindFirstPrinterChangeNotificationOld_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterFindFirstPrinterChangeNotificationOld *r);
NTSTATUS dcerpc_spoolss_RouterFindFirstPrinterChangeNotificationOld(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterFindFirstPrinterChangeNotificationOld *r);

struct rpc_request *dcerpc_spoolss_ReplyOpenPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ReplyOpenPrinter *r);
NTSTATUS dcerpc_spoolss_ReplyOpenPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ReplyOpenPrinter *r);

struct rpc_request *dcerpc_spoolss_RouterReplyPrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterReplyPrinter *r);
NTSTATUS dcerpc_spoolss_RouterReplyPrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterReplyPrinter *r);

struct rpc_request *dcerpc_spoolss_ReplyClosePrinter_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ReplyClosePrinter *r);
NTSTATUS dcerpc_spoolss_ReplyClosePrinter(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ReplyClosePrinter *r);

struct rpc_request *dcerpc_spoolss_AddPortEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPortEx *r);
NTSTATUS dcerpc_spoolss_AddPortEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPortEx *r);

struct rpc_request *dcerpc_spoolss_RouterFindFirstPrinterChangeNotification_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterFindFirstPrinterChangeNotification *r);
NTSTATUS dcerpc_spoolss_RouterFindFirstPrinterChangeNotification(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterFindFirstPrinterChangeNotification *r);

struct rpc_request *dcerpc_spoolss_SpoolerInit_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SpoolerInit *r);
NTSTATUS dcerpc_spoolss_SpoolerInit(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SpoolerInit *r);

struct rpc_request *dcerpc_spoolss_ResetPrinterEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ResetPrinterEx *r);
NTSTATUS dcerpc_spoolss_ResetPrinterEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_ResetPrinterEx *r);

struct rpc_request *dcerpc_spoolss_RemoteFindFirstPrinterChangeNotifyEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RemoteFindFirstPrinterChangeNotifyEx *r);
NTSTATUS dcerpc_spoolss_RemoteFindFirstPrinterChangeNotifyEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RemoteFindFirstPrinterChangeNotifyEx *r);

struct rpc_request *dcerpc_spoolss_RouterRefreshPrinterChangeNotification_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterRefreshPrinterChangeNotification *r);
NTSTATUS dcerpc_spoolss_RouterRefreshPrinterChangeNotification(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RouterRefreshPrinterChangeNotification *r);

struct rpc_request *dcerpc_spoolss_RemoteFindNextPrinterChangeNotifyEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RemoteFindNextPrinterChangeNotifyEx *r);
NTSTATUS dcerpc_spoolss_RemoteFindNextPrinterChangeNotifyEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_RemoteFindNextPrinterChangeNotifyEx *r);

struct rpc_request *dcerpc_spoolss_44_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_44 *r);
NTSTATUS dcerpc_spoolss_44(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_44 *r);

struct rpc_request *dcerpc_spoolss_OpenPrinterEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_OpenPrinterEx *r);
NTSTATUS dcerpc_spoolss_OpenPrinterEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_OpenPrinterEx *r);

struct rpc_request *dcerpc_spoolss_AddPrinterEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterEx *r);
NTSTATUS dcerpc_spoolss_AddPrinterEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterEx *r);

struct rpc_request *dcerpc_spoolss_47_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_47 *r);
NTSTATUS dcerpc_spoolss_47(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_47 *r);

struct rpc_request *dcerpc_spoolss_EnumPrinterData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterData *r);
NTSTATUS dcerpc_spoolss_EnumPrinterData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterData *r);

struct rpc_request *dcerpc_spoolss_DeletePrinterData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterData *r);
NTSTATUS dcerpc_spoolss_DeletePrinterData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterData *r);

struct rpc_request *dcerpc_spoolss_4a_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_4a *r);
NTSTATUS dcerpc_spoolss_4a(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_4a *r);

struct rpc_request *dcerpc_spoolss_4b_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_4b *r);
NTSTATUS dcerpc_spoolss_4b(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_4b *r);

struct rpc_request *dcerpc_spoolss_4c_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_4c *r);
NTSTATUS dcerpc_spoolss_4c(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_4c *r);

struct rpc_request *dcerpc_spoolss_SetPrinterDataEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetPrinterDataEx *r);
NTSTATUS dcerpc_spoolss_SetPrinterDataEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_SetPrinterDataEx *r);

struct rpc_request *dcerpc_spoolss_GetPrinterDataEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDataEx *r);
NTSTATUS dcerpc_spoolss_GetPrinterDataEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_GetPrinterDataEx *r);

struct rpc_request *dcerpc_spoolss_EnumPrinterDataEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterDataEx *r);
NTSTATUS dcerpc_spoolss_EnumPrinterDataEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterDataEx *r);

struct rpc_request *dcerpc_spoolss_EnumPrinterKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterKey *r);
NTSTATUS dcerpc_spoolss_EnumPrinterKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_EnumPrinterKey *r);

struct rpc_request *dcerpc_spoolss_DeletePrinterDataEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterDataEx *r);
NTSTATUS dcerpc_spoolss_DeletePrinterDataEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterDataEx *r);

struct rpc_request *dcerpc_spoolss_DeletePrinterKey_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterKey *r);
NTSTATUS dcerpc_spoolss_DeletePrinterKey(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterKey *r);

struct rpc_request *dcerpc_spoolss_53_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_53 *r);
NTSTATUS dcerpc_spoolss_53(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_53 *r);

struct rpc_request *dcerpc_spoolss_DeletePrinterDriverEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterDriverEx *r);
NTSTATUS dcerpc_spoolss_DeletePrinterDriverEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_DeletePrinterDriverEx *r);

struct rpc_request *dcerpc_spoolss_55_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_55 *r);
NTSTATUS dcerpc_spoolss_55(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_55 *r);

struct rpc_request *dcerpc_spoolss_56_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_56 *r);
NTSTATUS dcerpc_spoolss_56(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_56 *r);

struct rpc_request *dcerpc_spoolss_57_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_57 *r);
NTSTATUS dcerpc_spoolss_57(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_57 *r);

struct rpc_request *dcerpc_spoolss_XcvData_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_XcvData *r);
NTSTATUS dcerpc_spoolss_XcvData(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_XcvData *r);

struct rpc_request *dcerpc_spoolss_AddPrinterDriverEx_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterDriverEx *r);
NTSTATUS dcerpc_spoolss_AddPrinterDriverEx(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_AddPrinterDriverEx *r);

struct rpc_request *dcerpc_spoolss_5a_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5a *r);
NTSTATUS dcerpc_spoolss_5a(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5a *r);

struct rpc_request *dcerpc_spoolss_5b_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5b *r);
NTSTATUS dcerpc_spoolss_5b(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5b *r);

struct rpc_request *dcerpc_spoolss_5c_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5c *r);
NTSTATUS dcerpc_spoolss_5c(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5c *r);

struct rpc_request *dcerpc_spoolss_5d_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5d *r);
NTSTATUS dcerpc_spoolss_5d(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5d *r);

struct rpc_request *dcerpc_spoolss_5e_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5e *r);
NTSTATUS dcerpc_spoolss_5e(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5e *r);

struct rpc_request *dcerpc_spoolss_5f_send(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5f *r);
NTSTATUS dcerpc_spoolss_5f(struct dcerpc_pipe *p, TALLOC_CTX *mem_ctx, struct spoolss_5f *r);
#endif /* _HEADER_RPC_spoolss */
