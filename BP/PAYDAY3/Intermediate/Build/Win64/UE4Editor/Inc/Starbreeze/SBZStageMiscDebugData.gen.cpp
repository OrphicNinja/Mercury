// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStageMiscDebugData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStageMiscDebugData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStageMiscDebugData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZStageMiscDebugDataType();
// End Cross Module References
class UScriptStruct* FSBZStageMiscDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZStageMiscDebugData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZStageMiscDebugData"), sizeof(FSBZStageMiscDebugData), Get_Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZStageMiscDebugData>()
{
	return FSBZStageMiscDebugData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZStageMiscDebugData(FSBZStageMiscDebugData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZStageMiscDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStageMiscDebugData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZStageMiscDebugData()
	{
		UScriptStruct::DeferCppStructOps<FSBZStageMiscDebugData>(FName(TEXT("SBZStageMiscDebugData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZStageMiscDebugData;
	struct Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_V0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_V1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_V1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Q_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Q;
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZStageMiscDebugData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_ElementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_ElementId = { "ElementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, ElementId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_ElementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_ElementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_String_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V0 = { "V0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, V0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, V1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Q_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, Q), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Q_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Q_MetaData)) };
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStageMiscDebugData" },
		{ "ModuleRelativePath", "Public/SBZStageMiscDebugData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZStageMiscDebugData, Type), Z_Construct_UEnum_Starbreeze_ESBZStageMiscDebugDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_ElementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_V1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Q,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZStageMiscDebugData",
		sizeof(FSBZStageMiscDebugData),
		alignof(FSBZStageMiscDebugData),
		Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZStageMiscDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZStageMiscDebugData"), sizeof(FSBZStageMiscDebugData), Get_Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZStageMiscDebugData_Hash() { return 1737933507U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
