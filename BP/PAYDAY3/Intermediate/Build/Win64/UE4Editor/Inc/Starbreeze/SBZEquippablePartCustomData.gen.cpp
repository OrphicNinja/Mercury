// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippablePartCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippablePartCustomData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEquippablePartCustomData::StaticRegisterNativesUSBZEquippablePartCustomData()
	{
	}
	UClass* Z_Construct_UClass_USBZEquippablePartCustomData_NoRegister()
	{
		return USBZEquippablePartCustomData::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippablePartCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippablePartCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippablePartCustomData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippablePartCustomData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippablePartCustomData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippablePartCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippablePartCustomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippablePartCustomData_Statics::ClassParams = {
		&USBZEquippablePartCustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippablePartCustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippablePartCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippablePartCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippablePartCustomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippablePartCustomData, 4152488248);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippablePartCustomData>()
	{
		return USBZEquippablePartCustomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippablePartCustomData(Z_Construct_UClass_USBZEquippablePartCustomData, &USBZEquippablePartCustomData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippablePartCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippablePartCustomData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
