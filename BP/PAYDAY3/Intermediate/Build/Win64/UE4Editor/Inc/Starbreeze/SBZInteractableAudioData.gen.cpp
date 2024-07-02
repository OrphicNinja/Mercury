// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractableAudioData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractableAudioData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableAudioData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZInteractableAudioData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableAudioData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZInteractableAudioData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZInteractableAudioData"), sizeof(FSBZInteractableAudioData), Get_Z_Construct_UScriptStruct_FSBZInteractableAudioData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZInteractableAudioData>()
{
	return FSBZInteractableAudioData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZInteractableAudioData(FSBZInteractableAudioData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZInteractableAudioData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableAudioData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableAudioData()
	{
		UScriptStruct::DeferCppStructOps<FSBZInteractableAudioData>(FName(TEXT("SBZInteractableAudioData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZInteractableAudioData;
	struct Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractableAudioData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZInteractableAudioData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableAudioData" },
		{ "ModuleRelativePath", "Public/SBZInteractableAudioData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent2D = { "AudioEvent2D", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableAudioData, AudioEvent2D), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent3D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableAudioData" },
		{ "ModuleRelativePath", "Public/SBZInteractableAudioData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent3D = { "AudioEvent3D", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableAudioData, AudioEvent3D), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_VoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractableAudioData" },
		{ "ModuleRelativePath", "Public/SBZInteractableAudioData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_VoiceComment = { "VoiceComment", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZInteractableAudioData, VoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_VoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_VoiceComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_AudioEvent3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::NewProp_VoiceComment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZInteractableAudioData",
		sizeof(FSBZInteractableAudioData),
		alignof(FSBZInteractableAudioData),
		Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZInteractableAudioData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableAudioData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZInteractableAudioData"), sizeof(FSBZInteractableAudioData), Get_Z_Construct_UScriptStruct_FSBZInteractableAudioData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZInteractableAudioData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZInteractableAudioData_Hash() { return 882260421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
