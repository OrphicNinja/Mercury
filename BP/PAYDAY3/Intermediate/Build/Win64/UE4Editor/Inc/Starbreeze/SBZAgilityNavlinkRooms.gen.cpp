// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityNavlinkRooms.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityNavlinkRooms() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZAgilityNavlinkRooms::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityNavlinkRooms"), sizeof(FSBZAgilityNavlinkRooms), Get_Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityNavlinkRooms>()
{
	return FSBZAgilityNavlinkRooms::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityNavlinkRooms(FSBZAgilityNavlinkRooms::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityNavlinkRooms"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityNavlinkRooms
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityNavlinkRooms()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityNavlinkRooms>(FName(TEXT("SBZAgilityNavlinkRooms")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityNavlinkRooms;
	struct Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LeftRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RightRoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityNavlinkRooms.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityNavlinkRooms>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_LeftRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityNavlinkRooms" },
		{ "ModuleRelativePath", "Public/SBZAgilityNavlinkRooms.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_LeftRoom = { "LeftRoom", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityNavlinkRooms, LeftRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_LeftRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_LeftRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_RightRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityNavlinkRooms" },
		{ "ModuleRelativePath", "Public/SBZAgilityNavlinkRooms.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_RightRoom = { "RightRoom", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityNavlinkRooms, RightRoom), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_RightRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_RightRoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_LeftRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::NewProp_RightRoom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityNavlinkRooms",
		sizeof(FSBZAgilityNavlinkRooms),
		alignof(FSBZAgilityNavlinkRooms),
		Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityNavlinkRooms"), sizeof(FSBZAgilityNavlinkRooms), Get_Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityNavlinkRooms_Hash() { return 1384732962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
