// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityDecider_Escort.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityDecider_Escort() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_Escort_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_Escort();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIEscortStateData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuspectData();
// End Cross Module References
	void USBZAIUtilityDecider_Escort::StaticRegisterNativesUSBZAIUtilityDecider_Escort()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_Escort_NoRegister()
	{
		return USBZAIUtilityDecider_Escort::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscortStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EscortStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSuspect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentSuspect;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Suspects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suspects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Suspects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityDecider,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityDecider_Escort.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_Escort.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_EscortStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_Escort" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_Escort.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_EscortStates = { "EscortStates", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(EscortStates, USBZAIUtilityDecider_Escort), STRUCT_OFFSET(USBZAIUtilityDecider_Escort, EscortStates), Z_Construct_UScriptStruct_FSBZAIEscortStateData, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_EscortStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_EscortStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_CurrentSuspect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_Escort" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_Escort.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_CurrentSuspect = { "CurrentSuspect", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_Escort, CurrentSuspect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_CurrentSuspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_CurrentSuspect_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_Suspects_Inner = { "Suspects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSuspectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_Suspects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_Escort" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_Escort.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_Suspects = { "Suspects", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_Escort, Suspects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_Suspects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_Suspects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_EscortStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_CurrentSuspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_Suspects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::NewProp_Suspects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityDecider_Escort>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::ClassParams = {
		&USBZAIUtilityDecider_Escort::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_Escort()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityDecider_Escort_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityDecider_Escort, 2182062176);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityDecider_Escort>()
	{
		return USBZAIUtilityDecider_Escort::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityDecider_Escort(Z_Construct_UClass_USBZAIUtilityDecider_Escort, &USBZAIUtilityDecider_Escort::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityDecider_Escort"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityDecider_Escort);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
