// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLayingOnFrontNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLayingOnFrontNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLayingOnFrontNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLayingOnFrontNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZLayingOnFrontNotifyState::StaticRegisterNativesUSBZLayingOnFrontNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZLayingOnFrontNotifyState_NoRegister()
	{
		return USBZLayingOnFrontNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZLayingOnFrontNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLayingOnFrontNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLayingOnFrontNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics::ClassParams = {
		&USBZLayingOnFrontNotifyState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLayingOnFrontNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLayingOnFrontNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLayingOnFrontNotifyState, 1926650887);
	template<> STARBREEZE_API UClass* StaticClass<USBZLayingOnFrontNotifyState>()
	{
		return USBZLayingOnFrontNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLayingOnFrontNotifyState(Z_Construct_UClass_USBZLayingOnFrontNotifyState, &USBZLayingOnFrontNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLayingOnFrontNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLayingOnFrontNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
