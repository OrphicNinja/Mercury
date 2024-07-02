// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityTrajectoryPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityTrajectoryPoint() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType();
// End Cross Module References
class UScriptStruct* FSBZAgilityTrajectoryPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityTrajectoryPoint"), sizeof(FSBZAgilityTrajectoryPoint), Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityTrajectoryPoint>()
{
	return FSBZAgilityTrajectoryPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityTrajectoryPoint(FSBZAgilityTrajectoryPoint::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityTrajectoryPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectoryPoint
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectoryPoint()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityTrajectoryPoint>(FName(TEXT("SBZAgilityTrajectoryPoint")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTrajectoryPoint;
	struct Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AgilityPointType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgilityPointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AgilityPointType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityTrajectoryPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectoryPoint" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectoryPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectoryPoint" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectoryPoint, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_AgilityPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_AgilityPointType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTrajectoryPoint" },
		{ "ModuleRelativePath", "Public/SBZAgilityTrajectoryPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_AgilityPointType = { "AgilityPointType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTrajectoryPoint, AgilityPointType), Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_AgilityPointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_AgilityPointType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_AgilityPointType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::NewProp_AgilityPointType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityTrajectoryPoint",
		sizeof(FSBZAgilityTrajectoryPoint),
		alignof(FSBZAgilityTrajectoryPoint),
		Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityTrajectoryPoint"), sizeof(FSBZAgilityTrajectoryPoint), Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTrajectoryPoint_Hash() { return 3927545464U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
