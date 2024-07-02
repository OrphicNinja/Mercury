// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_CrewAIStealthLA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_CrewAIStealthLA() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthLA_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthLA();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZBTService_CrewAIStealthLA::StaticRegisterNativesUSBZBTService_CrewAIStealthLA()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthLA_NoRegister()
	{
		return USBZBTService_CrewAIStealthLA::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWardBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentWardBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumWardDistanceInPublic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumWardDistanceInPublic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeActionTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_CrewAIStealthLA.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_CrewAIStealthLA.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_CurrentWardBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_CrewAIStealthLA" },
		{ "ModuleRelativePath", "Public/SBZBTService_CrewAIStealthLA.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_CurrentWardBBKey = { "CurrentWardBBKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_CrewAIStealthLA, CurrentWardBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_CurrentWardBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_CurrentWardBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_MaximumWardDistanceInPublic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_CrewAIStealthLA" },
		{ "ModuleRelativePath", "Public/SBZBTService_CrewAIStealthLA.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_MaximumWardDistanceInPublic = { "MaximumWardDistanceInPublic", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_CrewAIStealthLA, MaximumWardDistanceInPublic), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_MaximumWardDistanceInPublic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_MaximumWardDistanceInPublic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_LifeActionTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_CrewAIStealthLA" },
		{ "ModuleRelativePath", "Public/SBZBTService_CrewAIStealthLA.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_LifeActionTag = { "LifeActionTag", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_CrewAIStealthLA, LifeActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_LifeActionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_LifeActionTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_CurrentWardBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_MaximumWardDistanceInPublic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::NewProp_LifeActionTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_CrewAIStealthLA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::ClassParams = {
		&USBZBTService_CrewAIStealthLA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthLA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_CrewAIStealthLA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_CrewAIStealthLA, 3606563312);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_CrewAIStealthLA>()
	{
		return USBZBTService_CrewAIStealthLA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_CrewAIStealthLA(Z_Construct_UClass_USBZBTService_CrewAIStealthLA, &USBZBTService_CrewAIStealthLA::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_CrewAIStealthLA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_CrewAIStealthLA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
