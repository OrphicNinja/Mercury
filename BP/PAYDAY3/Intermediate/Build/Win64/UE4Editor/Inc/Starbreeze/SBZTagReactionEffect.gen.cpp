// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTagReactionEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTagReactionEffect() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTagReactionEffect();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZTagReactionEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTagReactionEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTagReactionEffect, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTagReactionEffect"), sizeof(FSBZTagReactionEffect), Get_Z_Construct_UScriptStruct_FSBZTagReactionEffect_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTagReactionEffect>()
{
	return FSBZTagReactionEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTagReactionEffect(FSBZTagReactionEffect::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTagReactionEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReactionEffect
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReactionEffect()
	{
		UScriptStruct::DeferCppStructOps<FSBZTagReactionEffect>(FName(TEXT("SBZTagReactionEffect")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTagReactionEffect;
	struct Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagReactionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TagReactionEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTagReactionEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTagReactionEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::NewProp_TagReactionEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTagReactionEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTagReactionEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::NewProp_TagReactionEffect = { "TagReactionEffect", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTagReactionEffect, TagReactionEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::NewProp_TagReactionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::NewProp_TagReactionEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::NewProp_TagReactionEffect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTagReactionEffect",
		sizeof(FSBZTagReactionEffect),
		alignof(FSBZTagReactionEffect),
		Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTagReactionEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTagReactionEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTagReactionEffect"), sizeof(FSBZTagReactionEffect), Get_Z_Construct_UScriptStruct_FSBZTagReactionEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTagReactionEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTagReactionEffect_Hash() { return 4193119503U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
