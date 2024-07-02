// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityScorer_HeistState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityScorer_HeistState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_HeistState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer_HeistState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityScorer();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIUtilityScorer_HeistState::StaticRegisterNativesUSBZAIUtilityScorer_HeistState()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_HeistState_NoRegister()
	{
		return USBZAIUtilityScorer_HeistState::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AllowedStates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityScorer,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityScorer_HeistState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_HeistState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::NewProp_AllowedStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityScorer_HeistState" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityScorer_HeistState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::NewProp_AllowedStates = { "AllowedStates", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityScorer_HeistState, AllowedStates), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::NewProp_AllowedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::NewProp_AllowedStates_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::NewProp_AllowedStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityScorer_HeistState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::ClassParams = {
		&USBZAIUtilityScorer_HeistState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityScorer_HeistState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityScorer_HeistState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityScorer_HeistState, 814360905);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityScorer_HeistState>()
	{
		return USBZAIUtilityScorer_HeistState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityScorer_HeistState(Z_Construct_UClass_USBZAIUtilityScorer_HeistState, &USBZAIUtilityScorer_HeistState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityScorer_HeistState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityScorer_HeistState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
