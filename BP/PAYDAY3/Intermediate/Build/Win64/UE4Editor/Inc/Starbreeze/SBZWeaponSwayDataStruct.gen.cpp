// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponSwayDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponSwayDataStruct() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FSBZWeaponSwayDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponSwayDataStruct"), sizeof(FSBZWeaponSwayDataStruct), Get_Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponSwayDataStruct>()
{
	return FSBZWeaponSwayDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponSwayDataStruct(FSBZWeaponSwayDataStruct::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponSwayDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSwayDataStruct
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSwayDataStruct()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponSwayDataStruct>(FName(TEXT("SBZWeaponSwayDataStruct")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponSwayDataStruct;
	struct Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalTranslationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalTranslationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OvershootTranslationDeltaMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OvershootTranslationDeltaMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationRecoverySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationRecoverySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxisTranslationRecoverySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XAxisTranslationRecoverySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalRotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinalRotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OvershootRotationDeltaMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OvershootRotationDeltaMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawRecoverySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawRecoverySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchRecoverySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchRecoverySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollRecoverySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollRecoverySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YTranslationToRollInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YTranslationToRollInfluence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponSwayDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, CameraOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_CameraOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_CameraOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinTranslation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinTranslation = { "MinTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, MinTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxTranslation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxTranslation = { "MaxTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, MaxTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationInfluence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationInfluence = { "TranslationInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, TranslationInfluence), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalTranslationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalTranslationMultiplier = { "FinalTranslationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, FinalTranslationMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalTranslationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalTranslationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootTranslationDeltaMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootTranslationDeltaMultiplier = { "OvershootTranslationDeltaMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, OvershootTranslationDeltaMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootTranslationDeltaMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootTranslationDeltaMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationRecoverySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationRecoverySpeed = { "TranslationRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, TranslationRecoverySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationRecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationRecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_XAxisTranslationRecoverySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_XAxisTranslationRecoverySpeed = { "XAxisTranslationRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, XAxisTranslationRecoverySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_XAxisTranslationRecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_XAxisTranslationRecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinRotation = { "MinRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, MinRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxRotation = { "MaxRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, MaxRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RotationInfluence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RotationInfluence = { "RotationInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, RotationInfluence), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RotationInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RotationInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalRotationMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalRotationMultiplier = { "FinalRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, FinalRotationMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootRotationDeltaMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootRotationDeltaMultiplier = { "OvershootRotationDeltaMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, OvershootRotationDeltaMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootRotationDeltaMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootRotationDeltaMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YawRecoverySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YawRecoverySpeed = { "YawRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, YawRecoverySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YawRecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YawRecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_PitchRecoverySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_PitchRecoverySpeed = { "PitchRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, PitchRecoverySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_PitchRecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_PitchRecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RollRecoverySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RollRecoverySpeed = { "RollRecoverySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, RollRecoverySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RollRecoverySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RollRecoverySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YTranslationToRollInfluence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponSwayDataStruct" },
		{ "ModuleRelativePath", "Public/SBZWeaponSwayDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YTranslationToRollInfluence = { "YTranslationToRollInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponSwayDataStruct, YTranslationToRollInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YTranslationToRollInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YTranslationToRollInfluence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_CameraOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalTranslationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootTranslationDeltaMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_TranslationRecoverySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_XAxisTranslationRecoverySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MinRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_MaxRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RotationInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_FinalRotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_OvershootRotationDeltaMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YawRecoverySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_PitchRecoverySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_RollRecoverySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::NewProp_YTranslationToRollInfluence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponSwayDataStruct",
		sizeof(FSBZWeaponSwayDataStruct),
		alignof(FSBZWeaponSwayDataStruct),
		Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponSwayDataStruct"), sizeof(FSBZWeaponSwayDataStruct), Get_Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponSwayDataStruct_Hash() { return 3681279205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
