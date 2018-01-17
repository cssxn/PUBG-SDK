// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.4.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.GetDetailCauseType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EReportDetailCauseType         ReportDetailCause              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDetailReportCauseCheckBoxWidget_C::GetDetailCauseType(EReportDetailCauseType* ReportDetailCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.GetDetailCauseType");

	UDetailReportCauseCheckBoxWidget_C_GetDetailCauseType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReportDetailCause != nullptr)
		*ReportDetailCause = params.ReportDetailCause;
}


// Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.IsChecked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDetailReportCauseCheckBoxWidget_C::IsChecked(bool* bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.IsChecked");

	UDetailReportCauseCheckBoxWidget_C_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSelected != nullptr)
		*bSelected = params.bSelected;
}


// Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.SetDetailCauseData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReportDetailCauseTypeDescription CauseData                      (Parm)

void UDetailReportCauseCheckBoxWidget_C::SetDetailCauseData(const struct FReportDetailCauseTypeDescription& CauseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DetailReportCauseCheckBoxWidget.DetailReportCauseCheckBoxWidget_C.SetDetailCauseData");

	UDetailReportCauseCheckBoxWidget_C_SetDetailCauseData_Params params;
	params.CauseData = CauseData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
