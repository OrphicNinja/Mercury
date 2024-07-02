// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAICrewState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAICrewState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewState();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICrewCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCrewStateInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAICrewState::execGetCharacterIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperSprite**)Z_Param__Result=P_THIS->GetCharacterIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewState::execGetCharacterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCharacterName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewState::execMulticast_SetDefeatState)
	{
		P_GET_ENUM(EPD3DefeatState,Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDefeatState_Implementation(EPD3DefeatState(Z_Param_InState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewState::execMulticast_SetMaskOn)
	{
		P_GET_UBOOL(Z_Param_bMaskOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetMaskOn_Implementation(Z_Param_bMaskOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewState::execOnRep_Character)
	{
		P_GET_OBJECT(ASBZAICrewCharacter,Z_Param_OldCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Character(Z_Param_OldCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewState::execOnRep_DefeatState)
	{
		P_GET_ENUM(EPD3DefeatState,Z_Param_InOldDefeatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DefeatState(EPD3DefeatState(Z_Param_InOldDefeatState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAICrewState::execOnRep_IsMaskOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsMaskOn();
		P_NATIVE_END;
	}
	static FName NAME_ASBZAICrewState_Multicast_SetDefeatState = FName(TEXT("Multicast_SetDefeatState"));
	void ASBZAICrewState::Multicast_SetDefeatState(EPD3DefeatState InState)
	{
		SBZAICrewState_eventMulticast_SetDefeatState_Parms Parms;
		Parms.InState=InState;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewState_Multicast_SetDefeatState),&Parms);
	}
	static FName NAME_ASBZAICrewState_Multicast_SetMaskOn = FName(TEXT("Multicast_SetMaskOn"));
	void ASBZAICrewState::Multicast_SetMaskOn(bool bMaskOn)
	{
		SBZAICrewState_eventMulticast_SetMaskOn_Parms Parms;
		Parms.bMaskOn=bMaskOn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZAICrewState_Multicast_SetMaskOn),&Parms);
	}
	void ASBZAICrewState::StaticRegisterNativesASBZAICrewState()
	{
		UClass* Class = ASBZAICrewState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterIcon", &ASBZAICrewState::execGetCharacterIcon },
			{ "GetCharacterName", &ASBZAICrewState::execGetCharacterName },
			{ "Multicast_SetDefeatState", &ASBZAICrewState::execMulticast_SetDefeatState },
			{ "Multicast_SetMaskOn", &ASBZAICrewState::execMulticast_SetMaskOn },
			{ "OnRep_Character", &ASBZAICrewState::execOnRep_Character },
			{ "OnRep_DefeatState", &ASBZAICrewState::execOnRep_DefeatState },
			{ "OnRep_IsMaskOn", &ASBZAICrewState::execOnRep_IsMaskOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics
	{
		struct SBZAICrewState_eventGetCharacterIcon_Parms
		{
			UPaperSprite* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewState_eventGetCharacterIcon_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewState, nullptr, "GetCharacterIcon", nullptr, nullptr, sizeof(SBZAICrewState_eventGetCharacterIcon_Parms), Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics
	{
		struct SBZAICrewState_eventGetCharacterName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewState_eventGetCharacterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewState, nullptr, "GetCharacterName", nullptr, nullptr, sizeof(SBZAICrewState_eventGetCharacterName_Parms), Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewState_GetCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewState_GetCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewState_eventMulticast_SetDefeatState_Parms, InState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::NewProp_InState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewState, nullptr, "Multicast_SetDefeatState", nullptr, nullptr, sizeof(SBZAICrewState_eventMulticast_SetDefeatState_Parms), Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics
	{
		static void NewProp_bMaskOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaskOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::NewProp_bMaskOn_SetBit(void* Obj)
	{
		((SBZAICrewState_eventMulticast_SetMaskOn_Parms*)Obj)->bMaskOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::NewProp_bMaskOn = { "bMaskOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAICrewState_eventMulticast_SetMaskOn_Parms), &Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::NewProp_bMaskOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::NewProp_bMaskOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewState, nullptr, "Multicast_SetMaskOn", nullptr, nullptr, sizeof(SBZAICrewState_eventMulticast_SetMaskOn_Parms), Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics
	{
		struct SBZAICrewState_eventOnRep_Character_Parms
		{
			ASBZAICrewCharacter* OldCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::NewProp_OldCharacter = { "OldCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewState_eventOnRep_Character_Parms, OldCharacter), Z_Construct_UClass_ASBZAICrewCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::NewProp_OldCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewState, nullptr, "OnRep_Character", nullptr, nullptr, sizeof(SBZAICrewState_eventOnRep_Character_Parms), Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewState_OnRep_Character()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewState_OnRep_Character_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics
	{
		struct SBZAICrewState_eventOnRep_DefeatState_Parms
		{
			EPD3DefeatState InOldDefeatState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InOldDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InOldDefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::NewProp_InOldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::NewProp_InOldDefeatState = { "InOldDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAICrewState_eventOnRep_DefeatState_Parms, InOldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::NewProp_InOldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::NewProp_InOldDefeatState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewState, nullptr, "OnRep_DefeatState", nullptr, nullptr, sizeof(SBZAICrewState_eventOnRep_DefeatState_Parms), Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAICrewState, nullptr, "OnRep_IsMaskOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAICrewState_NoRegister()
	{
		return ASBZAICrewState::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAICrewState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefeatState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldDefeatState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMaskOn_MetaData[];
#endif
		static void NewProp_bIsMaskOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMaskOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CachedCharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCrewAIColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedCrewAIColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAICrewState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAICrewState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAICrewState_GetCharacterIcon, "GetCharacterIcon" }, // 1378390837
		{ &Z_Construct_UFunction_ASBZAICrewState_GetCharacterName, "GetCharacterName" }, // 3897046401
		{ &Z_Construct_UFunction_ASBZAICrewState_Multicast_SetDefeatState, "Multicast_SetDefeatState" }, // 3939012803
		{ &Z_Construct_UFunction_ASBZAICrewState_Multicast_SetMaskOn, "Multicast_SetMaskOn" }, // 1164365525
		{ &Z_Construct_UFunction_ASBZAICrewState_OnRep_Character, "OnRep_Character" }, // 2825072956
		{ &Z_Construct_UFunction_ASBZAICrewState_OnRep_DefeatState, "OnRep_DefeatState" }, // 2198001387
		{ &Z_Construct_UFunction_ASBZAICrewState_OnRep_IsMaskOn, "OnRep_IsMaskOn" }, // 1598697613
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZAICrewState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewState" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_Character = { "Character", "OnRep_Character", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewState, Character), Z_Construct_UClass_ASBZAICrewCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CharacterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewState" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewState, CharacterClass), Z_Construct_UClass_ASBZAICrewCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CharacterClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_DefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_DefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewState" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_DefeatState = { "DefeatState", "OnRep_DefeatState", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewState, DefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_DefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_DefeatState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_OldDefeatState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewState" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewState, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_OldDefeatState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_OldDefeatState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_bIsMaskOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewState" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_bIsMaskOn_SetBit(void* Obj)
	{
		((ASBZAICrewState*)Obj)->bIsMaskOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_bIsMaskOn = { "bIsMaskOn", "OnRep_IsMaskOn", (EPropertyFlags)0x0040000100002025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAICrewState), &Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_bIsMaskOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_bIsMaskOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_bIsMaskOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCharacterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewState" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCharacterName = { "CachedCharacterName", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewState, CachedCharacterName), METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCrewAIColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAICrewState" },
		{ "ModuleRelativePath", "Public/SBZAICrewState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCrewAIColor = { "CachedCrewAIColor", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAICrewState, CachedCrewAIColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCrewAIColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCrewAIColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAICrewState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_DefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_DefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_OldDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_bIsMaskOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAICrewState_Statics::NewProp_CachedCrewAIColor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZAICrewState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZCrewStateInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZAICrewState, ISBZCrewStateInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAICrewState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAICrewState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAICrewState_Statics::ClassParams = {
		&ASBZAICrewState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAICrewState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAICrewState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAICrewState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAICrewState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAICrewState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAICrewState, 436635659);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAICrewState>()
	{
		return ASBZAICrewState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAICrewState(Z_Construct_UClass_ASBZAICrewState, &ASBZAICrewState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAICrewState"), false, nullptr, nullptr, nullptr);

	void ASBZAICrewState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Character(TEXT("Character"));
		static const FName Name_DefeatState(TEXT("DefeatState"));
		static const FName Name_bIsMaskOn(TEXT("bIsMaskOn"));

		const bool bIsValid = true
			&& Name_Character == ClassReps[(int32)ENetFields_Private::Character].Property->GetFName()
			&& Name_DefeatState == ClassReps[(int32)ENetFields_Private::DefeatState].Property->GetFName()
			&& Name_bIsMaskOn == ClassReps[(int32)ENetFields_Private::bIsMaskOn].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAICrewState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAICrewState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
