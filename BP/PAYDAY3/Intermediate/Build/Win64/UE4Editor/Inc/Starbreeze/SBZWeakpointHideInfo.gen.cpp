// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeakpointHideInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeakpointHideInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeakpointHideInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeakpointHideInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeakpointHideInfo"), sizeof(FSBZWeakpointHideInfo), Get_Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeakpointHideInfo>()
{
	return FSBZWeakpointHideInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeakpointHideInfo(FSBZWeakpointHideInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeakpointHideInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeakpointHideInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeakpointHideInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeakpointHideInfo>(FName(TEXT("SBZWeakpointHideInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeakpointHideInfo;
	struct Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPDIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CPDIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bit_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeakpointHideInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeakpointHideInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_CPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeakpointHideInfo" },
		{ "ModuleRelativePath", "Public/SBZWeakpointHideInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_CPDIndex = { "CPDIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeakpointHideInfo, CPDIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_CPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_CPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_Bit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeakpointHideInfo" },
		{ "ModuleRelativePath", "Public/SBZWeakpointHideInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_Bit = { "Bit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeakpointHideInfo, Bit), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_Bit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_Bit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_CPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::NewProp_Bit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeakpointHideInfo",
		sizeof(FSBZWeakpointHideInfo),
		alignof(FSBZWeakpointHideInfo),
		Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeakpointHideInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeakpointHideInfo"), sizeof(FSBZWeakpointHideInfo), Get_Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeakpointHideInfo_Hash() { return 4201083233U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
