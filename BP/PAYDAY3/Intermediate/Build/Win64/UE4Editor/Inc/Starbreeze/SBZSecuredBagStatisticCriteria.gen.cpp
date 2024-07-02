// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecuredBagStatisticCriteria.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecuredBagStatisticCriteria() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecuredBagStatisticCriteria_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSecuredBagStatisticCriteria();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStatisticCriteriaData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSecuredBagStatisticCriteria::StaticRegisterNativesUSBZSecuredBagStatisticCriteria()
	{
	}
	UClass* Z_Construct_UClass_USBZSecuredBagStatisticCriteria_NoRegister()
	{
		return USBZSecuredBagStatisticCriteria::StaticClass();
	}
	struct Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredSecuredCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredSecuredCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStatisticCriteriaData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSecuredBagStatisticCriteria.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagStatisticCriteria.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::NewProp_RequiredSecuredCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSecuredBagStatisticCriteria" },
		{ "ModuleRelativePath", "Public/SBZSecuredBagStatisticCriteria.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::NewProp_RequiredSecuredCount = { "RequiredSecuredCount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSecuredBagStatisticCriteria, RequiredSecuredCount), METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::NewProp_RequiredSecuredCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::NewProp_RequiredSecuredCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::NewProp_RequiredSecuredCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSecuredBagStatisticCriteria>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::ClassParams = {
		&USBZSecuredBagStatisticCriteria::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSecuredBagStatisticCriteria()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSecuredBagStatisticCriteria_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSecuredBagStatisticCriteria, 2168322044);
	template<> STARBREEZE_API UClass* StaticClass<USBZSecuredBagStatisticCriteria>()
	{
		return USBZSecuredBagStatisticCriteria::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSecuredBagStatisticCriteria(Z_Construct_UClass_USBZSecuredBagStatisticCriteria, &USBZSecuredBagStatisticCriteria::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSecuredBagStatisticCriteria"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSecuredBagStatisticCriteria);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
