// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableMenuAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableMenuAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableMenuAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableMenuAnimationCollection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseMenuAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMenuACEquippablePerCharacterSlot();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName();
// End Cross Module References
	void USBZEquippableMenuAnimationCollection::StaticRegisterNativesUSBZEquippableMenuAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZEquippableMenuAnimationCollection_NoRegister()
	{
		return USBZEquippableMenuAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippablePerCharacterSlots_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippablePerCharacterSlots_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippablePerCharacterSlots_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippablePerCharacterSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EquippablePerCharacterSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBaseMenuAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEquippableMenuAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEquippableMenuAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_ValueProp = { "EquippablePerCharacterSlots", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMenuACEquippablePerCharacterSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_Key_KeyProp = { "EquippablePerCharacterSlots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZMainMenuAnimationName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEquippableMenuAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZEquippableMenuAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots = { "EquippablePerCharacterSlots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEquippableMenuAnimationCollection, EquippablePerCharacterSlots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::NewProp_EquippablePerCharacterSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEquippableMenuAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::ClassParams = {
		&USBZEquippableMenuAnimationCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippableMenuAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippableMenuAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippableMenuAnimationCollection, 953252869);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippableMenuAnimationCollection>()
	{
		return USBZEquippableMenuAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippableMenuAnimationCollection(Z_Construct_UClass_USBZEquippableMenuAnimationCollection, &USBZEquippableMenuAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippableMenuAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippableMenuAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
