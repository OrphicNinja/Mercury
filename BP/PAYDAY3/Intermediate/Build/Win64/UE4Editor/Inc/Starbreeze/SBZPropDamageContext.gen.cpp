// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPropDamageContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPropDamageContext() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamageContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZPropDamageContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZPropDamageContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZPropDamageContext, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZPropDamageContext"), sizeof(FSBZPropDamageContext), Get_Z_Construct_UScriptStruct_FSBZPropDamageContext_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZPropDamageContext>()
{
	return FSBZPropDamageContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZPropDamageContext(FSBZPropDamageContext::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZPropDamageContext"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPropDamageContext
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZPropDamageContext()
	{
		UScriptStruct::DeferCppStructOps<FSBZPropDamageContext>(FName(TEXT("SBZPropDamageContext")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZPropDamageContext;
	struct Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZPropDamageContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZPropDamageContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_FromDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamageContext" },
		{ "ModuleRelativePath", "Public/SBZPropDamageContext.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_FromDirection = { "FromDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamageContext, FromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_FromDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_FromDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_CharacterInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPropDamageContext" },
		{ "ModuleRelativePath", "Public/SBZPropDamageContext.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_CharacterInstigator = { "CharacterInstigator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZPropDamageContext, CharacterInstigator), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_CharacterInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_CharacterInstigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_FromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::NewProp_CharacterInstigator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZPropDamageContext",
		sizeof(FSBZPropDamageContext),
		alignof(FSBZPropDamageContext),
		Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZPropDamageContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZPropDamageContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZPropDamageContext"), sizeof(FSBZPropDamageContext), Get_Z_Construct_UScriptStruct_FSBZPropDamageContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZPropDamageContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZPropDamageContext_Hash() { return 87890412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
