// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_CheckCoverSafeness.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_CheckCoverSafeness() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTDecorator_CheckCoverSafeness::StaticRegisterNativesUSBZBTDecorator_CheckCoverSafeness()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_NoRegister()
	{
		return USBZBTDecorator_CheckCoverSafeness::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSafenessScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinSafenessScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_CheckCoverSafeness.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CheckCoverSafeness.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_MinSafenessScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_CheckCoverSafeness" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CheckCoverSafeness.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_MinSafenessScore = { "MinSafenessScore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_CheckCoverSafeness, MinSafenessScore), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_MinSafenessScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_MinSafenessScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_EnemyBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_CheckCoverSafeness" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_CheckCoverSafeness.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_EnemyBBKey = { "EnemyBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_CheckCoverSafeness, EnemyBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_EnemyBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_EnemyBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_MinSafenessScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::NewProp_EnemyBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_CheckCoverSafeness>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::ClassParams = {
		&USBZBTDecorator_CheckCoverSafeness::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_CheckCoverSafeness, 3576432964);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_CheckCoverSafeness>()
	{
		return USBZBTDecorator_CheckCoverSafeness::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_CheckCoverSafeness(Z_Construct_UClass_USBZBTDecorator_CheckCoverSafeness, &USBZBTDecorator_CheckCoverSafeness::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_CheckCoverSafeness"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_CheckCoverSafeness);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
