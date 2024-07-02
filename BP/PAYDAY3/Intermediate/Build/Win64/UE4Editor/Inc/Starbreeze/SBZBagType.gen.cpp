// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarryType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCarriedBag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecuredBag_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayEffectData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USBZBagType::StaticRegisterNativesUSBZBagType()
	{
	}
	UClass* Z_Construct_UClass_USBZBagType_NoRegister()
	{
		return USBZBagType::StaticClass();
	}
	struct Z_Construct_UClass_USBZBagType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BagValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WorldItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BackItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecuredItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SecuredItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayEffectsOnCarrying_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectsOnCarrying_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectsOnCarrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagState_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BagState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldShowOnEndScreen_MetaData[];
#endif
		static void NewProp_bShouldShowOnEndScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldShowOnEndScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDegradable_MetaData[];
#endif
		static void NewProp_bIsDegradable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDegradable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSecuring_MetaData[];
#endif
		static void NewProp_bAllowSecuring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSecuring;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DegradeTimeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DegradeTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DegradeTimeArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightTierOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightTierOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPersistentMarker_MetaData[];
#endif
		static void NewProp_bIsPersistentMarker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPersistentMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecureStatisticCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecureStatisticCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBagType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCarryType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBagType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_BagValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_BagValue = { "BagValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, BagValue), METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_BagValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_BagValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_ThrowSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_ThrowSpeed = { "ThrowSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, ThrowSpeed), METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_ThrowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_ThrowSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_WorldItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_WorldItem = { "WorldItem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, WorldItem), Z_Construct_UClass_ASBZBagItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_WorldItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_WorldItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_BackItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_BackItem = { "BackItem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, BackItem), Z_Construct_UClass_ASBZCarriedBag_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_BackItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_BackItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_SecuredItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_SecuredItem = { "SecuredItem", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, SecuredItem), Z_Construct_UClass_ASBZSecuredBag_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_SecuredItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_SecuredItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_GameplayEffectsOnCarrying_Inner = { "GameplayEffectsOnCarrying", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGameplayEffectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_GameplayEffectsOnCarrying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_GameplayEffectsOnCarrying = { "GameplayEffectsOnCarrying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, GameplayEffectsOnCarrying), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_GameplayEffectsOnCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_GameplayEffectsOnCarrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_BagState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_BagState = { "BagState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, BagState), METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_BagState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_BagState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_bShouldShowOnEndScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	void Z_Construct_UClass_USBZBagType_Statics::NewProp_bShouldShowOnEndScreen_SetBit(void* Obj)
	{
		((USBZBagType*)Obj)->bShouldShowOnEndScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_bShouldShowOnEndScreen = { "bShouldShowOnEndScreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBagType), &Z_Construct_UClass_USBZBagType_Statics::NewProp_bShouldShowOnEndScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_bShouldShowOnEndScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_bShouldShowOnEndScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsDegradable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	void Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsDegradable_SetBit(void* Obj)
	{
		((USBZBagType*)Obj)->bIsDegradable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsDegradable = { "bIsDegradable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBagType), &Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsDegradable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsDegradable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsDegradable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_bAllowSecuring_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	void Z_Construct_UClass_USBZBagType_Statics::NewProp_bAllowSecuring_SetBit(void* Obj)
	{
		((USBZBagType*)Obj)->bAllowSecuring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_bAllowSecuring = { "bAllowSecuring", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBagType), &Z_Construct_UClass_USBZBagType_Statics::NewProp_bAllowSecuring_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_bAllowSecuring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_bAllowSecuring_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_DegradeTimeArray_Inner = { "DegradeTimeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_DegradeTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_DegradeTimeArray = { "DegradeTimeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, DegradeTimeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_DegradeTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_DegradeTimeArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_WeightTierOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_WeightTierOffset = { "WeightTierOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, WeightTierOffset), METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_WeightTierOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_WeightTierOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerOffset = { "MarkerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, MarkerOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsPersistentMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	void Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsPersistentMarker_SetBit(void* Obj)
	{
		((USBZBagType*)Obj)->bIsPersistentMarker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsPersistentMarker = { "bIsPersistentMarker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBagType), &Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsPersistentMarker_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsPersistentMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsPersistentMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagType_Statics::NewProp_SecureStatisticCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagType" },
		{ "ModuleRelativePath", "Public/SBZBagType.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZBagType_Statics::NewProp_SecureStatisticCode = { "SecureStatisticCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBagType, SecureStatisticCode), METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::NewProp_SecureStatisticCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::NewProp_SecureStatisticCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBagType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_BagValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_ThrowSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_WorldItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_BackItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_SecuredItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_GameplayEffectsOnCarrying_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_GameplayEffectsOnCarrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_BagState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_bShouldShowOnEndScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsDegradable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_bAllowSecuring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_DegradeTimeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_DegradeTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_WeightTierOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_MarkerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_bIsPersistentMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBagType_Statics::NewProp_SecureStatisticCode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBagType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBagType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBagType_Statics::ClassParams = {
		&USBZBagType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBagType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBagType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBagType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBagType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBagType, 2587817202);
	template<> STARBREEZE_API UClass* StaticClass<USBZBagType>()
	{
		return USBZBagType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBagType(Z_Construct_UClass_USBZBagType, &USBZBagType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBagType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBagType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
