// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZConfigRepClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZConfigRepClass() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZConfigRepClass();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ERepNodeRoutingStrategy();
// End Cross Module References
class UScriptStruct* FSBZConfigRepClass::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZConfigRepClass_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZConfigRepClass, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZConfigRepClass"), sizeof(FSBZConfigRepClass), Get_Z_Construct_UScriptStruct_FSBZConfigRepClass_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZConfigRepClass>()
{
	return FSBZConfigRepClass::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZConfigRepClass(FSBZConfigRepClass::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZConfigRepClass"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZConfigRepClass
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZConfigRepClass()
	{
		UScriptStruct::DeferCppStructOps<FSBZConfigRepClass>(FName(TEXT("SBZConfigRepClass")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZConfigRepClass;
	struct Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistancePriorityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistancePriorityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarvationPriorityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StarvationPriorityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationPeriodFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ReplicationPeriodFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastPath_ReplicationPeriodFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_FastPath_ReplicationPeriodFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorChannelFrameTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ActorChannelFrameTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMustReplicateOnInitialFrame_MetaData[];
#endif
		static void NewProp_bMustReplicateOnInitialFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMustReplicateOnInitialFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZConfigRepClass>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, Type), Z_Construct_UEnum_Starbreeze_ERepNodeRoutingStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_DistancePriorityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_DistancePriorityScale = { "DistancePriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, DistancePriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_DistancePriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_DistancePriorityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_StarvationPriorityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_StarvationPriorityScale = { "StarvationPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, StarvationPriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_StarvationPriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_StarvationPriorityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_CullDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, CullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ReplicationPeriodFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ReplicationPeriodFrame = { "ReplicationPeriodFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, ReplicationPeriodFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ReplicationPeriodFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ReplicationPeriodFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_FastPath_ReplicationPeriodFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_FastPath_ReplicationPeriodFrame = { "FastPath_ReplicationPeriodFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, FastPath_ReplicationPeriodFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_FastPath_ReplicationPeriodFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_FastPath_ReplicationPeriodFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ActorChannelFrameTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ActorChannelFrameTimeout = { "ActorChannelFrameTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZConfigRepClass, ActorChannelFrameTimeout), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ActorChannelFrameTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ActorChannelFrameTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_bMustReplicateOnInitialFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZConfigRepClass" },
		{ "ModuleRelativePath", "Public/SBZConfigRepClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_bMustReplicateOnInitialFrame_SetBit(void* Obj)
	{
		((FSBZConfigRepClass*)Obj)->bMustReplicateOnInitialFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_bMustReplicateOnInitialFrame = { "bMustReplicateOnInitialFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZConfigRepClass), &Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_bMustReplicateOnInitialFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_bMustReplicateOnInitialFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_bMustReplicateOnInitialFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_DistancePriorityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_StarvationPriorityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_CullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ReplicationPeriodFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_FastPath_ReplicationPeriodFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_ActorChannelFrameTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::NewProp_bMustReplicateOnInitialFrame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZConfigRepClass",
		sizeof(FSBZConfigRepClass),
		alignof(FSBZConfigRepClass),
		Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZConfigRepClass()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZConfigRepClass_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZConfigRepClass"), sizeof(FSBZConfigRepClass), Get_Z_Construct_UScriptStruct_FSBZConfigRepClass_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZConfigRepClass_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZConfigRepClass_Hash() { return 2863564161U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
