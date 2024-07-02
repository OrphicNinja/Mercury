// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRoomPathQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRoomPathQuery() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRoomPathQuery();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZRoomPathQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZRoomPathQuery_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZRoomPathQuery, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZRoomPathQuery"), sizeof(FSBZRoomPathQuery), Get_Z_Construct_UScriptStruct_FSBZRoomPathQuery_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZRoomPathQuery>()
{
	return FSBZRoomPathQuery::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZRoomPathQuery(FSBZRoomPathQuery::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZRoomPathQuery"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRoomPathQuery
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZRoomPathQuery()
	{
		UScriptStruct::DeferCppStructOps<FSBZRoomPathQuery>(FName(TEXT("SBZRoomPathQuery")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZRoomPathQuery;
	struct Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZRoomPathQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZRoomPathQuery>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_StartRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPathQuery" },
		{ "ModuleRelativePath", "Public/SBZRoomPathQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_StartRoom = { "StartRoom", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRoomPathQuery, StartRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_StartRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_StartRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_EndRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPathQuery" },
		{ "ModuleRelativePath", "Public/SBZRoomPathQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_EndRoom = { "EndRoom", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRoomPathQuery, EndRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_EndRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_EndRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_Owner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRoomPathQuery" },
		{ "ModuleRelativePath", "Public/SBZRoomPathQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZRoomPathQuery, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_StartRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_EndRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZRoomPathQuery",
		sizeof(FSBZRoomPathQuery),
		alignof(FSBZRoomPathQuery),
		Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZRoomPathQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZRoomPathQuery_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZRoomPathQuery"), sizeof(FSBZRoomPathQuery), Get_Z_Construct_UScriptStruct_FSBZRoomPathQuery_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZRoomPathQuery_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZRoomPathQuery_Hash() { return 2924237583U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
