// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTripperMarkedInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTripperMarkedInfo() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTripperMarkedInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTripper_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
class UScriptStruct* FSBZTripperMarkedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTripperMarkedInfo"), sizeof(FSBZTripperMarkedInfo), Get_Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTripperMarkedInfo>()
{
	return FSBZTripperMarkedInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTripperMarkedInfo(FSBZTripperMarkedInfo::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTripperMarkedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTripperMarkedInfo
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTripperMarkedInfo()
	{
		UScriptStruct::DeferCppStructOps<FSBZTripperMarkedInfo>(FName(TEXT("SBZTripperMarkedInfo")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTripperMarkedInfo;
	struct Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnmarkTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnmarkTimerHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTripperMarkedInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTripperMarkedInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_MarkedBy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTripperMarkedInfo" },
		{ "ModuleRelativePath", "Public/SBZTripperMarkedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_MarkedBy = { "MarkedBy", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTripperMarkedInfo, MarkedBy), Z_Construct_UClass_ASBZTripper_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_MarkedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_MarkedBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_UnmarkTimerHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTripperMarkedInfo" },
		{ "ModuleRelativePath", "Public/SBZTripperMarkedInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_UnmarkTimerHandle = { "UnmarkTimerHandle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTripperMarkedInfo, UnmarkTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_UnmarkTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_UnmarkTimerHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_MarkedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::NewProp_UnmarkTimerHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTripperMarkedInfo",
		sizeof(FSBZTripperMarkedInfo),
		alignof(FSBZTripperMarkedInfo),
		Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTripperMarkedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTripperMarkedInfo"), sizeof(FSBZTripperMarkedInfo), Get_Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTripperMarkedInfo_Hash() { return 2218609265U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
