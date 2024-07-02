// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZKeyItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZKeyItemData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKeyItemData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZKeyItemData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
	void USBZKeyItemData::StaticRegisterNativesUSBZKeyItemData()
	{
	}
	UClass* Z_Construct_UClass_USBZKeyItemData_NoRegister()
	{
		return USBZKeyItemData::StaticClass();
	}
	struct Z_Construct_UClass_USBZKeyItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KeyItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyItemIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZKeyItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKeyItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZKeyItemData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZKeyItemData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyItemData" },
		{ "ModuleRelativePath", "Public/SBZKeyItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemName = { "KeyItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKeyItemData, KeyItemName), METADATA_PARAMS(Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZKeyItemData" },
		{ "ModuleRelativePath", "Public/SBZKeyItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemIcon = { "KeyItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZKeyItemData, KeyItemIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZKeyItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZKeyItemData_Statics::NewProp_KeyItemIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZKeyItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZKeyItemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZKeyItemData_Statics::ClassParams = {
		&USBZKeyItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZKeyItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZKeyItemData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZKeyItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZKeyItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZKeyItemData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZKeyItemData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZKeyItemData, 2456665050);
	template<> STARBREEZE_API UClass* StaticClass<USBZKeyItemData>()
	{
		return USBZKeyItemData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZKeyItemData(Z_Construct_UClass_USBZKeyItemData, &USBZKeyItemData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZKeyItemData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZKeyItemData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
