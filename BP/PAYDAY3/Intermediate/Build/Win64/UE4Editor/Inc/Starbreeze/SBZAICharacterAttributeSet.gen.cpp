// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICharacterAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICharacterAttributeSet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAttributeSet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAICharacterAttributeSet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void USBZAICharacterAttributeSet::StaticRegisterNativesUSBZAICharacterAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_USBZAICharacterAttributeSet_NoRegister()
	{
		return USBZAICharacterAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBZAICharacterAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccuracyPenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccuracyPenalty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCharacterAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAICharacterAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICharacterAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::NewProp_AccuracyPenalty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICharacterAttributeSet" },
		{ "ModuleRelativePath", "Public/SBZAICharacterAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::NewProp_AccuracyPenalty = { "AccuracyPenalty", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAICharacterAttributeSet, AccuracyPenalty), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::NewProp_AccuracyPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::NewProp_AccuracyPenalty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::NewProp_AccuracyPenalty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAICharacterAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::ClassParams = {
		&USBZAICharacterAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAICharacterAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAICharacterAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAICharacterAttributeSet, 1921095366);
	template<> STARBREEZE_API UClass* StaticClass<USBZAICharacterAttributeSet>()
	{
		return USBZAICharacterAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAICharacterAttributeSet(Z_Construct_UClass_USBZAICharacterAttributeSet, &USBZAICharacterAttributeSet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAICharacterAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAICharacterAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
