// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBlockAnimatedInteractionNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBlockAnimatedInteractionNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBlockAnimatedInteractionNotifyState::StaticRegisterNativesUSBZBlockAnimatedInteractionNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_NoRegister()
	{
		return USBZBlockAnimatedInteractionNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZBlockAnimatedInteractionNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBlockAnimatedInteractionNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBlockAnimatedInteractionNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics::ClassParams = {
		&USBZBlockAnimatedInteractionNotifyState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBlockAnimatedInteractionNotifyState, 1933867437);
	template<> STARBREEZE_API UClass* StaticClass<USBZBlockAnimatedInteractionNotifyState>()
	{
		return USBZBlockAnimatedInteractionNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBlockAnimatedInteractionNotifyState(Z_Construct_UClass_USBZBlockAnimatedInteractionNotifyState, &USBZBlockAnimatedInteractionNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBlockAnimatedInteractionNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBlockAnimatedInteractionNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
