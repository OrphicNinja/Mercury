// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocalPlayerFeedbackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocalPlayerFeedbackInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZLocalPlayerFeedbackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLocalPlayerFeedbackInfo"), sizeof(FSBZLocalPlayerFeedbackInfo), Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLocalPlayerFeedbackInfo>()
{
	return FSBZLocalPlayerFeedbackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLocalPlayerFeedbackInfo(FSBZLocalPlayerFeedbackInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLocalPlayerFeedbackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalPlayerFeedbackInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalPlayerFeedbackInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZLocalPlayerFeedbackInfo>(FName(TEXT("SBZLocalPlayerFeedbackInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalPlayerFeedbackInfo;
	struct Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerFeedback_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerFeedback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLocalPlayerFeedbackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_PlayerFeedback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackInfo" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_PlayerFeedback = { "PlayerFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalPlayerFeedbackInfo, PlayerFeedback), Z_Construct_UClass_USBZLocalPlayerFeedback_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_PlayerFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_PlayerFeedback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalPlayerFeedbackInfo" },
		{ "ModuleRelativePath", "Public/SBZLocalPlayerFeedbackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalPlayerFeedbackInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_PlayerFeedback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLocalPlayerFeedbackInfo",
		sizeof(FSBZLocalPlayerFeedbackInfo),
		alignof(FSBZLocalPlayerFeedbackInfo),
		Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLocalPlayerFeedbackInfo"), sizeof(FSBZLocalPlayerFeedbackInfo), Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLocalPlayerFeedbackInfo_Hash() { return 43241117U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
