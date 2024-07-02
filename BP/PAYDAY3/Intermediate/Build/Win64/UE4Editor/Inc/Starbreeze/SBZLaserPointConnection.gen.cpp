// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLaserPointConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLaserPointConnection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLaserPointConnection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
// End Cross Module References
class UScriptStruct* FSBZLaserPointConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLaserPointConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLaserPointConnection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLaserPointConnection"), sizeof(FSBZLaserPointConnection), Get_Z_Construct_UScriptStruct_FSBZLaserPointConnection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLaserPointConnection>()
{
	return FSBZLaserPointConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLaserPointConnection(FSBZLaserPointConnection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLaserPointConnection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLaserPointConnection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLaserPointConnection()
	{
		UScriptStruct::DeferCppStructOps<FSBZLaserPointConnection>(FName(TEXT("SBZLaserPointConnection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLaserPointConnection;
	struct Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserPointConnection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLaserPointConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserPointConnection" },
		{ "ModuleRelativePath", "Public/SBZLaserPointConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointA = { "PointA", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLaserPointConnection, PointA), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserPointConnection" },
		{ "ModuleRelativePath", "Public/SBZLaserPointConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointB = { "PointB", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLaserPointConnection, PointB), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::NewProp_PointB,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZLaserPointConnection",
		sizeof(FSBZLaserPointConnection),
		alignof(FSBZLaserPointConnection),
		Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLaserPointConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLaserPointConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLaserPointConnection"), sizeof(FSBZLaserPointConnection), Get_Z_Construct_UScriptStruct_FSBZLaserPointConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLaserPointConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLaserPointConnection_Hash() { return 2445872890U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
