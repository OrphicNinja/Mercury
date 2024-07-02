// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPhoneHackingTargetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPhoneHackingTargetData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZPhoneHackingTargetData>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FSBZPhoneHackingTargetData cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");

class UScriptStruct* FSBZPhoneHackingTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPhoneHackingTargetData"), sizeof(FSBZPhoneHackingTargetData), Get_Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPhoneHackingTargetData>()
{
	return FSBZPhoneHackingTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPhoneHackingTargetData(FSBZPhoneHackingTargetData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPhoneHackingTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPhoneHackingTargetData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPhoneHackingTargetData()
	{
		UScriptStruct::DeferCppStructOps<FSBZPhoneHackingTargetData>(FName(TEXT("SBZPhoneHackingTargetData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPhoneHackingTargetData;
	struct Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackableActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPhoneHackingTargetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPhoneHackingTargetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::NewProp_HackableActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPhoneHackingTargetData" },
		{ "ModuleRelativePath", "Public/SBZPhoneHackingTargetData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::NewProp_HackableActor = { "HackableActor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPhoneHackingTargetData, HackableActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::NewProp_HackableActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::NewProp_HackableActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::NewProp_HackableActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
		&NewStructOps,
		"SBZPhoneHackingTargetData",
		sizeof(FSBZPhoneHackingTargetData),
		alignof(FSBZPhoneHackingTargetData),
		Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPhoneHackingTargetData"), sizeof(FSBZPhoneHackingTargetData), Get_Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPhoneHackingTargetData_Hash() { return 2803949351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
