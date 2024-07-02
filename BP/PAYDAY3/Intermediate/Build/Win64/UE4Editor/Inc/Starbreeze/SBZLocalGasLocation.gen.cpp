// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLocalGasLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLocalGasLocation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalGasLocation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZLocalGasLocation>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FSBZLocalGasLocation cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

class UScriptStruct* FSBZLocalGasLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZLocalGasLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZLocalGasLocation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZLocalGasLocation"), sizeof(FSBZLocalGasLocation), Get_Z_Construct_UScriptStruct_FSBZLocalGasLocation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZLocalGasLocation>()
{
	return FSBZLocalGasLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZLocalGasLocation(FSBZLocalGasLocation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZLocalGasLocation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalGasLocation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalGasLocation()
	{
		UScriptStruct::DeferCppStructOps<FSBZLocalGasLocation>(FName(TEXT("SBZLocalGasLocation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZLocalGasLocation;
	struct Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Z;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZLocalGasLocation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZLocalGasLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_X_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalGasLocation" },
		{ "ModuleRelativePath", "Public/SBZLocalGasLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalGasLocation, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Y_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalGasLocation" },
		{ "ModuleRelativePath", "Public/SBZLocalGasLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalGasLocation, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Z_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLocalGasLocation" },
		{ "ModuleRelativePath", "Public/SBZLocalGasLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZLocalGasLocation, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Z_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::NewProp_Z,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"SBZLocalGasLocation",
		sizeof(FSBZLocalGasLocation),
		alignof(FSBZLocalGasLocation),
		Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZLocalGasLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZLocalGasLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZLocalGasLocation"), sizeof(FSBZLocalGasLocation), Get_Z_Construct_UScriptStruct_FSBZLocalGasLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZLocalGasLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZLocalGasLocation_Hash() { return 2544935255U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
