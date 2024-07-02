// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCachedWeaponTargeting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCachedWeaponTargeting() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponSightData_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCachedWeaponTargeting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCachedWeaponTargeting"), sizeof(FSBZCachedWeaponTargeting), Get_Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCachedWeaponTargeting>()
{
	return FSBZCachedWeaponTargeting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCachedWeaponTargeting(FSBZCachedWeaponTargeting::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCachedWeaponTargeting"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCachedWeaponTargeting
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCachedWeaponTargeting()
	{
		UScriptStruct::DeferCppStructOps<FSBZCachedWeaponTargeting>(FName(TEXT("SBZCachedWeaponTargeting")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCachedWeaponTargeting;
	struct Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetingTransitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetingTransitionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCachedWeaponTargeting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCachedWeaponTargeting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_SightData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCachedWeaponTargeting" },
		{ "ModuleRelativePath", "Public/SBZCachedWeaponTargeting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_SightData = { "SightData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCachedWeaponTargeting, SightData), Z_Construct_UClass_USBZWeaponSightData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_SightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_SightData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_TargetingTransitionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCachedWeaponTargeting" },
		{ "ModuleRelativePath", "Public/SBZCachedWeaponTargeting.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_TargetingTransitionTime = { "TargetingTransitionTime", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCachedWeaponTargeting, TargetingTransitionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_TargetingTransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_TargetingTransitionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_SightData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::NewProp_TargetingTransitionTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCachedWeaponTargeting",
		sizeof(FSBZCachedWeaponTargeting),
		alignof(FSBZCachedWeaponTargeting),
		Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCachedWeaponTargeting"), sizeof(FSBZCachedWeaponTargeting), Get_Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCachedWeaponTargeting_Hash() { return 2029371713U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
