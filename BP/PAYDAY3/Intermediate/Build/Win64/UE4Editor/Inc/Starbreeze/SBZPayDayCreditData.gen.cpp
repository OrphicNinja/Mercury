// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPayDayCreditData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPayDayCreditData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPayDayCreditData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPayDayCreditData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPayDayCreditData::StaticRegisterNativesUSBZPayDayCreditData()
	{
	}
	UClass* Z_Construct_UClass_USBZPayDayCreditData_NoRegister()
	{
		return USBZPayDayCreditData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPayDayCreditData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternaltemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternaltemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPayDayCreditData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPayDayCreditData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPayDayCreditData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPayDayCreditData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPayDayCreditData_Statics::NewProp_ExternaltemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPayDayCreditData" },
		{ "ModuleRelativePath", "Public/SBZPayDayCreditData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZPayDayCreditData_Statics::NewProp_ExternaltemId = { "ExternaltemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPayDayCreditData, ExternaltemId), METADATA_PARAMS(Z_Construct_UClass_USBZPayDayCreditData_Statics::NewProp_ExternaltemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPayDayCreditData_Statics::NewProp_ExternaltemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPayDayCreditData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPayDayCreditData_Statics::NewProp_ExternaltemId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPayDayCreditData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPayDayCreditData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPayDayCreditData_Statics::ClassParams = {
		&USBZPayDayCreditData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPayDayCreditData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPayDayCreditData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPayDayCreditData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPayDayCreditData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPayDayCreditData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPayDayCreditData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPayDayCreditData, 4165430748);
	template<> STARBREEZE_API UClass* StaticClass<USBZPayDayCreditData>()
	{
		return USBZPayDayCreditData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPayDayCreditData(Z_Construct_UClass_USBZPayDayCreditData, &USBZPayDayCreditData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPayDayCreditData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPayDayCreditData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
