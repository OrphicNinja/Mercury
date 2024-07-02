// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGloveInventorySlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGloveInventorySlotData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveInventorySlotData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGloveInventorySlotData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventorySlotData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
// End Cross Module References
	void USBZGloveInventorySlotData::StaticRegisterNativesUSBZGloveInventorySlotData()
	{
	}
	UClass* Z_Construct_UClass_USBZGloveInventorySlotData_NoRegister()
	{
		return USBZGloveInventorySlotData::StaticClass();
	}
	struct Z_Construct_UClass_USBZGloveInventorySlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveBaseSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveBaseSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGloveInventorySlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventorySlotData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveInventorySlotData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGloveInventorySlotData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlotData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGloveInventorySlotData_Statics::NewProp_GloveBaseSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGloveInventorySlotData" },
		{ "ModuleRelativePath", "Public/SBZGloveInventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGloveInventorySlotData_Statics::NewProp_GloveBaseSlot = { "GloveBaseSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGloveInventorySlotData, GloveBaseSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGloveInventorySlotData_Statics::NewProp_GloveBaseSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveInventorySlotData_Statics::NewProp_GloveBaseSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGloveInventorySlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGloveInventorySlotData_Statics::NewProp_GloveBaseSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGloveInventorySlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGloveInventorySlotData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGloveInventorySlotData_Statics::ClassParams = {
		&USBZGloveInventorySlotData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGloveInventorySlotData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveInventorySlotData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGloveInventorySlotData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGloveInventorySlotData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGloveInventorySlotData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGloveInventorySlotData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGloveInventorySlotData, 3753367928);
	template<> STARBREEZE_API UClass* StaticClass<USBZGloveInventorySlotData>()
	{
		return USBZGloveInventorySlotData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGloveInventorySlotData(Z_Construct_UClass_USBZGloveInventorySlotData, &USBZGloveInventorySlotData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGloveInventorySlotData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGloveInventorySlotData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
