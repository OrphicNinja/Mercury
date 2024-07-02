// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirPathFinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirPathFinder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAirPathFinder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAirPathFinder();
	AIMODULE_API UClass* Z_Construct_UClass_UAISubsystem();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirNavigation_NoRegister();
// End Cross Module References
	void USBZAirPathFinder::StaticRegisterNativesUSBZAirPathFinder()
	{
	}
	UClass* Z_Construct_UClass_USBZAirPathFinder_NoRegister()
	{
		return USBZAirPathFinder::StaticClass();
	}
	struct Z_Construct_UClass_USBZAirPathFinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAirPathFinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAirPathFinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAirPathFinder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAirPathFinder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAirPathFinder_Statics::NewProp_NavigationData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathFinder" },
		{ "ModuleRelativePath", "Public/SBZAirPathFinder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAirPathFinder_Statics::NewProp_NavigationData = { "NavigationData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAirPathFinder, NavigationData), Z_Construct_UClass_ASBZAirNavigation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAirPathFinder_Statics::NewProp_NavigationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAirPathFinder_Statics::NewProp_NavigationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAirPathFinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAirPathFinder_Statics::NewProp_NavigationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAirPathFinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAirPathFinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAirPathFinder_Statics::ClassParams = {
		&USBZAirPathFinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAirPathFinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAirPathFinder_Statics::PropPointers),
		0,
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAirPathFinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAirPathFinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAirPathFinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAirPathFinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAirPathFinder, 2420142366);
	template<> STARBREEZE_API UClass* StaticClass<USBZAirPathFinder>()
	{
		return USBZAirPathFinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAirPathFinder(Z_Construct_UClass_USBZAirPathFinder, &USBZAirPathFinder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAirPathFinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAirPathFinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
