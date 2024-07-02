// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterMovementComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZipline_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityTraversalQueryParams_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilitySlideParams_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplineSettings_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterMovementState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execMulticast_StartZipline)
	{
		P_GET_OBJECT(ASBZZipline,Z_Param_InZipline);
		P_GET_UBOOL(Z_Param_bIsMovingZiplineForward);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeOnZipline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StartZipline_Implementation(Z_Param_InZipline,Z_Param_bIsMovingZiplineForward,Z_Param_InTimeOnZipline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execMulticast_StopZipline)
	{
		P_GET_UBOOL(Z_Param_bWasCancelled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_StopZipline_Implementation(Z_Param_bWasCancelled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execNetMulticast_StartSlide)
	{
		P_GET_STRUCT(FVector,Z_Param_InSlideDirection);
		P_GET_STRUCT(FVector,Z_Param_InEndSlideLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMulticast_StartSlide_Implementation(Z_Param_InSlideDirection,Z_Param_InEndSlideLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execNetMulticast_StartTraversal)
	{
		P_GET_STRUCT(FSBZMinimalAgilityTraversalTrajectory,Z_Param_MinimalTrajectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMulticast_StartTraversal_Implementation(Z_Param_MinimalTrajectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execNetMulticast_StopSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMulticast_StopSlide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execNetMulticast_StopTraversal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMulticast_StopTraversal_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execServer_StartSlide)
	{
		P_GET_STRUCT(FVector,Z_Param_InSlideDirection);
		P_GET_STRUCT(FVector,Z_Param_InEndSlideLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartSlide_Validate(Z_Param_InSlideDirection,Z_Param_InEndSlideLocation))
		{
			RPC_ValidateFailed(TEXT("Server_StartSlide_Validate"));
			return;
		}
		P_THIS->Server_StartSlide_Implementation(Z_Param_InSlideDirection,Z_Param_InEndSlideLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execServer_StartTraversal)
	{
		P_GET_STRUCT(FSBZMinimalAgilityTraversalTrajectory,Z_Param_MinimalTrajectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StartTraversal_Validate(Z_Param_MinimalTrajectory))
		{
			RPC_ValidateFailed(TEXT("Server_StartTraversal_Validate"));
			return;
		}
		P_THIS->Server_StartTraversal_Implementation(Z_Param_MinimalTrajectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execServer_StartZipline)
	{
		P_GET_OBJECT(ASBZZipline,Z_Param_InZipline);
		P_GET_UBOOL(Z_Param_bIsMovingZiplineForward);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTimeOnZipline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StartZipline_Implementation(Z_Param_InZipline,Z_Param_bIsMovingZiplineForward,Z_Param_InTimeOnZipline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execServer_StopSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_StopSlide_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_StopSlide_Validate"));
			return;
		}
		P_THIS->Server_StopSlide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterMovementComponent::execServer_StopZipline)
	{
		P_GET_UBOOL(Z_Param_bWasCancelled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_StopZipline_Implementation(Z_Param_bWasCancelled);
		P_NATIVE_END;
	}
	static FName NAME_USBZCharacterMovementComponent_Multicast_StartZipline = FName(TEXT("Multicast_StartZipline"));
	void USBZCharacterMovementComponent::Multicast_StartZipline(ASBZZipline* InZipline, bool bIsMovingZiplineForward, const float InTimeOnZipline)
	{
		SBZCharacterMovementComponent_eventMulticast_StartZipline_Parms Parms;
		Parms.InZipline=InZipline;
		Parms.bIsMovingZiplineForward=bIsMovingZiplineForward ? true : false;
		Parms.InTimeOnZipline=InTimeOnZipline;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_Multicast_StartZipline),&Parms);
	}
	static FName NAME_USBZCharacterMovementComponent_Multicast_StopZipline = FName(TEXT("Multicast_StopZipline"));
	void USBZCharacterMovementComponent::Multicast_StopZipline(bool bWasCancelled)
	{
		SBZCharacterMovementComponent_eventMulticast_StopZipline_Parms Parms;
		Parms.bWasCancelled=bWasCancelled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_Multicast_StopZipline),&Parms);
	}
	static FName NAME_USBZCharacterMovementComponent_NetMulticast_StartSlide = FName(TEXT("NetMulticast_StartSlide"));
	void USBZCharacterMovementComponent::NetMulticast_StartSlide(FVector const& InSlideDirection, FVector const& InEndSlideLocation)
	{
		SBZCharacterMovementComponent_eventNetMulticast_StartSlide_Parms Parms;
		Parms.InSlideDirection=InSlideDirection;
		Parms.InEndSlideLocation=InEndSlideLocation;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_NetMulticast_StartSlide),&Parms);
	}
	static FName NAME_USBZCharacterMovementComponent_NetMulticast_StartTraversal = FName(TEXT("NetMulticast_StartTraversal"));
	void USBZCharacterMovementComponent::NetMulticast_StartTraversal(FSBZMinimalAgilityTraversalTrajectory const& MinimalTrajectory)
	{
		SBZCharacterMovementComponent_eventNetMulticast_StartTraversal_Parms Parms;
		Parms.MinimalTrajectory=MinimalTrajectory;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_NetMulticast_StartTraversal),&Parms);
	}
	static FName NAME_USBZCharacterMovementComponent_NetMulticast_StopSlide = FName(TEXT("NetMulticast_StopSlide"));
	void USBZCharacterMovementComponent::NetMulticast_StopSlide()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_NetMulticast_StopSlide),NULL);
	}
	static FName NAME_USBZCharacterMovementComponent_NetMulticast_StopTraversal = FName(TEXT("NetMulticast_StopTraversal"));
	void USBZCharacterMovementComponent::NetMulticast_StopTraversal()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_NetMulticast_StopTraversal),NULL);
	}
	static FName NAME_USBZCharacterMovementComponent_Server_StartSlide = FName(TEXT("Server_StartSlide"));
	void USBZCharacterMovementComponent::Server_StartSlide(FVector const& InSlideDirection, FVector const& InEndSlideLocation)
	{
		SBZCharacterMovementComponent_eventServer_StartSlide_Parms Parms;
		Parms.InSlideDirection=InSlideDirection;
		Parms.InEndSlideLocation=InEndSlideLocation;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_Server_StartSlide),&Parms);
	}
	static FName NAME_USBZCharacterMovementComponent_Server_StartTraversal = FName(TEXT("Server_StartTraversal"));
	void USBZCharacterMovementComponent::Server_StartTraversal(FSBZMinimalAgilityTraversalTrajectory const& MinimalTrajectory)
	{
		SBZCharacterMovementComponent_eventServer_StartTraversal_Parms Parms;
		Parms.MinimalTrajectory=MinimalTrajectory;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_Server_StartTraversal),&Parms);
	}
	static FName NAME_USBZCharacterMovementComponent_Server_StartZipline = FName(TEXT("Server_StartZipline"));
	void USBZCharacterMovementComponent::Server_StartZipline(ASBZZipline* InZipline, bool bIsMovingZiplineForward, const float InTimeOnZipline)
	{
		SBZCharacterMovementComponent_eventServer_StartZipline_Parms Parms;
		Parms.InZipline=InZipline;
		Parms.bIsMovingZiplineForward=bIsMovingZiplineForward ? true : false;
		Parms.InTimeOnZipline=InTimeOnZipline;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_Server_StartZipline),&Parms);
	}
	static FName NAME_USBZCharacterMovementComponent_Server_StopSlide = FName(TEXT("Server_StopSlide"));
	void USBZCharacterMovementComponent::Server_StopSlide()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_Server_StopSlide),NULL);
	}
	static FName NAME_USBZCharacterMovementComponent_Server_StopZipline = FName(TEXT("Server_StopZipline"));
	void USBZCharacterMovementComponent::Server_StopZipline(bool bWasCancelled)
	{
		SBZCharacterMovementComponent_eventServer_StopZipline_Parms Parms;
		Parms.bWasCancelled=bWasCancelled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZCharacterMovementComponent_Server_StopZipline),&Parms);
	}
	void USBZCharacterMovementComponent::StaticRegisterNativesUSBZCharacterMovementComponent()
	{
		UClass* Class = USBZCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_StartZipline", &USBZCharacterMovementComponent::execMulticast_StartZipline },
			{ "Multicast_StopZipline", &USBZCharacterMovementComponent::execMulticast_StopZipline },
			{ "NetMulticast_StartSlide", &USBZCharacterMovementComponent::execNetMulticast_StartSlide },
			{ "NetMulticast_StartTraversal", &USBZCharacterMovementComponent::execNetMulticast_StartTraversal },
			{ "NetMulticast_StopSlide", &USBZCharacterMovementComponent::execNetMulticast_StopSlide },
			{ "NetMulticast_StopTraversal", &USBZCharacterMovementComponent::execNetMulticast_StopTraversal },
			{ "Server_StartSlide", &USBZCharacterMovementComponent::execServer_StartSlide },
			{ "Server_StartTraversal", &USBZCharacterMovementComponent::execServer_StartTraversal },
			{ "Server_StartZipline", &USBZCharacterMovementComponent::execServer_StartZipline },
			{ "Server_StopSlide", &USBZCharacterMovementComponent::execServer_StopSlide },
			{ "Server_StopZipline", &USBZCharacterMovementComponent::execServer_StopZipline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InZipline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingZiplineForward_MetaData[];
#endif
		static void NewProp_bIsMovingZiplineForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingZiplineForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeOnZipline_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeOnZipline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_InZipline = { "InZipline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventMulticast_StartZipline_Parms, InZipline), Z_Construct_UClass_ASBZZipline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_bIsMovingZiplineForward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_bIsMovingZiplineForward_SetBit(void* Obj)
	{
		((SBZCharacterMovementComponent_eventMulticast_StartZipline_Parms*)Obj)->bIsMovingZiplineForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_bIsMovingZiplineForward = { "bIsMovingZiplineForward", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterMovementComponent_eventMulticast_StartZipline_Parms), &Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_bIsMovingZiplineForward_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_bIsMovingZiplineForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_bIsMovingZiplineForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_InTimeOnZipline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_InTimeOnZipline = { "InTimeOnZipline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventMulticast_StartZipline_Parms, InTimeOnZipline), METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_InTimeOnZipline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_InTimeOnZipline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_InZipline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_bIsMovingZiplineForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::NewProp_InTimeOnZipline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "Multicast_StartZipline", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventMulticast_StartZipline_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasCancelled_MetaData[];
#endif
		static void NewProp_bWasCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::NewProp_bWasCancelled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
	{
		((SBZCharacterMovementComponent_eventMulticast_StopZipline_Parms*)Obj)->bWasCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterMovementComponent_eventMulticast_StopZipline_Parms), &Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::NewProp_bWasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::NewProp_bWasCancelled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::NewProp_bWasCancelled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "Multicast_StopZipline", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventMulticast_StopZipline_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlideDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlideDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEndSlideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEndSlideLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InSlideDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InSlideDirection = { "InSlideDirection", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventNetMulticast_StartSlide_Parms, InSlideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InSlideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InSlideDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InEndSlideLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InEndSlideLocation = { "InEndSlideLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventNetMulticast_StartSlide_Parms, InEndSlideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InEndSlideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InEndSlideLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InSlideDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::NewProp_InEndSlideLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "NetMulticast_StartSlide", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventNetMulticast_StartSlide_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimalTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimalTrajectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::NewProp_MinimalTrajectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::NewProp_MinimalTrajectory = { "MinimalTrajectory", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventNetMulticast_StartTraversal_Parms, MinimalTrajectory), Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::NewProp_MinimalTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::NewProp_MinimalTrajectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::NewProp_MinimalTrajectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "NetMulticast_StartTraversal", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventNetMulticast_StartTraversal_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "NetMulticast_StopSlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "NetMulticast_StopTraversal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlideDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSlideDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEndSlideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEndSlideLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InSlideDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InSlideDirection = { "InSlideDirection", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventServer_StartSlide_Parms, InSlideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InSlideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InSlideDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InEndSlideLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InEndSlideLocation = { "InEndSlideLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventServer_StartSlide_Parms, InEndSlideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InEndSlideLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InEndSlideLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InSlideDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::NewProp_InEndSlideLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "Server_StartSlide", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventServer_StartSlide_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimalTrajectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimalTrajectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::NewProp_MinimalTrajectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::NewProp_MinimalTrajectory = { "MinimalTrajectory", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventServer_StartTraversal_Parms, MinimalTrajectory), Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::NewProp_MinimalTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::NewProp_MinimalTrajectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::NewProp_MinimalTrajectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "Server_StartTraversal", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventServer_StartTraversal_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InZipline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingZiplineForward_MetaData[];
#endif
		static void NewProp_bIsMovingZiplineForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingZiplineForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeOnZipline_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTimeOnZipline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_InZipline = { "InZipline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventServer_StartZipline_Parms, InZipline), Z_Construct_UClass_ASBZZipline_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_bIsMovingZiplineForward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_bIsMovingZiplineForward_SetBit(void* Obj)
	{
		((SBZCharacterMovementComponent_eventServer_StartZipline_Parms*)Obj)->bIsMovingZiplineForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_bIsMovingZiplineForward = { "bIsMovingZiplineForward", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterMovementComponent_eventServer_StartZipline_Parms), &Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_bIsMovingZiplineForward_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_bIsMovingZiplineForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_bIsMovingZiplineForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_InTimeOnZipline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_InTimeOnZipline = { "InTimeOnZipline", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterMovementComponent_eventServer_StartZipline_Parms, InTimeOnZipline), METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_InTimeOnZipline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_InTimeOnZipline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_InZipline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_bIsMovingZiplineForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::NewProp_InTimeOnZipline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "Server_StartZipline", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventServer_StartZipline_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "Server_StopSlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasCancelled_MetaData[];
#endif
		static void NewProp_bWasCancelled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::NewProp_bWasCancelled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
	{
		((SBZCharacterMovementComponent_eventServer_StopZipline_Parms*)Obj)->bWasCancelled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCharacterMovementComponent_eventServer_StopZipline_Parms), &Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::NewProp_bWasCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::NewProp_bWasCancelled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::NewProp_bWasCancelled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterMovementComponent, nullptr, "Server_StopZipline", nullptr, nullptr, sizeof(SBZCharacterMovementComponent_eventServer_StopZipline_Parms), Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCharacterMovementComponent_NoRegister()
	{
		return USBZCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityTrajectoryQueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgilityTrajectoryQueryParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilitySlideParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AgilitySlideParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentZipline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentZipline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentControlsReferenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentControlsReferenceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZiplineParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZiplineParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRunSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTargetingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHSInstigatorTargetingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHSInstigatorTargetingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHSInstigatorWalkingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHSInstigatorWalkingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandingHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandingHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraversingHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraversingHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraversingMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraversingMaxAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterMovementState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterMovementState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBZCharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBZCharacterOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StartZipline, "Multicast_StartZipline" }, // 1960320176
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_Multicast_StopZipline, "Multicast_StopZipline" }, // 3932081269
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartSlide, "NetMulticast_StartSlide" }, // 1033038808
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StartTraversal, "NetMulticast_StartTraversal" }, // 3167066660
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopSlide, "NetMulticast_StopSlide" }, // 2999250256
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_NetMulticast_StopTraversal, "NetMulticast_StopTraversal" }, // 3309148774
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartSlide, "Server_StartSlide" }, // 2461678743
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartTraversal, "Server_StartTraversal" }, // 3856979663
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StartZipline, "Server_StartZipline" }, // 2276479462
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopSlide, "Server_StopSlide" }, // 2090199515
		{ &Z_Construct_UFunction_USBZCharacterMovementComponent_Server_StopZipline, "Server_StopZipline" }, // 4027646485
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZCharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilityTrajectoryQueryParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilityTrajectoryQueryParams = { "AgilityTrajectoryQueryParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, AgilityTrajectoryQueryParams), Z_Construct_UClass_USBZAgilityTraversalQueryParams_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilityTrajectoryQueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilityTrajectoryQueryParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilitySlideParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilitySlideParams = { "AgilitySlideParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, AgilitySlideParams), Z_Construct_UClass_USBZAgilitySlideParams_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilitySlideParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilitySlideParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentZipline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentZipline = { "CurrentZipline", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, CurrentZipline), Z_Construct_UClass_ASBZZipline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentZipline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentZipline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentControlsReferenceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentControlsReferenceID = { "CurrentControlsReferenceID", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, CurrentControlsReferenceID), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentControlsReferenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentControlsReferenceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_ZiplineParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_ZiplineParams = { "ZiplineParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, ZiplineParams), Z_Construct_UClass_USBZZiplineSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_ZiplineParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_ZiplineParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxRunSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxRunSpeed = { "MaxRunSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, MaxRunSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxRunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxRunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxTargetingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxTargetingSpeed = { "MaxTargetingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, MaxTargetingSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxTargetingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxTargetingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorTargetingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorTargetingSpeed = { "MaxHSInstigatorTargetingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, MaxHSInstigatorTargetingSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorTargetingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorTargetingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorWalkingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorWalkingSpeed = { "MaxHSInstigatorWalkingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, MaxHSInstigatorWalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorWalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorWalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_StandingHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_StandingHalfHeight = { "StandingHalfHeight", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, StandingHalfHeight), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_StandingHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_StandingHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingHalfHeight = { "TraversingHalfHeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, TraversingHalfHeight), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingMaxAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingMaxAngle = { "TraversingMaxAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, TraversingMaxAngle), METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingMaxAngle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CharacterMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CharacterMovementState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CharacterMovementState = { "CharacterMovementState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, CharacterMovementState), Z_Construct_UEnum_Starbreeze_ESBZCharacterMovementState, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CharacterMovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CharacterMovementState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_SBZCharacterOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/SBZCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_SBZCharacterOwner = { "SBZCharacterOwner", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterMovementComponent, SBZCharacterOwner), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_SBZCharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_SBZCharacterOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilityTrajectoryQueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_AgilitySlideParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentZipline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CurrentControlsReferenceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_ZiplineParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxRunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxTargetingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorTargetingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_MaxHSInstigatorWalkingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_StandingHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_TraversingMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CharacterMovementState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_CharacterMovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterMovementComponent_Statics::NewProp_SBZCharacterOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterMovementComponent_Statics::ClassParams = {
		&USBZCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterMovementComponent, 2788391268);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterMovementComponent>()
	{
		return USBZCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterMovementComponent(Z_Construct_UClass_USBZCharacterMovementComponent, &USBZCharacterMovementComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
