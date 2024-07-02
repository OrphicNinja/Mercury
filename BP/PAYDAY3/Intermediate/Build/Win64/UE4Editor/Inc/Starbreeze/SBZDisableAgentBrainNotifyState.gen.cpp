// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisableAgentBrainNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisableAgentBrainNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableAgentBrainNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableAgentBrainNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDisableAgentBrainNotifyState::StaticRegisterNativesUSBZDisableAgentBrainNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZDisableAgentBrainNotifyState_NoRegister()
	{
		return USBZDisableAgentBrainNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDisableAgentBrainNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisableAgentBrainNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDisableAgentBrainNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics::ClassParams = {
		&USBZDisableAgentBrainNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDisableAgentBrainNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDisableAgentBrainNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDisableAgentBrainNotifyState, 3719391910);
	template<> STARBREEZE_API UClass* StaticClass<USBZDisableAgentBrainNotifyState>()
	{
		return USBZDisableAgentBrainNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDisableAgentBrainNotifyState(Z_Construct_UClass_USBZDisableAgentBrainNotifyState, &USBZDisableAgentBrainNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDisableAgentBrainNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDisableAgentBrainNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
