// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCachedNavLinkPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCachedNavLinkPoints() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZCachedNavLinkPoints::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCachedNavLinkPoints"), sizeof(FSBZCachedNavLinkPoints), Get_Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCachedNavLinkPoints>()
{
	return FSBZCachedNavLinkPoints::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCachedNavLinkPoints(FSBZCachedNavLinkPoints::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCachedNavLinkPoints"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCachedNavLinkPoints
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCachedNavLinkPoints()
	{
		UScriptStruct::DeferCppStructOps<FSBZCachedNavLinkPoints>(FName(TEXT("SBZCachedNavLinkPoints")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCachedNavLinkPoints;
	struct Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_NavLink;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCachedNavLinkPoints.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCachedNavLinkPoints>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::NewProp_NavLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCachedNavLinkPoints" },
		{ "ModuleRelativePath", "Public/SBZCachedNavLinkPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::NewProp_NavLink = { "NavLink", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCachedNavLinkPoints, NavLink), Z_Construct_UClass_USBZBlockableNavlinkInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::NewProp_NavLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::NewProp_NavLink_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::NewProp_NavLink,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCachedNavLinkPoints",
		sizeof(FSBZCachedNavLinkPoints),
		alignof(FSBZCachedNavLinkPoints),
		Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCachedNavLinkPoints"), sizeof(FSBZCachedNavLinkPoints), Get_Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints_Hash() { return 4274889693U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
