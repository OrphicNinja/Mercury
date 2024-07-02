// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZForbidDeathNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZForbidDeathNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForbidDeathNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForbidDeathNotifyState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZForbidHurtNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZForbidDeathNotifyState::StaticRegisterNativesUSBZForbidDeathNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZForbidDeathNotifyState_NoRegister()
	{
		return USBZForbidDeathNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZForbidDeathNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZForbidDeathNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZForbidHurtNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZForbidDeathNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZForbidDeathNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZForbidDeathNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZForbidDeathNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZForbidDeathNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZForbidDeathNotifyState_Statics::ClassParams = {
		&USBZForbidDeathNotifyState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZForbidDeathNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZForbidDeathNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZForbidDeathNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZForbidDeathNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZForbidDeathNotifyState, 2148325194);
	template<> STARBREEZE_API UClass* StaticClass<USBZForbidDeathNotifyState>()
	{
		return USBZForbidDeathNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZForbidDeathNotifyState(Z_Construct_UClass_USBZForbidDeathNotifyState, &USBZForbidDeathNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZForbidDeathNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZForbidDeathNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
