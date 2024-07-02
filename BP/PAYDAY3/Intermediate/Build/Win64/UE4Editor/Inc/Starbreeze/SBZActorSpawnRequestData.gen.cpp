// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorSpawnRequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorSpawnRequestData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorSpawnRequestData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActorSpawnRequestData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USBZActorSpawnRequestData::StaticRegisterNativesUSBZActorSpawnRequestData()
	{
	}
	UClass* Z_Construct_UClass_USBZActorSpawnRequestData_NoRegister()
	{
		return USBZActorSpawnRequestData::StaticClass();
	}
	struct Z_Construct_UClass_USBZActorSpawnRequestData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassVariationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassVariationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassVariationArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZActorSpawnRequestData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorSpawnRequestData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActorSpawnRequestData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZActorSpawnRequestData_Statics::NewProp_ClassVariationArray_Inner = { "ClassVariationArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZActorSpawnRequestData_Statics::NewProp_ClassVariationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRequestData" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZActorSpawnRequestData_Statics::NewProp_ClassVariationArray = { "ClassVariationArray", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZActorSpawnRequestData, ClassVariationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZActorSpawnRequestData_Statics::NewProp_ClassVariationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorSpawnRequestData_Statics::NewProp_ClassVariationArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZActorSpawnRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorSpawnRequestData_Statics::NewProp_ClassVariationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZActorSpawnRequestData_Statics::NewProp_ClassVariationArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZActorSpawnRequestData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZActorSpawnRequestData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZActorSpawnRequestData_Statics::ClassParams = {
		&USBZActorSpawnRequestData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZActorSpawnRequestData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorSpawnRequestData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZActorSpawnRequestData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZActorSpawnRequestData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZActorSpawnRequestData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZActorSpawnRequestData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZActorSpawnRequestData, 2335517769);
	template<> STARBREEZE_API UClass* StaticClass<USBZActorSpawnRequestData>()
	{
		return USBZActorSpawnRequestData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZActorSpawnRequestData(Z_Construct_UClass_USBZActorSpawnRequestData, &USBZActorSpawnRequestData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZActorSpawnRequestData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZActorSpawnRequestData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
