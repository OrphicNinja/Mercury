// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAutoSectionSwitchNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAutoSectionSwitchNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAutoSectionSwitchNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAutoSectionSwitchNotifyState::StaticRegisterNativesUSBZAutoSectionSwitchNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_NoRegister()
	{
		return USBZAutoSectionSwitchNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZAutoSectionSwitchNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAutoSectionSwitchNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::NewProp_SectionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAutoSectionSwitchNotifyState" },
		{ "ModuleRelativePath", "Public/SBZAutoSectionSwitchNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAutoSectionSwitchNotifyState, SectionName), METADATA_PARAMS(Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::NewProp_SectionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAutoSectionSwitchNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::ClassParams = {
		&USBZAutoSectionSwitchNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAutoSectionSwitchNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAutoSectionSwitchNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAutoSectionSwitchNotifyState, 539551122);
	template<> STARBREEZE_API UClass* StaticClass<USBZAutoSectionSwitchNotifyState>()
	{
		return USBZAutoSectionSwitchNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAutoSectionSwitchNotifyState(Z_Construct_UClass_USBZAutoSectionSwitchNotifyState, &USBZAutoSectionSwitchNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAutoSectionSwitchNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAutoSectionSwitchNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
