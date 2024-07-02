// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCreditsRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCreditsRow() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCreditsRow();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCreditsType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSBZCreditsRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSBZCreditsRow cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSBZCreditsRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZCreditsRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZCreditsRow, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZCreditsRow"), sizeof(FSBZCreditsRow), Get_Z_Construct_UScriptStruct_FSBZCreditsRow_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZCreditsRow>()
{
	return FSBZCreditsRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZCreditsRow(FSBZCreditsRow::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZCreditsRow"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCreditsRow
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZCreditsRow()
	{
		UScriptStruct::DeferCppStructOps<FSBZCreditsRow>(FName(TEXT("SBZCreditsRow")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZCreditsRow;
	struct Z_Construct_UScriptStruct_FSBZCreditsRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZCreditsRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZCreditsRow>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCreditsRow" },
		{ "ModuleRelativePath", "Public/SBZCreditsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCreditsRow, Type), Z_Construct_UEnum_Starbreeze_ESBZCreditsType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCreditsRow" },
		{ "ModuleRelativePath", "Public/SBZCreditsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCreditsRow, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_String_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCreditsRow" },
		{ "ModuleRelativePath", "Public/SBZCreditsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCreditsRow, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_TextSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCreditsRow" },
		{ "ModuleRelativePath", "Public/SBZCreditsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_TextSecond = { "TextSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCreditsRow, TextSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_TextSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_TextSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_StringSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCreditsRow" },
		{ "ModuleRelativePath", "Public/SBZCreditsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_StringSecond = { "StringSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCreditsRow, StringSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_StringSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_StringSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCreditsRow" },
		{ "ModuleRelativePath", "Public/SBZCreditsRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZCreditsRow, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_TextSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_StringSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SBZCreditsRow",
		sizeof(FSBZCreditsRow),
		alignof(FSBZCreditsRow),
		Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZCreditsRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZCreditsRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZCreditsRow"), sizeof(FSBZCreditsRow), Get_Z_Construct_UScriptStruct_FSBZCreditsRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZCreditsRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZCreditsRow_Hash() { return 3884532291U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
