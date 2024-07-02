// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDropCharacterSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDropCharacterSound() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDropCharacterSound();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZDropCharacterSound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDropCharacterSound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDropCharacterSound, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDropCharacterSound"), sizeof(FSBZDropCharacterSound), Get_Z_Construct_UScriptStruct_FSBZDropCharacterSound_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDropCharacterSound>()
{
	return FSBZDropCharacterSound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDropCharacterSound(FSBZDropCharacterSound::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDropCharacterSound"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDropCharacterSound
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDropCharacterSound()
	{
		UScriptStruct::DeferCppStructOps<FSBZDropCharacterSound>(FName(TEXT("SBZDropCharacterSound")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDropCharacterSound;
	struct Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropRagdollSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropRagdollSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropHumanShieldSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropHumanShieldSoundEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDropCharacterSound.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDropCharacterSound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropRagdollSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDropCharacterSound" },
		{ "ModuleRelativePath", "Public/SBZDropCharacterSound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropRagdollSoundEvent = { "DropRagdollSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDropCharacterSound, DropRagdollSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropRagdollSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropRagdollSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropHumanShieldSoundEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDropCharacterSound" },
		{ "ModuleRelativePath", "Public/SBZDropCharacterSound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropHumanShieldSoundEvent = { "DropHumanShieldSoundEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDropCharacterSound, DropHumanShieldSoundEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropHumanShieldSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropHumanShieldSoundEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropRagdollSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::NewProp_DropHumanShieldSoundEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDropCharacterSound",
		sizeof(FSBZDropCharacterSound),
		alignof(FSBZDropCharacterSound),
		Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDropCharacterSound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDropCharacterSound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDropCharacterSound"), sizeof(FSBZDropCharacterSound), Get_Z_Construct_UScriptStruct_FSBZDropCharacterSound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDropCharacterSound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDropCharacterSound_Hash() { return 2217191370U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
