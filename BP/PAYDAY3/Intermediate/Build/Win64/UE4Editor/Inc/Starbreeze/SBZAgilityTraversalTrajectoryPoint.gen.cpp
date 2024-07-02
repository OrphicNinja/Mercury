// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityTraversalTrajectoryPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityTraversalTrajectoryPoint() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZAgilityTraversalTrajectoryPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZAgilityTraversalTrajectoryPoint"), sizeof(FSBZAgilityTraversalTrajectoryPoint), Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZAgilityTraversalTrajectoryPoint>()
{
	return FSBZAgilityTraversalTrajectoryPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint(FSBZAgilityTraversalTrajectoryPoint::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZAgilityTraversalTrajectoryPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalTrajectoryPoint
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalTrajectoryPoint()
	{
		UScriptStruct::DeferCppStructOps<FSBZAgilityTraversalTrajectoryPoint>(FName(TEXT("SBZAgilityTraversalTrajectoryPoint")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZAgilityTraversalTrajectoryPoint;
	struct Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsColliding_MetaData[];
#endif
		static void NewProp_bIsColliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsColliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectoryPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZAgilityTraversalTrajectoryPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_bIsColliding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectoryPoint" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectoryPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_bIsColliding_SetBit(void* Obj)
	{
		((FSBZAgilityTraversalTrajectoryPoint*)Obj)->bIsColliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_bIsColliding = { "bIsColliding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZAgilityTraversalTrajectoryPoint), &Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_bIsColliding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_bIsColliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_bIsColliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectoryPoint" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectoryPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectoryPoint, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectoryPoint" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectoryPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectoryPoint, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Center_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityTraversalTrajectoryPoint" },
		{ "ModuleRelativePath", "Public/SBZAgilityTraversalTrajectoryPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZAgilityTraversalTrajectoryPoint, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_bIsColliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::NewProp_Center,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZAgilityTraversalTrajectoryPoint",
		sizeof(FSBZAgilityTraversalTrajectoryPoint),
		alignof(FSBZAgilityTraversalTrajectoryPoint),
		Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZAgilityTraversalTrajectoryPoint"), sizeof(FSBZAgilityTraversalTrajectoryPoint), Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZAgilityTraversalTrajectoryPoint_Hash() { return 1376417699U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
