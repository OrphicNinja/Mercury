// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMinimalAgilityTraversalTrajectory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMinimalAgilityTraversalTrajectory() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityTraversalType();
// End Cross Module References
class UScriptStruct* FSBZMinimalAgilityTraversalTrajectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZMinimalAgilityTraversalTrajectory"), sizeof(FSBZMinimalAgilityTraversalTrajectory), Get_Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZMinimalAgilityTraversalTrajectory>()
{
	return FSBZMinimalAgilityTraversalTrajectory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory(FSBZMinimalAgilityTraversalTrajectory::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZMinimalAgilityTraversalTrajectory"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMinimalAgilityTraversalTrajectory
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZMinimalAgilityTraversalTrajectory()
	{
		UScriptStruct::DeferCppStructOps<FSBZMinimalAgilityTraversalTrajectory>(FName(TEXT("SBZMinimalAgilityTraversalTrajectory")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZMinimalAgilityTraversalTrajectory;
	struct Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpPointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpPointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgePointFrontLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgePointFrontLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgePointBackLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgePointBackLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandPointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandPointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntrySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_EntrySpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEndsInCrouchState_MetaData[];
#endif
		static void NewProp_bEndsInCrouchState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndsInCrouchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEndsFalling_MetaData[];
#endif
		static void NewProp_bEndsFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndsFalling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZMinimalAgilityTraversalTrajectory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_JumpPointLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_JumpPointLocation = { "JumpPointLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMinimalAgilityTraversalTrajectory, JumpPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_JumpPointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_JumpPointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointFrontLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointFrontLocation = { "EdgePointFrontLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMinimalAgilityTraversalTrajectory, EdgePointFrontLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointFrontLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointFrontLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointBackLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointBackLocation = { "EdgePointBackLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMinimalAgilityTraversalTrajectory, EdgePointBackLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointBackLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointBackLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_LandPointLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_LandPointLocation = { "LandPointLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMinimalAgilityTraversalTrajectory, LandPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_LandPointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_LandPointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EntrySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EntrySpeed = { "EntrySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMinimalAgilityTraversalTrajectory, EntrySpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EntrySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EntrySpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_AgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_AgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_AgilityType = { "AgilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZMinimalAgilityTraversalTrajectory, AgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityTraversalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_AgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_AgilityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_SetBit(void* Obj)
	{
		((FSBZMinimalAgilityTraversalTrajectory*)Obj)->bEndsInCrouchState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState = { "bEndsInCrouchState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMinimalAgilityTraversalTrajectory), &Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMinimalAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZMinimalAgilityTraversalTrajectory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_SetBit(void* Obj)
	{
		((FSBZMinimalAgilityTraversalTrajectory*)Obj)->bEndsFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling = { "bEndsFalling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZMinimalAgilityTraversalTrajectory), &Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_JumpPointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointFrontLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EdgePointBackLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_LandPointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_EntrySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_AgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_AgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZMinimalAgilityTraversalTrajectory",
		sizeof(FSBZMinimalAgilityTraversalTrajectory),
		alignof(FSBZMinimalAgilityTraversalTrajectory),
		Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZMinimalAgilityTraversalTrajectory"), sizeof(FSBZMinimalAgilityTraversalTrajectory), Get_Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZMinimalAgilityTraversalTrajectory_Hash() { return 2103684791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
