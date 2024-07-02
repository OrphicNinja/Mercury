// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTool() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTool_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTool();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZToolState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolSkeletalMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZTool::execMulticast_SetToolState)
	{
		P_GET_ENUM(ESBZToolState,Z_Param_NewToolState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetToolState_Implementation(ESBZToolState(Z_Param_NewToolState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTool::execOnInstigatorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInstigatorEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTool::execOnRep_ToolState)
	{
		P_GET_ENUM(ESBZToolState,Z_Param_OldToolState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ToolState(ESBZToolState(Z_Param_OldToolState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTool::execServer_CallReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CallReady_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTool::execServer_SetEquippedAnimationFullyPlayed)
	{
		P_GET_UBOOL(Z_Param_bInIsEquippedAnimationReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetEquippedAnimationFullyPlayed_Implementation(Z_Param_bInIsEquippedAnimationReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTool::execServer_SetToolState)
	{
		P_GET_ENUM(ESBZToolState,Z_Param_NewToolState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetToolState_Implementation(ESBZToolState(Z_Param_NewToolState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZTool::execStopAllSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllSounds();
		P_NATIVE_END;
	}
	static FName NAME_ASBZTool_Multicast_SetToolState = FName(TEXT("Multicast_SetToolState"));
	void ASBZTool::Multicast_SetToolState(ESBZToolState NewToolState)
	{
		SBZTool_eventMulticast_SetToolState_Parms Parms;
		Parms.NewToolState=NewToolState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_Multicast_SetToolState),&Parms);
	}
	static FName NAME_ASBZTool_OnActivated = FName(TEXT("OnActivated"));
	void ASBZTool::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_OnActivated),NULL);
	}
	static FName NAME_ASBZTool_OnActivatedIdle = FName(TEXT("OnActivatedIdle"));
	void ASBZTool::OnActivatedIdle()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_OnActivatedIdle),NULL);
	}
	static FName NAME_ASBZTool_OnActivatedUsing = FName(TEXT("OnActivatedUsing"));
	void ASBZTool::OnActivatedUsing()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_OnActivatedUsing),NULL);
	}
	static FName NAME_ASBZTool_OnCanceled = FName(TEXT("OnCanceled"));
	void ASBZTool::OnCanceled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_OnCanceled),NULL);
	}
	static FName NAME_ASBZTool_OnReady = FName(TEXT("OnReady"));
	void ASBZTool::OnReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_OnReady),NULL);
	}
	static FName NAME_ASBZTool_Server_CallReady = FName(TEXT("Server_CallReady"));
	void ASBZTool::Server_CallReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_Server_CallReady),NULL);
	}
	static FName NAME_ASBZTool_Server_SetEquippedAnimationFullyPlayed = FName(TEXT("Server_SetEquippedAnimationFullyPlayed"));
	void ASBZTool::Server_SetEquippedAnimationFullyPlayed(bool bInIsEquippedAnimationReady)
	{
		SBZTool_eventServer_SetEquippedAnimationFullyPlayed_Parms Parms;
		Parms.bInIsEquippedAnimationReady=bInIsEquippedAnimationReady ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_Server_SetEquippedAnimationFullyPlayed),&Parms);
	}
	static FName NAME_ASBZTool_Server_SetToolState = FName(TEXT("Server_SetToolState"));
	void ASBZTool::Server_SetToolState(ESBZToolState NewToolState)
	{
		SBZTool_eventServer_SetToolState_Parms Parms;
		Parms.NewToolState=NewToolState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZTool_Server_SetToolState),&Parms);
	}
	void ASBZTool::StaticRegisterNativesASBZTool()
	{
		UClass* Class = ASBZTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetToolState", &ASBZTool::execMulticast_SetToolState },
			{ "OnInstigatorEndPlay", &ASBZTool::execOnInstigatorEndPlay },
			{ "OnRep_ToolState", &ASBZTool::execOnRep_ToolState },
			{ "Server_CallReady", &ASBZTool::execServer_CallReady },
			{ "Server_SetEquippedAnimationFullyPlayed", &ASBZTool::execServer_SetEquippedAnimationFullyPlayed },
			{ "Server_SetToolState", &ASBZTool::execServer_SetToolState },
			{ "StopAllSounds", &ASBZTool::execStopAllSounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewToolState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewToolState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::NewProp_NewToolState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::NewProp_NewToolState = { "NewToolState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTool_eventMulticast_SetToolState_Parms, NewToolState), Z_Construct_UEnum_Starbreeze_ESBZToolState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::NewProp_NewToolState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::NewProp_NewToolState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "Multicast_SetToolState", nullptr, nullptr, sizeof(SBZTool_eventMulticast_SetToolState_Parms), Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_Multicast_SetToolState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_Multicast_SetToolState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_OnActivatedIdle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_OnActivatedIdle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_OnActivatedIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "OnActivatedIdle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_OnActivatedIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnActivatedIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_OnActivatedIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_OnActivatedIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_OnActivatedUsing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_OnActivatedUsing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_OnActivatedUsing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "OnActivatedUsing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_OnActivatedUsing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnActivatedUsing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_OnActivatedUsing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_OnActivatedUsing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_OnCanceled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_OnCanceled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_OnCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "OnCanceled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_OnCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_OnCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_OnCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics
	{
		struct SBZTool_eventOnInstigatorEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTool_eventOnInstigatorEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTool_eventOnInstigatorEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "OnInstigatorEndPlay", nullptr, nullptr, sizeof(SBZTool_eventOnInstigatorEndPlay_Parms), Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_OnReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_OnReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_OnReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "OnReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_OnReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_OnReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_OnReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics
	{
		struct SBZTool_eventOnRep_ToolState_Parms
		{
			ESBZToolState OldToolState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldToolState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldToolState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::NewProp_OldToolState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::NewProp_OldToolState = { "OldToolState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTool_eventOnRep_ToolState_Parms, OldToolState), Z_Construct_UEnum_Starbreeze_ESBZToolState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::NewProp_OldToolState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::NewProp_OldToolState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "OnRep_ToolState", nullptr, nullptr, sizeof(SBZTool_eventOnRep_ToolState_Parms), Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_OnRep_ToolState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_OnRep_ToolState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_Server_CallReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_Server_CallReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_Server_CallReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "Server_CallReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_Server_CallReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_Server_CallReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_Server_CallReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_Server_CallReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics
	{
		static void NewProp_bInIsEquippedAnimationReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsEquippedAnimationReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::NewProp_bInIsEquippedAnimationReady_SetBit(void* Obj)
	{
		((SBZTool_eventServer_SetEquippedAnimationFullyPlayed_Parms*)Obj)->bInIsEquippedAnimationReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::NewProp_bInIsEquippedAnimationReady = { "bInIsEquippedAnimationReady", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTool_eventServer_SetEquippedAnimationFullyPlayed_Parms), &Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::NewProp_bInIsEquippedAnimationReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::NewProp_bInIsEquippedAnimationReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "Server_SetEquippedAnimationFullyPlayed", nullptr, nullptr, sizeof(SBZTool_eventServer_SetEquippedAnimationFullyPlayed_Parms), Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewToolState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewToolState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::NewProp_NewToolState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::NewProp_NewToolState = { "NewToolState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTool_eventServer_SetToolState_Parms, NewToolState), Z_Construct_UEnum_Starbreeze_ESBZToolState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::NewProp_NewToolState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::NewProp_NewToolState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "Server_SetToolState", nullptr, nullptr, sizeof(SBZTool_eventServer_SetToolState_Parms), Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_Server_SetToolState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_Server_SetToolState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZTool_StopAllSounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZTool_StopAllSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZTool_StopAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZTool, nullptr, "StopAllSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZTool_StopAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZTool_StopAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZTool_StopAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZTool_StopAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZTool_NoRegister()
	{
		return ASBZTool::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToolState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ToolState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnReadyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnActivatedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedIdleEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnActivatedIdleEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedUsingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnActivatedUsingEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanceledEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCanceledEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopAllSoundsEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopAllSoundsEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadyEventRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnReadyEventRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedEventRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnActivatedEventRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedIdleEventRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnActivatedIdleEventRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivatedUsingEventRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnActivatedUsingEventRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanceledRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCanceledRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivePlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveUsingPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveUsingPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipPlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquipPlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivePlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActivePlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveUsingPlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActiveUsingPlayerFeedback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZEquippable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZTool_Multicast_SetToolState, "Multicast_SetToolState" }, // 1481895028
		{ &Z_Construct_UFunction_ASBZTool_OnActivated, "OnActivated" }, // 926270991
		{ &Z_Construct_UFunction_ASBZTool_OnActivatedIdle, "OnActivatedIdle" }, // 4188233667
		{ &Z_Construct_UFunction_ASBZTool_OnActivatedUsing, "OnActivatedUsing" }, // 1483434678
		{ &Z_Construct_UFunction_ASBZTool_OnCanceled, "OnCanceled" }, // 4094746503
		{ &Z_Construct_UFunction_ASBZTool_OnInstigatorEndPlay, "OnInstigatorEndPlay" }, // 8168500
		{ &Z_Construct_UFunction_ASBZTool_OnReady, "OnReady" }, // 1997712412
		{ &Z_Construct_UFunction_ASBZTool_OnRep_ToolState, "OnRep_ToolState" }, // 1384317528
		{ &Z_Construct_UFunction_ASBZTool_Server_CallReady, "Server_CallReady" }, // 1422523753
		{ &Z_Construct_UFunction_ASBZTool_Server_SetEquippedAnimationFullyPlayed, "Server_SetEquippedAnimationFullyPlayed" }, // 2251105508
		{ &Z_Construct_UFunction_ASBZTool_Server_SetToolState, "Server_SetToolState" }, // 994860417
		{ &Z_Construct_UFunction_ASBZTool_StopAllSounds, "StopAllSounds" }, // 3755342602
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, SkeletalMesh), Z_Construct_UClass_USBZToolSkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, Data), Z_Construct_UClass_USBZToolData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_ToolState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_ToolState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_ToolState = { "ToolState", "OnRep_ToolState", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, ToolState), Z_Construct_UEnum_Starbreeze_ESBZToolState, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_ToolState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_ToolState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_InstigatorCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_InstigatorCharacter = { "InstigatorCharacter", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, InstigatorCharacter), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_InstigatorCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_InstigatorCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEvent = { "OnReadyEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnReadyEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEvent = { "OnActivatedEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnActivatedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEvent = { "OnActivatedIdleEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnActivatedIdleEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEvent = { "OnActivatedUsingEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnActivatedUsingEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledEvent = { "OnCanceledEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnCanceledEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_StopAllSoundsEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_StopAllSoundsEvent = { "StopAllSoundsEvent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, StopAllSoundsEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_StopAllSoundsEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_StopAllSoundsEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEventRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEventRtpc = { "OnReadyEventRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnReadyEventRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEventRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEventRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEventRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEventRtpc = { "OnActivatedEventRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnActivatedEventRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEventRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEventRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEventRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEventRtpc = { "OnActivatedIdleEventRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnActivatedIdleEventRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEventRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEventRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEventRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEventRtpc = { "OnActivatedUsingEventRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnActivatedUsingEventRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEventRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEventRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledRtpc = { "OnCanceledRtpc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, OnCanceledRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_LockedPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_LockedPlayerController = { "LockedPlayerController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, LockedPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_LockedPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_LockedPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerController = { "ActivePlayerController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, ActivePlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerController = { "EquipPlayerController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, EquipPlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerController = { "ActiveUsingPlayerController", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, ActiveUsingPlayerController), Z_Construct_UClass_ASBZPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerFeedback = { "EquipPlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, EquipPlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerFeedback = { "ActivePlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, ActivePlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTool" },
		{ "ModuleRelativePath", "Public/SBZTool.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerFeedback = { "ActiveUsingPlayerFeedback", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTool, ActiveUsingPlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerFeedback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_ToolState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_ToolState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_InstigatorCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_StopAllSoundsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnReadyEventRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedEventRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedIdleEventRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnActivatedUsingEventRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_OnCanceledRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_LockedPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_EquipPlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_ActivePlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTool_Statics::NewProp_ActiveUsingPlayerFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTool_Statics::ClassParams = {
		&ASBZTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTool, 1411336863);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTool>()
	{
		return ASBZTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTool(Z_Construct_UClass_ASBZTool, &ASBZTool::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTool"), false, nullptr, nullptr, nullptr);

	void ASBZTool::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ToolState(TEXT("ToolState"));

		const bool bIsValid = true
			&& Name_ToolState == ClassReps[(int32)ENetFields_Private::ToolState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZTool"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
