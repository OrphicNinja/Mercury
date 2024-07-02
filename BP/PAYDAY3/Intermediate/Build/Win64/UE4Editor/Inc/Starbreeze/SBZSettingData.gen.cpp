// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingData() {}
// Cross Module References
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZControlType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
// End Cross Module References
class UScriptStruct* FSBZSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STARBREEZE_API uint32 Get_Z_Construct_UScriptStruct_FSBZSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSBZSettingData, Z_Construct_UPackage__Script_Starbreeze(), TEXT("SBZSettingData"), sizeof(FSBZSettingData), Get_Z_Construct_UScriptStruct_FSBZSettingData_Hash());
	}
	return Singleton;
}
template<> STARBREEZE_API UScriptStruct* StaticStruct<FSBZSettingData>()
{
	return FSBZSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSBZSettingData(FSBZSettingData::StaticStruct, TEXT("/Script/Starbreeze"), TEXT("SBZSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingData
{
	FScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingData()
	{
		UScriptStruct::DeferCppStructOps<FSBZSettingData>(FName(TEXT("SBZSettingData")));
	}
} ScriptStruct_Starbreeze_StaticRegisterNativesFSBZSettingData;
	struct Z_Construct_UScriptStruct_FSBZSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingNameLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SettingNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPlaystationSpecificSettingNameLocalized_MetaData[];
#endif
		static void NewProp_bHasPlaystationSpecificSettingNameLocalized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPlaystationSpecificSettingNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingNameLocalizedPlaystation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SettingNameLocalizedPlaystation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasXBoxSpecificSettingNameLocalized_MetaData[];
#endif
		static void NewProp_bHasXBoxSpecificSettingNameLocalized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasXBoxSpecificSettingNameLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingNameLocalizedXBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SettingNameLocalizedXBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringTableShortName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingHelperPanelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SettingHelperPanelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyChangeImmediately_MetaData[];
#endif
		static void NewProp_bApplyChangeImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyChangeImmediately;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAskChangeConfirmation_MetaData[];
#endif
		static void NewProp_bAskChangeConfirmation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAskChangeConfirmation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanResetToDefault_MetaData[];
#endif
		static void NewProp_bCanResetToDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanResetToDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetButtonVisibilityFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GetButtonVisibilityFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyOnWindowsPlatform_MetaData[];
#endif
		static void NewProp_bShowOnlyOnWindowsPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyOnWindowsPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideInShippingBuild_MetaData[];
#endif
		static void NewProp_bHideInShippingBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideInShippingBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideInAnyBuild_MetaData[];
#endif
		static void NewProp_bHideInAnyBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideInAnyBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoActionFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DoActionFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetDefaultValueFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GetDefaultValueFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetValueFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GetValueFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetValueFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SetValueFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetDefaultKeyPrimaryFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GetDefaultKeyPrimaryFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetKeyPrimaryFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GetKeyPrimaryFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetKeyPrimaryFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SetKeyPrimaryFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetDefaultKeySecondaryFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GetDefaultKeySecondaryFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetKeySecondaryFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GetKeySecondaryFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetKeySecondaryFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SetKeySecondaryFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonVisibilityPrevious_MetaData[];
#endif
		static void NewProp_ButtonVisibilityPrevious_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ButtonVisibilityPrevious;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonVisibilityCurrent_MetaData[];
#endif
		static void NewProp_ButtonVisibilityCurrent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ButtonVisibilityCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionButtonLabelLocalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ActionButtonLabelLocalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToggleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBoolValue_MetaData[];
#endif
		static void NewProp_LastBoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LastBoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleChoiceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MultipleChoiceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Int64Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInt64Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_LastInt64Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatIncrementValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatIncrementValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastStringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastStringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastColorValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastColorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntPointValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntPointValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastIntPointValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastIntPointValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputActions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputAxes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputAxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPrimaryBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPrimaryBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSecondaryBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSecondaryBinding;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AllowedBindingOverlaps_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBindingOverlaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedBindingOverlaps;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrimaryBindingConflicts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryBindingConflicts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryBindingConflicts;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondaryBindingConflicts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryBindingConflicts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryBindingConflicts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[];
#endif
		static void NewProp_bHasDefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSBZSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalized = { "SettingNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SettingNameLocalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasPlaystationSpecificSettingNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasPlaystationSpecificSettingNameLocalized_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bHasPlaystationSpecificSettingNameLocalized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasPlaystationSpecificSettingNameLocalized = { "bHasPlaystationSpecificSettingNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasPlaystationSpecificSettingNameLocalized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasPlaystationSpecificSettingNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasPlaystationSpecificSettingNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedPlaystation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedPlaystation = { "SettingNameLocalizedPlaystation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SettingNameLocalizedPlaystation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedPlaystation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedPlaystation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasXBoxSpecificSettingNameLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasXBoxSpecificSettingNameLocalized_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bHasXBoxSpecificSettingNameLocalized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasXBoxSpecificSettingNameLocalized = { "bHasXBoxSpecificSettingNameLocalized", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasXBoxSpecificSettingNameLocalized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasXBoxSpecificSettingNameLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasXBoxSpecificSettingNameLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedXBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedXBox = { "SettingNameLocalizedXBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SettingNameLocalizedXBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedXBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedXBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SettingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringTableShortName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringTableShortName = { "StringTableShortName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, StringTableShortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringTableShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringTableShortName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ControlType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ControlType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, ControlType), Z_Construct_UEnum_Starbreeze_ESBZControlType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ControlType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingHelperPanelName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingHelperPanelName = { "SettingHelperPanelName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SettingHelperPanelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingHelperPanelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingHelperPanelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bApplyChangeImmediately_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bApplyChangeImmediately_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bApplyChangeImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bApplyChangeImmediately = { "bApplyChangeImmediately", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bApplyChangeImmediately_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bApplyChangeImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bApplyChangeImmediately_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bAskChangeConfirmation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bAskChangeConfirmation_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bAskChangeConfirmation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bAskChangeConfirmation = { "bAskChangeConfirmation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bAskChangeConfirmation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bAskChangeConfirmation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bAskChangeConfirmation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bCanResetToDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bCanResetToDefault_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bCanResetToDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bCanResetToDefault = { "bCanResetToDefault", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bCanResetToDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bCanResetToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bCanResetToDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetButtonVisibilityFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetButtonVisibilityFunctionName = { "GetButtonVisibilityFunctionName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, GetButtonVisibilityFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetButtonVisibilityFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetButtonVisibilityFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bShowOnlyOnWindowsPlatform_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bShowOnlyOnWindowsPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bShowOnlyOnWindowsPlatform = { "bShowOnlyOnWindowsPlatform", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bShowOnlyOnWindowsPlatform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bShowOnlyOnWindowsPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInShippingBuild_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInShippingBuild_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bHideInShippingBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInShippingBuild = { "bHideInShippingBuild", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInShippingBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInShippingBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInShippingBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInAnyBuild_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInAnyBuild_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bHideInAnyBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInAnyBuild = { "bHideInAnyBuild", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInAnyBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInAnyBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInAnyBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_DoActionFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_DoActionFunctionName = { "DoActionFunctionName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, DoActionFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_DoActionFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_DoActionFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultValueFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultValueFunctionName = { "GetDefaultValueFunctionName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, GetDefaultValueFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultValueFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultValueFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetValueFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetValueFunctionName = { "GetValueFunctionName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, GetValueFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetValueFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetValueFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetValueFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetValueFunctionName = { "SetValueFunctionName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SetValueFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetValueFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetValueFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeyPrimaryFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeyPrimaryFunctionName = { "GetDefaultKeyPrimaryFunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, GetDefaultKeyPrimaryFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeyPrimaryFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeyPrimaryFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeyPrimaryFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeyPrimaryFunctionName = { "GetKeyPrimaryFunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, GetKeyPrimaryFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeyPrimaryFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeyPrimaryFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeyPrimaryFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeyPrimaryFunctionName = { "SetKeyPrimaryFunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SetKeyPrimaryFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeyPrimaryFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeyPrimaryFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeySecondaryFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeySecondaryFunctionName = { "GetDefaultKeySecondaryFunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, GetDefaultKeySecondaryFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeySecondaryFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeySecondaryFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeySecondaryFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeySecondaryFunctionName = { "GetKeySecondaryFunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, GetKeySecondaryFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeySecondaryFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeySecondaryFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeySecondaryFunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeySecondaryFunctionName = { "SetKeySecondaryFunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SetKeySecondaryFunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeySecondaryFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeySecondaryFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityPrevious_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityPrevious_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->ButtonVisibilityPrevious = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityPrevious = { "ButtonVisibilityPrevious", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityPrevious_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityPrevious_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityCurrent_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->ButtonVisibilityCurrent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityCurrent = { "ButtonVisibilityCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityCurrent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ActionButtonLabelLocalized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ActionButtonLabelLocalized = { "ActionButtonLabelLocalized", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, ActionButtonLabelLocalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ActionButtonLabelLocalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ActionButtonLabelLocalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ToggleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ToggleName = { "ToggleName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, ToggleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ToggleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ToggleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_BoolValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastBoolValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastBoolValue_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->LastBoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastBoolValue = { "LastBoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastBoolValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastBoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastBoolValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_MultipleChoiceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_MultipleChoiceName = { "MultipleChoiceName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, MultipleChoiceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_MultipleChoiceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_MultipleChoiceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_Int64Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_Int64Value = { "Int64Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, Int64Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_Int64Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_Int64Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastInt64Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastInt64Value = { "LastInt64Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, LastInt64Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastInt64Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastInt64Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMinValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMinValue = { "FloatMinValue", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, FloatMinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMaxValue = { "FloatMaxValue", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, FloatMaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatIncrementValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatIncrementValue = { "FloatIncrementValue", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, FloatIncrementValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatIncrementValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatIncrementValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastFloatValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastFloatValue = { "LastFloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, LastFloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastFloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastFloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, StringValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastStringValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastStringValue = { "LastStringValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, LastStringValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastStringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastStringValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ColorValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, ColorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ColorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ColorValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastColorValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastColorValue = { "LastColorValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, LastColorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastColorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastColorValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_IntPointValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_IntPointValue = { "IntPointValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, IntPointValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_IntPointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_IntPointValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastIntPointValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastIntPointValue = { "LastIntPointValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, LastIntPointValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastIntPointValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastIntPointValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSettingsMenuInputAction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputActions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputAxes_Inner = { "InputAxes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSettingsMenuInputAxis, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputAxes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputAxes = { "InputAxes", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, InputAxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputAxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBinding = { "PrimaryBinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, PrimaryBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBinding = { "SecondaryBinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SecondaryBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastPrimaryBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastPrimaryBinding = { "LastPrimaryBinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, LastPrimaryBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastPrimaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastPrimaryBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastSecondaryBinding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastSecondaryBinding = { "LastSecondaryBinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, LastSecondaryBinding), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastSecondaryBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastSecondaryBinding_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_AllowedBindingOverlaps_Inner = { "AllowedBindingOverlaps", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_AllowedBindingOverlaps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_AllowedBindingOverlaps = { "AllowedBindingOverlaps", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, AllowedBindingOverlaps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_AllowedBindingOverlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_AllowedBindingOverlaps_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBindingConflicts_Inner = { "PrimaryBindingConflicts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBindingConflicts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBindingConflicts = { "PrimaryBindingConflicts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, PrimaryBindingConflicts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBindingConflicts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBindingConflicts_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBindingConflicts_Inner = { "SecondaryBindingConflicts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBindingConflicts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBindingConflicts = { "SecondaryBindingConflicts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, SecondaryBindingConflicts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBindingConflicts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBindingConflicts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ParentName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSBZSettingData, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bIsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bIsDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasDefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bHasDefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingData" },
		{ "ModuleRelativePath", "Public/SBZSettingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FSBZSettingData*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSBZSettingData), &Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSBZSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasPlaystationSpecificSettingNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedPlaystation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasXBoxSpecificSettingNameLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingNameLocalizedXBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringTableShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ControlType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SettingHelperPanelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bApplyChangeImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bAskChangeConfirmation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bCanResetToDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetButtonVisibilityFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bShowOnlyOnWindowsPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInShippingBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHideInAnyBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_DoActionFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultValueFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetValueFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetValueFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeyPrimaryFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeyPrimaryFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeyPrimaryFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetDefaultKeySecondaryFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_GetKeySecondaryFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SetKeySecondaryFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityPrevious,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ButtonVisibilityCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ActionButtonLabelLocalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ToggleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastBoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_MultipleChoiceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_Int64Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastInt64Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatIncrementValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastFloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastStringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ColorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastColorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_IntPointValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastIntPointValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputActions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputActions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputAxes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_InputAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastPrimaryBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_LastSecondaryBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_AllowedBindingOverlaps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_AllowedBindingOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBindingConflicts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_PrimaryBindingConflicts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBindingConflicts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_SecondaryBindingConflicts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_ParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bIsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bHasDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSBZSettingData_Statics::NewProp_bActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSBZSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
		nullptr,
		&NewStructOps,
		"SBZSettingData",
		sizeof(FSBZSettingData),
		alignof(FSBZSettingData),
		Z_Construct_UScriptStruct_FSBZSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSBZSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSBZSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSBZSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSBZSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Starbreeze();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SBZSettingData"), sizeof(FSBZSettingData), Get_Z_Construct_UScriptStruct_FSBZSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSBZSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSBZSettingData_Hash() { return 2957459511U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
