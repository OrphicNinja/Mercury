// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBuiltInAnimMontageBoneTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBuiltInAnimMontageBoneTrack() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack();
// End Cross Module References
class UScriptStruct* FSBZBuiltInAnimMontageBoneTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZBuiltInAnimMontageBoneTrack"), sizeof(FSBZBuiltInAnimMontageBoneTrack), Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZBuiltInAnimMontageBoneTrack>()
{
	return FSBZBuiltInAnimMontageBoneTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack(FSBZBuiltInAnimMontageBoneTrack::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZBuiltInAnimMontageBoneTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageBoneTrack
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageBoneTrack()
	{
		UScriptStruct::DeferCppStructOps<FSBZBuiltInAnimMontageBoneTrack>(FName(TEXT("SBZBuiltInAnimMontageBoneTrack")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZBuiltInAnimMontageBoneTrack;
	struct Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneModificationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneModificationMode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValueTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValueTracks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageBoneTrack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZBuiltInAnimMontageBoneTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontageBoneTrack" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageBoneTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBuiltInAnimMontageBoneTrack, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneModificationMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontageBoneTrack" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageBoneTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneModificationMode = { "BoneModificationMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBuiltInAnimMontageBoneTrack, BoneModificationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneModificationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneModificationMode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_ValueTracks_Inner = { "ValueTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageValueTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_ValueTracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontageBoneTrack" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontageBoneTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_ValueTracks = { "ValueTracks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZBuiltInAnimMontageBoneTrack, ValueTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_ValueTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_ValueTracks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_BoneModificationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_ValueTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::NewProp_ValueTracks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZBuiltInAnimMontageBoneTrack",
		sizeof(FSBZBuiltInAnimMontageBoneTrack),
		alignof(FSBZBuiltInAnimMontageBoneTrack),
		Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZBuiltInAnimMontageBoneTrack"), sizeof(FSBZBuiltInAnimMontageBoneTrack), Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageBoneTrack_Hash() { return 3200349980U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
