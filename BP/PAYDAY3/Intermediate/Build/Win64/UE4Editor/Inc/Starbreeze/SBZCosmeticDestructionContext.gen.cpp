// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCosmeticDestructionContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCosmeticDestructionContext() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSBZCosmeticDestructionContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCosmeticDestructionContext"), sizeof(FSBZCosmeticDestructionContext), Get_Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCosmeticDestructionContext>()
{
	return FSBZCosmeticDestructionContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCosmeticDestructionContext(FSBZCosmeticDestructionContext::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCosmeticDestructionContext"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticDestructionContext
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticDestructionContext()
	{
		UScriptStruct::DeferCppStructOps<FSBZCosmeticDestructionContext>(FName(TEXT("SBZCosmeticDestructionContext")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCosmeticDestructionContext;
	struct Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCosmeticDestructionContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_HitLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionContext" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticDestructionContext, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_FromDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionContext" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_FromDirection = { "FromDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticDestructionContext, FromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_FromDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_FromDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_Origin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionContext" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticDestructionContext, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_ImpactNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCosmeticDestructionContext" },
		{ "ModuleRelativePath", "Public/SBZCosmeticDestructionContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCosmeticDestructionContext, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_ImpactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_ImpactNormal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_FromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::NewProp_ImpactNormal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZCosmeticDestructionContext",
		sizeof(FSBZCosmeticDestructionContext),
		alignof(FSBZCosmeticDestructionContext),
		Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCosmeticDestructionContext"), sizeof(FSBZCosmeticDestructionContext), Get_Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCosmeticDestructionContext_Hash() { return 3313469048U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
