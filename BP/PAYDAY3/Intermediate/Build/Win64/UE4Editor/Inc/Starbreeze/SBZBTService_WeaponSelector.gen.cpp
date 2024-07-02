// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_WeaponSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_WeaponSelector() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_WeaponSelector_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_WeaponSelector();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
// End Cross Module References
	void USBZBTService_WeaponSelector::StaticRegisterNativesUSBZBTService_WeaponSelector()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_WeaponSelector_NoRegister()
	{
		return USBZBTService_WeaponSelector::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_WeaponSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EquipCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipBlockingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquipBlockingTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFailedAttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFailedAttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedTaskEquippableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackedTaskEquippableIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponDataArray_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponDataArray_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_WeaponSelector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_WeaponSelector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipCooldown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WeaponSelector" },
		{ "ModuleRelativePath", "Public/SBZBTService_WeaponSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipCooldown = { "EquipCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WeaponSelector, EquipCooldown), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipBlockingTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WeaponSelector" },
		{ "ModuleRelativePath", "Public/SBZBTService_WeaponSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipBlockingTags = { "EquipBlockingTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WeaponSelector, EquipBlockingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipBlockingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipBlockingTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_MinFailedAttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WeaponSelector" },
		{ "ModuleRelativePath", "Public/SBZBTService_WeaponSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_MinFailedAttackDistance = { "MinFailedAttackDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WeaponSelector, MinFailedAttackDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_MinFailedAttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_MinFailedAttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_TrackedTaskEquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WeaponSelector" },
		{ "ModuleRelativePath", "Public/SBZBTService_WeaponSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_TrackedTaskEquippableIndex = { "TrackedTaskEquippableIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WeaponSelector, TrackedTaskEquippableIndex), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_TrackedTaskEquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_TrackedTaskEquippableIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray_ValueProp = { "WeaponDataArray", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray_Key_KeyProp = { "WeaponDataArray_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_WeaponSelector" },
		{ "ModuleRelativePath", "Public/SBZBTService_WeaponSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray = { "WeaponDataArray", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_WeaponSelector, WeaponDataArray), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_EquipBlockingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_MinFailedAttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_TrackedTaskEquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::NewProp_WeaponDataArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_WeaponSelector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::ClassParams = {
		&USBZBTService_WeaponSelector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_WeaponSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_WeaponSelector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_WeaponSelector, 1794270861);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_WeaponSelector>()
	{
		return USBZBTService_WeaponSelector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_WeaponSelector(Z_Construct_UClass_USBZBTService_WeaponSelector, &USBZBTService_WeaponSelector::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_WeaponSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_WeaponSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
