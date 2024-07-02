// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEffectRuntime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEffectRuntime() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCharacterEffectRuntime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCharacterEffectRuntime"), sizeof(FSBZCharacterEffectRuntime), Get_Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCharacterEffectRuntime>()
{
	return FSBZCharacterEffectRuntime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCharacterEffectRuntime(FSBZCharacterEffectRuntime::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCharacterEffectRuntime"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEffectRuntime
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEffectRuntime()
	{
		UScriptStruct::DeferCppStructOps<FSBZCharacterEffectRuntime>(FName(TEXT("SBZCharacterEffectRuntime")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCharacterEffectRuntime;
	struct Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterEffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEffectValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterEffectValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownAnimationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownAnimationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidesWhenActive_MetaData[];
#endif
		static void NewProp_bHidesWhenActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidesWhenActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoRemove_MetaData[];
#endif
		static void NewProp_bIsAutoRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCharacterEffectRuntime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectRuntime" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectData = { "CharacterEffectData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEffectRuntime, CharacterEffectData), Z_Construct_UClass_USBZCharacterEffectDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectRuntime" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEffectRuntime, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectRuntime" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectValue = { "CharacterEffectValue", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEffectRuntime, CharacterEffectValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownAnimationTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectRuntime" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownAnimationTime = { "CooldownAnimationTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEffectRuntime, CooldownAnimationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownAnimationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownAnimationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectRuntime" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownTimer = { "CooldownTimer", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCharacterEffectRuntime, CooldownTimer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bHidesWhenActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectRuntime" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bHidesWhenActive_SetBit(void* Obj)
	{
		((FSBZCharacterEffectRuntime*)Obj)->bHidesWhenActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bHidesWhenActive = { "bHidesWhenActive", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCharacterEffectRuntime), &Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bHidesWhenActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bHidesWhenActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bHidesWhenActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bIsAutoRemove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectRuntime" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectRuntime.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bIsAutoRemove_SetBit(void* Obj)
	{
		((FSBZCharacterEffectRuntime*)Obj)->bIsAutoRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bIsAutoRemove = { "bIsAutoRemove", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCharacterEffectRuntime), &Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bIsAutoRemove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bIsAutoRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bIsAutoRemove_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CharacterEffectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownAnimationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_CooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bHidesWhenActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::NewProp_bIsAutoRemove,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCharacterEffectRuntime",
		sizeof(FSBZCharacterEffectRuntime),
		alignof(FSBZCharacterEffectRuntime),
		Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCharacterEffectRuntime"), sizeof(FSBZCharacterEffectRuntime), Get_Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime_Hash() { return 278922921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
