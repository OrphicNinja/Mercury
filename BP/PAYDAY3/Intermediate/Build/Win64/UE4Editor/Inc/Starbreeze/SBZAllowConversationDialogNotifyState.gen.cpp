// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAllowConversationDialogNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAllowConversationDialogNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAllowConversationDialogNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAllowConversationDialogNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAllowConversationDialogNotifyState::StaticRegisterNativesUSBZAllowConversationDialogNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZAllowConversationDialogNotifyState_NoRegister()
	{
		return USBZAllowConversationDialogNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZAllowConversationDialogNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAllowConversationDialogNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAllowConversationDialogNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics::ClassParams = {
		&USBZAllowConversationDialogNotifyState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAllowConversationDialogNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAllowConversationDialogNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAllowConversationDialogNotifyState, 1591901869);
	template<> STARBREEZE_API UClass* StaticClass<USBZAllowConversationDialogNotifyState>()
	{
		return USBZAllowConversationDialogNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAllowConversationDialogNotifyState(Z_Construct_UClass_USBZAllowConversationDialogNotifyState, &USBZAllowConversationDialogNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAllowConversationDialogNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAllowConversationDialogNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
