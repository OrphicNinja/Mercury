// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZExplosionBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZExplosionBox() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionBox();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
class UScriptStruct* FSBZExplosionBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZExplosionBox_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZExplosionBox, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZExplosionBox"), sizeof(FSBZExplosionBox), Get_Z_Construct_UScriptStruct_FSBZExplosionBox_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZExplosionBox>()
{
	return FSBZExplosionBox::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZExplosionBox(FSBZExplosionBox::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZExplosionBox"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZExplosionBox
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZExplosionBox()
	{
		UScriptStruct::DeferCppStructOps<FSBZExplosionBox>(FName(TEXT("SBZExplosionBox")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZExplosionBox;
	struct Z_Construct_UScriptStruct_FSBZExplosionBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayHalfExtentPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayHalfExtentPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZExplosionBox.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZExplosionBox>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosionBox" },
		{ "ModuleRelativePath", "Public/SBZExplosionBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosionBox, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Quat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosionBox" },
		{ "ModuleRelativePath", "Public/SBZExplosionBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosionBox, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Quat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Quat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosionBox" },
		{ "ModuleRelativePath", "Public/SBZExplosionBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosionBox, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_HalfExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Delay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosionBox" },
		{ "ModuleRelativePath", "Public/SBZExplosionBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosionBox, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayHalfExtentPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosionBox" },
		{ "ModuleRelativePath", "Public/SBZExplosionBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayHalfExtentPadding = { "DelayHalfExtentPadding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosionBox, DelayHalfExtentPadding), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayHalfExtentPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayHalfExtentPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZExplosionBox" },
		{ "ModuleRelativePath", "Public/SBZExplosionBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayOffset = { "DelayOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZExplosionBox, DelayOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Quat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_HalfExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayHalfExtentPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::NewProp_DelayOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZExplosionBox",
		sizeof(FSBZExplosionBox),
		alignof(FSBZExplosionBox),
		Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZExplosionBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZExplosionBox_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZExplosionBox"), sizeof(FSBZExplosionBox), Get_Z_Construct_UScriptStruct_FSBZExplosionBox_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZExplosionBox_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZExplosionBox_Hash() { return 3024732466U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
