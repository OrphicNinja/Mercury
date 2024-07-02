// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemDataContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemDataContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDataContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemDataContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZItemCategory();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
// End Cross Module References
	void USBZItemDataContainer::StaticRegisterNativesUSBZItemDataContainer()
	{
	}
	UClass* Z_Construct_UClass_USBZItemDataContainer_NoRegister()
	{
		return USBZItemDataContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZItemDataContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryBaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryBaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZItemDataContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemDataContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZItemDataContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZItemDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_ItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_ItemCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemDataContainer" },
		{ "ModuleRelativePath", "Public/SBZItemDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_ItemCategory = { "ItemCategory", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZItemDataContainer, ItemCategory), Z_Construct_UEnum_Starbreeze_ESBZItemCategory, METADATA_PARAMS(Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_ItemCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_ItemCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_InventoryBaseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemDataContainer" },
		{ "ModuleRelativePath", "Public/SBZItemDataContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_InventoryBaseData = { "InventoryBaseData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZItemDataContainer, InventoryBaseData), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_InventoryBaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_InventoryBaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZItemDataContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_ItemCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_ItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZItemDataContainer_Statics::NewProp_InventoryBaseData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZItemDataContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZItemDataContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZItemDataContainer_Statics::ClassParams = {
		&USBZItemDataContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZItemDataContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemDataContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZItemDataContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemDataContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZItemDataContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZItemDataContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZItemDataContainer, 4002311111);
	template<> STARBREEZE_API UClass* StaticClass<USBZItemDataContainer>()
	{
		return USBZItemDataContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZItemDataContainer(Z_Construct_UClass_USBZItemDataContainer, &USBZItemDataContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZItemDataContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZItemDataContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
