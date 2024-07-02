// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponStickerPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponStickerPosition() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStickerPosition();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FSBZWeaponStickerPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZWeaponStickerPosition"), sizeof(FSBZWeaponStickerPosition), Get_Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZWeaponStickerPosition>()
{
	return FSBZWeaponStickerPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZWeaponStickerPosition(FSBZWeaponStickerPosition::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZWeaponStickerPosition"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStickerPosition
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStickerPosition()
	{
		UScriptStruct::DeferCppStructOps<FSBZWeaponStickerPosition>(FName(TEXT("SBZWeaponStickerPosition")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZWeaponStickerPosition;
	struct Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_PartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnOtherSide_MetaData[];
#endif
		static void NewProp_bOnOtherSide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnOtherSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerPosition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZWeaponStickerPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_PartIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerPosition" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_PartIndex = { "PartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStickerPosition, PartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_PartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_PartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerPosition" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStickerPosition, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerPosition" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStickerPosition, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_bOnOtherSide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerPosition" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerPosition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_bOnOtherSide_SetBit(void* Obj)
	{
		((FSBZWeaponStickerPosition*)Obj)->bOnOtherSide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_bOnOtherSide = { "bOnOtherSide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZWeaponStickerPosition), &Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_bOnOtherSide_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_bOnOtherSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_bOnOtherSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponStickerPosition" },
		{ "ModuleRelativePath", "Public/SBZWeaponStickerPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZWeaponStickerPosition, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_PartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_bOnOtherSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZWeaponStickerPosition",
		sizeof(FSBZWeaponStickerPosition),
		alignof(FSBZWeaponStickerPosition),
		Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponStickerPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZWeaponStickerPosition"), sizeof(FSBZWeaponStickerPosition), Get_Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZWeaponStickerPosition_Hash() { return 1252948173U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
