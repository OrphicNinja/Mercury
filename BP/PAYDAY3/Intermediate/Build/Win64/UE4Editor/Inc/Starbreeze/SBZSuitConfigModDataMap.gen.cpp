// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitConfigModDataMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitConfigModDataMap() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZSuitConfigModDataMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSuitConfigModDataMap"), sizeof(FSBZSuitConfigModDataMap), Get_Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSuitConfigModDataMap>()
{
	return FSBZSuitConfigModDataMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSuitConfigModDataMap(FSBZSuitConfigModDataMap::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSuitConfigModDataMap"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfigModDataMap
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfigModDataMap()
	{
		UScriptStruct::DeferCppStructOps<FSBZSuitConfigModDataMap>(FName(TEXT("SBZSuitConfigModDataMap")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSuitConfigModDataMap;
	struct Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitConfigModDataMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSuitConfigModDataMap>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap_ValueProp = { "ModDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSuitPartConfigGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap_Key_KeyProp = { "ModDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitConfigModDataMap" },
		{ "ModuleRelativePath", "Public/SBZSuitConfigModDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap = { "ModDataMap", nullptr, (EPropertyFlags)0x0010000080000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSuitConfigModDataMap, ModDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::NewProp_ModDataMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSuitConfigModDataMap",
		sizeof(FSBZSuitConfigModDataMap),
		alignof(FSBZSuitConfigModDataMap),
		Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSuitConfigModDataMap"), sizeof(FSBZSuitConfigModDataMap), Get_Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSuitConfigModDataMap_Hash() { return 3678287232U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
