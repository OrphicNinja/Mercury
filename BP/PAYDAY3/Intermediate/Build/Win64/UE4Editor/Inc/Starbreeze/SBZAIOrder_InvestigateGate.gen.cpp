// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_InvestigateGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_InvestigateGate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_InvestigateGate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_InvestigateGate();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason();
// End Cross Module References
	void USBZAIOrder_InvestigateGate::StaticRegisterNativesUSBZAIOrder_InvestigateGate()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_InvestigateGate_NoRegister()
	{
		return USBZAIOrder_InvestigateGate::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_InvestigateGate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateGate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_InvestigateGate" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateGate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_InvestigateGate, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_BlackboardKey_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_CallReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_CallReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_InvestigateGate" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_InvestigateGate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_CallReason = { "CallReason", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_InvestigateGate, CallReason), Z_Construct_UEnum_Starbreeze_EPD3DispatchCallerReason, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_CallReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_CallReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_BlackboardKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_CallReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::NewProp_CallReason,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_InvestigateGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::ClassParams = {
		&USBZAIOrder_InvestigateGate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_InvestigateGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_InvestigateGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_InvestigateGate, 2389631877);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_InvestigateGate>()
	{
		return USBZAIOrder_InvestigateGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_InvestigateGate(Z_Construct_UClass_USBZAIOrder_InvestigateGate, &USBZAIOrder_InvestigateGate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_InvestigateGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_InvestigateGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
