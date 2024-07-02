// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIFBIVan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIFBIVan() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIFBIVan_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIFBIVan();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamageContext();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDamageEvent();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWheeledVehicle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPropDamageComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDownedByTypeVO();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnECMCountChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddedTime);
		P_GET_UBOOL(Z_Param_bInIsSignalScanActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnECMCountChanged(Z_Param_NewCount,Z_Param_OldCount,Z_Param_AddedTime,Z_Param_bInIsSignalScanActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnPlayerDefeated)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InPlayerState);
		P_GET_ENUM(EPD3DefeatState,Z_Param_OldDefeatState);
		P_GET_ENUM(EPD3DefeatState,Z_Param_NewDefeatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDefeated(Z_Param_InPlayerState,EPD3DefeatState(Z_Param_OldDefeatState),EPD3DefeatState(Z_Param_NewDefeatState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnPlayersInEscapeChanged)
	{
		P_GET_STRUCT_REF(FSBZPlayerInEscapeChangedEvent,Z_Param_Out_PlayerInEscapeChangedEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayersInEscapeChanged(Z_Param_Out_PlayerInEscapeChangedEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnPropDamaged)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PoolComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_GET_STRUCT_REF(FSBZPropDamageContext,Z_Param_Out_DamageContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPropDamaged(Z_Param_PoolComponent,Z_Param_Health,Z_Param_bDoCosmetics,Z_Param_Out_DamageContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnRep_IsFBIActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsFBIActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnTakeDamage)
	{
		P_GET_STRUCT_REF(FSBZDamageEvent,Z_Param_Out_DamageEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage(Z_Param_Out_DamageEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAIFBIVan::execOnVanArrived)
	{
		P_GET_OBJECT(ASBZWheeledVehicle,Z_Param_Vehicle);
		P_GET_OBJECT(ASBZSpline,Z_Param_Spline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVanArrived(Z_Param_Vehicle,Z_Param_Spline);
		P_NATIVE_END;
	}
	void ASBZAIFBIVan::StaticRegisterNativesASBZAIFBIVan()
	{
		UClass* Class = ASBZAIFBIVan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnECMCountChanged", &ASBZAIFBIVan::execOnECMCountChanged },
			{ "OnHeistStateChanged", &ASBZAIFBIVan::execOnHeistStateChanged },
			{ "OnPlayerDefeated", &ASBZAIFBIVan::execOnPlayerDefeated },
			{ "OnPlayersInEscapeChanged", &ASBZAIFBIVan::execOnPlayersInEscapeChanged },
			{ "OnPropDamaged", &ASBZAIFBIVan::execOnPropDamaged },
			{ "OnRep_IsFBIActive", &ASBZAIFBIVan::execOnRep_IsFBIActive },
			{ "OnTakeDamage", &ASBZAIFBIVan::execOnTakeDamage },
			{ "OnVanArrived", &ASBZAIFBIVan::execOnVanArrived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics
	{
		struct SBZAIFBIVan_eventOnECMCountChanged_Parms
		{
			int32 NewCount;
			int32 OldCount;
			float AddedTime;
			bool bInIsSignalScanActive;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddedTime;
		static void NewProp_bInIsSignalScanActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsSignalScanActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnECMCountChanged_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnECMCountChanged_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_AddedTime = { "AddedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnECMCountChanged_Parms, AddedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit(void* Obj)
	{
		((SBZAIFBIVan_eventOnECMCountChanged_Parms*)Obj)->bInIsSignalScanActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive = { "bInIsSignalScanActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIFBIVan_eventOnECMCountChanged_Parms), &Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_NewCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_OldCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_AddedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::NewProp_bInIsSignalScanActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnECMCountChanged", nullptr, nullptr, sizeof(SBZAIFBIVan_eventOnECMCountChanged_Parms), Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics
	{
		struct SBZAIFBIVan_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZAIFBIVan_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics
	{
		struct SBZAIFBIVan_eventOnPlayerDefeated_Parms
		{
			ASBZPlayerState* InPlayerState;
			EPD3DefeatState OldDefeatState;
			EPD3DefeatState NewDefeatState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewDefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnPlayerDefeated_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnPlayerDefeated_Parms, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_NewDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_NewDefeatState = { "NewDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnPlayerDefeated_Parms, NewDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_InPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_OldDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_NewDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::NewProp_NewDefeatState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnPlayerDefeated", nullptr, nullptr, sizeof(SBZAIFBIVan_eventOnPlayerDefeated_Parms), Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics
	{
		struct SBZAIFBIVan_eventOnPlayersInEscapeChanged_Parms
		{
			FSBZPlayerInEscapeChangedEvent PlayerInEscapeChangedEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInEscapeChangedEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInEscapeChangedEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::NewProp_PlayerInEscapeChangedEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::NewProp_PlayerInEscapeChangedEventData = { "PlayerInEscapeChangedEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnPlayersInEscapeChanged_Parms, PlayerInEscapeChangedEventData), Z_Construct_UScriptStruct_FSBZPlayerInEscapeChangedEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::NewProp_PlayerInEscapeChangedEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::NewProp_PlayerInEscapeChangedEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::NewProp_PlayerInEscapeChangedEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnPlayersInEscapeChanged", nullptr, nullptr, sizeof(SBZAIFBIVan_eventOnPlayersInEscapeChanged_Parms), Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics
	{
		struct SBZAIFBIVan_eventOnPropDamaged_Parms
		{
			UActorComponent* PoolComponent;
			float Health;
			bool bDoCosmetics;
			FSBZPropDamageContext DamageContext;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_PoolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_PoolComponent = { "PoolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnPropDamaged_Parms, PoolComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_PoolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_PoolComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnPropDamaged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZAIFBIVan_eventOnPropDamaged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIFBIVan_eventOnPropDamaged_Parms), &Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_DamageContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_DamageContext = { "DamageContext", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnPropDamaged_Parms, DamageContext), Z_Construct_UScriptStruct_FSBZPropDamageContext, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_DamageContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_DamageContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_PoolComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_bDoCosmetics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::NewProp_DamageContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnPropDamaged", nullptr, nullptr, sizeof(SBZAIFBIVan_eventOnPropDamaged_Parms), Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnRep_IsFBIActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics
	{
		struct SBZAIFBIVan_eventOnTakeDamage_Parms
		{
			FSBZDamageEvent DamageEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::NewProp_DamageEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::NewProp_DamageEventData = { "DamageEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnTakeDamage_Parms, DamageEventData), Z_Construct_UScriptStruct_FSBZDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::NewProp_DamageEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::NewProp_DamageEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::NewProp_DamageEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnTakeDamage", nullptr, nullptr, sizeof(SBZAIFBIVan_eventOnTakeDamage_Parms), Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics
	{
		struct SBZAIFBIVan_eventOnVanArrived_Parms
		{
			ASBZWheeledVehicle* Vehicle;
			ASBZSpline* Spline;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnVanArrived_Parms, Vehicle), Z_Construct_UClass_ASBZWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIFBIVan_eventOnVanArrived_Parms, Spline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::NewProp_Spline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIFBIVan, nullptr, "OnVanArrived", nullptr, nullptr, sizeof(SBZAIFBIVan_eventOnVanArrived_Parms), Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIFBIVan_NoRegister()
	{
		return ASBZAIFBIVan::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIFBIVan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropDamageComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropDamageComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaHitMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntennaHitMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaDestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntennaDestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedEffectOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestroyedEffectOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaDestroyedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntennaDestroyedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaDestroyedOnEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntennaDestroyedOnEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FBIArrivedVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FBIArrivedVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntennaDestroyedVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntennaDestroyedVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssaultBarkVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssaultBarkVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeArrivingVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscapeArrivingVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInEscapeZoneVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInEscapeZoneVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPlayersInEscapeZoneVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPlayersInEscapeZoneVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPlayerInCustodyVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPlayerInCustodyVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnotherPlayerInCustodyVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnotherPlayerInCustodyVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeFBIOnTheWayVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadeFBIOnTheWayVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeFBIHasArrivedVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadeFBIHasArrivedVO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeFBIReminderVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadeFBIReminderVO;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DownedByTypeVOs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownedByTypeVOs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DownedByTypeVOs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssaultCommentIntervalSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssaultCommentIntervalSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssaultCommentRandomChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssaultCommentRandomChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeVOCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EscapeVOCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeReminderVOChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadeReminderVOChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeReminderVOCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadeReminderVOCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFBIActive_MetaData[];
#endif
		static void NewProp_bIsFBIActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFBIActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMOutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ECMOutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECMOutlineAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ECMOutlineAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIFBIVan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZWheeledVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIFBIVan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnECMCountChanged, "OnECMCountChanged" }, // 3566344096
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnHeistStateChanged, "OnHeistStateChanged" }, // 1416084570
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnPlayerDefeated, "OnPlayerDefeated" }, // 262156916
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnPlayersInEscapeChanged, "OnPlayersInEscapeChanged" }, // 347390714
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnPropDamaged, "OnPropDamaged" }, // 1660963037
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnRep_IsFBIActive, "OnRep_IsFBIActive" }, // 3373140661
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnTakeDamage, "OnTakeDamage" }, // 21422908
		{ &Z_Construct_UFunction_ASBZAIFBIVan_OnVanArrived, "OnVanArrived" }, // 765923625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SBZAIFBIVan.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PropDamageComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PropDamageComponent = { "PropDamageComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, PropDamageComponent), Z_Construct_UClass_USBZPropDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PropDamageComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PropDamageComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaHitMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaHitMeshComponent = { "AntennaHitMeshComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AntennaHitMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaHitMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaHitMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedEffect = { "AntennaDestroyedEffect", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DestroyedEffectOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DestroyedEffectOffset = { "DestroyedEffectOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, DestroyedEffectOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DestroyedEffectOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DestroyedEffectOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedMesh = { "AntennaDestroyedMesh", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedOnEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedOnEvent = { "AntennaDestroyedOnEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedOnEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedOnEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedOnEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_VoiceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_VoiceComponent = { "VoiceComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, VoiceComponent), Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_VoiceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_VoiceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FBIArrivedVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FBIArrivedVO = { "FBIArrivedVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, FBIArrivedVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FBIArrivedVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FBIArrivedVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedVO = { "AntennaDestroyedVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AntennaDestroyedVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultBarkVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultBarkVO = { "AssaultBarkVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AssaultBarkVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultBarkVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultBarkVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeArrivingVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeArrivingVO = { "EscapeArrivingVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, EscapeArrivingVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeArrivingVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeArrivingVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PlayerInEscapeZoneVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PlayerInEscapeZoneVO = { "PlayerInEscapeZoneVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, PlayerInEscapeZoneVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PlayerInEscapeZoneVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PlayerInEscapeZoneVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AllPlayersInEscapeZoneVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AllPlayersInEscapeZoneVO = { "AllPlayersInEscapeZoneVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AllPlayersInEscapeZoneVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AllPlayersInEscapeZoneVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AllPlayersInEscapeZoneVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FirstPlayerInCustodyVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FirstPlayerInCustodyVO = { "FirstPlayerInCustodyVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, FirstPlayerInCustodyVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FirstPlayerInCustodyVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FirstPlayerInCustodyVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AnotherPlayerInCustodyVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AnotherPlayerInCustodyVO = { "AnotherPlayerInCustodyVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AnotherPlayerInCustodyVO), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AnotherPlayerInCustodyVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AnotherPlayerInCustodyVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIOnTheWayVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIOnTheWayVO = { "ShadeFBIOnTheWayVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, ShadeFBIOnTheWayVO), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIOnTheWayVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIOnTheWayVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIHasArrivedVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIHasArrivedVO = { "ShadeFBIHasArrivedVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, ShadeFBIHasArrivedVO), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIHasArrivedVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIHasArrivedVO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIReminderVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIReminderVO = { "ShadeFBIReminderVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, ShadeFBIReminderVO), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIReminderVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIReminderVO_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DownedByTypeVOs_Inner = { "DownedByTypeVOs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDownedByTypeVO, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DownedByTypeVOs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DownedByTypeVOs = { "DownedByTypeVOs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, DownedByTypeVOs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DownedByTypeVOs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DownedByTypeVOs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentIntervalSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentIntervalSeconds = { "AssaultCommentIntervalSeconds", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AssaultCommentIntervalSeconds), METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentIntervalSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentIntervalSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentRandomChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentRandomChance = { "AssaultCommentRandomChance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, AssaultCommentRandomChance), METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentRandomChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentRandomChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeVOCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeVOCooldown = { "EscapeVOCooldown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, EscapeVOCooldown), METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeVOCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeVOCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOChance = { "ShadeReminderVOChance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, ShadeReminderVOChance), METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOCooldown = { "ShadeReminderVOCooldown", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, ShadeReminderVOCooldown), METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_bIsFBIActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_bIsFBIActive_SetBit(void* Obj)
	{
		((ASBZAIFBIVan*)Obj)->bIsFBIActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_bIsFBIActive = { "bIsFBIActive", "OnRep_IsFBIActive", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIFBIVan), &Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_bIsFBIActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_bIsFBIActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_bIsFBIActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineComponent = { "ECMOutlineComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, ECMOutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIFBIVan" },
		{ "ModuleRelativePath", "Public/SBZAIFBIVan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineAsset = { "ECMOutlineAsset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIFBIVan, ECMOutlineAsset), Z_Construct_UClass_USBZOutlineAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIFBIVan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PropDamageComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaHitMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DestroyedEffectOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedOnEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_VoiceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FBIArrivedVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AntennaDestroyedVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultBarkVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeArrivingVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_PlayerInEscapeZoneVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AllPlayersInEscapeZoneVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_FirstPlayerInCustodyVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AnotherPlayerInCustodyVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIOnTheWayVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIHasArrivedVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeFBIReminderVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DownedByTypeVOs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_DownedByTypeVOs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentIntervalSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_AssaultCommentRandomChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_EscapeVOCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ShadeReminderVOCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_bIsFBIActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIFBIVan_Statics::NewProp_ECMOutlineAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIFBIVan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIFBIVan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIFBIVan_Statics::ClassParams = {
		&ASBZAIFBIVan::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIFBIVan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIFBIVan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIFBIVan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIFBIVan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIFBIVan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIFBIVan, 1388882846);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIFBIVan>()
	{
		return ASBZAIFBIVan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIFBIVan(Z_Construct_UClass_ASBZAIFBIVan, &ASBZAIFBIVan::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIFBIVan"), false, nullptr, nullptr, nullptr);

	void ASBZAIFBIVan::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsFBIActive(TEXT("bIsFBIActive"));

		const bool bIsValid = true
			&& Name_bIsFBIActive == ClassReps[(int32)ENetFields_Private::bIsFBIActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAIFBIVan"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIFBIVan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
