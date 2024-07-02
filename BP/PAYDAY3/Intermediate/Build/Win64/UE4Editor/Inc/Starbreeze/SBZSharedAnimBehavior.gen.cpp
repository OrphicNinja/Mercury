// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSharedAnimBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSharedAnimBehavior() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedAnimBehavior();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedMontageInfo();
// End Cross Module References
class UScriptStruct* FSBZSharedAnimBehavior::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSharedAnimBehavior, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSharedAnimBehavior"), sizeof(FSBZSharedAnimBehavior), Get_Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSharedAnimBehavior>()
{
	return FSBZSharedAnimBehavior::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSharedAnimBehavior(FSBZSharedAnimBehavior::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSharedAnimBehavior"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedAnimBehavior
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedAnimBehavior()
	{
		UScriptStruct::DeferCppStructOps<FSBZSharedAnimBehavior>(FName(TEXT("SBZSharedAnimBehavior")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSharedAnimBehavior;
	struct Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedMontageInfos_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SharedMontageInfos_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedMontageInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SharedMontageInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSharedAnimBehavior.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSharedAnimBehavior>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos_ValueProp = { "SharedMontageInfos", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSharedMontageInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos_Key_KeyProp = { "SharedMontageInfos_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSharedAnimBehavior" },
		{ "ModuleRelativePath", "Public/SBZSharedAnimBehavior.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos = { "SharedMontageInfos", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSharedAnimBehavior, SharedMontageInfos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::NewProp_SharedMontageInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSharedAnimBehavior",
		sizeof(FSBZSharedAnimBehavior),
		alignof(FSBZSharedAnimBehavior),
		Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSharedAnimBehavior()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSharedAnimBehavior"), sizeof(FSBZSharedAnimBehavior), Get_Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSharedAnimBehavior_Hash() { return 1887848895U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
