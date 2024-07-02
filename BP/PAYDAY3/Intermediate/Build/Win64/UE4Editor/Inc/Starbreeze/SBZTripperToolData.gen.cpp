// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTripperToolData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTripperToolData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTripperToolData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTripperToolData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZTripperToolData::StaticRegisterNativesUSBZTripperToolData()
	{
	}
	UClass* Z_Construct_UClass_USBZTripperToolData_NoRegister()
	{
		return USBZTripperToolData::StaticClass();
	}
	struct Z_Construct_UClass_USBZTripperToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTripperToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZToolData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTripperToolData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTripperToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTripperToolData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTripperToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTripperToolData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTripperToolData_Statics::ClassParams = {
		&USBZTripperToolData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZTripperToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTripperToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTripperToolData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTripperToolData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTripperToolData, 2490171935);
	template<> STARBREEZE_API UClass* StaticClass<USBZTripperToolData>()
	{
		return USBZTripperToolData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTripperToolData(Z_Construct_UClass_USBZTripperToolData, &USBZTripperToolData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTripperToolData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTripperToolData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
