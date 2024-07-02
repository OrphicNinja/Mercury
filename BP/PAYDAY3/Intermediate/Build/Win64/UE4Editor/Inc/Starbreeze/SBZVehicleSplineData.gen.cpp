// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVehicleSplineData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVehicleSplineData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSplineData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZVehicleSplineData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSplineData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZVehicleSplineData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZVehicleSplineData"), sizeof(FSBZVehicleSplineData), Get_Z_Construct_UScriptStruct_FSBZVehicleSplineData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZVehicleSplineData>()
{
	return FSBZVehicleSplineData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZVehicleSplineData(FSBZVehicleSplineData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZVehicleSplineData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSplineData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSplineData()
	{
		UScriptStruct::DeferCppStructOps<FSBZVehicleSplineData>(FName(TEXT("SBZVehicleSplineData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZVehicleSplineData;
	struct Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnterSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ExitSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartsEnabled_MetaData[];
#endif
		static void NewProp_bStartsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZVehicleSplineData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_EnterSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineData" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_EnterSpline = { "EnterSpline", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleSplineData, EnterSpline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_EnterSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_EnterSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_ExitSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineData" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_ExitSpline = { "ExitSpline", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZVehicleSplineData, ExitSpline), Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_ExitSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_ExitSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_bStartsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZVehicleSplineData" },
		{ "ModuleRelativePath", "Public/SBZVehicleSplineData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_bStartsEnabled_SetBit(void* Obj)
	{
		((FSBZVehicleSplineData*)Obj)->bStartsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_bStartsEnabled = { "bStartsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZVehicleSplineData), &Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_bStartsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_bStartsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_bStartsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_EnterSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_ExitSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::NewProp_bStartsEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZVehicleSplineData",
		sizeof(FSBZVehicleSplineData),
		alignof(FSBZVehicleSplineData),
		Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZVehicleSplineData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSplineData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZVehicleSplineData"), sizeof(FSBZVehicleSplineData), Get_Z_Construct_UScriptStruct_FSBZVehicleSplineData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZVehicleSplineData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZVehicleSplineData_Hash() { return 1099148448U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
