// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBaseWeaponData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBaseWeaponData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSwayData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHeadbobData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponProgressionData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAdditiveMoveData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponTankingData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponWallReactionData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponTargetingData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIScorer_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStickerPosition();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternAreaDefinition();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternAreaData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBaseWeaponData::execGetNbStickerPlacements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNbStickerPlacements();
		P_NATIVE_END;
	}
	void USBZBaseWeaponData::StaticRegisterNativesUSBZBaseWeaponData()
	{
		UClass* Class = USBZBaseWeaponData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNbStickerPlacements", &USBZBaseWeaponData::execGetNbStickerPlacements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics
	{
		struct SBZBaseWeaponData_eventGetNbStickerPlacements_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBaseWeaponData_eventGetNbStickerPlacements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBaseWeaponData, nullptr, "GetNbStickerPlacements", nullptr, nullptr, sizeof(SBZBaseWeaponData_eventGetNbStickerPlacements_Parms), Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister()
	{
		return USBZBaseWeaponData::StaticClass();
	}
	struct Z_Construct_UClass_USBZBaseWeaponData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwayData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwayData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadbobData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadbobData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemProgression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSprintMoveData_MetaData[];
#endif
		static void NewProp_bUseSprintMoveData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSprintMoveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveSprintMoveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditiveSprintMoveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditiveMoveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingAdditiveMoveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetingAdditiveMoveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveMoveLeftHandEquippedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditiveMoveLeftHandEquippedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingAdditiveMoveLeftHandEquippedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetingAdditiveMoveLeftHandEquippedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceAdditiveMoveFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceAdditiveMoveFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceAdditiveMoveInterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceAdditiveMoveInterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStartAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpStartAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStartADSAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpStartADSAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpLandAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpLandAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpLandADSAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpLandADSAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchADSAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchADSAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UncrouchAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchADSAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UncrouchADSAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultLandAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VaultLandAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultLandADSAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VaultLandADSAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TankingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TankingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallReactionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverkillProgressionProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverkillProgressionProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchHandRigTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrouchHandRigTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHandRigTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultHandRigTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingRigOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetingRigOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetingData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedTargetingArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTargetingArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedTargetingArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLookOffsetCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PitchLookOffsetCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeModification_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeModification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPartsTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponPartsTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModularConfiguration_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModularConfiguration_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModularConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Family_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Family;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInaccurateWeapon_MetaData[];
#endif
		static void NewProp_bIsInaccurateWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInaccurateWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSelectionScorer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponSelectionScorer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDeselectionTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDeselectionTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldApplyWeaponSwitchCooldown_MetaData[];
#endif
		static void NewProp_bShouldApplyWeaponSwitchCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldApplyWeaponSwitchCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAttackWhileMoving_MetaData[];
#endif
		static void NewProp_bCanAttackWhileMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAttackWhileMoving;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StickerPlacements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickerPlacements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StickerPlacements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatternAreas_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatternAreas_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatternAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PatternAreas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBaseWeaponData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippableData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBaseWeaponData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBaseWeaponData_GetNbStickerPlacements, "GetNbStickerPlacements" }, // 4195291081
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBaseWeaponData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_SwayData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_SwayData = { "SwayData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, SwayData), Z_Construct_UClass_USBZWeaponSwayData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_SwayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_SwayData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_HeadbobData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_HeadbobData = { "HeadbobData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, HeadbobData), Z_Construct_UClass_USBZHeadbobData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_HeadbobData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_HeadbobData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ItemProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ItemProgression = { "ItemProgression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, ItemProgression), Z_Construct_UClass_USBZWeaponProgressionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ItemProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ItemProgression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bUseSprintMoveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bUseSprintMoveData_SetBit(void* Obj)
	{
		((USBZBaseWeaponData*)Obj)->bUseSprintMoveData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bUseSprintMoveData = { "bUseSprintMoveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBaseWeaponData), &Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bUseSprintMoveData_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bUseSprintMoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bUseSprintMoveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveSprintMoveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveSprintMoveData = { "AdditiveSprintMoveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, AdditiveSprintMoveData), Z_Construct_UScriptStruct_FSBZAdditiveMoveData, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveSprintMoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveSprintMoveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveData = { "AdditiveMoveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, AdditiveMoveData), Z_Construct_UScriptStruct_FSBZAdditiveMoveData, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveData = { "TargetingAdditiveMoveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, TargetingAdditiveMoveData), Z_Construct_UScriptStruct_FSBZAdditiveMoveData, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveLeftHandEquippedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveLeftHandEquippedData = { "AdditiveMoveLeftHandEquippedData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, AdditiveMoveLeftHandEquippedData), Z_Construct_UScriptStruct_FSBZAdditiveMoveData, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveLeftHandEquippedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveLeftHandEquippedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveLeftHandEquippedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveLeftHandEquippedData = { "TargetingAdditiveMoveLeftHandEquippedData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, TargetingAdditiveMoveLeftHandEquippedData), Z_Construct_UScriptStruct_FSBZAdditiveMoveData, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveLeftHandEquippedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveLeftHandEquippedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveFactor = { "TurnInPlaceAdditiveMoveFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, TurnInPlaceAdditiveMoveFactor), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveInterSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveInterSpeed = { "TurnInPlaceAdditiveMoveInterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, TurnInPlaceAdditiveMoveInterSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveInterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveInterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartAlpha = { "JumpStartAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, JumpStartAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartADSAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartADSAlpha = { "JumpStartADSAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, JumpStartADSAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartADSAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartADSAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandAlpha = { "JumpLandAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, JumpLandAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandADSAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandADSAlpha = { "JumpLandADSAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, JumpLandADSAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandADSAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandADSAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchAlpha = { "CrouchAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, CrouchAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchADSAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchADSAlpha = { "CrouchADSAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, CrouchADSAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchADSAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchADSAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchAlpha = { "UncrouchAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, UncrouchAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchADSAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchADSAlpha = { "UncrouchADSAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, UncrouchADSAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchADSAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchADSAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandAlpha = { "VaultLandAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, VaultLandAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandADSAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandADSAlpha = { "VaultLandADSAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, VaultLandADSAlpha), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandADSAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandADSAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TankingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TankingData = { "TankingData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, TankingData), Z_Construct_UClass_USBZWeaponTankingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TankingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TankingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WallReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WallReactionData = { "WallReactionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, WallReactionData), Z_Construct_UClass_USBZWeaponWallReactionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WallReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WallReactionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_OverkillProgressionProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_OverkillProgressionProgress = { "OverkillProgressionProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, OverkillProgressionProgress), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_OverkillProgressionProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_OverkillProgressionProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchHandRigTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchHandRigTransform = { "CrouchHandRigTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, CrouchHandRigTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchHandRigTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchHandRigTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_DefaultHandRigTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_DefaultHandRigTransform = { "DefaultHandRigTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, DefaultHandRigTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_DefaultHandRigTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_DefaultHandRigTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingRigOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingRigOffset = { "TargetingRigOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, TargetingRigOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingRigOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingRigOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingData = { "TargetingData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, TargetingData), Z_Construct_UClass_USBZWeaponTargetingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CachedTargetingArray_Inner = { "CachedTargetingArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CachedTargetingArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CachedTargetingArray = { "CachedTargetingArray", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, CachedTargetingArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CachedTargetingArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CachedTargetingArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PitchLookOffsetCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PitchLookOffsetCurve = { "PitchLookOffsetCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, PitchLookOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PitchLookOffsetCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PitchLookOffsetCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AttributeModification_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AttributeModification = { "AttributeModification", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, AttributeModification), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AttributeModification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AttributeModification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponPartsTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponPartsTags = { "WeaponPartsTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, WeaponPartsTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponPartsTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponPartsTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration_ValueProp = { "ModularConfiguration", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZModularPartSlotConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration_Key_KeyProp = { "ModularConfiguration_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponPartSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration = { "ModularConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, ModularConfiguration), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Family_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Family = { "Family", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, Family), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Family_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Family_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bIsInaccurateWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bIsInaccurateWeapon_SetBit(void* Obj)
	{
		((USBZBaseWeaponData*)Obj)->bIsInaccurateWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bIsInaccurateWeapon = { "bIsInaccurateWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBaseWeaponData), &Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bIsInaccurateWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bIsInaccurateWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bIsInaccurateWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponSelectionScorer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponSelectionScorer = { "WeaponSelectionScorer", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, WeaponSelectionScorer), Z_Construct_UClass_USBZAIScorer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponSelectionScorer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponSelectionScorer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAIScorer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponDeselectionTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponDeselectionTimer = { "WeaponDeselectionTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, WeaponDeselectionTimer), METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponDeselectionTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponDeselectionTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bShouldApplyWeaponSwitchCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bShouldApplyWeaponSwitchCooldown_SetBit(void* Obj)
	{
		((USBZBaseWeaponData*)Obj)->bShouldApplyWeaponSwitchCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bShouldApplyWeaponSwitchCooldown = { "bShouldApplyWeaponSwitchCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBaseWeaponData), &Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bShouldApplyWeaponSwitchCooldown_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bShouldApplyWeaponSwitchCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bShouldApplyWeaponSwitchCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bCanAttackWhileMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	void Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bCanAttackWhileMoving_SetBit(void* Obj)
	{
		((USBZBaseWeaponData*)Obj)->bCanAttackWhileMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bCanAttackWhileMoving = { "bCanAttackWhileMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBaseWeaponData), &Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bCanAttackWhileMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bCanAttackWhileMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bCanAttackWhileMoving_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_StickerPlacements_Inner = { "StickerPlacements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponStickerPosition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_StickerPlacements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_StickerPlacements = { "StickerPlacements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, StickerPlacements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_StickerPlacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_StickerPlacements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas_ValueProp = { "PatternAreas", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponPatternAreaDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas_Key_KeyProp = { "PatternAreas_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponPatternAreaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBaseWeaponData" },
		{ "ModuleRelativePath", "Public/SBZBaseWeaponData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas = { "PatternAreas", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBaseWeaponData, PatternAreas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBaseWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_SwayData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_HeadbobData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ItemProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bUseSprintMoveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveSprintMoveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AdditiveMoveLeftHandEquippedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingAdditiveMoveLeftHandEquippedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TurnInPlaceAdditiveMoveInterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpStartADSAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_JumpLandADSAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchADSAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_UncrouchADSAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_VaultLandADSAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TankingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WallReactionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_OverkillProgressionProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CrouchHandRigTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_DefaultHandRigTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingRigOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_TargetingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CachedTargetingArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_CachedTargetingArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PitchLookOffsetCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_AttributeModification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponPartsTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_ModularConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Family,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bIsInaccurateWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponSelectionScorer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_WeaponDeselectionTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bShouldApplyWeaponSwitchCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_bCanAttackWhileMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_StickerPlacements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_StickerPlacements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBaseWeaponData_Statics::NewProp_PatternAreas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBaseWeaponData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBaseWeaponData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBaseWeaponData_Statics::ClassParams = {
		&USBZBaseWeaponData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBaseWeaponData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBaseWeaponData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBaseWeaponData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBaseWeaponData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBaseWeaponData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBaseWeaponData, 2955130400);
	template<> STARBREEZE_API UClass* StaticClass<USBZBaseWeaponData>()
	{
		return USBZBaseWeaponData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBaseWeaponData(Z_Construct_UClass_USBZBaseWeaponData, &USBZBaseWeaponData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBaseWeaponData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBaseWeaponData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
