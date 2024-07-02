// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeTimeLensParticleHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeTimeLensParticleHandle() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
class UScriptStruct* FSBZLifeTimeLensParticleHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLifeTimeLensParticleHandle"), sizeof(FSBZLifeTimeLensParticleHandle), Get_Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLifeTimeLensParticleHandle>()
{
	return FSBZLifeTimeLensParticleHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLifeTimeLensParticleHandle(FSBZLifeTimeLensParticleHandle::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLifeTimeLensParticleHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeTimeLensParticleHandle
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeTimeLensParticleHandle()
	{
		UScriptStruct::DeferCppStructOps<FSBZLifeTimeLensParticleHandle>(FName(TEXT("SBZLifeTimeLensParticleHandle")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLifeTimeLensParticleHandle;
	struct Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeTimeLensParticleHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLifeTimeLensParticleHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_ParticleEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeTimeLensParticleHandle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeTimeLensParticleHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_ParticleEffect = { "ParticleEffect", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeTimeLensParticleHandle, ParticleEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_ParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_ParticleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeTimeLensParticleHandle" },
		{ "ModuleRelativePath", "Public/SBZLifeTimeLensParticleHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLifeTimeLensParticleHandle, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_TimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_ParticleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::NewProp_TimerHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLifeTimeLensParticleHandle",
		sizeof(FSBZLifeTimeLensParticleHandle),
		alignof(FSBZLifeTimeLensParticleHandle),
		Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLifeTimeLensParticleHandle"), sizeof(FSBZLifeTimeLensParticleHandle), Get_Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLifeTimeLensParticleHandle_Hash() { return 3288367533U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
