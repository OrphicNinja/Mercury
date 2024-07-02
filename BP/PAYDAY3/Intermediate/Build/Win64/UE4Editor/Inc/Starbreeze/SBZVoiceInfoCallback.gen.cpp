// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoiceInfoCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoiceInfoCallback() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceInfoCallback();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVoiceInfoCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVoiceInfoCallback, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVoiceInfoCallback"), sizeof(FSBZVoiceInfoCallback), Get_Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVoiceInfoCallback>()
{
	return FSBZVoiceInfoCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVoiceInfoCallback(FSBZVoiceInfoCallback::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVoiceInfoCallback"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceInfoCallback
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceInfoCallback()
	{
		UScriptStruct::DeferCppStructOps<FSBZVoiceInfoCallback>(FName(TEXT("SBZVoiceInfoCallback")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVoiceInfoCallback;
	struct Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVoiceInfoCallback.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVoiceInfoCallback>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::NewProp_VoiceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVoiceInfoCallback" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZVoiceInfoCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::NewProp_VoiceComponent = { "VoiceComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVoiceInfoCallback, VoiceComponent), Z_Construct_UClass_USBZCharacterVoiceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::NewProp_VoiceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::NewProp_VoiceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::NewProp_VoiceComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVoiceInfoCallback",
		sizeof(FSBZVoiceInfoCallback),
		alignof(FSBZVoiceInfoCallback),
		Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceInfoCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVoiceInfoCallback"), sizeof(FSBZVoiceInfoCallback), Get_Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVoiceInfoCallback_Hash() { return 3034404294U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
