// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_MoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_MoveTo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPathOffset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_MoveTo_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_MoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
class UScriptStruct* FSBZPathOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPathOffset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPathOffset, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPathOffset"), sizeof(FSBZPathOffset), Get_Z_Construct_UScriptStruct_FSBZPathOffset_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPathOffset>()
{
	return FSBZPathOffset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPathOffset(FSBZPathOffset::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPathOffset"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPathOffset
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPathOffset()
	{
		UScriptStruct::DeferCppStructOps<FSBZPathOffset>(FName(TEXT("SBZPathOffset")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPathOffset;
	struct Z_Construct_UScriptStruct_FSBZPathOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPathOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPathOffset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathOffset" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPathOffset, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_RandomDeviation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPathOffset" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPathOffset, RandomDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_RandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_RandomDeviation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPathOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPathOffset_Statics::NewProp_RandomDeviation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPathOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPathOffset",
		sizeof(FSBZPathOffset),
		alignof(FSBZPathOffset),
		Z_Construct_UScriptStruct_FSBZPathOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPathOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPathOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPathOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPathOffset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPathOffset"), sizeof(FSBZPathOffset), Get_Z_Construct_UScriptStruct_FSBZPathOffset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPathOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPathOffset_Hash() { return 3902182352U; }
	void USBZBTTask_MoveTo::StaticRegisterNativesUSBZBTTask_MoveTo()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_MoveTo_NoRegister()
	{
		return USBZBTTask_MoveTo::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_MoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeMovedKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeMovedKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoUncrouch_MetaData[];
#endif
		static void NewProp_bAutoUncrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoUncrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRun_MetaData[];
#endif
		static void NewProp_bAutoRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncrouchDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UncrouchDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCanRunWhileFocusing_MetaData[];
#endif
		static void NewProp_bOverrideCanRunWhileFocusing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCanRunWhileFocusing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathObservationTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathObservationTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathObservationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathObservationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathObservationTetherDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathObservationTetherDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetPathFromCorners_MetaData[];
#endif
		static void NewProp_bOffsetPathFromCorners_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetPathFromCorners;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartialPathMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartialPathMaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckPathEndToGoalHeight_MetaData[];
#endif
		static void NewProp_bCheckPathEndToGoalHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckPathEndToGoalHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPathEndToGoalHeightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPathEndToGoalHeightDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_MoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_MoveTo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_TimeMovedKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_TimeMovedKey = { "TimeMovedKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, TimeMovedKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_TimeMovedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_TimeMovedKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoUncrouch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoUncrouch_SetBit(void* Obj)
	{
		((USBZBTTask_MoveTo*)Obj)->bAutoUncrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoUncrouch = { "bAutoUncrouch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_MoveTo), &Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoUncrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoUncrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoUncrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoRun_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoRun_SetBit(void* Obj)
	{
		((USBZBTTask_MoveTo*)Obj)->bAutoRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoRun = { "bAutoRun", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_MoveTo), &Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_UncrouchDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_UncrouchDist = { "UncrouchDist", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, UncrouchDist), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_UncrouchDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_UncrouchDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_RunDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_RunDist = { "RunDist", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, RunDist), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_RunDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_RunDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOverrideCanRunWhileFocusing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOverrideCanRunWhileFocusing_SetBit(void* Obj)
	{
		((USBZBTTask_MoveTo*)Obj)->bOverrideCanRunWhileFocusing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOverrideCanRunWhileFocusing = { "bOverrideCanRunWhileFocusing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_MoveTo), &Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOverrideCanRunWhileFocusing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOverrideCanRunWhileFocusing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOverrideCanRunWhileFocusing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MovementThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, MovementThreshold), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MovementThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MovementThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTickInterval = { "PathObservationTickInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, PathObservationTickInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationDistance = { "PathObservationDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, PathObservationDistance), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTetherDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTetherDistance = { "PathObservationTetherDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, PathObservationTetherDistance), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTetherDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTetherDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOffsetPathFromCorners_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOffsetPathFromCorners_SetBit(void* Obj)
	{
		((USBZBTTask_MoveTo*)Obj)->bOffsetPathFromCorners = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOffsetPathFromCorners = { "bOffsetPathFromCorners", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_MoveTo), &Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOffsetPathFromCorners_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOffsetPathFromCorners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOffsetPathFromCorners_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathOffset = { "PathOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, PathOffset), Z_Construct_UScriptStruct_FSBZPathOffset, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PartialPathMaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PartialPathMaxRange = { "PartialPathMaxRange", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, PartialPathMaxRange), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PartialPathMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PartialPathMaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bCheckPathEndToGoalHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bCheckPathEndToGoalHeight_SetBit(void* Obj)
	{
		((USBZBTTask_MoveTo*)Obj)->bCheckPathEndToGoalHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bCheckPathEndToGoalHeight = { "bCheckPathEndToGoalHeight", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_MoveTo), &Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bCheckPathEndToGoalHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bCheckPathEndToGoalHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bCheckPathEndToGoalHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MaxPathEndToGoalHeightDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MaxPathEndToGoalHeightDistance = { "MaxPathEndToGoalHeightDistance", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MoveTo, MaxPathEndToGoalHeightDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MaxPathEndToGoalHeightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MaxPathEndToGoalHeightDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_MoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_TimeMovedKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoUncrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bAutoRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_UncrouchDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_RunDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOverrideCanRunWhileFocusing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MovementThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathObservationTetherDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bOffsetPathFromCorners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PathOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_PartialPathMaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_bCheckPathEndToGoalHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MoveTo_Statics::NewProp_MaxPathEndToGoalHeightDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_MoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_MoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_MoveTo_Statics::ClassParams = {
		&USBZBTTask_MoveTo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_MoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_MoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_MoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_MoveTo, 697948834);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_MoveTo>()
	{
		return USBZBTTask_MoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_MoveTo(Z_Construct_UClass_USBZBTTask_MoveTo, &USBZBTTask_MoveTo::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_MoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_MoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
