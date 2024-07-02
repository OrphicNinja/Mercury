// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableArmorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableArmorData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableArmorData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableArmorData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlaceableArmorData::StaticRegisterNativesUSBZPlaceableArmorData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceableArmorData_NoRegister()
	{
		return USBZPlaceableArmorData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceableArmorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceableArmorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlaceableData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableArmorData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableArmorData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableArmorData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceableArmorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceableArmorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceableArmorData_Statics::ClassParams = {
		&USBZPlaceableArmorData::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableArmorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableArmorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceableArmorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceableArmorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceableArmorData, 4137424279);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceableArmorData>()
	{
		return USBZPlaceableArmorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceableArmorData(Z_Construct_UClass_USBZPlaceableArmorData, &USBZPlaceableArmorData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceableArmorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceableArmorData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
