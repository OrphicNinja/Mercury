// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_SetBBValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_SetBBValue() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SetBBValue_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_SetBBValue();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void USBZAIAction_SetBBValue::StaticRegisterNativesUSBZAIAction_SetBBValue()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_SetBBValue_NoRegister()
	{
		return USBZAIAction_SetBBValue::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_SetBBValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_SetBBValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetBBValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SetBBValue" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetBBValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SetBBValue, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_EQSRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_SetBBValue" },
		{ "ModuleRelativePath", "Public/SBZAIAction_SetBBValue.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIAction_SetBBValue, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_BlackboardKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_EQSRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_SetBBValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::ClassParams = {
		&USBZAIAction_SetBBValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_SetBBValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_SetBBValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_SetBBValue, 3568562832);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_SetBBValue>()
	{
		return USBZAIAction_SetBBValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_SetBBValue(Z_Construct_UClass_USBZAIAction_SetBBValue, &USBZAIAction_SetBBValue::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_SetBBValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_SetBBValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
