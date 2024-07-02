// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVolumeDamageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVolumeDamageData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVolumeDamageData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVolumeDamageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVolumeDamageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVolumeDamageData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVolumeDamageData"), sizeof(FSBZVolumeDamageData), Get_Z_Construct_UScriptStruct_FSBZVolumeDamageData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVolumeDamageData>()
{
	return FSBZVolumeDamageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVolumeDamageData(FSBZVolumeDamageData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVolumeDamageData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVolumeDamageData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVolumeDamageData()
	{
		UScriptStruct::DeferCppStructOps<FSBZVolumeDamageData>(FName(TEXT("SBZVolumeDamageData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVolumeDamageData;
	struct Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVolumeDamageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageData" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVolumeDamageData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Owner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVolumeDamageData" },
		{ "ModuleRelativePath", "Public/SBZVolumeDamageData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVolumeDamageData, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVolumeDamageData",
		sizeof(FSBZVolumeDamageData),
		alignof(FSBZVolumeDamageData),
		Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVolumeDamageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVolumeDamageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVolumeDamageData"), sizeof(FSBZVolumeDamageData), Get_Z_Construct_UScriptStruct_FSBZVolumeDamageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVolumeDamageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVolumeDamageData_Hash() { return 2275841061U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
