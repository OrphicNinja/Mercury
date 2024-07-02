// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_InvestigateCorpse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_InvestigateCorpse() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_InvestigateCorpse();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_LifeAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIOrder_InvestigateCorpse::StaticRegisterNativesUSBZAIOrder_InvestigateCorpse()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_NoRegister()
	{
		return USBZAIOrder_InvestigateCorpse::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder_LifeAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_InvestigateCorpse.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateCorpse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_InvestigateCorpse" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateCorpse.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_InvestigateCorpse, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::NewProp_BlackboardKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_InvestigateCorpse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::ClassParams = {
		&USBZAIOrder_InvestigateCorpse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_InvestigateCorpse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_InvestigateCorpse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_InvestigateCorpse, 3002134305);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_InvestigateCorpse>()
	{
		return USBZAIOrder_InvestigateCorpse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_InvestigateCorpse(Z_Construct_UClass_USBZAIOrder_InvestigateCorpse, &USBZAIOrder_InvestigateCorpse::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_InvestigateCorpse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_InvestigateCorpse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
