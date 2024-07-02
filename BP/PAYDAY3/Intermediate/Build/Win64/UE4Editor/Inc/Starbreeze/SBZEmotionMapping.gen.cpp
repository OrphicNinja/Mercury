// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEmotionMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEmotionMapping() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmotionMapping_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEmotionMapping();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEmotions();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCharacterStance();
// End Cross Module References
	void USBZEmotionMapping::StaticRegisterNativesUSBZEmotionMapping()
	{
	}
	UClass* Z_Construct_UClass_USBZEmotionMapping_NoRegister()
	{
		return USBZEmotionMapping::StaticClass();
	}
	struct Z_Construct_UClass_USBZEmotionMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmotionsPerStance_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmotionsPerStance_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmotionsPerStance_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmotionsPerStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EmotionsPerStance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEmotionMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmotionMapping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEmotionMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEmotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_ValueProp = { "EmotionsPerStance", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZEmotions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_Key_KeyProp = { "EmotionsPerStance_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZCharacterStance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEmotionMapping" },
		{ "ModuleRelativePath", "Public/SBZEmotionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance = { "EmotionsPerStance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEmotionMapping, EmotionsPerStance), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEmotionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEmotionMapping_Statics::NewProp_EmotionsPerStance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEmotionMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEmotionMapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEmotionMapping_Statics::ClassParams = {
		&USBZEmotionMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEmotionMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmotionMapping_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEmotionMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEmotionMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEmotionMapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEmotionMapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEmotionMapping, 616871301);
	template<> STARBREEZE_API UClass* StaticClass<USBZEmotionMapping>()
	{
		return USBZEmotionMapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEmotionMapping(Z_Construct_UClass_USBZEmotionMapping, &USBZEmotionMapping::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEmotionMapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEmotionMapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
