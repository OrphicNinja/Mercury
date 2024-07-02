// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLifeActionInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLifeActionInstance() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZLifeActionState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionDialogPlayer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLifeActionInstance::execAreAllNeededSlotsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreAllNeededSlotsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execContainsSlot)
	{
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_InSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsSlot(Z_Param_InSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execGetReservedSlot)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionSlot**)Z_Param__Result=P_THIS->GetReservedSlot(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execGetSlotWithTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZLifeActionSlot**)Z_Param__Result=P_THIS->GetSlotWithTag(Z_Param_Out_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZLifeActionState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execGetTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execIsSlotFree)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSlotFree(Z_Param_Out_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execStartDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLifeActionInstance::execStopDialog)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDialog(Z_Param_bReset);
		P_NATIVE_END;
	}
	void USBZLifeActionInstance::StaticRegisterNativesUSBZLifeActionInstance()
	{
		UClass* Class = USBZLifeActionInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreAllNeededSlotsReady", &USBZLifeActionInstance::execAreAllNeededSlotsReady },
			{ "ContainsSlot", &USBZLifeActionInstance::execContainsSlot },
			{ "GetReservedSlot", &USBZLifeActionInstance::execGetReservedSlot },
			{ "GetSlotWithTag", &USBZLifeActionInstance::execGetSlotWithTag },
			{ "GetState", &USBZLifeActionInstance::execGetState },
			{ "GetTag", &USBZLifeActionInstance::execGetTag },
			{ "IsSlotFree", &USBZLifeActionInstance::execIsSlotFree },
			{ "StartDialog", &USBZLifeActionInstance::execStartDialog },
			{ "StopDialog", &USBZLifeActionInstance::execStopDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics
	{
		struct SBZLifeActionInstance_eventAreAllNeededSlotsReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionInstance_eventAreAllNeededSlotsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionInstance_eventAreAllNeededSlotsReady_Parms), &Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "AreAllNeededSlotsReady", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventAreAllNeededSlotsReady_Parms), Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics
	{
		struct SBZLifeActionInstance_eventContainsSlot_Parms
		{
			const USBZLifeActionSlot* InSlot;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSlot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_InSlot_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_InSlot = { "InSlot", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventContainsSlot_Parms, InSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_InSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_InSlot_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionInstance_eventContainsSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionInstance_eventContainsSlot_Parms), &Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_InSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "ContainsSlot", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventContainsSlot_Parms), Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics
	{
		struct SBZLifeActionInstance_eventGetReservedSlot_Parms
		{
			const ASBZCharacter* Character;
			USBZLifeActionSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_Character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventGetReservedSlot_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventGetReservedSlot_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "GetReservedSlot", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventGetReservedSlot_Parms), Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics
	{
		struct SBZLifeActionInstance_eventGetSlotWithTag_Parms
		{
			FGameplayTag InTag;
			USBZLifeActionSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventGetSlotWithTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_InTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventGetSlotWithTag_Parms, ReturnValue), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "GetSlotWithTag", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventGetSlotWithTag_Parms), Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics
	{
		struct SBZLifeActionInstance_eventGetState_Parms
		{
			ESBZLifeActionState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZLifeActionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "GetState", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventGetState_Parms), Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics
	{
		struct SBZLifeActionInstance_eventGetTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventGetTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "GetTag", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventGetTag_Parms), Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_GetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_GetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics
	{
		struct SBZLifeActionInstance_eventIsSlotFree_Parms
		{
			FGameplayTag InTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLifeActionInstance_eventIsSlotFree_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_InTag_MetaData)) };
	void Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLifeActionInstance_eventIsSlotFree_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionInstance_eventIsSlotFree_Parms), &Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "IsSlotFree", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventIsSlotFree_Parms), Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_StartDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_StartDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_StartDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "StartDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_StartDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_StartDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_StartDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_StartDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics
	{
		struct SBZLifeActionInstance_eventStopDialog_Parms
		{
			bool bReset;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((SBZLifeActionInstance_eventStopDialog_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLifeActionInstance_eventStopDialog_Parms), &Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLifeActionInstance, nullptr, "StopDialog", nullptr, nullptr, sizeof(SBZLifeActionInstance_eventStopDialog_Parms), Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLifeActionInstance_StopDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLifeActionInstance_StopDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister()
	{
		return USBZLifeActionInstance::StaticClass();
	}
	struct Z_Construct_UClass_USBZLifeActionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningLifeActionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningLifeActionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slots_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLifeActionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLifeActionInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLifeActionInstance_AreAllNeededSlotsReady, "AreAllNeededSlotsReady" }, // 3888023543
		{ &Z_Construct_UFunction_USBZLifeActionInstance_ContainsSlot, "ContainsSlot" }, // 4226978486
		{ &Z_Construct_UFunction_USBZLifeActionInstance_GetReservedSlot, "GetReservedSlot" }, // 338311928
		{ &Z_Construct_UFunction_USBZLifeActionInstance_GetSlotWithTag, "GetSlotWithTag" }, // 212224535
		{ &Z_Construct_UFunction_USBZLifeActionInstance_GetState, "GetState" }, // 1131175036
		{ &Z_Construct_UFunction_USBZLifeActionInstance_GetTag, "GetTag" }, // 3948470899
		{ &Z_Construct_UFunction_USBZLifeActionInstance_IsSlotFree, "IsSlotFree" }, // 2544619624
		{ &Z_Construct_UFunction_USBZLifeActionInstance_StartDialog, "StartDialog" }, // 3610777332
		{ &Z_Construct_UFunction_USBZLifeActionInstance_StopDialog, "StopDialog" }, // 2901120867
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SBZLifeActionInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionInstance" },
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionInstance, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_DialogPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_DialogPlayer = { "DialogPlayer", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionInstance, DialogPlayer), Z_Construct_UClass_USBZLifeActionDialogPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_DialogPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_DialogPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_OwningLifeActionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_OwningLifeActionComponent = { "OwningLifeActionComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionInstance, OwningLifeActionComponent), Z_Construct_UClass_USBZLifeActionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_OwningLifeActionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_OwningLifeActionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLifeActionInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLifeActionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZLifeActionInstance, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZLifeActionInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_DialogPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_OwningLifeActionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZLifeActionInstance_Statics::NewProp_Slots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLifeActionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLifeActionInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLifeActionInstance_Statics::ClassParams = {
		&USBZLifeActionInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZLifeActionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionInstance_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLifeActionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLifeActionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLifeActionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLifeActionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLifeActionInstance, 2553360781);
	template<> STARBREEZE_API UClass* StaticClass<USBZLifeActionInstance>()
	{
		return USBZLifeActionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLifeActionInstance(Z_Construct_UClass_USBZLifeActionInstance, &USBZLifeActionInstance::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLifeActionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLifeActionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
