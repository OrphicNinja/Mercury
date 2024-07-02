// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_FirePermissionGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_FirePermissionGuard() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireTokenType();
// End Cross Module References
	void UDEPRECATED_SBZBTDecorator_FirePermissionGuard::StaticRegisterNativesUDEPRECATED_SBZBTDecorator_FirePermissionGuard()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_NoRegister()
	{
		return UDEPRECATED_SBZBTDecorator_FirePermissionGuard::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearAllTokens_MetaData[];
#endif
		static void NewProp_bClearAllTokens_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearAllTokens;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TokenType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TokenType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_FirePermissionGuard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_FirePermissionGuard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_bClearAllTokens_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_FirePermissionGuard" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_FirePermissionGuard.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_bClearAllTokens_SetBit(void* Obj)
	{
		((UDEPRECATED_SBZBTDecorator_FirePermissionGuard*)Obj)->bClearAllTokens = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_bClearAllTokens = { "bClearAllTokens", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDEPRECATED_SBZBTDecorator_FirePermissionGuard), &Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_bClearAllTokens_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_bClearAllTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_bClearAllTokens_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_TokenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_TokenType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_FirePermissionGuard" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_FirePermissionGuard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZBTDecorator_FirePermissionGuard, TokenType), Z_Construct_UEnum_Starbreeze_ESBZFireTokenType, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_TokenType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_bClearAllTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_TokenType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::NewProp_TokenType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_SBZBTDecorator_FirePermissionGuard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::ClassParams = {
		&UDEPRECATED_SBZBTDecorator_FirePermissionGuard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::PropPointers),
		0,
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_SBZBTDecorator_FirePermissionGuard, 4139979770);
	template<> STARBREEZE_API UClass* StaticClass<UDEPRECATED_SBZBTDecorator_FirePermissionGuard>()
	{
		return UDEPRECATED_SBZBTDecorator_FirePermissionGuard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard(Z_Construct_UClass_UDEPRECATED_SBZBTDecorator_FirePermissionGuard, &UDEPRECATED_SBZBTDecorator_FirePermissionGuard::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UDEPRECATED_SBZBTDecorator_FirePermissionGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_SBZBTDecorator_FirePermissionGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
