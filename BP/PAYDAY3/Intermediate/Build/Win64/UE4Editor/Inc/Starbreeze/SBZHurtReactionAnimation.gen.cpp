// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHurtReactionAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHurtReactionAnimation() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionAnimation();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZHurtReactionAnimation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHurtReactionAnimation"), sizeof(FSBZHurtReactionAnimation), Get_Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHurtReactionAnimation>()
{
	return FSBZHurtReactionAnimation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHurtReactionAnimation(FSBZHurtReactionAnimation::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHurtReactionAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionAnimation
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionAnimation()
	{
		UScriptStruct::DeferCppStructOps<FSBZHurtReactionAnimation>(FName(TEXT("SBZHurtReactionAnimation")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionAnimation;
	struct Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionAnimation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHurtReactionAnimation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionAnimation" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionAnimation, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionAnimation" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionAnimation, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::NewProp_Index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHurtReactionAnimation",
		sizeof(FSBZHurtReactionAnimation),
		alignof(FSBZHurtReactionAnimation),
		Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionAnimation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHurtReactionAnimation"), sizeof(FSBZHurtReactionAnimation), Get_Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionAnimation_Hash() { return 1231349394U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
