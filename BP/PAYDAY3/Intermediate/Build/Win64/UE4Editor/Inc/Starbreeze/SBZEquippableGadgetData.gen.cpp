// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableGadgetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableGadgetData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableGadgetData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableGadgetData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartCustomData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGadget_NoRegister();
// End Cross Module References
	void USBZEquippableGadgetData::StaticRegisterNativesUSBZEquippableGadgetData()
	{
	}
	UClass* Z_Construct_UClass_USBZEquippableGadgetData_NoRegister()
	{
		return USBZEquippableGadgetData::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippableGadgetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GadgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GadgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnSocket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippableGadgetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippablePartCustomData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableGadgetData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippableGadgetData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableGadgetData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_GadgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableGadgetData" },
		{ "ModuleRelativePath", "Public/SBZEquippableGadgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_GadgetClass = { "GadgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableGadgetData, GadgetClass), Z_Construct_UClass_ASBZGadget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_GadgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_GadgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_SpawnSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableGadgetData" },
		{ "ModuleRelativePath", "Public/SBZEquippableGadgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_SpawnSocket = { "SpawnSocket", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableGadgetData, SpawnSocket), METADATA_PARAMS(Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_SpawnSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_SpawnSocket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEquippableGadgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_GadgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableGadgetData_Statics::NewProp_SpawnSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippableGadgetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippableGadgetData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippableGadgetData_Statics::ClassParams = {
		&USBZEquippableGadgetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEquippableGadgetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableGadgetData_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippableGadgetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableGadgetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippableGadgetData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippableGadgetData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippableGadgetData, 3176862443);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippableGadgetData>()
	{
		return USBZEquippableGadgetData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippableGadgetData(Z_Construct_UClass_USBZEquippableGadgetData, &USBZEquippableGadgetData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippableGadgetData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippableGadgetData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
