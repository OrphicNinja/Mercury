// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecuredBagTypeStatisticCriteria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecuredBagTypeStatisticCriteria() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZSecuredBagTypeStatisticCriteria::StaticRegisterNativesUSBZSecuredBagTypeStatisticCriteria()
	{
	}
	UClass* Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_NoRegister()
	{
		return USBZSecuredBagTypeStatisticCriteria::StaticClass();
	}
	struct Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTypeTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagTypeTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredSecuredCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredSecuredCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSecuredBagTypeStatisticCriteria.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagTypeStatisticCriteria.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_BagTypeTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecuredBagTypeStatisticCriteria" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagTypeStatisticCriteria.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_BagTypeTagContainer = { "BagTypeTagContainer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecuredBagTypeStatisticCriteria, BagTypeTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_BagTypeTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_BagTypeTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_RequiredSecuredCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecuredBagTypeStatisticCriteria" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagTypeStatisticCriteria.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_RequiredSecuredCount = { "RequiredSecuredCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecuredBagTypeStatisticCriteria, RequiredSecuredCount), METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_RequiredSecuredCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_RequiredSecuredCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_BagTypeTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::NewProp_RequiredSecuredCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSecuredBagTypeStatisticCriteria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::ClassParams = {
		&USBZSecuredBagTypeStatisticCriteria::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSecuredBagTypeStatisticCriteria, 1548831761);
	template<> STARBREEZE_API UClass* StaticClass<USBZSecuredBagTypeStatisticCriteria>()
	{
		return USBZSecuredBagTypeStatisticCriteria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSecuredBagTypeStatisticCriteria(Z_Construct_UClass_USBZSecuredBagTypeStatisticCriteria, &USBZSecuredBagTypeStatisticCriteria::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSecuredBagTypeStatisticCriteria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSecuredBagTypeStatisticCriteria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
