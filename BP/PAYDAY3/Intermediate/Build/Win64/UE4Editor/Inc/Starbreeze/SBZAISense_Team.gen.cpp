// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISense_Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISense_Team() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISense_Team_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISense_Team();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent();
// End Cross Module References
	void USBZAISense_Team::StaticRegisterNativesUSBZAISense_Team()
	{
	}
	UClass* Z_Construct_UClass_USBZAISense_Team_NoRegister()
	{
		return USBZAISense_Team::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISense_Team_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISense_Team_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISense_Team_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAISense_Team.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISense_Team.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_DelayRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISense_Team" },
		{ "ModuleRelativePath", "Public/SBZAISense_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_DelayRange = { "DelayRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISense_Team, DelayRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_DelayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_DelayRange_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAITeamStimulusEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_RegisteredEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAISense_Team" },
		{ "ModuleRelativePath", "Public/SBZAISense_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAISense_Team, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_RegisteredEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_RegisteredEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAISense_Team_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_DelayRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_RegisteredEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAISense_Team_Statics::NewProp_RegisteredEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISense_Team_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAISense_Team>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISense_Team_Statics::ClassParams = {
		&USBZAISense_Team::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAISense_Team_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISense_Team_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISense_Team_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISense_Team_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISense_Team()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISense_Team_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISense_Team, 3661131738);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISense_Team>()
	{
		return USBZAISense_Team::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISense_Team(Z_Construct_UClass_USBZAISense_Team, &USBZAISense_Team::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISense_Team"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISense_Team);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
