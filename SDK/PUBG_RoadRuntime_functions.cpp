// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.28) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RoadRuntime.CrossActor.UpdateSideMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrossActor::UpdateSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideMesh");

	ACrossActor_UpdateSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.UpdateSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrossActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideActor");

	ACrossActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrossActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideMesh");

	ACrossActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ACrossActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideActor");

	ACrossActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.DestroySideObjects
// (Final, Native, Public)

void ACrossActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.DestroySideObjects");

	ACrossActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSplineMesh
// (Final, Native, Public)
// Parameters:
// int                            MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::UpdateSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSplineMesh");

	ARoadActor_UpdateSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideMeshes
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::UpdateSideMeshes(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideMeshes");

	ARoadActor_UpdateSideMeshes_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideActor");

	ARoadActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSegment
// (Final, Native, Public)
// Parameters:
// int                            SegmentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineMeshAxis>   InAxis                         (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSegment");

	ARoadActor_UpdateSegment_Params params;
	params.SegmentIndex = SegmentIndex;
	params.SplineComponent = SplineComponent;
	params.StaticMesh = StaticMesh;
	params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideMesh");

	ARoadActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideActor");

	ARoadActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushCurbsMeshes
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             InStartPrototype               (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             InEndPrototype                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InStartEnable                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InEndEnable                    (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::PushCurbsMeshes(class UStaticMesh* InPrototype, class UStaticMesh* InStartPrototype, class UStaticMesh* InEndPrototype, const struct FVector& MeshRelativeLocation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool InStartEnable, bool InEndEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushCurbsMeshes");

	ARoadActor_PushCurbsMeshes_Params params;
	params.InPrototype = InPrototype;
	params.InStartPrototype = InStartPrototype;
	params.InEndPrototype = InEndPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.InStartEnable = InStartEnable;
	params.InEndEnable = InEndEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideObjects
// (Final, Native, Public)

void ARoadActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideObjects");

	ARoadActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideCurbs
// (Final, Native, Public)

void ARoadActor::DestroySideCurbs()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideCurbs");

	ARoadActor_DestroySideCurbs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ClearSplineMeshes
// (Final, Native, Public)

void ARoadActor::ClearSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ClearSplineMeshes");

	ARoadActor_ClearSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ApproxLength
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FInterpCurveVector      SplineInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ApproxSections                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ARoadActor::STATIC_ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ApproxLength");

	ARoadActor_ApproxLength_Params params;
	params.SplineInfo = SplineInfo;
	params.Start = Start;
	params.End = End;
	params.ApproxSections = ApproxSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoadRuntime.RoadActor.AddSplineMesh
// (Final, Native, Public)
// Parameters:
// int                            MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ARoadActor::AddSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.AddSplineMesh");

	ARoadActor_AddSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
