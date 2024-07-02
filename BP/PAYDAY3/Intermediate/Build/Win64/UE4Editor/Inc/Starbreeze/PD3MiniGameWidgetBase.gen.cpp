// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3MiniGameWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3MiniGameWidgetBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3MiniGameWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3MiniGameWidgetBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3MiniGameState();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPD3MiniGameWidgetBase::execHasSkill)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSkill(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3MiniGameWidgetBase::execHasTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPD3MiniGameWidgetBase::execSetMiniGameState)
	{
		P_GET_ENUM(EPD3MiniGameState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiniGameState(EPD3MiniGameState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_UPD3MiniGameWidgetBase_BP_OnXAxisChanged = FName(TEXT("BP_OnXAxisChanged"));
	void UPD3MiniGameWidgetBase::BP_OnXAxisChanged(float Value)
	{
		PD3MiniGameWidgetBase_eventBP_OnXAxisChanged_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MiniGameWidgetBase_BP_OnXAxisChanged),&Parms);
	}
	static FName NAME_UPD3MiniGameWidgetBase_BP_OnYAxisChanged = FName(TEXT("BP_OnYAxisChanged"));
	void UPD3MiniGameWidgetBase::BP_OnYAxisChanged(float Value)
	{
		PD3MiniGameWidgetBase_eventBP_OnYAxisChanged_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MiniGameWidgetBase_BP_OnYAxisChanged),&Parms);
	}
	static FName NAME_UPD3MiniGameWidgetBase_MiniGameStateChanged = FName(TEXT("MiniGameStateChanged"));
	void UPD3MiniGameWidgetBase::MiniGameStateChanged(EPD3MiniGameState NewState)
	{
		PD3MiniGameWidgetBase_eventMiniGameStateChanged_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MiniGameWidgetBase_MiniGameStateChanged),&Parms);
	}
	static FName NAME_UPD3MiniGameWidgetBase_OnMiniGameDifficulty = FName(TEXT("OnMiniGameDifficulty"));
	void UPD3MiniGameWidgetBase::OnMiniGameDifficulty(ESBZDifficulty HeistDifficulty, uint8 MiniGameDifficulty)
	{
		PD3MiniGameWidgetBase_eventOnMiniGameDifficulty_Parms Parms;
		Parms.HeistDifficulty=HeistDifficulty;
		Parms.MiniGameDifficulty=MiniGameDifficulty;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MiniGameWidgetBase_OnMiniGameDifficulty),&Parms);
	}
	static FName NAME_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced = FName(TEXT("OnMiniGameWidgetPlaced"));
	void UPD3MiniGameWidgetBase::OnMiniGameWidgetPlaced(UAkComponent* AkComponent)
	{
		PD3MiniGameWidgetBase_eventOnMiniGameWidgetPlaced_Parms Parms;
		Parms.AkComponent=AkComponent;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced),&Parms);
	}
	static FName NAME_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent = FName(TEXT("OnOwningMiniGameComponent"));
	void UPD3MiniGameWidgetBase::OnOwningMiniGameComponent(USBZMiniGameComponent* MiniGameComponet)
	{
		PD3MiniGameWidgetBase_eventOnOwningMiniGameComponent_Parms Parms;
		Parms.MiniGameComponet=MiniGameComponet;
		ProcessEvent(FindFunctionChecked(NAME_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent),&Parms);
	}
	void UPD3MiniGameWidgetBase::StaticRegisterNativesUPD3MiniGameWidgetBase()
	{
		UClass* Class = UPD3MiniGameWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasSkill", &UPD3MiniGameWidgetBase::execHasSkill },
			{ "HasTag", &UPD3MiniGameWidgetBase::execHasTag },
			{ "SetMiniGameState", &UPD3MiniGameWidgetBase::execSetMiniGameState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventBP_OnXAxisChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "BP_OnXAxisChanged", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventBP_OnXAxisChanged_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventBP_OnYAxisChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "BP_OnYAxisChanged", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventBP_OnYAxisChanged_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics
	{
		struct PD3MiniGameWidgetBase_eventHasSkill_Parms
		{
			FGameplayTag Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventHasSkill_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_Tag_MetaData)) };
	void Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PD3MiniGameWidgetBase_eventHasSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3MiniGameWidgetBase_eventHasSkill_Parms), &Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "HasSkill", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventHasSkill_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics
	{
		struct PD3MiniGameWidgetBase_eventHasTag_Parms
		{
			FGameplayTag Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_Tag_MetaData)) };
	void Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PD3MiniGameWidgetBase_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PD3MiniGameWidgetBase_eventHasTag_Parms), &Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "HasTag", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventHasTag_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventMiniGameStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "MiniGameStateChanged", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventMiniGameStateChanged_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeistDifficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeistDifficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameDifficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::NewProp_HeistDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::NewProp_HeistDifficulty = { "HeistDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventOnMiniGameDifficulty_Parms, HeistDifficulty), Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::NewProp_MiniGameDifficulty = { "MiniGameDifficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventOnMiniGameDifficulty_Parms, MiniGameDifficulty), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::NewProp_HeistDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::NewProp_HeistDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::NewProp_MiniGameDifficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "OnMiniGameDifficulty", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventOnMiniGameDifficulty_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::NewProp_AkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventOnMiniGameWidgetPlaced_Parms, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::NewProp_AkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::NewProp_AkComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "OnMiniGameWidgetPlaced", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventOnMiniGameWidgetPlaced_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameComponet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniGameComponet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::NewProp_MiniGameComponet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::NewProp_MiniGameComponet = { "MiniGameComponet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventOnOwningMiniGameComponent_Parms, MiniGameComponet), Z_Construct_UClass_USBZMiniGameComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::NewProp_MiniGameComponet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::NewProp_MiniGameComponet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::NewProp_MiniGameComponet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "OnOwningMiniGameComponent", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventOnOwningMiniGameComponent_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics
	{
		struct PD3MiniGameWidgetBase_eventSetMiniGameState_Parms
		{
			EPD3MiniGameState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PD3MiniGameWidgetBase_eventSetMiniGameState_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3MiniGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPD3MiniGameWidgetBase, nullptr, "SetMiniGameState", nullptr, nullptr, sizeof(PD3MiniGameWidgetBase_eventSetMiniGameState_Parms), Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPD3MiniGameWidgetBase_NoRegister()
	{
		return UPD3MiniGameWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBindAxis_MetaData[];
#endif
		static void NewProp_bShouldBindAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBindAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_XAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_YAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XAxisLastUpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XAxisLastUpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YAxisLastUpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YAxisLastUpdateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnXAxisChanged, "BP_OnXAxisChanged" }, // 2333869462
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_BP_OnYAxisChanged, "BP_OnYAxisChanged" }, // 2739123540
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasSkill, "HasSkill" }, // 2935224715
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_HasTag, "HasTag" }, // 811069225
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_MiniGameStateChanged, "MiniGameStateChanged" }, // 495820202
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameDifficulty, "OnMiniGameDifficulty" }, // 3790498499
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnMiniGameWidgetPlaced, "OnMiniGameWidgetPlaced" }, // 381448220
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_OnOwningMiniGameComponent, "OnOwningMiniGameComponent" }, // 1124890723
		{ &Z_Construct_UFunction_UPD3MiniGameWidgetBase_SetMiniGameState, "SetMiniGameState" }, // 3328712255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3MiniGameWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_bShouldBindAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MiniGameWidgetBase" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_bShouldBindAxis_SetBit(void* Obj)
	{
		((UPD3MiniGameWidgetBase*)Obj)->bShouldBindAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_bShouldBindAxis = { "bShouldBindAxis", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPD3MiniGameWidgetBase), &Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_bShouldBindAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_bShouldBindAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_bShouldBindAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MiniGameWidgetBase" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisName = { "XAxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3MiniGameWidgetBase, XAxisName), METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MiniGameWidgetBase" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisName = { "YAxisName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3MiniGameWidgetBase, YAxisName), METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_AxisThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MiniGameWidgetBase" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_AxisThreshold = { "AxisThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3MiniGameWidgetBase, AxisThreshold), METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_AxisThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_AxisThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_UpdateWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MiniGameWidgetBase" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_UpdateWaitTime = { "UpdateWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3MiniGameWidgetBase, UpdateWaitTime), METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_UpdateWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_UpdateWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisLastUpdateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MiniGameWidgetBase" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisLastUpdateTime = { "XAxisLastUpdateTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3MiniGameWidgetBase, XAxisLastUpdateTime), METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisLastUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisLastUpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisLastUpdateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3MiniGameWidgetBase" },
		{ "ModuleRelativePath", "Public/PD3MiniGameWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisLastUpdateTime = { "YAxisLastUpdateTime", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3MiniGameWidgetBase, YAxisLastUpdateTime), METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisLastUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisLastUpdateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_bShouldBindAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_AxisThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_UpdateWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_XAxisLastUpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::NewProp_YAxisLastUpdateTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3MiniGameWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::ClassParams = {
		&UPD3MiniGameWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3MiniGameWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3MiniGameWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3MiniGameWidgetBase, 1562475046);
	template<> STARBREEZE_API UClass* StaticClass<UPD3MiniGameWidgetBase>()
	{
		return UPD3MiniGameWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3MiniGameWidgetBase(Z_Construct_UClass_UPD3MiniGameWidgetBase, &UPD3MiniGameWidgetBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3MiniGameWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3MiniGameWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
