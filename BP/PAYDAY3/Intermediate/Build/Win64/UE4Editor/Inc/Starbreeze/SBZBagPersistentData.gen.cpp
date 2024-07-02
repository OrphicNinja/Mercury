// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagPersistentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagPersistentData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagPersistentData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZBagPersistentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBagPersistentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBagPersistentData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBagPersistentData"), sizeof(FSBZBagPersistentData), Get_Z_Construct_UScriptStruct_FSBZBagPersistentData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBagPersistentData>()
{
	return FSBZBagPersistentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBagPersistentData(FSBZBagPersistentData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBagPersistentData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBagPersistentData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBagPersistentData()
	{
		UScriptStruct::DeferCppStructOps<FSBZBagPersistentData>(FName(TEXT("SBZBagPersistentData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBagPersistentData;
	struct Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Secured_MetaData[];
#endif
		static void NewProp_Secured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Secured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastClaimedByPlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastClaimedByPlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastClaimedByPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastClaimedByPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTimeAtFirstPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerTimeAtFirstPickup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBagPersistentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBagPersistentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Handle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagPersistentData" },
		{ "ModuleRelativePath", "Public/SBZBagPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagPersistentData, Handle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Handle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Secured_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagPersistentData" },
		{ "ModuleRelativePath", "Public/SBZBagPersistentData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Secured_SetBit(void* Obj)
	{
		((FSBZBagPersistentData*)Obj)->Secured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Secured = { "Secured", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZBagPersistentData), &Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Secured_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Secured_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Secured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_CurrentActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagPersistentData" },
		{ "ModuleRelativePath", "Public/SBZBagPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_CurrentActor = { "CurrentActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagPersistentData, CurrentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_CurrentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_CurrentActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagPersistentData" },
		{ "ModuleRelativePath", "Public/SBZBagPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerCharacter = { "LastClaimedByPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagPersistentData, LastClaimedByPlayerCharacter), Z_Construct_UClass_ASBZPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagPersistentData" },
		{ "ModuleRelativePath", "Public/SBZBagPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerState = { "LastClaimedByPlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagPersistentData, LastClaimedByPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_ServerTimeAtFirstPickup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagPersistentData" },
		{ "ModuleRelativePath", "Public/SBZBagPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_ServerTimeAtFirstPickup = { "ServerTimeAtFirstPickup", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBagPersistentData, ServerTimeAtFirstPickup), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_ServerTimeAtFirstPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_ServerTimeAtFirstPickup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_Secured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_CurrentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_LastClaimedByPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::NewProp_ServerTimeAtFirstPickup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBagPersistentData",
		sizeof(FSBZBagPersistentData),
		alignof(FSBZBagPersistentData),
		Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBagPersistentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBagPersistentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBagPersistentData"), sizeof(FSBZBagPersistentData), Get_Z_Construct_UScriptStruct_FSBZBagPersistentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBagPersistentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBagPersistentData_Hash() { return 2403489339U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
