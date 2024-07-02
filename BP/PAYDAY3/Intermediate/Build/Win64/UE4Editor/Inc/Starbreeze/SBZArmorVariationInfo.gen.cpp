// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZArmorVariationInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZArmorVariationInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorVariationInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZArmorVariationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZArmorVariationInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZArmorVariationInfo"), sizeof(FSBZArmorVariationInfo), Get_Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZArmorVariationInfo>()
{
	return FSBZArmorVariationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZArmorVariationInfo(FSBZArmorVariationInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZArmorVariationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorVariationInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorVariationInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZArmorVariationInfo>(FName(TEXT("SBZArmorVariationInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZArmorVariationInfo;
	struct Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bit_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZArmorVariationInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZArmorVariationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorVariationInfo" },
		{ "ModuleRelativePath", "Public/SBZArmorVariationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmorVariationInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorVariationInfo" },
		{ "ModuleRelativePath", "Public/SBZArmorVariationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmorVariationInfo, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Bit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZArmorVariationInfo" },
		{ "ModuleRelativePath", "Public/SBZArmorVariationInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Bit = { "Bit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZArmorVariationInfo, Bit), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Bit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Bit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::NewProp_Bit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZArmorVariationInfo",
		sizeof(FSBZArmorVariationInfo),
		alignof(FSBZArmorVariationInfo),
		Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZArmorVariationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZArmorVariationInfo"), sizeof(FSBZArmorVariationInfo), Get_Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZArmorVariationInfo_Hash() { return 2011661362U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
