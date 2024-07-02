// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleSplineFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleSplineFollowingComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZVehicleOnStarted__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVehicleManager_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties();
// End Cross Module References
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetBrakingDistance)
	{
		P_GET_UBOOL(Z_Param_bMaxBraking);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrakingDistance(Z_Param_bMaxBraking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetCurrentSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZSpline**)Z_Param__Result=P_THIS->GetCurrentSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetFullPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASBZSpline*>*)Z_Param__Result=P_THIS->GetFullPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetLastSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZSpline**)Z_Param__Result=P_THIS->GetLastSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetNextSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZSpline**)Z_Param__Result=P_THIS->GetNextSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASBZSpline*>*)Z_Param__Result=P_THIS->GetPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetPathLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPathLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execIsStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStopped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execIsStopping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStopping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_OnBeginStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnBeginStop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_OnPathEndReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnPathEndReached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_OnSplineEndReached)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSplineEndReached_Implementation(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_OnSplineEntered)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_GET_UBOOL(Z_Param_bPathEntered);
		P_GET_UBOOL(Z_Param_bTeleportToPathStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSplineEntered_Implementation(Z_Param_Spline,Z_Param_bPathEntered,Z_Param_bTeleportToPathStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_OnSplineLeft)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnSplineLeft_Implementation(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_OnStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnStarted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_OnStopped)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_OnStopped_Implementation(Z_Param_Spline,Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_PushPath)
	{
		P_GET_TARRAY(ASBZSpline*,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PushPath_Implementation(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_PushPathSpline)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PushPathSpline_Implementation(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_SetAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerCurrentSpeed);
		P_GET_TARRAY(ASBZSpline*,Z_Param_InServerPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InServerTraveledDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAcceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAcceleration_Implementation(Z_Param_ServerCurrentSpeed,Z_Param_InServerPath,Z_Param_InServerTraveledDistance,Z_Param_InAcceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_SetCruisingSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerCurrentSpeed);
		P_GET_TARRAY(ASBZSpline*,Z_Param_InServerPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InServerTraveledDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSpeed);
		P_GET_UBOOL(Z_Param_bForceUpdateTargetSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetCruisingSpeed_Implementation(Z_Param_ServerCurrentSpeed,Z_Param_InServerPath,Z_Param_InServerTraveledDistance,Z_Param_InSpeed,Z_Param_bForceUpdateTargetSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_SetDeceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ServerCurrentSpeed);
		P_GET_TARRAY(ASBZSpline*,Z_Param_InServerPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InServerTraveledDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDeceleration_Implementation(Z_Param_ServerCurrentSpeed,Z_Param_InServerPath,Z_Param_InServerTraveledDistance,Z_Param_InDeceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_SetPath)
	{
		P_GET_TARRAY(ASBZSpline*,Z_Param_InPath);
		P_GET_UBOOL(Z_Param_bTeleportToPathStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPath_Implementation(Z_Param_InPath,Z_Param_bTeleportToPathStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_SetPathSpline)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_InPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPathSpline_Implementation(Z_Param_InPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_Start)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_Start_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execMulticast_StopAtDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_GET_UBOOL(Z_Param_bRequestedByUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopAtDistance_Implementation(Z_Param_Distance,Z_Param_bRequestedByUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execPushPath)
	{
		P_GET_TARRAY_REF(ASBZSpline*,Z_Param_Out_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushPath(Z_Param_Out_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execPushPathSpline)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushPathSpline(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execSetAcceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAcceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAcceleration(Z_Param_InAcceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execSetCruisingSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_GET_UBOOL(Z_Param_bForceUpdateTargetSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCruisingSpeed(Z_Param_NewSpeed,Z_Param_bForceUpdateTargetSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execSetDeceleration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeceleration(Z_Param_InDeceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execSetPath)
	{
		P_GET_TARRAY_REF(ASBZSpline*,Z_Param_Out_Path);
		P_GET_UBOOL(Z_Param_bTeleportToPathStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPath(Z_Param_Out_Path,Z_Param_bTeleportToPathStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execSetPathSpline)
	{
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPathSpline(Z_Param_Spline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVehicleSplineFollowingComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop = FName(TEXT("Multicast_OnBeginStop"));
	void USBZVehicleSplineFollowingComponent::Multicast_OnBeginStop()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop),NULL);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached = FName(TEXT("Multicast_OnPathEndReached"));
	void USBZVehicleSplineFollowingComponent::Multicast_OnPathEndReached()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached),NULL);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached = FName(TEXT("Multicast_OnSplineEndReached"));
	void USBZVehicleSplineFollowingComponent::Multicast_OnSplineEndReached(ASBZSpline* Spline)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEndReached_Parms Parms;
		Parms.Spline=Spline;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered = FName(TEXT("Multicast_OnSplineEntered"));
	void USBZVehicleSplineFollowingComponent::Multicast_OnSplineEntered(ASBZSpline* Spline, bool bPathEntered, bool bTeleportToPathStart)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms Parms;
		Parms.Spline=Spline;
		Parms.bPathEntered=bPathEntered ? true : false;
		Parms.bTeleportToPathStart=bTeleportToPathStart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft = FName(TEXT("Multicast_OnSplineLeft"));
	void USBZVehicleSplineFollowingComponent::Multicast_OnSplineLeft(ASBZSpline* Spline)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineLeft_Parms Parms;
		Parms.Spline=Spline;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_OnStarted = FName(TEXT("Multicast_OnStarted"));
	void USBZVehicleSplineFollowingComponent::Multicast_OnStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_OnStarted),NULL);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_OnStopped = FName(TEXT("Multicast_OnStopped"));
	void USBZVehicleSplineFollowingComponent::Multicast_OnStopped(ASBZSpline* Spline, float Distance)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_OnStopped_Parms Parms;
		Parms.Spline=Spline;
		Parms.Distance=Distance;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_OnStopped),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_PushPath = FName(TEXT("Multicast_PushPath"));
	void USBZVehicleSplineFollowingComponent::Multicast_PushPath(TArray<ASBZSpline*> const& InPath)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_PushPath_Parms Parms;
		Parms.InPath=InPath;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_PushPath),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline = FName(TEXT("Multicast_PushPathSpline"));
	void USBZVehicleSplineFollowingComponent::Multicast_PushPathSpline(ASBZSpline* InPath)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_PushPathSpline_Parms Parms;
		Parms.InPath=InPath;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration = FName(TEXT("Multicast_SetAcceleration"));
	void USBZVehicleSplineFollowingComponent::Multicast_SetAcceleration(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InAcceleration)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_SetAcceleration_Parms Parms;
		Parms.ServerCurrentSpeed=ServerCurrentSpeed;
		Parms.InServerPath=InServerPath;
		Parms.InServerTraveledDistance=InServerTraveledDistance;
		Parms.InAcceleration=InAcceleration;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed = FName(TEXT("Multicast_SetCruisingSpeed"));
	void USBZVehicleSplineFollowingComponent::Multicast_SetCruisingSpeed(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InSpeed, bool bForceUpdateTargetSpeed)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms Parms;
		Parms.ServerCurrentSpeed=ServerCurrentSpeed;
		Parms.InServerPath=InServerPath;
		Parms.InServerTraveledDistance=InServerTraveledDistance;
		Parms.InSpeed=InSpeed;
		Parms.bForceUpdateTargetSpeed=bForceUpdateTargetSpeed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration = FName(TEXT("Multicast_SetDeceleration"));
	void USBZVehicleSplineFollowingComponent::Multicast_SetDeceleration(float ServerCurrentSpeed, TArray<ASBZSpline*> const& InServerPath, float InServerTraveledDistance, float InDeceleration)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_SetDeceleration_Parms Parms;
		Parms.ServerCurrentSpeed=ServerCurrentSpeed;
		Parms.InServerPath=InServerPath;
		Parms.InServerTraveledDistance=InServerTraveledDistance;
		Parms.InDeceleration=InDeceleration;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_SetPath = FName(TEXT("Multicast_SetPath"));
	void USBZVehicleSplineFollowingComponent::Multicast_SetPath(TArray<ASBZSpline*> const& InPath, bool bTeleportToPathStart)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_SetPath_Parms Parms;
		Parms.InPath=InPath;
		Parms.bTeleportToPathStart=bTeleportToPathStart ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_SetPath),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline = FName(TEXT("Multicast_SetPathSpline"));
	void USBZVehicleSplineFollowingComponent::Multicast_SetPathSpline(ASBZSpline* InPath)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_SetPathSpline_Parms Parms;
		Parms.InPath=InPath;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline),&Parms);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_Start = FName(TEXT("Multicast_Start"));
	void USBZVehicleSplineFollowingComponent::Multicast_Start()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_Start),NULL);
	}
	static FName NAME_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance = FName(TEXT("Multicast_StopAtDistance"));
	void USBZVehicleSplineFollowingComponent::Multicast_StopAtDistance(float Distance, bool bRequestedByUser)
	{
		SBZVehicleSplineFollowingComponent_eventMulticast_StopAtDistance_Parms Parms;
		Parms.Distance=Distance;
		Parms.bRequestedByUser=bRequestedByUser ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance),&Parms);
	}
	void USBZVehicleSplineFollowingComponent::StaticRegisterNativesUSBZVehicleSplineFollowingComponent()
	{
		UClass* Class = USBZVehicleSplineFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrakingDistance", &USBZVehicleSplineFollowingComponent::execGetBrakingDistance },
			{ "GetCurrentSpline", &USBZVehicleSplineFollowingComponent::execGetCurrentSpline },
			{ "GetFullPath", &USBZVehicleSplineFollowingComponent::execGetFullPath },
			{ "GetLastSpline", &USBZVehicleSplineFollowingComponent::execGetLastSpline },
			{ "GetNextSpline", &USBZVehicleSplineFollowingComponent::execGetNextSpline },
			{ "GetPath", &USBZVehicleSplineFollowingComponent::execGetPath },
			{ "GetPathLength", &USBZVehicleSplineFollowingComponent::execGetPathLength },
			{ "GetSpeed", &USBZVehicleSplineFollowingComponent::execGetSpeed },
			{ "IsStopped", &USBZVehicleSplineFollowingComponent::execIsStopped },
			{ "IsStopping", &USBZVehicleSplineFollowingComponent::execIsStopping },
			{ "Multicast_OnBeginStop", &USBZVehicleSplineFollowingComponent::execMulticast_OnBeginStop },
			{ "Multicast_OnPathEndReached", &USBZVehicleSplineFollowingComponent::execMulticast_OnPathEndReached },
			{ "Multicast_OnSplineEndReached", &USBZVehicleSplineFollowingComponent::execMulticast_OnSplineEndReached },
			{ "Multicast_OnSplineEntered", &USBZVehicleSplineFollowingComponent::execMulticast_OnSplineEntered },
			{ "Multicast_OnSplineLeft", &USBZVehicleSplineFollowingComponent::execMulticast_OnSplineLeft },
			{ "Multicast_OnStarted", &USBZVehicleSplineFollowingComponent::execMulticast_OnStarted },
			{ "Multicast_OnStopped", &USBZVehicleSplineFollowingComponent::execMulticast_OnStopped },
			{ "Multicast_PushPath", &USBZVehicleSplineFollowingComponent::execMulticast_PushPath },
			{ "Multicast_PushPathSpline", &USBZVehicleSplineFollowingComponent::execMulticast_PushPathSpline },
			{ "Multicast_SetAcceleration", &USBZVehicleSplineFollowingComponent::execMulticast_SetAcceleration },
			{ "Multicast_SetCruisingSpeed", &USBZVehicleSplineFollowingComponent::execMulticast_SetCruisingSpeed },
			{ "Multicast_SetDeceleration", &USBZVehicleSplineFollowingComponent::execMulticast_SetDeceleration },
			{ "Multicast_SetPath", &USBZVehicleSplineFollowingComponent::execMulticast_SetPath },
			{ "Multicast_SetPathSpline", &USBZVehicleSplineFollowingComponent::execMulticast_SetPathSpline },
			{ "Multicast_Start", &USBZVehicleSplineFollowingComponent::execMulticast_Start },
			{ "Multicast_StopAtDistance", &USBZVehicleSplineFollowingComponent::execMulticast_StopAtDistance },
			{ "PushPath", &USBZVehicleSplineFollowingComponent::execPushPath },
			{ "PushPathSpline", &USBZVehicleSplineFollowingComponent::execPushPathSpline },
			{ "SetAcceleration", &USBZVehicleSplineFollowingComponent::execSetAcceleration },
			{ "SetCruisingSpeed", &USBZVehicleSplineFollowingComponent::execSetCruisingSpeed },
			{ "SetDeceleration", &USBZVehicleSplineFollowingComponent::execSetDeceleration },
			{ "SetPath", &USBZVehicleSplineFollowingComponent::execSetPath },
			{ "SetPathSpline", &USBZVehicleSplineFollowingComponent::execSetPathSpline },
			{ "Start", &USBZVehicleSplineFollowingComponent::execStart },
			{ "Stop", &USBZVehicleSplineFollowingComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetBrakingDistance_Parms
		{
			bool bMaxBraking;
			float ReturnValue;
		};
		static void NewProp_bMaxBraking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaxBraking;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::NewProp_bMaxBraking_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventGetBrakingDistance_Parms*)Obj)->bMaxBraking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::NewProp_bMaxBraking = { "bMaxBraking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventGetBrakingDistance_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::NewProp_bMaxBraking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetBrakingDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::NewProp_bMaxBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetBrakingDistance", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetBrakingDistance_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetCurrentSpline_Parms
		{
			ASBZSpline* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetCurrentSpline_Parms, ReturnValue), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetCurrentSpline", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetCurrentSpline_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetFullPath_Parms
		{
			TArray<ASBZSpline*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetFullPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetFullPath", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetFullPath_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetLastSpline_Parms
		{
			ASBZSpline* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetLastSpline_Parms, ReturnValue), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetLastSpline", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetLastSpline_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetNextSpline_Parms
		{
			ASBZSpline* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetNextSpline_Parms, ReturnValue), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetNextSpline", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetNextSpline_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetPath_Parms
		{
			TArray<ASBZSpline*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetPath", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetPath_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetPathLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetPathLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetPathLength", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetPathLength_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "GetSpeed", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventGetSpeed_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventIsStopped_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventIsStopped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventIsStopped_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "IsStopped", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventIsStopped_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventIsStopping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventIsStopping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventIsStopping_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "IsStopping", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventIsStopping_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_OnBeginStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_OnPathEndReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEndReached_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_OnSplineEndReached", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEndReached_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static void NewProp_bPathEntered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPathEntered;
		static void NewProp_bTeleportToPathStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportToPathStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bPathEntered_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms*)Obj)->bPathEntered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bPathEntered = { "bPathEntered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bPathEntered_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bTeleportToPathStart_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms*)Obj)->bTeleportToPathStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bTeleportToPathStart = { "bTeleportToPathStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bTeleportToPathStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bPathEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::NewProp_bTeleportToPathStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_OnSplineEntered", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineEntered_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineLeft_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_OnSplineLeft", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_OnSplineLeft_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_OnStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_OnStopped_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_OnStopped_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_OnStopped", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_OnStopped_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::NewProp_InPath_Inner = { "InPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_PushPath_Parms, InPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::NewProp_InPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::NewProp_InPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_PushPath", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_PushPath_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_PushPathSpline_Parms, InPath), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_PushPathSpline", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_PushPathSpline_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerCurrentSpeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InServerPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InServerPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InServerPath;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InServerTraveledDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_ServerCurrentSpeed = { "ServerCurrentSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetAcceleration_Parms, ServerCurrentSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerPath_Inner = { "InServerPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerPath = { "InServerPath", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetAcceleration_Parms, InServerPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerPath_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerTraveledDistance = { "InServerTraveledDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetAcceleration_Parms, InServerTraveledDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InAcceleration = { "InAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetAcceleration_Parms, InAcceleration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_ServerCurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InServerTraveledDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::NewProp_InAcceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_SetAcceleration", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_SetAcceleration_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerCurrentSpeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InServerPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InServerPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InServerPath;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InServerTraveledDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSpeed;
		static void NewProp_bForceUpdateTargetSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdateTargetSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_ServerCurrentSpeed = { "ServerCurrentSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms, ServerCurrentSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerPath_Inner = { "InServerPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerPath = { "InServerPath", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms, InServerPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerPath_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerTraveledDistance = { "InServerTraveledDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms, InServerTraveledDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InSpeed = { "InSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms, InSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms*)Obj)->bForceUpdateTargetSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed = { "bForceUpdateTargetSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_ServerCurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InServerTraveledDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_InSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_SetCruisingSpeed", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_SetCruisingSpeed_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerCurrentSpeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InServerPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InServerPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InServerPath;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InServerTraveledDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_ServerCurrentSpeed = { "ServerCurrentSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetDeceleration_Parms, ServerCurrentSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerPath_Inner = { "InServerPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerPath = { "InServerPath", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetDeceleration_Parms, InServerPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerPath_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerTraveledDistance = { "InServerTraveledDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetDeceleration_Parms, InServerTraveledDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InDeceleration = { "InDeceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetDeceleration_Parms, InDeceleration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_ServerCurrentSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InServerTraveledDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::NewProp_InDeceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_SetDeceleration", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_SetDeceleration_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InPath;
		static void NewProp_bTeleportToPathStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportToPathStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_InPath_Inner = { "InPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetPath_Parms, InPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_InPath_MetaData)) };
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_bTeleportToPathStart_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventMulticast_SetPath_Parms*)Obj)->bTeleportToPathStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_bTeleportToPathStart = { "bTeleportToPathStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_SetPath_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_bTeleportToPathStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_InPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_InPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::NewProp_bTeleportToPathStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_SetPath", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_SetPath_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_SetPathSpline_Parms, InPath), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::NewProp_InPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_SetPathSpline", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_SetPathSpline_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static void NewProp_bRequestedByUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestedByUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventMulticast_StopAtDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::NewProp_bRequestedByUser_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventMulticast_StopAtDistance_Parms*)Obj)->bRequestedByUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::NewProp_bRequestedByUser = { "bRequestedByUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_StopAtDistance_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::NewProp_bRequestedByUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::NewProp_bRequestedByUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Multicast_StopAtDistance", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventMulticast_StopAtDistance_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventPushPath_Parms
		{
			TArray<ASBZSpline*> Path;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventPushPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "PushPath", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventPushPath_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventPushPathSpline_Parms
		{
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventPushPathSpline_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "PushPathSpline", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventPushPathSpline_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventSetAcceleration_Parms
		{
			float InAcceleration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::NewProp_InAcceleration = { "InAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventSetAcceleration_Parms, InAcceleration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::NewProp_InAcceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "SetAcceleration", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventSetAcceleration_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventSetCruisingSpeed_Parms
		{
			float NewSpeed;
			bool bForceUpdateTargetSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static void NewProp_bForceUpdateTargetSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdateTargetSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventSetCruisingSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventSetCruisingSpeed_Parms*)Obj)->bForceUpdateTargetSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed = { "bForceUpdateTargetSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventSetCruisingSpeed_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::NewProp_NewSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::NewProp_bForceUpdateTargetSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "SetCruisingSpeed", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventSetCruisingSpeed_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventSetDeceleration_Parms
		{
			float InDeceleration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::NewProp_InDeceleration = { "InDeceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventSetDeceleration_Parms, InDeceleration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::NewProp_InDeceleration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "SetDeceleration", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventSetDeceleration_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventSetPath_Parms
		{
			TArray<ASBZSpline*> Path;
			bool bTeleportToPathStart;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static void NewProp_bTeleportToPathStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleportToPathStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventSetPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_bTeleportToPathStart_SetBit(void* Obj)
	{
		((SBZVehicleSplineFollowingComponent_eventSetPath_Parms*)Obj)->bTeleportToPathStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_bTeleportToPathStart = { "bTeleportToPathStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVehicleSplineFollowingComponent_eventSetPath_Parms), &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_bTeleportToPathStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::NewProp_bTeleportToPathStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "SetPath", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventSetPath_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics
	{
		struct SBZVehicleSplineFollowingComponent_eventSetPathSpline_Parms
		{
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVehicleSplineFollowingComponent_eventSetPathSpline_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "SetPathSpline", nullptr, nullptr, sizeof(SBZVehicleSplineFollowingComponent_eventSetPathSpline_Parms), Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVehicleSplineFollowingComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent_NoRegister()
	{
		return USBZVehicleSplineFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClientPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBeginSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopBeginSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopBeginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopBeginDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopEndDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StopEndDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecelDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecelDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecelTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecelTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CruisingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CruisingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnCruisingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnCruisingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStopping_MetaData[];
#endif
		static void NewProp_bIsStopping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStopping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStopRequestedByUser_MetaData[];
#endif
		static void NewProp_bIsStopRequestedByUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStopRequestedByUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FullPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetBrakingDistance, "GetBrakingDistance" }, // 3361666505
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetCurrentSpline, "GetCurrentSpline" }, // 1575231973
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetFullPath, "GetFullPath" }, // 3758782160
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetLastSpline, "GetLastSpline" }, // 4006668280
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetNextSpline, "GetNextSpline" }, // 1243620961
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPath, "GetPath" }, // 1311100080
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetPathLength, "GetPathLength" }, // 1942858999
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_GetSpeed, "GetSpeed" }, // 2623142585
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopped, "IsStopped" }, // 924945045
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_IsStopping, "IsStopping" }, // 2823288221
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnBeginStop, "Multicast_OnBeginStop" }, // 1921914959
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnPathEndReached, "Multicast_OnPathEndReached" }, // 1022946742
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEndReached, "Multicast_OnSplineEndReached" }, // 468660542
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineEntered, "Multicast_OnSplineEntered" }, // 2278340079
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnSplineLeft, "Multicast_OnSplineLeft" }, // 442373404
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStarted, "Multicast_OnStarted" }, // 2186326697
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_OnStopped, "Multicast_OnStopped" }, // 2906436382
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPath, "Multicast_PushPath" }, // 2141142031
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_PushPathSpline, "Multicast_PushPathSpline" }, // 1944875401
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetAcceleration, "Multicast_SetAcceleration" }, // 2587727689
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetCruisingSpeed, "Multicast_SetCruisingSpeed" }, // 149677415
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetDeceleration, "Multicast_SetDeceleration" }, // 258250428
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPath, "Multicast_SetPath" }, // 4097873011
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_SetPathSpline, "Multicast_SetPathSpline" }, // 1132324693
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_Start, "Multicast_Start" }, // 2351617379
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Multicast_StopAtDistance, "Multicast_StopAtDistance" }, // 312457554
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPath, "PushPath" }, // 377201744
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_PushPathSpline, "PushPathSpline" }, // 1621393361
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetAcceleration, "SetAcceleration" }, // 648617360
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetCruisingSpeed, "SetCruisingSpeed" }, // 3804910642
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetDeceleration, "SetDeceleration" }, // 285019343
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPath, "SetPath" }, // 4160803754
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_SetPathSpline, "SetPathSpline" }, // 3834220295
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Start, "Start" }, // 1805684107
		{ &Z_Construct_UFunction_USBZVehicleSplineFollowingComponent_Stop, "Stop" }, // 3335347832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZVehicleSplineFollowingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_OnStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_OnStarted = { "OnStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, OnStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZVehicleOnStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_OnStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_OnStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_VehicleManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_VehicleManager = { "VehicleManager", nullptr, (EPropertyFlags)0x004200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, VehicleManager), Z_Construct_UClass_USBZVehicleManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_VehicleManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_VehicleManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ReplicatedProperties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ReplicatedProperties = { "ReplicatedProperties", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, ReplicatedProperties), Z_Construct_UScriptStruct_FSBZVehicleSplineFollowingComponentReplicatedProperties, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ReplicatedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ReplicatedProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ClientPath_Inner = { "ClientPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ClientPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ClientPath = { "ClientPath", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, ClientPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ClientPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ClientPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TargetSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TargetSpeed = { "TargetSpeed", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, TargetSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TargetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TargetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginSpeed = { "StopBeginSpeed", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, StopBeginSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginDistance = { "StopBeginDistance", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, StopBeginDistance), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopEndDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopEndDistance = { "StopEndDistance", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, StopEndDistance), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopEndDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopEndDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelDuration = { "DecelDuration", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, DecelDuration), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelTime = { "DecelTime", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, DecelTime), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_CruisingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_CruisingSpeed = { "CruisingSpeed", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, CruisingSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_CruisingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_CruisingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TurnCruisingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TurnCruisingSpeed = { "TurnCruisingSpeed", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, TurnCruisingSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TurnCruisingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TurnCruisingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Acceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, Acceleration), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Deceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, Deceleration), METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Deceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Deceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopping_SetBit(void* Obj)
	{
		((USBZVehicleSplineFollowingComponent*)Obj)->bIsStopping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopping = { "bIsStopping", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZVehicleSplineFollowingComponent), &Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopRequestedByUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopRequestedByUser_SetBit(void* Obj)
	{
		((USBZVehicleSplineFollowingComponent*)Obj)->bIsStopRequestedByUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopRequestedByUser = { "bIsStopRequestedByUser", nullptr, (EPropertyFlags)0x0040000000002025, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZVehicleSplineFollowingComponent), &Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopRequestedByUser_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopRequestedByUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopRequestedByUser_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_FullPath_Inner = { "FullPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_FullPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineFollowingComponent" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZVehicleSplineFollowingComponent, FullPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_FullPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_FullPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_OnStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_VehicleManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ReplicatedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ClientPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_ClientPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TargetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopBeginDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_StopEndDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_DecelTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_CruisingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_TurnCruisingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_Deceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_bIsStopRequestedByUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_FullPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::NewProp_FullPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVehicleSplineFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::ClassParams = {
		&USBZVehicleSplineFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVehicleSplineFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVehicleSplineFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVehicleSplineFollowingComponent, 3891400510);
	template<> STARBREEZE_API UClass* StaticClass<USBZVehicleSplineFollowingComponent>()
	{
		return USBZVehicleSplineFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVehicleSplineFollowingComponent(Z_Construct_UClass_USBZVehicleSplineFollowingComponent, &USBZVehicleSplineFollowingComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVehicleSplineFollowingComponent"), false, nullptr, nullptr, nullptr);

	void USBZVehicleSplineFollowingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedProperties(TEXT("ReplicatedProperties"));
		static const FName Name_TargetSpeed(TEXT("TargetSpeed"));
		static const FName Name_Speed(TEXT("Speed"));
		static const FName Name_StopBeginSpeed(TEXT("StopBeginSpeed"));
		static const FName Name_StopBeginDistance(TEXT("StopBeginDistance"));
		static const FName Name_StopEndDistance(TEXT("StopEndDistance"));
		static const FName Name_DecelDuration(TEXT("DecelDuration"));
		static const FName Name_DecelTime(TEXT("DecelTime"));
		static const FName Name_CruisingSpeed(TEXT("CruisingSpeed"));
		static const FName Name_TurnCruisingSpeed(TEXT("TurnCruisingSpeed"));
		static const FName Name_Acceleration(TEXT("Acceleration"));
		static const FName Name_Deceleration(TEXT("Deceleration"));
		static const FName Name_bIsStopping(TEXT("bIsStopping"));
		static const FName Name_bIsStopRequestedByUser(TEXT("bIsStopRequestedByUser"));

		const bool bIsValid = true
			&& Name_ReplicatedProperties == ClassReps[(int32)ENetFields_Private::ReplicatedProperties].Property->GetFName()
			&& Name_TargetSpeed == ClassReps[(int32)ENetFields_Private::TargetSpeed].Property->GetFName()
			&& Name_Speed == ClassReps[(int32)ENetFields_Private::Speed].Property->GetFName()
			&& Name_StopBeginSpeed == ClassReps[(int32)ENetFields_Private::StopBeginSpeed].Property->GetFName()
			&& Name_StopBeginDistance == ClassReps[(int32)ENetFields_Private::StopBeginDistance].Property->GetFName()
			&& Name_StopEndDistance == ClassReps[(int32)ENetFields_Private::StopEndDistance].Property->GetFName()
			&& Name_DecelDuration == ClassReps[(int32)ENetFields_Private::DecelDuration].Property->GetFName()
			&& Name_DecelTime == ClassReps[(int32)ENetFields_Private::DecelTime].Property->GetFName()
			&& Name_CruisingSpeed == ClassReps[(int32)ENetFields_Private::CruisingSpeed].Property->GetFName()
			&& Name_TurnCruisingSpeed == ClassReps[(int32)ENetFields_Private::TurnCruisingSpeed].Property->GetFName()
			&& Name_Acceleration == ClassReps[(int32)ENetFields_Private::Acceleration].Property->GetFName()
			&& Name_Deceleration == ClassReps[(int32)ENetFields_Private::Deceleration].Property->GetFName()
			&& Name_bIsStopping == ClassReps[(int32)ENetFields_Private::bIsStopping].Property->GetFName()
			&& Name_bIsStopRequestedByUser == ClassReps[(int32)ENetFields_Private::bIsStopRequestedByUser].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZVehicleSplineFollowingComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVehicleSplineFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
