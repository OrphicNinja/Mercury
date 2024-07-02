// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSurfaceSoundEvents.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSurfaceSoundEvents() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSurfaceSoundEvents::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSurfaceSoundEvents"), sizeof(FSBZSurfaceSoundEvents), Get_Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSurfaceSoundEvents>()
{
	return FSBZSurfaceSoundEvents::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSurfaceSoundEvents(FSBZSurfaceSoundEvents::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSurfaceSoundEvents"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceSoundEvents
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceSoundEvents()
	{
		UScriptStruct::DeferCppStructOps<FSBZSurfaceSoundEvents>(FName(TEXT("SBZSurfaceSoundEvents")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceSoundEvents;
	struct Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Footstep_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Footstep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sliding_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingCancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlidingCancel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mantling_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mantling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StepUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableProjectileHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileBounceHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableProjectileBounceHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectRolling_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectRolling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisRolling_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisRolling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagItemImpact_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItemImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectImpactRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectImpactRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectRollingRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectRollingRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeHitRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeHitRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisImpactRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisImpactRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisRollingRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisRollingRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableImpactRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableImpactRtpc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSurfaceSoundEvents>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Footstep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Footstep = { "Footstep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, Footstep), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Footstep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Footstep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Sliding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Sliding = { "Sliding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, Sliding), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Sliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Sliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_SlidingCancel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_SlidingCancel = { "SlidingCancel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, SlidingCancel), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_SlidingCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_SlidingCancel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Mantling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Mantling = { "Mantling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, Mantling), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Mantling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Mantling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_StepUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_StepUp = { "StepUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, StepUp), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_StepUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_StepUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ProjectileHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ProjectileHit = { "ProjectileHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ProjectileHit), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ProjectileHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ProjectileHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileHit = { "ThrowableProjectileHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ThrowableProjectileHit), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileBounceHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileBounceHit = { "ThrowableProjectileBounceHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ThrowableProjectileBounceHit), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileBounceHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileBounceHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHit = { "MeleeHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, MeleeHit), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ExplosionHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ExplosionHit = { "ExplosionHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ExplosionHit), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ExplosionHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ExplosionHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpact = { "ObjectImpact", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ObjectImpact), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRolling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRolling = { "ObjectRolling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ObjectRolling), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRolling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpact = { "DebrisImpact", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, DebrisImpact), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRolling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRolling = { "DebrisRolling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, DebrisRolling), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRolling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpact = { "ThrowableImpact", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ThrowableImpact), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_BagItemImpact_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_BagItemImpact = { "BagItemImpact", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, BagItemImpact), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_BagItemImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_BagItemImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpactRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpactRtpc = { "ObjectImpactRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ObjectImpactRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpactRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpactRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRollingRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRollingRtpc = { "ObjectRollingRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ObjectRollingRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRollingRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRollingRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHitRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHitRtpc = { "MeleeHitRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, MeleeHitRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHitRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHitRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpactRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpactRtpc = { "DebrisImpactRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, DebrisImpactRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpactRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpactRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRollingRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRollingRtpc = { "DebrisRollingRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, DebrisRollingRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRollingRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRollingRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpactRtpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceSoundEvents" },
		{ "ModuleRelativePath", "Public/SBZSurfaceSoundEvents.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpactRtpc = { "ThrowableImpactRtpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceSoundEvents, ThrowableImpactRtpc), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpactRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpactRtpc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Footstep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Sliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_SlidingCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_Mantling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_StepUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ProjectileHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableProjectileBounceHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ExplosionHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRolling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRolling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_BagItemImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectImpactRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ObjectRollingRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_MeleeHitRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisImpactRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_DebrisRollingRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::NewProp_ThrowableImpactRtpc,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSurfaceSoundEvents",
		sizeof(FSBZSurfaceSoundEvents),
		alignof(FSBZSurfaceSoundEvents),
		Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSurfaceSoundEvents"), sizeof(FSBZSurfaceSoundEvents), Get_Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceSoundEvents_Hash() { return 1764770266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
