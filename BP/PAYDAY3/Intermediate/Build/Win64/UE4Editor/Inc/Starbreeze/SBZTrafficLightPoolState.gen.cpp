// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficLightPoolState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficLightPoolState() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficLightPoolState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZTrafficLightStatus();
// End Cross Module References
class UScriptStruct* FSBZTrafficLightPoolState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZTrafficLightPoolState"), sizeof(FSBZTrafficLightPoolState), Get_Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZTrafficLightPoolState>()
{
	return FSBZTrafficLightPoolState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZTrafficLightPoolState(FSBZTrafficLightPoolState::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZTrafficLightPoolState"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficLightPoolState
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficLightPoolState()
	{
		UScriptStruct::DeferCppStructOps<FSBZTrafficLightPoolState>(FName(TEXT("SBZTrafficLightPoolState")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZTrafficLightPoolState;
	struct Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMeshComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedMeshComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMeshComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedMeshComponentArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PedestrianSoundEmitters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PedestrianSoundEmitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PedestrianSoundEmitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PedestrianSoundEmitters;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPoolState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZTrafficLightPoolState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPoolState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPoolState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_Inner = { "CachedMeshComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPoolState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPoolState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray = { "CachedMeshComponentArray", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPoolState, CachedMeshComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPoolState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPoolState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_Inner = { "PedestrianSoundEmitters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZAmbientSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPoolState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPoolState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters = { "PedestrianSoundEmitters", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPoolState, PedestrianSoundEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPoolState" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPoolState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPoolState, Status), Z_Construct_UEnum_Starbreeze_ESBZTrafficLightStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Timer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficLightPoolState" },
		{ "ModuleRelativePath", "Public/SBZTrafficLightPoolState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZTrafficLightPoolState, Timer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_CachedMeshComponentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_PedestrianSoundEmitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::NewProp_Timer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZTrafficLightPoolState",
		sizeof(FSBZTrafficLightPoolState),
		alignof(FSBZTrafficLightPoolState),
		Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZTrafficLightPoolState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZTrafficLightPoolState"), sizeof(FSBZTrafficLightPoolState), Get_Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZTrafficLightPoolState_Hash() { return 3847889372U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
