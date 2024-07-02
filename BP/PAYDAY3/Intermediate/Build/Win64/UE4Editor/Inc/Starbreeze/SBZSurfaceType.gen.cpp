// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSurfaceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSurfaceType() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAISoundSurfaceTypes();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProjectileImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableProjectileImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMeleeImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZExplosionImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFootstepImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSlidingImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMantlingImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStepUpImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZObjectImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebrisImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZThrowableImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagItemImpactConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBloodSplatterImpactConfig_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSurfaceType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSurfaceType, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSurfaceType"), sizeof(FSBZSurfaceType), Get_Z_Construct_UScriptStruct_FSBZSurfaceType_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSurfaceType>()
{
	return FSBZSurfaceType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSurfaceType(FSBZSurfaceType::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSurfaceType"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceType
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceType()
	{
		UScriptStruct::DeferCppStructOps<FSBZSurfaceType>(FName(TEXT("SBZSurfaceType")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSurfaceType;
	struct Z_Construct_UScriptStruct_FSBZSurfaceType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AISoundSurfaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISoundSurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AISoundSurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableProjectileImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableProjectileImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlidingImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlidingImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MantlingImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MantlingImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepUpImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StepUpImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebrisImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebrisImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagItemImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItemImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodSplatterImpactConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodSplatterImpactConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSoundSwitchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialSoundSwitchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSurfaceType>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_AISoundSurfaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_AISoundSurfaceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_AISoundSurfaceType = { "AISoundSurfaceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, AISoundSurfaceType), Z_Construct_UEnum_Starbreeze_ESBZAISoundSurfaceTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_AISoundSurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_AISoundSurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ProjectileImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ProjectileImpactConfig = { "ProjectileImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, ProjectileImpactConfig), Z_Construct_UClass_USBZProjectileImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ProjectileImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ProjectileImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableProjectileImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableProjectileImpactConfig = { "ThrowableProjectileImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, ThrowableProjectileImpactConfig), Z_Construct_UClass_USBZThrowableProjectileImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableProjectileImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableProjectileImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MeleeImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MeleeImpactConfig = { "MeleeImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, MeleeImpactConfig), Z_Construct_UClass_USBZMeleeImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MeleeImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MeleeImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ExplosionImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ExplosionImpactConfig = { "ExplosionImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, ExplosionImpactConfig), Z_Construct_UClass_USBZExplosionImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ExplosionImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ExplosionImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_FootstepImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_FootstepImpactConfig = { "FootstepImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, FootstepImpactConfig), Z_Construct_UClass_USBZFootstepImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_FootstepImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_FootstepImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_SlidingImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_SlidingImpactConfig = { "SlidingImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, SlidingImpactConfig), Z_Construct_UClass_USBZSlidingImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_SlidingImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_SlidingImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MantlingImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MantlingImpactConfig = { "MantlingImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, MantlingImpactConfig), Z_Construct_UClass_USBZMantlingImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MantlingImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MantlingImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_StepUpImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_StepUpImpactConfig = { "StepUpImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, StepUpImpactConfig), Z_Construct_UClass_USBZStepUpImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_StepUpImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_StepUpImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ObjectImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ObjectImpactConfig = { "ObjectImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, ObjectImpactConfig), Z_Construct_UClass_USBZObjectImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ObjectImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ObjectImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_DebrisImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_DebrisImpactConfig = { "DebrisImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, DebrisImpactConfig), Z_Construct_UClass_USBZDebrisImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_DebrisImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_DebrisImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableImpactConfig = { "ThrowableImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, ThrowableImpactConfig), Z_Construct_UClass_USBZThrowableImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BagItemImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BagItemImpactConfig = { "BagItemImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, BagItemImpactConfig), Z_Construct_UClass_USBZBagItemImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BagItemImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BagItemImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BloodSplatterImpactConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BloodSplatterImpactConfig = { "BloodSplatterImpactConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, BloodSplatterImpactConfig), Z_Construct_UClass_USBZBloodSplatterImpactConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BloodSplatterImpactConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BloodSplatterImpactConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MaterialSoundSwitchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSurfaceType" },
		{ "ModuleRelativePath", "Public/SBZSurfaceType.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MaterialSoundSwitchState = { "MaterialSoundSwitchState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSurfaceType, MaterialSoundSwitchState), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MaterialSoundSwitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MaterialSoundSwitchState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_AISoundSurfaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_AISoundSurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ProjectileImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableProjectileImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MeleeImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ExplosionImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_FootstepImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_SlidingImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MantlingImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_StepUpImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ObjectImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_DebrisImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_ThrowableImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BagItemImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_BloodSplatterImpactConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::NewProp_MaterialSoundSwitchState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSurfaceType",
		sizeof(FSBZSurfaceType),
		alignof(FSBZSurfaceType),
		Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSurfaceType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSurfaceType"), sizeof(FSBZSurfaceType), Get_Z_Construct_UScriptStruct_FSBZSurfaceType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSurfaceType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSurfaceType_Hash() { return 264223590U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
