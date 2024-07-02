// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHitResultLite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHitResultLite() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHitResultLite();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZHitResultLite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHitResultLite_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHitResultLite, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHitResultLite"), sizeof(FSBZHitResultLite), Get_Z_Construct_UScriptStruct_FSBZHitResultLite_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHitResultLite>()
{
	return FSBZHitResultLite::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHitResultLite(FSBZHitResultLite::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHitResultLite"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitResultLite
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitResultLite()
	{
		UScriptStruct::DeferCppStructOps<FSBZHitResultLite>(FName(TEXT("SBZHitResultLite")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHitResultLite;
	struct Z_Construct_UScriptStruct_FSBZHitResultLite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[];
#endif
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaycastHit_MetaData[];
#endif
		static void NewProp_bRaycastHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaycastHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHitResultLite.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHitResultLite>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResultLite" },
		{ "ModuleRelativePath", "Public/SBZHitResultLite.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitResultLite, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResultLite" },
		{ "ModuleRelativePath", "Public/SBZHitResultLite.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitResultLite, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_ImpactPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResultLite" },
		{ "ModuleRelativePath", "Public/SBZHitResultLite.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitResultLite, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_ImpactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_ImpactPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResultLite" },
		{ "ModuleRelativePath", "Public/SBZHitResultLite.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHitResultLite, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bBlockingHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResultLite" },
		{ "ModuleRelativePath", "Public/SBZHitResultLite.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((FSBZHitResultLite*)Obj)->bBlockingHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZHitResultLite), &Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bBlockingHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bBlockingHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bRaycastHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHitResultLite" },
		{ "ModuleRelativePath", "Public/SBZHitResultLite.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bRaycastHit_SetBit(void* Obj)
	{
		((FSBZHitResultLite*)Obj)->bRaycastHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bRaycastHit = { "bRaycastHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSBZHitResultLite), &Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bRaycastHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bRaycastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bRaycastHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_TraceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_ImpactPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bBlockingHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::NewProp_bRaycastHit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHitResultLite",
		sizeof(FSBZHitResultLite),
		alignof(FSBZHitResultLite),
		Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHitResultLite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHitResultLite_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHitResultLite"), sizeof(FSBZHitResultLite), Get_Z_Construct_UScriptStruct_FSBZHitResultLite_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHitResultLite_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHitResultLite_Hash() { return 3383125033U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
