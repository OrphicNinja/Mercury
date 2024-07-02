// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3VehicleSpawnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3VehicleSpawnRequest() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
// End Cross Module References
class UScriptStruct* FPD3VehicleSpawnRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest, Z_Construct_UPackage__Script_Starbreeze(), TEXT("PD3VehicleSpawnRequest"), sizeof(FPD3VehicleSpawnRequest), Get_Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FPD3VehicleSpawnRequest>()
{
	return FPD3VehicleSpawnRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPD3VehicleSpawnRequest(FPD3VehicleSpawnRequest::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("PD3VehicleSpawnRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFPD3VehicleSpawnRequest
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFPD3VehicleSpawnRequest()
	{
		UScriptStruct::DeferCppStructOps<FPD3VehicleSpawnRequest>(FName(TEXT("PD3VehicleSpawnRequest")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFPD3VehicleSpawnRequest;
	struct Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitSpline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PD3VehicleSpawnRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPD3VehicleSpawnRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_SpawnData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3VehicleSpawnRequest" },
		{ "ModuleRelativePath", "Public/PD3VehicleSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_SpawnData = { "SpawnData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3VehicleSpawnRequest, SpawnData), Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_SpawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_SpawnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_EnterSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3VehicleSpawnRequest" },
		{ "ModuleRelativePath", "Public/PD3VehicleSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_EnterSpline = { "EnterSpline", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3VehicleSpawnRequest, EnterSpline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_EnterSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_EnterSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_ExitSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3VehicleSpawnRequest" },
		{ "ModuleRelativePath", "Public/PD3VehicleSpawnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_ExitSpline = { "ExitSpline", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPD3VehicleSpawnRequest, ExitSpline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_ExitSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_ExitSpline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_SpawnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_EnterSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::NewProp_ExitSpline,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"PD3VehicleSpawnRequest",
		sizeof(FPD3VehicleSpawnRequest),
		alignof(FPD3VehicleSpawnRequest),
		Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PD3VehicleSpawnRequest"), sizeof(FPD3VehicleSpawnRequest), Get_Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPD3VehicleSpawnRequest_Hash() { return 3988507030U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
