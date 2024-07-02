// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisableFootPlacementNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisableFootPlacementNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableFootPlacementNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableFootPlacementNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDisableFootPlacementNotifyState::StaticRegisterNativesUSBZDisableFootPlacementNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZDisableFootPlacementNotifyState_NoRegister()
	{
		return USBZDisableFootPlacementNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDisableFootPlacementNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisableFootPlacementNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDisableFootPlacementNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics::ClassParams = {
		&USBZDisableFootPlacementNotifyState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDisableFootPlacementNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDisableFootPlacementNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDisableFootPlacementNotifyState, 3768862140);
	template<> STARBREEZE_API UClass* StaticClass<USBZDisableFootPlacementNotifyState>()
	{
		return USBZDisableFootPlacementNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDisableFootPlacementNotifyState(Z_Construct_UClass_USBZDisableFootPlacementNotifyState, &USBZDisableFootPlacementNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDisableFootPlacementNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDisableFootPlacementNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
