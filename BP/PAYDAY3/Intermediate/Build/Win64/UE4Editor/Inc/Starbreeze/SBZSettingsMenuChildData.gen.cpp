// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsMenuChildData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsMenuChildData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuChildData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZSettingsMenuChildData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSettingsMenuChildData"), sizeof(FSBZSettingsMenuChildData), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSettingsMenuChildData>()
{
	return FSBZSettingsMenuChildData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSettingsMenuChildData(FSBZSettingsMenuChildData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSettingsMenuChildData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuChildData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuChildData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSettingsMenuChildData>(FName(TEXT("SBZSettingsMenuChildData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingsMenuChildData;
	struct Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChildsName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildsName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuChildData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSettingsMenuChildData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ParentName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuChildData" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuChildData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuChildData, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ParentName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ChildsName_Inner = { "ChildsName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ChildsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuChildData" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuChildData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ChildsName = { "ChildsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingsMenuChildData, ChildsName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ChildsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ChildsName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ChildsName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::NewProp_ChildsName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSettingsMenuChildData",
		sizeof(FSBZSettingsMenuChildData),
		alignof(FSBZSettingsMenuChildData),
		Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuChildData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSettingsMenuChildData"), sizeof(FSBZSettingsMenuChildData), Get_Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSettingsMenuChildData_Hash() { return 1136518754U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
