// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUIPopupData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUIPopupData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZUIPopupData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZButtonControlsReference();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FSBZUIPopupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZUIPopupData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZUIPopupData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZUIPopupData"), sizeof(FSBZUIPopupData), Get_Z_Construct_UScriptStruct_FSBZUIPopupData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZUIPopupData>()
{
	return FSBZUIPopupData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZUIPopupData(FSBZUIPopupData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZUIPopupData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIPopupData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIPopupData()
	{
		UScriptStruct::DeferCppStructOps<FSBZUIPopupData>(FName(TEXT("SBZUIPopupData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZUIPopupData;
	struct Z_Construct_UScriptStruct_FSBZUIPopupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopUpControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PopUpControlsReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZUIPopupData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZUIPopupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_HeaderText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIPopupData" },
		{ "ModuleRelativePath", "Public/SBZUIPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIPopupData, HeaderText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_HeaderText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_HeaderText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIPopupData" },
		{ "ModuleRelativePath", "Public/SBZUIPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIPopupData, DescriptionText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_PopUpControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIPopupData" },
		{ "ModuleRelativePath", "Public/SBZUIPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_PopUpControlsReference = { "PopUpControlsReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIPopupData, PopUpControlsReference), Z_Construct_UScriptStruct_FSBZButtonControlsReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_PopUpControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_PopUpControlsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_WidgetBody_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUIPopupData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZUIPopupData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_WidgetBody = { "WidgetBody", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZUIPopupData, WidgetBody), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_WidgetBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_WidgetBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_PopUpControlsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::NewProp_WidgetBody,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZUIPopupData",
		sizeof(FSBZUIPopupData),
		alignof(FSBZUIPopupData),
		Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZUIPopupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZUIPopupData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZUIPopupData"), sizeof(FSBZUIPopupData), Get_Z_Construct_UScriptStruct_FSBZUIPopupData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZUIPopupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZUIPopupData_Hash() { return 3785966364U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
