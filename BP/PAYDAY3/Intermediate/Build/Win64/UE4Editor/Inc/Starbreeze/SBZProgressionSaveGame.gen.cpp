// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZProgressionSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZProgressionSaveGame() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveGame_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveGame();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSaveGame();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZProgressionSaveGameData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZProgressionSaveGameInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetEquippedWeaponInventorySlotIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadoutIndex);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_ItemSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEquippedWeaponInventorySlotIndex(Z_Param_LoadoutIndex,ESBZEquippableLoadoutSlot(Z_Param_ItemSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetGloveInventorySlotArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZGloveInventorySlot>*)Z_Param__Result=P_THIS->GetGloveInventorySlotArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetMaskInventorySlotArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZMaskInventorySlot>*)Z_Param__Result=P_THIS->GetMaskInventorySlotArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetPlayerCosmeticsConfigArrayForPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPlayerCosmeticsConfig*)Z_Param__Result=P_THIS->GetPlayerCosmeticsConfigArrayForPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetSuitInventorySlotArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZSuitInventorySlot>*)Z_Param__Result=P_THIS->GetSuitInventorySlotArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetUncheckedGloveInventorySlotArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZGloveInventorySlot>*)Z_Param__Result=P_THIS->GetUncheckedGloveInventorySlotArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetUncheckedMaskInventorySlotArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZMaskInventorySlot>*)Z_Param__Result=P_THIS->GetUncheckedMaskInventorySlotArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetUncheckedSuitInventorySlotArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZSuitInventorySlot>*)Z_Param__Result=P_THIS->GetUncheckedSuitInventorySlotArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZProgressionSaveGame::execGetWeaponInventorySlotArray)
	{
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_EquippableSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZWeaponInventorySlot>*)Z_Param__Result=P_THIS->GetWeaponInventorySlotArray(ESBZEquippableLoadoutSlot(Z_Param_EquippableSlot));
		P_NATIVE_END;
	}
	void USBZProgressionSaveGame::StaticRegisterNativesUSBZProgressionSaveGame()
	{
		UClass* Class = USBZProgressionSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEquippedWeaponInventorySlotIndex", &USBZProgressionSaveGame::execGetEquippedWeaponInventorySlotIndex },
			{ "GetGloveInventorySlotArray", &USBZProgressionSaveGame::execGetGloveInventorySlotArray },
			{ "GetMaskInventorySlotArray", &USBZProgressionSaveGame::execGetMaskInventorySlotArray },
			{ "GetPlayerCosmeticsConfigArrayForPlatform", &USBZProgressionSaveGame::execGetPlayerCosmeticsConfigArrayForPlatform },
			{ "GetSuitInventorySlotArray", &USBZProgressionSaveGame::execGetSuitInventorySlotArray },
			{ "GetUncheckedGloveInventorySlotArray", &USBZProgressionSaveGame::execGetUncheckedGloveInventorySlotArray },
			{ "GetUncheckedMaskInventorySlotArray", &USBZProgressionSaveGame::execGetUncheckedMaskInventorySlotArray },
			{ "GetUncheckedSuitInventorySlotArray", &USBZProgressionSaveGame::execGetUncheckedSuitInventorySlotArray },
			{ "GetWeaponInventorySlotArray", &USBZProgressionSaveGame::execGetWeaponInventorySlotArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics
	{
		struct SBZProgressionSaveGame_eventGetEquippedWeaponInventorySlotIndex_Parms
		{
			int32 LoadoutIndex;
			ESBZEquippableLoadoutSlot ItemSlot;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_LoadoutIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetEquippedWeaponInventorySlotIndex_Parms, LoadoutIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_LoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_LoadoutIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_ItemSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetEquippedWeaponInventorySlotIndex_Parms, ItemSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetEquippedWeaponInventorySlotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_LoadoutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_ItemSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_ItemSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetEquippedWeaponInventorySlotIndex", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetEquippedWeaponInventorySlotIndex_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics
	{
		struct SBZProgressionSaveGame_eventGetGloveInventorySlotArray_Parms
		{
			TArray<FSBZGloveInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGloveInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetGloveInventorySlotArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetGloveInventorySlotArray", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetGloveInventorySlotArray_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics
	{
		struct SBZProgressionSaveGame_eventGetMaskInventorySlotArray_Parms
		{
			TArray<FSBZMaskInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMaskInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetMaskInventorySlotArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetMaskInventorySlotArray", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetMaskInventorySlotArray_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics
	{
		struct SBZProgressionSaveGame_eventGetPlayerCosmeticsConfigArrayForPlatform_Parms
		{
			FSBZPlayerCosmeticsConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetPlayerCosmeticsConfigArrayForPlatform_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPlayerCosmeticsConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetPlayerCosmeticsConfigArrayForPlatform", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetPlayerCosmeticsConfigArrayForPlatform_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics
	{
		struct SBZProgressionSaveGame_eventGetSuitInventorySlotArray_Parms
		{
			TArray<FSBZSuitInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetSuitInventorySlotArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetSuitInventorySlotArray", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetSuitInventorySlotArray_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics
	{
		struct SBZProgressionSaveGame_eventGetUncheckedGloveInventorySlotArray_Parms
		{
			TArray<FSBZGloveInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZGloveInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetUncheckedGloveInventorySlotArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetUncheckedGloveInventorySlotArray", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetUncheckedGloveInventorySlotArray_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics
	{
		struct SBZProgressionSaveGame_eventGetUncheckedMaskInventorySlotArray_Parms
		{
			TArray<FSBZMaskInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMaskInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetUncheckedMaskInventorySlotArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetUncheckedMaskInventorySlotArray", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetUncheckedMaskInventorySlotArray_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics
	{
		struct SBZProgressionSaveGame_eventGetUncheckedSuitInventorySlotArray_Parms
		{
			TArray<FSBZSuitInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetUncheckedSuitInventorySlotArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetUncheckedSuitInventorySlotArray", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetUncheckedSuitInventorySlotArray_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics
	{
		struct SBZProgressionSaveGame_eventGetWeaponInventorySlotArray_Parms
		{
			ESBZEquippableLoadoutSlot EquippableSlot;
			TArray<FSBZWeaponInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetWeaponInventorySlotArray_Parms, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZProgressionSaveGame_eventGetWeaponInventorySlotArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZProgressionSaveGame, nullptr, "GetWeaponInventorySlotArray", nullptr, nullptr, sizeof(SBZProgressionSaveGame_eventGetWeaponInventorySlotArray_Parms), Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZProgressionSaveGame_NoRegister()
	{
		return USBZProgressionSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_USBZProgressionSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionSaveGameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionSaveGameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZProgressionSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZProgressionSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetEquippedWeaponInventorySlotIndex, "GetEquippedWeaponInventorySlotIndex" }, // 2377196652
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetGloveInventorySlotArray, "GetGloveInventorySlotArray" }, // 3524260234
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetMaskInventorySlotArray, "GetMaskInventorySlotArray" }, // 1750523603
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetPlayerCosmeticsConfigArrayForPlatform, "GetPlayerCosmeticsConfigArrayForPlatform" }, // 1766978883
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetSuitInventorySlotArray, "GetSuitInventorySlotArray" }, // 3824689834
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedGloveInventorySlotArray, "GetUncheckedGloveInventorySlotArray" }, // 2514985088
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedMaskInventorySlotArray, "GetUncheckedMaskInventorySlotArray" }, // 3485221770
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetUncheckedSuitInventorySlotArray, "GetUncheckedSuitInventorySlotArray" }, // 3809697742
		{ &Z_Construct_UFunction_USBZProgressionSaveGame_GetWeaponInventorySlotArray, "GetWeaponInventorySlotArray" }, // 3721000112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZProgressionSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZProgressionSaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZProgressionSaveGame_Statics::NewProp_ProgressionSaveGameData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZProgressionSaveGame" },
		{ "ModuleRelativePath", "Public/SBZProgressionSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZProgressionSaveGame_Statics::NewProp_ProgressionSaveGameData = { "ProgressionSaveGameData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZProgressionSaveGame, ProgressionSaveGameData), Z_Construct_UScriptStruct_FSBZProgressionSaveGameData, METADATA_PARAMS(Z_Construct_UClass_USBZProgressionSaveGame_Statics::NewProp_ProgressionSaveGameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZProgressionSaveGame_Statics::NewProp_ProgressionSaveGameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZProgressionSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZProgressionSaveGame_Statics::NewProp_ProgressionSaveGameData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZProgressionSaveGame_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZProgressionSaveGameInterface_NoRegister, (int32)VTABLE_OFFSET(USBZProgressionSaveGame, ISBZProgressionSaveGameInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZProgressionSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZProgressionSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZProgressionSaveGame_Statics::ClassParams = {
		&USBZProgressionSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZProgressionSaveGame_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZProgressionSaveGame_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZProgressionSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZProgressionSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZProgressionSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZProgressionSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZProgressionSaveGame, 1473279036);
	template<> STARBREEZE_API UClass* StaticClass<USBZProgressionSaveGame>()
	{
		return USBZProgressionSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZProgressionSaveGame(Z_Construct_UClass_USBZProgressionSaveGame, &USBZProgressionSaveGame::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZProgressionSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZProgressionSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
