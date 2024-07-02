// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_RequestArrest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_RequestArrest() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_RequestArrest_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_RequestArrest();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_RequestArrest::StaticRegisterNativesUSBZBTTask_RequestArrest()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_RequestArrest_NoRegister()
	{
		return USBZBTTask_RequestArrest::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_RequestArrest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_RequestArrest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RequestArrest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::NewProp_MaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_RequestArrest" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RequestArrest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_RequestArrest, MaxRange), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::NewProp_MaxRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::NewProp_MaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_RequestArrest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::ClassParams = {
		&USBZBTTask_RequestArrest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_RequestArrest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_RequestArrest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_RequestArrest, 3849805471);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_RequestArrest>()
	{
		return USBZBTTask_RequestArrest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_RequestArrest(Z_Construct_UClass_USBZBTTask_RequestArrest, &USBZBTTask_RequestArrest::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_RequestArrest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_RequestArrest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
