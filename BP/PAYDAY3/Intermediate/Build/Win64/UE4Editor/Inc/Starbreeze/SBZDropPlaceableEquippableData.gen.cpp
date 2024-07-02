// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDropPlaceableEquippableData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDropPlaceableEquippableData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal();
// End Cross Module References
class UScriptStruct* FSBZDropPlaceableEquippableData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDropPlaceableEquippableData"), sizeof(FSBZDropPlaceableEquippableData), Get_Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDropPlaceableEquippableData>()
{
	return FSBZDropPlaceableEquippableData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDropPlaceableEquippableData(FSBZDropPlaceableEquippableData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDropPlaceableEquippableData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDropPlaceableEquippableData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDropPlaceableEquippableData()
	{
		UScriptStruct::DeferCppStructOps<FSBZDropPlaceableEquippableData>(FName(TEXT("SBZDropPlaceableEquippableData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDropPlaceableEquippableData;
	struct Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDropPlaceableEquippableData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDropPlaceableEquippableData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDropPlaceableEquippableData" },
		{ "ModuleRelativePath", "Public/SBZDropPlaceableEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDropPlaceableEquippableData, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Quat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDropPlaceableEquippableData" },
		{ "ModuleRelativePath", "Public/SBZDropPlaceableEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDropPlaceableEquippableData, Quat), Z_Construct_UScriptStruct_FSBZQuat_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Quat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Quat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDropPlaceableEquippableData" },
		{ "ModuleRelativePath", "Public/SBZDropPlaceableEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDropPlaceableEquippableData, LinearVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_LinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDropPlaceableEquippableData" },
		{ "ModuleRelativePath", "Public/SBZDropPlaceableEquippableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDropPlaceableEquippableData, AngularVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_AngularVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_Quat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::NewProp_AngularVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDropPlaceableEquippableData",
		sizeof(FSBZDropPlaceableEquippableData),
		alignof(FSBZDropPlaceableEquippableData),
		Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDropPlaceableEquippableData"), sizeof(FSBZDropPlaceableEquippableData), Get_Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDropPlaceableEquippableData_Hash() { return 2641906849U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
