// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISmallTalkCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISmallTalkCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISmallTalkCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISmallTalkCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
// End Cross Module References
	void USBZAISmallTalkCollection::StaticRegisterNativesUSBZAISmallTalkCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZAISmallTalkCollection_NoRegister()
	{
		return USBZAISmallTalkCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISmallTalkCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISmallTalkCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISmallTalkCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISmallTalkCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISmallTalkCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAISmallTalkCollection_Statics::NewProp_DialogAssets_Inner = { "DialogAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISmallTalkCollection_Statics::NewProp_DialogAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISmallTalkCollection" },
		{ "ModuleRelativePath", "Public/SBZAISmallTalkCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISmallTalkCollection_Statics::NewProp_DialogAssets = { "DialogAssets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISmallTalkCollection, DialogAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISmallTalkCollection_Statics::NewProp_DialogAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISmallTalkCollection_Statics::NewProp_DialogAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAISmallTalkCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISmallTalkCollection_Statics::NewProp_DialogAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISmallTalkCollection_Statics::NewProp_DialogAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISmallTalkCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISmallTalkCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISmallTalkCollection_Statics::ClassParams = {
		&USBZAISmallTalkCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAISmallTalkCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISmallTalkCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISmallTalkCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISmallTalkCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISmallTalkCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISmallTalkCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISmallTalkCollection, 3831513065);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISmallTalkCollection>()
	{
		return USBZAISmallTalkCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISmallTalkCollection(Z_Construct_UClass_USBZAISmallTalkCollection, &USBZAISmallTalkCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISmallTalkCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISmallTalkCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
