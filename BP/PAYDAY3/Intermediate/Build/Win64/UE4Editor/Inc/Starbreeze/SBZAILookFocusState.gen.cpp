// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAILookFocusState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAILookFocusState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAILookFocusState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAILookFocusState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLookFocusData_NoRegister();
// End Cross Module References
	void USBZAILookFocusState::StaticRegisterNativesUSBZAILookFocusState()
	{
	}
	UClass* Z_Construct_UClass_USBZAILookFocusState_NoRegister()
	{
		return USBZAILookFocusState::StaticClass();
	}
	struct Z_Construct_UClass_USBZAILookFocusState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookFocusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LookFocusData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAILookFocusState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAILookFocusState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZAILookFocusState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAILookFocusState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAILookFocusState_Statics::NewProp_LookFocusData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAILookFocusState" },
		{ "ModuleRelativePath", "Public/SBZAILookFocusState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAILookFocusState_Statics::NewProp_LookFocusData = { "LookFocusData", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAILookFocusState, LookFocusData), Z_Construct_UClass_USBZLookFocusData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAILookFocusState_Statics::NewProp_LookFocusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAILookFocusState_Statics::NewProp_LookFocusData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAILookFocusState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAILookFocusState_Statics::NewProp_LookFocusData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAILookFocusState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAILookFocusState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAILookFocusState_Statics::ClassParams = {
		&USBZAILookFocusState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAILookFocusState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAILookFocusState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAILookFocusState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAILookFocusState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAILookFocusState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAILookFocusState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAILookFocusState, 360444568);
	template<> STARBREEZE_API UClass* StaticClass<USBZAILookFocusState>()
	{
		return USBZAILookFocusState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAILookFocusState(Z_Construct_UClass_USBZAILookFocusState, &USBZAILookFocusState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAILookFocusState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAILookFocusState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
