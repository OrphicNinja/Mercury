// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHelmetHideInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHelmetHideInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHelmetHideInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZHelmetHideInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHelmetHideInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHelmetHideInfo"), sizeof(FSBZHelmetHideInfo), Get_Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHelmetHideInfo>()
{
	return FSBZHelmetHideInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHelmetHideInfo(FSBZHelmetHideInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHelmetHideInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHelmetHideInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHelmetHideInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZHelmetHideInfo>(FName(TEXT("SBZHelmetHideInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHelmetHideInfo;
	struct Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHelmetHideInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHelmetHideInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_CPDIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHelmetHideInfo" },
		{ "ModuleRelativePath", "Public/SBZHelmetHideInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_CPDIndex = { "CPDIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHelmetHideInfo, CPDIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_CPDIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_CPDIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_Bit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHelmetHideInfo" },
		{ "ModuleRelativePath", "Public/SBZHelmetHideInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_Bit = { "Bit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHelmetHideInfo, Bit), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_Bit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_Bit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_CPDIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::NewProp_Bit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHelmetHideInfo",
		sizeof(FSBZHelmetHideInfo),
		alignof(FSBZHelmetHideInfo),
		Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHelmetHideInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHelmetHideInfo"), sizeof(FSBZHelmetHideInfo), Get_Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHelmetHideInfo_Hash() { return 1276061402U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
