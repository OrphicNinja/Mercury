// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWheeledVehicleFX.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWheeledVehicleFX() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWheeledVehicleFX();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZWheeledVehicleFX::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWheeledVehicleFX"), sizeof(FSBZWheeledVehicleFX), Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWheeledVehicleFX>()
{
	return FSBZWheeledVehicleFX::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWheeledVehicleFX(FSBZWheeledVehicleFX::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWheeledVehicleFX"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWheeledVehicleFX
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWheeledVehicleFX()
	{
		UScriptStruct::DeferCppStructOps<FSBZWheeledVehicleFX>(FName(TEXT("SBZWheeledVehicleFX")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWheeledVehicleFX;
	struct Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedThresholdMinMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedThresholdMinMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleFX.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWheeledVehicleFX>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleFX" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleFX.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWheeledVehicleFX, Asset), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Socket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleFX" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleFX.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWheeledVehicleFX, Socket), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleFX" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleFX.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWheeledVehicleFX, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_SpeedThresholdMinMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleFX" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleFX.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_SpeedThresholdMinMax = { "SpeedThresholdMinMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWheeledVehicleFX, SpeedThresholdMinMax), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_SpeedThresholdMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_SpeedThresholdMinMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWheeledVehicleFX" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWheeledVehicleFX.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWheeledVehicleFX, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_Socket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_SpeedThresholdMinMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::NewProp_NiagaraComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWheeledVehicleFX",
		sizeof(FSBZWheeledVehicleFX),
		alignof(FSBZWheeledVehicleFX),
		Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWheeledVehicleFX()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWheeledVehicleFX"), sizeof(FSBZWheeledVehicleFX), Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWheeledVehicleFX_Hash() { return 86922350U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
