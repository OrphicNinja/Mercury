// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPatternDataSingleColorAreaList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPatternDataSingleColorAreaList() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPatternAreaData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZWeaponPatternDataSingleColorAreaList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponPatternDataSingleColorAreaList"), sizeof(FSBZWeaponPatternDataSingleColorAreaList), Get_Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponPatternDataSingleColorAreaList>()
{
	return FSBZWeaponPatternDataSingleColorAreaList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList(FSBZWeaponPatternDataSingleColorAreaList::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponPatternDataSingleColorAreaList"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPatternDataSingleColorAreaList
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPatternDataSingleColorAreaList()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponPatternDataSingleColorAreaList>(FName(TEXT("SBZWeaponPatternDataSingleColorAreaList")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponPatternDataSingleColorAreaList;
	struct Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AreaList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AreaList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternDataSingleColorAreaList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponPatternDataSingleColorAreaList>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewProp_AreaList_Inner = { "AreaList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWeaponPatternAreaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewProp_AreaList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPatternDataSingleColorAreaList" },
		{ "ModuleRelativePath", "Public/SBZWeaponPatternDataSingleColorAreaList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewProp_AreaList = { "AreaList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponPatternDataSingleColorAreaList, AreaList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewProp_AreaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewProp_AreaList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewProp_AreaList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::NewProp_AreaList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponPatternDataSingleColorAreaList",
		sizeof(FSBZWeaponPatternDataSingleColorAreaList),
		alignof(FSBZWeaponPatternDataSingleColorAreaList),
		Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponPatternDataSingleColorAreaList"), sizeof(FSBZWeaponPatternDataSingleColorAreaList), Get_Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponPatternDataSingleColorAreaList_Hash() { return 1579603161U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
