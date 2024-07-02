// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHurtReactionDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHurtReactionDirection() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionDirection();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionAnimation();
// End Cross Module References
class UScriptStruct* FSBZHurtReactionDirection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZHurtReactionDirection, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZHurtReactionDirection"), sizeof(FSBZHurtReactionDirection), Get_Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZHurtReactionDirection>()
{
	return FSBZHurtReactionDirection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZHurtReactionDirection(FSBZHurtReactionDirection::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZHurtReactionDirection"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionDirection
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionDirection()
	{
		UScriptStruct::DeferCppStructOps<FSBZHurtReactionDirection>(FName(TEXT("SBZHurtReactionDirection")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZHurtReactionDirection;
	struct Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Forward;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Right_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Right;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Backward_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Backward_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Backward;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Left_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionDirection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZHurtReactionDirection>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Forward_Inner = { "Forward", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHurtReactionAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Forward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionDirection" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionDirection, Forward), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Forward_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Right_Inner = { "Right", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHurtReactionAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Right_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionDirection" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionDirection, Right), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Right_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Backward_Inner = { "Backward", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHurtReactionAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Backward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionDirection" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Backward = { "Backward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionDirection, Backward), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Backward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Backward_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Left_Inner = { "Left", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHurtReactionAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Left_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHurtReactionDirection" },
		{ "ModuleRelativePath", "Public/SBZHurtReactionDirection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZHurtReactionDirection, Left), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Left_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Forward_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Right_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Backward_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Backward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Left_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::NewProp_Left,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZHurtReactionDirection",
		sizeof(FSBZHurtReactionDirection),
		alignof(FSBZHurtReactionDirection),
		Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionDirection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZHurtReactionDirection"), sizeof(FSBZHurtReactionDirection), Get_Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZHurtReactionDirection_Hash() { return 2959347348U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
