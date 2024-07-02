// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponModificationUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponModificationUIData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponModificationUIData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZWeaponModificationUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponModificationUIData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponModificationUIData"), sizeof(FSBZWeaponModificationUIData), Get_Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponModificationUIData>()
{
	return FSBZWeaponModificationUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponModificationUIData(FSBZWeaponModificationUIData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponModificationUIData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponModificationUIData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponModificationUIData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponModificationUIData>(FName(TEXT("SBZWeaponModificationUIData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponModificationUIData;
	struct Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponModificationUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponModificationUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponModificationUIData" },
		{ "ModuleRelativePath", "Public/SBZWeaponModificationUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponModificationUIData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponModificationUIData",
		sizeof(FSBZWeaponModificationUIData),
		alignof(FSBZWeaponModificationUIData),
		Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponModificationUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponModificationUIData"), sizeof(FSBZWeaponModificationUIData), Get_Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponModificationUIData_Hash() { return 2081218993U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
