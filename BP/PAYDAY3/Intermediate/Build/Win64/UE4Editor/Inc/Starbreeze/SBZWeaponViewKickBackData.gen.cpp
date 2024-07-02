// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponViewKickBackData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponViewKickBackData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZWeaponViewKickBackData>() == std::is_polymorphic<FSBZWeaponGunKickBackData>(), "USTRUCT FSBZWeaponViewKickBackData cannot be polymorphic unless super FSBZWeaponGunKickBackData is polymorphic");

class UScriptStruct* FSBZWeaponViewKickBackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponViewKickBackData"), sizeof(FSBZWeaponViewKickBackData), Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponViewKickBackData>()
{
	return FSBZWeaponViewKickBackData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponViewKickBackData(FSBZWeaponViewKickBackData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponViewKickBackData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponViewKickBackData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponViewKickBackData()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponViewKickBackData>(FName(TEXT("SBZWeaponViewKickBackData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponViewKickBackData;
	struct Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponViewKickBackData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponViewKickBackData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FSBZWeaponGunKickBackData,
		&NewStructOps,
		"SBZWeaponViewKickBackData",
		sizeof(FSBZWeaponViewKickBackData),
		alignof(FSBZWeaponViewKickBackData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponViewKickBackData"), sizeof(FSBZWeaponViewKickBackData), Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponViewKickBackData_Hash() { return 2725229148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
