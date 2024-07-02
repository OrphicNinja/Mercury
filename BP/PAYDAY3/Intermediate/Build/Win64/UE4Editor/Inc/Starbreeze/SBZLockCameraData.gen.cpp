// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLockCameraData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLockCameraData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZLockCameraData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLockCameraData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLockCameraData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLockCameraData"), sizeof(FSBZLockCameraData), Get_Z_Construct_UScriptStruct_FSBZLockCameraData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLockCameraData>()
{
	return FSBZLockCameraData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLockCameraData(FSBZLockCameraData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLockCameraData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLockCameraData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLockCameraData()
	{
		UScriptStruct::DeferCppStructOps<FSBZLockCameraData>(FName(TEXT("SBZLockCameraData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLockCameraData;
	struct Z_Construct_UScriptStruct_FSBZLockCameraData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDampeningScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDampeningScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDampeningScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDampeningScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartScaleDampeningPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartScaleDampeningPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartScaleDampeningYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartScaleDampeningYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndScaleDampeningPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndScaleDampeningPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndScaleDampeningYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndScaleDampeningYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClampRelativeToCurrent_MetaData[];
#endif
		static void NewProp_bIsClampRelativeToCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClampRelativeToCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDampeningUsed_MetaData[];
#endif
		static void NewProp_bIsDampeningUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDampeningUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDampeningOnlyTowardLimit_MetaData[];
#endif
		static void NewProp_bIsDampeningOnlyTowardLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDampeningOnlyTowardLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsControlRotationAffected_MetaData[];
#endif
		static void NewProp_bIsControlRotationAffected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsControlRotationAffected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsControlRotationChangeAllowed_MetaData[];
#endif
		static void NewProp_bIsControlRotationChangeAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsControlRotationChangeAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnlyControlRotationAffected_MetaData[];
#endif
		static void NewProp_bIsOnlyControlRotationAffected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnlyControlRotationAffected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLockCameraData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_PitchLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_PitchLimit = { "PitchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, PitchLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_PitchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_PitchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_YawLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_YawLimit = { "YawLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, YawLimit), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_YawLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_YawLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MinDampeningScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MinDampeningScale = { "MinDampeningScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, MinDampeningScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MinDampeningScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MinDampeningScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MaxDampeningScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MaxDampeningScale = { "MaxDampeningScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, MaxDampeningScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MaxDampeningScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MaxDampeningScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningPitch = { "StartScaleDampeningPitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, StartScaleDampeningPitch), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningYaw = { "StartScaleDampeningYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, StartScaleDampeningYaw), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningPitch = { "EndScaleDampeningPitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, EndScaleDampeningPitch), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningYaw = { "EndScaleDampeningYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, EndScaleDampeningYaw), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsClampRelativeToCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsClampRelativeToCurrent_SetBit(void* Obj)
	{
		((FSBZLockCameraData*)Obj)->bIsClampRelativeToCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsClampRelativeToCurrent = { "bIsClampRelativeToCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZLockCameraData), &Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsClampRelativeToCurrent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsClampRelativeToCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsClampRelativeToCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningUsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningUsed_SetBit(void* Obj)
	{
		((FSBZLockCameraData*)Obj)->bIsDampeningUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningUsed = { "bIsDampeningUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZLockCameraData), &Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningOnlyTowardLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningOnlyTowardLimit_SetBit(void* Obj)
	{
		((FSBZLockCameraData*)Obj)->bIsDampeningOnlyTowardLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningOnlyTowardLimit = { "bIsDampeningOnlyTowardLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZLockCameraData), &Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningOnlyTowardLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningOnlyTowardLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningOnlyTowardLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationAffected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationAffected_SetBit(void* Obj)
	{
		((FSBZLockCameraData*)Obj)->bIsControlRotationAffected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationAffected = { "bIsControlRotationAffected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZLockCameraData), &Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationAffected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationAffected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationAffected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationChangeAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationChangeAllowed_SetBit(void* Obj)
	{
		((FSBZLockCameraData*)Obj)->bIsControlRotationChangeAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationChangeAllowed = { "bIsControlRotationChangeAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZLockCameraData), &Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationChangeAllowed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationChangeAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationChangeAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsOnlyControlRotationAffected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsOnlyControlRotationAffected_SetBit(void* Obj)
	{
		((FSBZLockCameraData*)Obj)->bIsOnlyControlRotationAffected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsOnlyControlRotationAffected = { "bIsOnlyControlRotationAffected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZLockCameraData), &Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsOnlyControlRotationAffected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsOnlyControlRotationAffected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsOnlyControlRotationAffected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLockCameraData" },
		{ "ModuleRelativePath", "Public/SBZLockCameraData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLockCameraData, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_PitchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_YawLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MinDampeningScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_MaxDampeningScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_StartScaleDampeningYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_EndScaleDampeningYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsClampRelativeToCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsDampeningOnlyTowardLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationAffected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsControlRotationChangeAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_bIsOnlyControlRotationAffected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLockCameraData",
		sizeof(FSBZLockCameraData),
		alignof(FSBZLockCameraData),
		Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLockCameraData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLockCameraData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLockCameraData"), sizeof(FSBZLockCameraData), Get_Z_Construct_UScriptStruct_FSBZLockCameraData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLockCameraData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLockCameraData_Hash() { return 293987479U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
