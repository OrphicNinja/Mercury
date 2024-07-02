// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_RequestFirePermission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_RequestFirePermission() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireTokenType();
// End Cross Module References
	void UDEPRECATED_SBZBTTask_RequestFirePermission::StaticRegisterNativesUDEPRECATED_SBZBTTask_RequestFirePermission()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_NoRegister()
	{
		return UDEPRECATED_SBZBTTask_RequestFirePermission::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TokenType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TokenType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_RequestFirePermission.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RequestFirePermission.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_EnemyKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_RequestFirePermission" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RequestFirePermission.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_EnemyKey = { "EnemyKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZBTTask_RequestFirePermission, EnemyKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_EnemyKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_EnemyKey_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_TokenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_TokenType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_RequestFirePermission" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RequestFirePermission.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZBTTask_RequestFirePermission, TokenType), Z_Construct_UEnum_Starbreeze_ESBZFireTokenType, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_TokenType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_EnemyKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_TokenType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::NewProp_TokenType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_SBZBTTask_RequestFirePermission>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::ClassParams = {
		&UDEPRECATED_SBZBTTask_RequestFirePermission::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::PropPointers),
		0,
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_SBZBTTask_RequestFirePermission, 2743349031);
	template<> STARBREEZE_API UClass* StaticClass<UDEPRECATED_SBZBTTask_RequestFirePermission>()
	{
		return UDEPRECATED_SBZBTTask_RequestFirePermission::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission(Z_Construct_UClass_UDEPRECATED_SBZBTTask_RequestFirePermission, &UDEPRECATED_SBZBTTask_RequestFirePermission::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UDEPRECATED_SBZBTTask_RequestFirePermission"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_SBZBTTask_RequestFirePermission);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
