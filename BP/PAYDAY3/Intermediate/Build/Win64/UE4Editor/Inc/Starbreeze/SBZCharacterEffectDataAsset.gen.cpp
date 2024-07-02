// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEffectDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEffectDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void USBZCharacterEffectDataAsset::StaticRegisterNativesUSBZCharacterEffectDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister()
	{
		return USBZCharacterEffectDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEffectIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterEffectIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDisplayAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnDisplayAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterEffectColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCharacterEffectColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterEffectDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_CharacterEffectIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectDataAsset" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_CharacterEffectIcon = { "CharacterEffectIcon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectDataAsset, CharacterEffectIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_CharacterEffectIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_CharacterEffectIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_OnDisplayAudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectDataAsset" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_OnDisplayAudioEvent = { "OnDisplayAudioEvent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectDataAsset, OnDisplayAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_OnDisplayAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_OnDisplayAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_DefaultCharacterEffectColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectDataAsset" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_DefaultCharacterEffectColor = { "DefaultCharacterEffectColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectDataAsset, DefaultCharacterEffectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_DefaultCharacterEffectColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_DefaultCharacterEffectColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_CharacterEffectIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_OnDisplayAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::NewProp_DefaultCharacterEffectColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterEffectDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::ClassParams = {
		&USBZCharacterEffectDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterEffectDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterEffectDataAsset, 3109384084);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterEffectDataAsset>()
	{
		return USBZCharacterEffectDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterEffectDataAsset(Z_Construct_UClass_USBZCharacterEffectDataAsset, &USBZCharacterEffectDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterEffectDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterEffectDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
