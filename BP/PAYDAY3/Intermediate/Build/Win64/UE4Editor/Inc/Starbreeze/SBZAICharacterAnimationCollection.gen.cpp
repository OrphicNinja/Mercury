// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICharacterAnimationCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICharacterAnimationCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAnimationCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAnimationCollection();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAnimationCollection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void USBZAICharacterAnimationCollection::StaticRegisterNativesUSBZAICharacterAnimationCollection()
	{
	}
	UClass* Z_Construct_UClass_USBZAICharacterAnimationCollection_NoRegister()
	{
		return USBZAICharacterAnimationCollection::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopAndTurnMontageInfos_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopAndTurnMontageInfos_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopAndTurnMontageInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StopAndTurnMontageInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterAnimationCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICharacterAnimationCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacterAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos_ValueProp = { "StopAndTurnMontageInfos", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZStopAndTurnMontageInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos_Key_KeyProp = { "StopAndTurnMontageInfos_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterAnimationCollection" },
		{ "ModuleRelativePath", "Public/SBZAICharacterAnimationCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos = { "StopAndTurnMontageInfos", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterAnimationCollection, StopAndTurnMontageInfos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::NewProp_StopAndTurnMontageInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICharacterAnimationCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::ClassParams = {
		&USBZAICharacterAnimationCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICharacterAnimationCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICharacterAnimationCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICharacterAnimationCollection, 1271160465);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICharacterAnimationCollection>()
	{
		return USBZAICharacterAnimationCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICharacterAnimationCollection(Z_Construct_UClass_USBZAICharacterAnimationCollection, &USBZAICharacterAnimationCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICharacterAnimationCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICharacterAnimationCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
