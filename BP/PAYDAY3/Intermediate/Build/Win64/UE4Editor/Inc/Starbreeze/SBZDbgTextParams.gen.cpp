// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDbgTextParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDbgTextParams() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgTextParams();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDbgDisplayOutput();
// End Cross Module References
class UScriptStruct* FSBZDbgTextParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZDbgTextParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZDbgTextParams, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZDbgTextParams"), sizeof(FSBZDbgTextParams), Get_Z_Construct_UScriptStruct_FSBZDbgTextParams_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZDbgTextParams>()
{
	return FSBZDbgTextParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZDbgTextParams(FSBZDbgTextParams::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZDbgTextParams"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgTextParams
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgTextParams()
	{
		UScriptStruct::DeferCppStructOps<FSBZDbgTextParams>(FName(TEXT("SBZDbgTextParams")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZDbgTextParams;
	struct Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToDisplay;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZDbgTextParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZDbgTextParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Colour_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgTextParams" },
		{ "ModuleRelativePath", "Public/SBZDbgTextParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Colour = { "Colour", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgTextParams, Colour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Colour_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Colour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgTextParams" },
		{ "ModuleRelativePath", "Public/SBZDbgTextParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgTextParams, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_TimeToDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgTextParams" },
		{ "ModuleRelativePath", "Public/SBZDbgTextParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_TimeToDisplay = { "TimeToDisplay", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgTextParams, TimeToDisplay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_TimeToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_TimeToDisplay_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_OutputLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_OutputLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDbgTextParams" },
		{ "ModuleRelativePath", "Public/SBZDbgTextParams.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_OutputLocation = { "OutputLocation", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZDbgTextParams, OutputLocation), Z_Construct_UEnum_Starbreeze_ESBZDbgDisplayOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_OutputLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_OutputLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Colour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_TimeToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_OutputLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::NewProp_OutputLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZDbgTextParams",
		sizeof(FSBZDbgTextParams),
		alignof(FSBZDbgTextParams),
		Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZDbgTextParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZDbgTextParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZDbgTextParams"), sizeof(FSBZDbgTextParams), Get_Z_Construct_UScriptStruct_FSBZDbgTextParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZDbgTextParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZDbgTextParams_Hash() { return 1162280192U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
