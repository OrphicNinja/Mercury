// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavButtonParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavButtonParameters() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZNavButtonParameters();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
class UScriptStruct* FSBZNavButtonParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZNavButtonParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZNavButtonParameters, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZNavButtonParameters"), sizeof(FSBZNavButtonParameters), Get_Z_Construct_UScriptStruct_FSBZNavButtonParameters_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZNavButtonParameters>()
{
	return FSBZNavButtonParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZNavButtonParameters(FSBZNavButtonParameters::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZNavButtonParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNavButtonParameters
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZNavButtonParameters()
	{
		UScriptStruct::DeferCppStructOps<FSBZNavButtonParameters>(FName(TEXT("SBZNavButtonParameters")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZNavButtonParameters;
	struct Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StackValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPlaystationSpecificDisplayValue_MetaData[];
#endif
		static void NewProp_bHasPlaystationSpecificDisplayValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPlaystationSpecificDisplayValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayValuePlaystation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayValuePlaystation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasXBoxSpecificDisplayValue_MetaData[];
#endif
		static void NewProp_bHasXBoxSpecificDisplayValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasXBoxSpecificDisplayValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayValueXBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayValueXBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyOnWindowsPlatform_MetaData[];
#endif
		static void NewProp_bShowOnlyOnWindowsPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyOnWindowsPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZNavButtonParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_StackValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavButtonParameters" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_StackValue = { "StackValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNavButtonParameters, StackValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_StackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_StackValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavButtonParameters" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValue = { "DisplayValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNavButtonParameters, DisplayValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasPlaystationSpecificDisplayValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavButtonParameters" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasPlaystationSpecificDisplayValue_SetBit(void* Obj)
	{
		((FSBZNavButtonParameters*)Obj)->bHasPlaystationSpecificDisplayValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasPlaystationSpecificDisplayValue = { "bHasPlaystationSpecificDisplayValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZNavButtonParameters), &Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasPlaystationSpecificDisplayValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasPlaystationSpecificDisplayValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasPlaystationSpecificDisplayValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValuePlaystation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavButtonParameters" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValuePlaystation = { "DisplayValuePlaystation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNavButtonParameters, DisplayValuePlaystation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValuePlaystation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValuePlaystation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasXBoxSpecificDisplayValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavButtonParameters" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasXBoxSpecificDisplayValue_SetBit(void* Obj)
	{
		((FSBZNavButtonParameters*)Obj)->bHasXBoxSpecificDisplayValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasXBoxSpecificDisplayValue = { "bHasXBoxSpecificDisplayValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZNavButtonParameters), &Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasXBoxSpecificDisplayValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasXBoxSpecificDisplayValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasXBoxSpecificDisplayValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValueXBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavButtonParameters" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValueXBox = { "DisplayValueXBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZNavButtonParameters, DisplayValueXBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValueXBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValueXBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavButtonParameters" },
		{ "ModuleRelativePath", "Public/SBZNavButtonParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bShowOnlyOnWindowsPlatform_SetBit(void* Obj)
	{
		((FSBZNavButtonParameters*)Obj)->bShowOnlyOnWindowsPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bShowOnlyOnWindowsPlatform = { "bShowOnlyOnWindowsPlatform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZNavButtonParameters), &Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bShowOnlyOnWindowsPlatform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_StackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasPlaystationSpecificDisplayValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValuePlaystation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bHasXBoxSpecificDisplayValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_DisplayValueXBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::NewProp_bShowOnlyOnWindowsPlatform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZNavButtonParameters",
		sizeof(FSBZNavButtonParameters),
		alignof(FSBZNavButtonParameters),
		Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZNavButtonParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZNavButtonParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZNavButtonParameters"), sizeof(FSBZNavButtonParameters), Get_Z_Construct_UScriptStruct_FSBZNavButtonParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZNavButtonParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZNavButtonParameters_Hash() { return 2030634013U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
