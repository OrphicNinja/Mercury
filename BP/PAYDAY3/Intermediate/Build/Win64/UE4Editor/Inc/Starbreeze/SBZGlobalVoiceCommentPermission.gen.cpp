// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGlobalVoiceCommentPermission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGlobalVoiceCommentPermission() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZGlobalVoiceCommentPermission::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZGlobalVoiceCommentPermission"), sizeof(FSBZGlobalVoiceCommentPermission), Get_Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZGlobalVoiceCommentPermission>()
{
	return FSBZGlobalVoiceCommentPermission::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZGlobalVoiceCommentPermission(FSBZGlobalVoiceCommentPermission::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZGlobalVoiceCommentPermission"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGlobalVoiceCommentPermission
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZGlobalVoiceCommentPermission()
	{
		UScriptStruct::DeferCppStructOps<FSBZGlobalVoiceCommentPermission>(FName(TEXT("SBZGlobalVoiceCommentPermission")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZGlobalVoiceCommentPermission;
	struct Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZGlobalVoiceCommentPermission.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZGlobalVoiceCommentPermission>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_CoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalVoiceCommentPermission" },
		{ "ModuleRelativePath", "Public/SBZGlobalVoiceCommentPermission.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalVoiceCommentPermission, CoolDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_CoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalVoiceCommentPermission" },
		{ "ModuleRelativePath", "Public/SBZGlobalVoiceCommentPermission.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZGlobalVoiceCommentPermission, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZGlobalVoiceCommentPermission",
		sizeof(FSBZGlobalVoiceCommentPermission),
		alignof(FSBZGlobalVoiceCommentPermission),
		Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZGlobalVoiceCommentPermission"), sizeof(FSBZGlobalVoiceCommentPermission), Get_Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZGlobalVoiceCommentPermission_Hash() { return 1216745649U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
