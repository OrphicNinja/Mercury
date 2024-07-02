// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquipSpecificAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquipSpecificAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipSpecificAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquipSpecificAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHandleEquipmentAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEquipSpecificAbility::StaticRegisterNativesUSBZEquipSpecificAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZEquipSpecificAbility_NoRegister()
	{
		return USBZEquipSpecificAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquipSpecificAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEquippableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetEquippableIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquipSpecificAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZHandleEquipmentAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquipSpecificAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquipSpecificAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquipSpecificAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquipSpecificAbility_Statics::NewProp_TargetEquippableIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquipSpecificAbility" },
		{ "ModuleRelativePath", "Public/SBZEquipSpecificAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZEquipSpecificAbility_Statics::NewProp_TargetEquippableIndex = { "TargetEquippableIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquipSpecificAbility, TargetEquippableIndex), METADATA_PARAMS(Z_Construct_UClass_USBZEquipSpecificAbility_Statics::NewProp_TargetEquippableIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipSpecificAbility_Statics::NewProp_TargetEquippableIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEquipSpecificAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquipSpecificAbility_Statics::NewProp_TargetEquippableIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquipSpecificAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquipSpecificAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquipSpecificAbility_Statics::ClassParams = {
		&USBZEquipSpecificAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEquipSpecificAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipSpecificAbility_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquipSpecificAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquipSpecificAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquipSpecificAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquipSpecificAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquipSpecificAbility, 35186772);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquipSpecificAbility>()
	{
		return USBZEquipSpecificAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquipSpecificAbility(Z_Construct_UClass_USBZEquipSpecificAbility, &USBZEquipSpecificAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquipSpecificAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquipSpecificAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
