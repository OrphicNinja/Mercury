// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewEquipmentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewEquipmentData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewEquipmentData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICrewEquipmentData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIEquipmentData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
// End Cross Module References
	void USBZAICrewEquipmentData::StaticRegisterNativesUSBZAICrewEquipmentData()
	{
	}
	UClass* Z_Construct_UClass_USBZAICrewEquipmentData_NoRegister()
	{
		return USBZAICrewEquipmentData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICrewEquipmentData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICrewEquipmentData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIEquipmentData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewEquipmentData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICrewEquipmentData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewEquipmentData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICrewEquipmentData_Statics::NewProp_MaskData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewEquipmentData" },
		{ "ModuleRelativePath", "Public/SBZAICrewEquipmentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICrewEquipmentData_Statics::NewProp_MaskData = { "MaskData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICrewEquipmentData, MaskData), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAICrewEquipmentData_Statics::NewProp_MaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewEquipmentData_Statics::NewProp_MaskData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICrewEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICrewEquipmentData_Statics::NewProp_MaskData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICrewEquipmentData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICrewEquipmentData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICrewEquipmentData_Statics::ClassParams = {
		&USBZAICrewEquipmentData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICrewEquipmentData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewEquipmentData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICrewEquipmentData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICrewEquipmentData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICrewEquipmentData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICrewEquipmentData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICrewEquipmentData, 3636012770);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICrewEquipmentData>()
	{
		return USBZAICrewEquipmentData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICrewEquipmentData(Z_Construct_UClass_USBZAICrewEquipmentData, &USBZAICrewEquipmentData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICrewEquipmentData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICrewEquipmentData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
