// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMaskInventorySlotData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMaskInventorySlotData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskInventorySlotData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskInventorySlotData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventorySlotData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
// End Cross Module References
	void USBZMaskInventorySlotData::StaticRegisterNativesUSBZMaskInventorySlotData()
	{
	}
	UClass* Z_Construct_UClass_USBZMaskInventorySlotData_NoRegister()
	{
		return USBZMaskInventorySlotData::StaticClass();
	}
	struct Z_Construct_UClass_USBZMaskInventorySlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskMouldSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskMouldSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMaskInventorySlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventorySlotData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskInventorySlotData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMaskInventorySlotData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlotData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMaskInventorySlotData_Statics::NewProp_MaskMouldSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMaskInventorySlotData" },
		{ "ModuleRelativePath", "Public/SBZMaskInventorySlotData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMaskInventorySlotData_Statics::NewProp_MaskMouldSlot = { "MaskMouldSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMaskInventorySlotData, MaskMouldSlot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMaskInventorySlotData_Statics::NewProp_MaskMouldSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskInventorySlotData_Statics::NewProp_MaskMouldSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMaskInventorySlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMaskInventorySlotData_Statics::NewProp_MaskMouldSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMaskInventorySlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMaskInventorySlotData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMaskInventorySlotData_Statics::ClassParams = {
		&USBZMaskInventorySlotData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMaskInventorySlotData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskInventorySlotData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMaskInventorySlotData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMaskInventorySlotData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMaskInventorySlotData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMaskInventorySlotData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMaskInventorySlotData, 4012645105);
	template<> STARBREEZE_API UClass* StaticClass<USBZMaskInventorySlotData>()
	{
		return USBZMaskInventorySlotData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMaskInventorySlotData(Z_Construct_UClass_USBZMaskInventorySlotData, &USBZMaskInventorySlotData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMaskInventorySlotData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMaskInventorySlotData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
