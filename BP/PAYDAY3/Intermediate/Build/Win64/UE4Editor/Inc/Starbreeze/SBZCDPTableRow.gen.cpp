// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCDPTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCDPTableRow() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCDPTableRow();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCDPType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZCDPTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSBZCDPTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSBZCDPTableRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCDPTableRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCDPTableRow, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCDPTableRow"), sizeof(FSBZCDPTableRow), Get_Z_Construct_UScriptStruct_FSBZCDPTableRow_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCDPTableRow>()
{
	return FSBZCDPTableRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCDPTableRow(FSBZCDPTableRow::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCDPTableRow"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCDPTableRow
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCDPTableRow()
	{
		UScriptStruct::DeferCppStructOps<FSBZCDPTableRow>(FName(TEXT("SBZCDPTableRow")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCDPTableRow;
	struct Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CDP_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CDP_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Tooltip;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Variable_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variable_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Variable_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelectValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BitPosition;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CollisionNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCDPTableRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CDP_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CDP_id = { "CDP_id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, CDP_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CDP_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CDP_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Tooltip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Tooltip_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Variable_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Variable_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Variable_type = { "Variable_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, Variable_type), Z_Construct_UEnum_Starbreeze_ESBZCDPType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Variable_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Variable_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_FloatValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_IntValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_SelectValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_SelectValue = { "SelectValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, SelectValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_SelectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_SelectValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_ColorValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, ColorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_ColorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_ColorValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BoolValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((FSBZCDPTableRow*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZCDPTableRow), &Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BitPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BitPosition = { "BitPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, BitPosition), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BitPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BitPosition_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CollisionNames_Inner = { "CollisionNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CollisionNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCDPTableRow" },
		{ "ModuleRelativePath", "Public/SBZCDPTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CollisionNames = { "CollisionNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCDPTableRow, CollisionNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CollisionNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CollisionNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CDP_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Tooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Variable_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_Variable_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_SelectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_ColorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_BitPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CollisionNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::NewProp_CollisionNames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SBZCDPTableRow",
		sizeof(FSBZCDPTableRow),
		alignof(FSBZCDPTableRow),
		Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCDPTableRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCDPTableRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCDPTableRow"), sizeof(FSBZCDPTableRow), Get_Z_Construct_UScriptStruct_FSBZCDPTableRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCDPTableRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCDPTableRow_Hash() { return 1157092364U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
