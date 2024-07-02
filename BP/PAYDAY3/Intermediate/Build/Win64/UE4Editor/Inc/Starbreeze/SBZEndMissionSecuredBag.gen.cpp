// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEndMissionSecuredBag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEndMissionSecuredBag() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZEndMissionSecuredBag::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZEndMissionSecuredBag"), sizeof(FSBZEndMissionSecuredBag), Get_Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZEndMissionSecuredBag>()
{
	return FSBZEndMissionSecuredBag::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZEndMissionSecuredBag(FSBZEndMissionSecuredBag::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZEndMissionSecuredBag"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionSecuredBag
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionSecuredBag()
	{
		UScriptStruct::DeferCppStructOps<FSBZEndMissionSecuredBag>(FName(TEXT("SBZEndMissionSecuredBag")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZEndMissionSecuredBag;
	struct Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZEndMissionSecuredBag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZEndMissionSecuredBag>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_BagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionSecuredBag" },
		{ "ModuleRelativePath", "Public/SBZEndMissionSecuredBag.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionSecuredBag, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_BagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEndMissionSecuredBag" },
		{ "ModuleRelativePath", "Public/SBZEndMissionSecuredBag.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZEndMissionSecuredBag, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_BagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZEndMissionSecuredBag",
		sizeof(FSBZEndMissionSecuredBag),
		alignof(FSBZEndMissionSecuredBag),
		Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZEndMissionSecuredBag"), sizeof(FSBZEndMissionSecuredBag), Get_Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZEndMissionSecuredBag_Hash() { return 2257117535U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
