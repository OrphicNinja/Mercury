// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDialogAnimDataCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDialogAnimDataCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogAnimDataCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogAnimDataCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogAnimData();
// End Cross Module References
	void USBZDialogAnimDataCollection::StaticRegisterNativesUSBZDialogAnimDataCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZDialogAnimDataCollection_NoRegister()
	{
		return USBZDialogAnimDataCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZDialogAnimDataCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogAnimDatas_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogAnimDatas_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogAnimDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DialogAnimDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDialogAnimDataCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDialogAnimDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas_ValueProp = { "DialogAnimDatas", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZDialogAnimData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas_Key_KeyProp = { "DialogAnimDatas_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogAnimDataCollection" },
		{ "ModuleRelativePath", "Public/SBZDialogAnimDataCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas = { "DialogAnimDatas", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogAnimDataCollection, DialogAnimDatas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::NewProp_DialogAnimDatas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDialogAnimDataCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::ClassParams = {
		&USBZDialogAnimDataCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDialogAnimDataCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDialogAnimDataCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDialogAnimDataCollection, 1694602697);
	template<> STARBREEZE_API UClass* StaticClass<USBZDialogAnimDataCollection>()
	{
		return USBZDialogAnimDataCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDialogAnimDataCollection(Z_Construct_UClass_USBZDialogAnimDataCollection, &USBZDialogAnimDataCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDialogAnimDataCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDialogAnimDataCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
