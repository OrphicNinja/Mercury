// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayTagContainerComparison.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayTagContainerComparison() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZGameplayTagContainerComparison::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGameplayTagContainerComparison"), sizeof(FSBZGameplayTagContainerComparison), Get_Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGameplayTagContainerComparison>()
{
	return FSBZGameplayTagContainerComparison::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGameplayTagContainerComparison(FSBZGameplayTagContainerComparison::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGameplayTagContainerComparison"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagContainerComparison
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagContainerComparison()
	{
		UScriptStruct::DeferCppStructOps<FSBZGameplayTagContainerComparison>(FName(TEXT("SBZGameplayTagContainerComparison")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGameplayTagContainerComparison;
	struct Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_FailedMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FailedIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagContainerComparison.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGameplayTagContainerComparison>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_GameplayTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagContainerComparison" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagContainerComparison.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagContainerComparison, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_GameplayTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_GameplayTagContainer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagContainerComparison" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagContainerComparison.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagContainerComparison, MatchType), Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_MatchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagContainerComparison" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagContainerComparison.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedMessage = { "FailedMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagContainerComparison, FailedMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayTagContainerComparison" },
		{ "ModuleRelativePath", "Public/SBZGameplayTagContainerComparison.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedIcon = { "FailedIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGameplayTagContainerComparison, FailedIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_GameplayTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::NewProp_FailedIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGameplayTagContainerComparison",
		sizeof(FSBZGameplayTagContainerComparison),
		alignof(FSBZGameplayTagContainerComparison),
		Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGameplayTagContainerComparison"), sizeof(FSBZGameplayTagContainerComparison), Get_Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGameplayTagContainerComparison_Hash() { return 1256320710U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
