// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPendingUsingSpawnedCarryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPendingUsingSpawnedCarryData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPendingUsingSpawnedCarryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPendingUsingSpawnedCarryData"), sizeof(FSBZPendingUsingSpawnedCarryData), Get_Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPendingUsingSpawnedCarryData>()
{
	return FSBZPendingUsingSpawnedCarryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPendingUsingSpawnedCarryData(FSBZPendingUsingSpawnedCarryData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPendingUsingSpawnedCarryData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPendingUsingSpawnedCarryData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPendingUsingSpawnedCarryData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPendingUsingSpawnedCarryData>(FName(TEXT("SBZPendingUsingSpawnedCarryData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPendingUsingSpawnedCarryData;
	struct Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPendingUsingSpawnedCarryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPendingUsingSpawnedCarryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::NewProp_User_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPendingUsingSpawnedCarryData" },
		{ "ModuleRelativePath", "Public/SBZPendingUsingSpawnedCarryData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPendingUsingSpawnedCarryData, User), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::NewProp_User_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::NewProp_User,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPendingUsingSpawnedCarryData",
		sizeof(FSBZPendingUsingSpawnedCarryData),
		alignof(FSBZPendingUsingSpawnedCarryData),
		Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPendingUsingSpawnedCarryData"), sizeof(FSBZPendingUsingSpawnedCarryData), Get_Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPendingUsingSpawnedCarryData_Hash() { return 202910963U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
