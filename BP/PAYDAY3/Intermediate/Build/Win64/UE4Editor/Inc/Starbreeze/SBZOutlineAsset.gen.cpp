// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZOutlineAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZOutlineAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZOutlineAsset::StaticRegisterNativesUSBZOutlineAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZOutlineAsset_NoRegister()
	{
		return USBZOutlineAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZOutlineAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ColorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZOutlineAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZOutlineAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZOutlineAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineAsset" },
		{ "ModuleRelativePath", "Public/SBZOutlineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineAsset, Priority), METADATA_PARAMS(Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_ColorIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineAsset" },
		{ "ModuleRelativePath", "Public/SBZOutlineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_ColorIndex = { "ColorIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineAsset, ColorIndex), METADATA_PARAMS(Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_ColorIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_ColorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZOutlineAsset" },
		{ "ModuleRelativePath", "Public/SBZOutlineAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZOutlineAsset, Distance), METADATA_PARAMS(Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZOutlineAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_ColorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZOutlineAsset_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZOutlineAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZOutlineAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZOutlineAsset_Statics::ClassParams = {
		&USBZOutlineAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZOutlineAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZOutlineAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZOutlineAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZOutlineAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZOutlineAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZOutlineAsset, 1290583164);
	template<> STARBREEZE_API UClass* StaticClass<USBZOutlineAsset>()
	{
		return USBZOutlineAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZOutlineAsset(Z_Construct_UClass_USBZOutlineAsset, &USBZOutlineAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZOutlineAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZOutlineAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
