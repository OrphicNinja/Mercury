// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoiceEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoiceEventData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceEventData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVoiceEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVoiceEventData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVoiceEventData"), sizeof(FSBZVoiceEventData), Get_Z_Construct_UScriptStruct_FSBZVoiceEventData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVoiceEventData>()
{
	return FSBZVoiceEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVoiceEventData(FSBZVoiceEventData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVoiceEventData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceEventData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceEventData()
	{
		UScriptStruct::DeferCppStructOps<FSBZVoiceEventData>(FName(TEXT("SBZVoiceEventData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceEventData;
	struct Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVoiceEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVoiceEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceEventData" },
		{ "ModuleRelativePath", "Public/SBZVoiceEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVoiceEventData, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_AudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_AudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_SwitchGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceEventData" },
		{ "ModuleRelativePath", "Public/SBZVoiceEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVoiceEventData, SwitchGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_SwitchGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_SwitchGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::NewProp_SwitchGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVoiceEventData",
		sizeof(FSBZVoiceEventData),
		alignof(FSBZVoiceEventData),
		Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVoiceEventData"), sizeof(FSBZVoiceEventData), Get_Z_Construct_UScriptStruct_FSBZVoiceEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVoiceEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceEventData_Hash() { return 3714161719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
