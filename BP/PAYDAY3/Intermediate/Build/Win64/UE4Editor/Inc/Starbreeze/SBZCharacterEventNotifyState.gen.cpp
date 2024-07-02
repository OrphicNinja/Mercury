// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEventNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEventNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEventNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEventNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZCharacterEventNotifyState::StaticRegisterNativesUSBZCharacterEventNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterEventNotifyState_NoRegister()
	{
		return USBZCharacterEventNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterEventNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZCharacterEventNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEventNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::NewProp_EventTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEventNotifyState" },
		{ "ModuleRelativePath", "Public/SBZCharacterEventNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEventNotifyState, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::NewProp_EventTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::NewProp_EventTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterEventNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::ClassParams = {
		&USBZCharacterEventNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterEventNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterEventNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterEventNotifyState, 1697454072);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterEventNotifyState>()
	{
		return USBZCharacterEventNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterEventNotifyState(Z_Construct_UClass_USBZCharacterEventNotifyState, &USBZCharacterEventNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterEventNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterEventNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
