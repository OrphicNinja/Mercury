// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerMenuAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerMenuAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMenuAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerMenuAnimationCollection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName();
// End Cross Module References
	void USBZPlayerMenuAnimationCollection::StaticRegisterNativesUSBZPlayerMenuAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerMenuAnimationCollection_NoRegister()
	{
		return USBZPlayerMenuAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerCharacterSlots_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerCharacterSlots_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PerCharacterSlots_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerCharacterSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerCharacterSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseMenuAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerMenuAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerMenuAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_ValueProp = { "PerCharacterSlots", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMenuACPerCharacterSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_Key_KeyProp = { "PerCharacterSlots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerMenuAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZPlayerMenuAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots = { "PerCharacterSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerMenuAnimationCollection, PerCharacterSlots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::NewProp_PerCharacterSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerMenuAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::ClassParams = {
		&USBZPlayerMenuAnimationCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerMenuAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerMenuAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerMenuAnimationCollection, 2791245961);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerMenuAnimationCollection>()
	{
		return USBZPlayerMenuAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerMenuAnimationCollection(Z_Construct_UClass_USBZPlayerMenuAnimationCollection, &USBZPlayerMenuAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerMenuAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerMenuAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
