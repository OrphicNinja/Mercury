// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterEffectContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterEffectContainer() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectContainer();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatePawnWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterEffectWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZCharacterEffectContainer::execOnCharactedEffectCooldownProgressUpdated)
	{
		P_GET_STRUCT_REF(FSBZCharacterEffectRuntime,Z_Param_Out_CharacterRuntime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharactedEffectCooldownProgressUpdated(Z_Param_Out_CharacterRuntime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterEffectContainer::execOnCharactedEffectValueUpdated)
	{
		P_GET_STRUCT_REF(FSBZCharacterEffectRuntime,Z_Param_Out_CharacterRuntime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharactedEffectValueUpdated(Z_Param_Out_CharacterRuntime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterEffectContainer::execOnCharacterEffectAdded)
	{
		P_GET_STRUCT_REF(FSBZCharacterEffectRuntime,Z_Param_Out_CharacterRuntime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterEffectAdded(Z_Param_Out_CharacterRuntime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterEffectContainer::execOnCharacterEffectRemoved)
	{
		P_GET_STRUCT_REF(FSBZCharacterEffectRuntime,Z_Param_Out_CharacterRuntime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterEffectRemoved(Z_Param_Out_CharacterRuntime);
		P_NATIVE_END;
	}
	void USBZCharacterEffectContainer::StaticRegisterNativesUSBZCharacterEffectContainer()
	{
		UClass* Class = USBZCharacterEffectContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharactedEffectCooldownProgressUpdated", &USBZCharacterEffectContainer::execOnCharactedEffectCooldownProgressUpdated },
			{ "OnCharactedEffectValueUpdated", &USBZCharacterEffectContainer::execOnCharactedEffectValueUpdated },
			{ "OnCharacterEffectAdded", &USBZCharacterEffectContainer::execOnCharacterEffectAdded },
			{ "OnCharacterEffectRemoved", &USBZCharacterEffectContainer::execOnCharacterEffectRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics
	{
		struct SBZCharacterEffectContainer_eventOnCharactedEffectCooldownProgressUpdated_Parms
		{
			FSBZCharacterEffectRuntime CharacterRuntime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterRuntime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::NewProp_CharacterRuntime = { "CharacterRuntime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectContainer_eventOnCharactedEffectCooldownProgressUpdated_Parms, CharacterRuntime), Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::NewProp_CharacterRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectContainer, nullptr, "OnCharactedEffectCooldownProgressUpdated", nullptr, nullptr, sizeof(SBZCharacterEffectContainer_eventOnCharactedEffectCooldownProgressUpdated_Parms), Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics
	{
		struct SBZCharacterEffectContainer_eventOnCharactedEffectValueUpdated_Parms
		{
			FSBZCharacterEffectRuntime CharacterRuntime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterRuntime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::NewProp_CharacterRuntime = { "CharacterRuntime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectContainer_eventOnCharactedEffectValueUpdated_Parms, CharacterRuntime), Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::NewProp_CharacterRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectContainer, nullptr, "OnCharactedEffectValueUpdated", nullptr, nullptr, sizeof(SBZCharacterEffectContainer_eventOnCharactedEffectValueUpdated_Parms), Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics
	{
		struct SBZCharacterEffectContainer_eventOnCharacterEffectAdded_Parms
		{
			FSBZCharacterEffectRuntime CharacterRuntime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterRuntime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::NewProp_CharacterRuntime = { "CharacterRuntime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectContainer_eventOnCharacterEffectAdded_Parms, CharacterRuntime), Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::NewProp_CharacterRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectContainer, nullptr, "OnCharacterEffectAdded", nullptr, nullptr, sizeof(SBZCharacterEffectContainer_eventOnCharacterEffectAdded_Parms), Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics
	{
		struct SBZCharacterEffectContainer_eventOnCharacterEffectRemoved_Parms
		{
			FSBZCharacterEffectRuntime CharacterRuntime;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterRuntime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::NewProp_CharacterRuntime = { "CharacterRuntime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterEffectContainer_eventOnCharacterEffectRemoved_Parms, CharacterRuntime), Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::NewProp_CharacterRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterEffectContainer, nullptr, "OnCharacterEffectRemoved", nullptr, nullptr, sizeof(SBZCharacterEffectContainer_eventOnCharacterEffectRemoved_Parms), Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCharacterEffectContainer_NoRegister()
	{
		return USBZCharacterEffectContainer::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterEffectContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_CharacterEffectsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel_CharacterEffectsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEffectWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterEffectWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectWidgets_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveEffectWidgets_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActiveEffectWidgets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActiveEffectWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyCharacterEffectsPool_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyCharacterEffectsPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyCharacterEffectsPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmptyCharacterEffectsPool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterEffectContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStatePawnWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCharacterEffectContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectCooldownProgressUpdated, "OnCharactedEffectCooldownProgressUpdated" }, // 3636960120
		{ &Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharactedEffectValueUpdated, "OnCharactedEffectValueUpdated" }, // 1805913520
		{ &Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectAdded, "OnCharacterEffectAdded" }, // 3593640394
		{ &Z_Construct_UFunction_USBZCharacterEffectContainer_OnCharacterEffectRemoved, "OnCharacterEffectRemoved" }, // 3854058662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterEffectContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_Panel_CharacterEffectsContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_Panel_CharacterEffectsContainer = { "Panel_CharacterEffectsContainer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectContainer, Panel_CharacterEffectsContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_Panel_CharacterEffectsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_Panel_CharacterEffectsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_CharacterEffectWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectContainer" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_CharacterEffectWidgetClass = { "CharacterEffectWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectContainer, CharacterEffectWidgetClass), Z_Construct_UClass_USBZCharacterEffectWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_CharacterEffectWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_CharacterEffectWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_ValueProp = { "ActiveEffectWidgets", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZCharacterEffectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_Key_KeyProp = { "ActiveEffectWidgets_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets = { "ActiveEffectWidgets", nullptr, (EPropertyFlags)0x0040008000002009, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectContainer, ActiveEffectWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_Inner = { "EmptyCharacterEffectsPool", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZCharacterEffectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCharacterEffectContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterEffectContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool = { "EmptyCharacterEffectsPool", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCharacterEffectContainer, EmptyCharacterEffectsPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCharacterEffectContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_Panel_CharacterEffectsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_CharacterEffectWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_ActiveEffectWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCharacterEffectContainer_Statics::NewProp_EmptyCharacterEffectsPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterEffectContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterEffectContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterEffectContainer_Statics::ClassParams = {
		&USBZCharacterEffectContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZCharacterEffectContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterEffectContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterEffectContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterEffectContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterEffectContainer, 1416665697);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterEffectContainer>()
	{
		return USBZCharacterEffectContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterEffectContainer(Z_Construct_UClass_USBZCharacterEffectContainer, &USBZCharacterEffectContainer::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterEffectContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterEffectContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
