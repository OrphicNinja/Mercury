// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitInventorySlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitInventorySlotData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitInventorySlotData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitInventorySlotData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventorySlotData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
// End Cross Module References
	void USBZSuitInventorySlotData::StaticRegisterNativesUSBZSuitInventorySlotData()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitInventorySlotData_NoRegister()
	{
		return USBZSuitInventorySlotData::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitInventorySlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitBaseSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuitBaseSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitInventorySlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventorySlotData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitInventorySlotData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitInventorySlotData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlotData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitInventorySlotData_Statics::NewProp_SuitBaseSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitInventorySlotData" },
		{ "ModuleRelativePath", "Public/SBZSuitInventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSuitInventorySlotData_Statics::NewProp_SuitBaseSlot = { "SuitBaseSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSuitInventorySlotData, SuitBaseSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSuitInventorySlotData_Statics::NewProp_SuitBaseSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitInventorySlotData_Statics::NewProp_SuitBaseSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSuitInventorySlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitInventorySlotData_Statics::NewProp_SuitBaseSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitInventorySlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitInventorySlotData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitInventorySlotData_Statics::ClassParams = {
		&USBZSuitInventorySlotData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSuitInventorySlotData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitInventorySlotData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitInventorySlotData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitInventorySlotData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitInventorySlotData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitInventorySlotData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitInventorySlotData, 3188139859);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitInventorySlotData>()
	{
		return USBZSuitInventorySlotData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitInventorySlotData(Z_Construct_UClass_USBZSuitInventorySlotData, &USBZSuitInventorySlotData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitInventorySlotData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitInventorySlotData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
