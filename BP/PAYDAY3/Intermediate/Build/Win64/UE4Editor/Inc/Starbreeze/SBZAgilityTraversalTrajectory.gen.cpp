// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityTraversalTrajectory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityTraversalTrajectory() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityTraversalType();
// End Cross Module References
class UScriptStruct* FSBZAgilityTraversalTrajectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityTraversalTrajectory"), sizeof(FSBZAgilityTraversalTrajectory), Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityTraversalTrajectory>()
{
	return FSBZAgilityTraversalTrajectory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityTraversalTrajectory(FSBZAgilityTraversalTrajectory::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityTraversalTrajectory"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalTrajectory
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalTrajectory()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityTraversalTrajectory>(FName(TEXT("SBZAgilityTraversalTrajectory")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalTrajectory;
	struct Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallImpactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallImpactNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallImpactLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WallImpactLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgePointFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgePointFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgePointBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgePointBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEndsFalling_MetaData[];
#endif
		static void NewProp_bEndsFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndsFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEndsInCrouchState_MetaData[];
#endif
		static void NewProp_bEndsInCrouchState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEndsInCrouchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityTraversalTrajectory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactNormal = { "WallImpactNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectory, WallImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactLocation = { "WallImpactLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectory, WallImpactLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_JumpPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_JumpPoint = { "JumpPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectory, JumpPoint), Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_JumpPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_JumpPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointFront = { "EdgePointFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectory, EdgePointFront), Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointBack = { "EdgePointBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectory, EdgePointBack), Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_LandPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_LandPoint = { "LandPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectory, LandPoint), Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_LandPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_LandPoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_AgilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_AgilityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_AgilityType = { "AgilityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectory, AgilityType), Z_Construct_UEnum_Starbreeze_ESBZAgilityTraversalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_AgilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_AgilityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalTrajectory*)Obj)->bEndsFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling = { "bEndsFalling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalTrajectory), &Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalTrajectory*)Obj)->bEndsInCrouchState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState = { "bEndsInCrouchState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalTrajectory), &Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bIsValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectory" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectory.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalTrajectory*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalTrajectory), &Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bIsValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_WallImpactLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_JumpPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_EdgePointBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_LandPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_AgilityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_AgilityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bEndsInCrouchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::NewProp_bIsValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityTraversalTrajectory",
		sizeof(FSBZAgilityTraversalTrajectory),
		alignof(FSBZAgilityTraversalTrajectory),
		Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityTraversalTrajectory"), sizeof(FSBZAgilityTraversalTrajectory), Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectory_Hash() { return 1629177194U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
