// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLoadoutLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLoadoutLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadoutLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZGloveInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSuitInventorySlot();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponInventorySlot();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetActivePlayerLoadoutIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZLoadoutLibrary::GetActivePlayerLoadoutIndex(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetGloveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=USBZLoadoutLibrary::GetGloveData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetInventoryGloveSlotAt)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZGloveInventorySlot,Z_Param_Out_OutGloveInventorySlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_GloveSlotIndex);
		P_GET_UBOOL_REF(Z_Param_Out_IsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLoadoutLibrary::GetInventoryGloveSlotAt(Z_Param_WorldContextObject,Z_Param_Out_OutGloveInventorySlot,Z_Param_GloveSlotIndex,Z_Param_Out_IsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetInventorySuitSlotAt)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZSuitInventorySlot,Z_Param_Out_OutSuitInventorySlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_SuitSlotIndex);
		P_GET_UBOOL_REF(Z_Param_Out_IsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLoadoutLibrary::GetInventorySuitSlotAt(Z_Param_WorldContextObject,Z_Param_Out_OutSuitInventorySlot,Z_Param_SuitSlotIndex,Z_Param_Out_IsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetMaskData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=USBZLoadoutLibrary::GetMaskData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetSuitData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZInventoryBaseData**)Z_Param__Result=USBZLoadoutLibrary::GetSuitData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetWeaponConfigSlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_InEquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_InWeaponSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZWeaponInventorySlot*)Z_Param__Result=USBZLoadoutLibrary::GetWeaponConfigSlot(Z_Param_WorldContextObject,ESBZEquippableLoadoutSlot(Z_Param_InEquippableSlot),Z_Param_InWeaponSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execGetWeaponConfigSlotsForEquippable)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_EquippableSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZWeaponInventorySlot>*)Z_Param__Result=USBZLoadoutLibrary::GetWeaponConfigSlotsForEquippable(Z_Param_WorldContextObject,ESBZEquippableLoadoutSlot(Z_Param_EquippableSlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execIsValidLoadout)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZPlayerLoadoutConfig,Z_Param_Out_PlayerLoadoutConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZLoadoutLibrary::IsValidLoadout(Z_Param_WorldContextObject,Z_Param_Out_PlayerLoadoutConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execRemoveCosmeticPartOnWeapon)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_ItemSlot);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_CosmeticsPartSlot);
		P_GET_OBJECT(USBZCosmeticsDataAsset,Z_Param_CosmeticsDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLoadoutLibrary::RemoveCosmeticPartOnWeapon(Z_Param_WorldContextObject,Z_Param_SlotIndex,ESBZEquippableLoadoutSlot(Z_Param_ItemSlot),Z_Param_CosmeticsPartSlot,Z_Param_CosmeticsDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execSetCosmeticPartOnWeapon)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_LoadoutSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_OBJECT(USBZCosmeticsPartSlot,Z_Param_CosmeticsPartSlot);
		P_GET_STRUCT_REF(FSBZEquippablePartConfigGroup,Z_Param_Out_EquippablePartConfigGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLoadoutLibrary::SetCosmeticPartOnWeapon(Z_Param_WorldContextObject,ESBZEquippableLoadoutSlot(Z_Param_LoadoutSlot),Z_Param_SlotIndex,Z_Param_CosmeticsPartSlot,Z_Param_Out_EquippablePartConfigGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZLoadoutLibrary::execSetWeaponPartOnWeapon)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESBZEquippableLoadoutSlot,Z_Param_EquippableSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_GET_OBJECT(USBZWeaponPartSlot,Z_Param_ModularPartSlot);
		P_GET_OBJECT(USBZEquippablePartDataAsset,Z_Param_EquippablePartDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZLoadoutLibrary::SetWeaponPartOnWeapon(Z_Param_WorldContextObject,ESBZEquippableLoadoutSlot(Z_Param_EquippableSlot),Z_Param_SlotIndex,Z_Param_ModularPartSlot,Z_Param_EquippablePartDataAsset);
		P_NATIVE_END;
	}
	void USBZLoadoutLibrary::StaticRegisterNativesUSBZLoadoutLibrary()
	{
		UClass* Class = USBZLoadoutLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActivePlayerLoadoutIndex", &USBZLoadoutLibrary::execGetActivePlayerLoadoutIndex },
			{ "GetGloveData", &USBZLoadoutLibrary::execGetGloveData },
			{ "GetInventoryGloveSlotAt", &USBZLoadoutLibrary::execGetInventoryGloveSlotAt },
			{ "GetInventorySuitSlotAt", &USBZLoadoutLibrary::execGetInventorySuitSlotAt },
			{ "GetMaskData", &USBZLoadoutLibrary::execGetMaskData },
			{ "GetSuitData", &USBZLoadoutLibrary::execGetSuitData },
			{ "GetWeaponConfigSlot", &USBZLoadoutLibrary::execGetWeaponConfigSlot },
			{ "GetWeaponConfigSlotsForEquippable", &USBZLoadoutLibrary::execGetWeaponConfigSlotsForEquippable },
			{ "IsValidLoadout", &USBZLoadoutLibrary::execIsValidLoadout },
			{ "RemoveCosmeticPartOnWeapon", &USBZLoadoutLibrary::execRemoveCosmeticPartOnWeapon },
			{ "SetCosmeticPartOnWeapon", &USBZLoadoutLibrary::execSetCosmeticPartOnWeapon },
			{ "SetWeaponPartOnWeapon", &USBZLoadoutLibrary::execSetWeaponPartOnWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics
	{
		struct SBZLoadoutLibrary_eventGetActivePlayerLoadoutIndex_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetActivePlayerLoadoutIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetActivePlayerLoadoutIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetActivePlayerLoadoutIndex", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetActivePlayerLoadoutIndex_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics
	{
		struct SBZLoadoutLibrary_eventGetGloveData_Parms
		{
			const UObject* WorldContextObject;
			USBZInventoryBaseData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetGloveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetGloveData_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetGloveData", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetGloveData_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics
	{
		struct SBZLoadoutLibrary_eventGetInventoryGloveSlotAt_Parms
		{
			const UObject* WorldContextObject;
			FSBZGloveInventorySlot OutGloveInventorySlot;
			int32 GloveSlotIndex;
			bool IsValidIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGloveInventorySlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GloveSlotIndex;
		static void NewProp_IsValidIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetInventoryGloveSlotAt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_OutGloveInventorySlot = { "OutGloveInventorySlot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetInventoryGloveSlotAt_Parms, OutGloveInventorySlot), Z_Construct_UScriptStruct_FSBZGloveInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_GloveSlotIndex = { "GloveSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetInventoryGloveSlotAt_Parms, GloveSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_IsValidIndex_SetBit(void* Obj)
	{
		((SBZLoadoutLibrary_eventGetInventoryGloveSlotAt_Parms*)Obj)->IsValidIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_IsValidIndex = { "IsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLoadoutLibrary_eventGetInventoryGloveSlotAt_Parms), &Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_IsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_OutGloveInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_GloveSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::NewProp_IsValidIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetInventoryGloveSlotAt", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetInventoryGloveSlotAt_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics
	{
		struct SBZLoadoutLibrary_eventGetInventorySuitSlotAt_Parms
		{
			const UObject* WorldContextObject;
			FSBZSuitInventorySlot OutSuitInventorySlot;
			int32 SuitSlotIndex;
			bool IsValidIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSuitInventorySlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuitSlotIndex;
		static void NewProp_IsValidIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetInventorySuitSlotAt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_OutSuitInventorySlot = { "OutSuitInventorySlot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetInventorySuitSlotAt_Parms, OutSuitInventorySlot), Z_Construct_UScriptStruct_FSBZSuitInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_SuitSlotIndex = { "SuitSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetInventorySuitSlotAt_Parms, SuitSlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_IsValidIndex_SetBit(void* Obj)
	{
		((SBZLoadoutLibrary_eventGetInventorySuitSlotAt_Parms*)Obj)->IsValidIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_IsValidIndex = { "IsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLoadoutLibrary_eventGetInventorySuitSlotAt_Parms), &Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_IsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_OutSuitInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_SuitSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::NewProp_IsValidIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetInventorySuitSlotAt", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetInventorySuitSlotAt_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics
	{
		struct SBZLoadoutLibrary_eventGetMaskData_Parms
		{
			const UObject* WorldContextObject;
			USBZInventoryBaseData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetMaskData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetMaskData_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetMaskData", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetMaskData_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics
	{
		struct SBZLoadoutLibrary_eventGetSuitData_Parms
		{
			const UObject* WorldContextObject;
			USBZInventoryBaseData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetSuitData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetSuitData_Parms, ReturnValue), Z_Construct_UClass_USBZInventoryBaseData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetSuitData", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetSuitData_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics
	{
		struct SBZLoadoutLibrary_eventGetWeaponConfigSlot_Parms
		{
			const UObject* WorldContextObject;
			ESBZEquippableLoadoutSlot InEquippableSlot;
			int32 InWeaponSlotIndex;
			FSBZWeaponInventorySlot ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InEquippableSlot_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InEquippableSlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWeaponSlotIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetWeaponConfigSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_InEquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_InEquippableSlot = { "InEquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetWeaponConfigSlot_Parms, InEquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_InWeaponSlotIndex = { "InWeaponSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetWeaponConfigSlot_Parms, InWeaponSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetWeaponConfigSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_InEquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_InEquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_InWeaponSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetWeaponConfigSlot", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetWeaponConfigSlot_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics
	{
		struct SBZLoadoutLibrary_eventGetWeaponConfigSlotsForEquippable_Parms
		{
			const UObject* WorldContextObject;
			ESBZEquippableLoadoutSlot EquippableSlot;
			TArray<FSBZWeaponInventorySlot> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetWeaponConfigSlotsForEquippable_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetWeaponConfigSlotsForEquippable_Parms, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZWeaponInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventGetWeaponConfigSlotsForEquippable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "GetWeaponConfigSlotsForEquippable", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventGetWeaponConfigSlotsForEquippable_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics
	{
		struct SBZLoadoutLibrary_eventIsValidLoadout_Parms
		{
			const UObject* WorldContextObject;
			FSBZPlayerLoadoutConfig PlayerLoadoutConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLoadoutConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerLoadoutConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventIsValidLoadout_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_PlayerLoadoutConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_PlayerLoadoutConfig = { "PlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventIsValidLoadout_Parms, PlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_PlayerLoadoutConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_PlayerLoadoutConfig_MetaData)) };
	void Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZLoadoutLibrary_eventIsValidLoadout_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZLoadoutLibrary_eventIsValidLoadout_Parms), &Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_PlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "IsValidLoadout", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventIsValidLoadout_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics
	{
		struct SBZLoadoutLibrary_eventRemoveCosmeticPartOnWeapon_Parms
		{
			const UObject* WorldContextObject;
			int32 SlotIndex;
			ESBZEquippableLoadoutSlot ItemSlot;
			const USBZCosmeticsPartSlot* CosmeticsPartSlot;
			const USBZCosmeticsDataAsset* CosmeticsDataAsset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticsPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticsPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticsDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticsDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventRemoveCosmeticPartOnWeapon_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventRemoveCosmeticPartOnWeapon_Parms, SlotIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_ItemSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_ItemSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_ItemSlot = { "ItemSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventRemoveCosmeticPartOnWeapon_Parms, ItemSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_ItemSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_ItemSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot = { "CosmeticsPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventRemoveCosmeticPartOnWeapon_Parms, CosmeticsPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsDataAsset = { "CosmeticsDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventRemoveCosmeticPartOnWeapon_Parms, CosmeticsDataAsset), Z_Construct_UClass_USBZCosmeticsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_ItemSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_ItemSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::NewProp_CosmeticsDataAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "RemoveCosmeticPartOnWeapon", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventRemoveCosmeticPartOnWeapon_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics
	{
		struct SBZLoadoutLibrary_eventSetCosmeticPartOnWeapon_Parms
		{
			const UObject* WorldContextObject;
			ESBZEquippableLoadoutSlot LoadoutSlot;
			int32 SlotIndex;
			const USBZCosmeticsPartSlot* CosmeticsPartSlot;
			FSBZEquippablePartConfigGroup EquippablePartConfigGroup;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadoutSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadoutSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticsPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CosmeticsPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippablePartConfigGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EquippablePartConfigGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetCosmeticPartOnWeapon_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_LoadoutSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_LoadoutSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_LoadoutSlot = { "LoadoutSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetCosmeticPartOnWeapon_Parms, LoadoutSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_LoadoutSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_LoadoutSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetCosmeticPartOnWeapon_Parms, SlotIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_SlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot = { "CosmeticsPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetCosmeticPartOnWeapon_Parms, CosmeticsPartSlot), Z_Construct_UClass_USBZCosmeticsPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_EquippablePartConfigGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_EquippablePartConfigGroup = { "EquippablePartConfigGroup", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetCosmeticPartOnWeapon_Parms, EquippablePartConfigGroup), Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_EquippablePartConfigGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_EquippablePartConfigGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_LoadoutSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_LoadoutSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_CosmeticsPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::NewProp_EquippablePartConfigGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "SetCosmeticPartOnWeapon", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventSetCosmeticPartOnWeapon_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics
	{
		struct SBZLoadoutLibrary_eventSetWeaponPartOnWeapon_Parms
		{
			const UObject* WorldContextObject;
			ESBZEquippableLoadoutSlot EquippableSlot;
			int32 SlotIndex;
			const USBZWeaponPartSlot* ModularPartSlot;
			const USBZEquippablePartDataAsset* EquippablePartDataAsset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EquippableSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippableSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EquippableSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularPartSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModularPartSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippablePartDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippablePartDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetWeaponPartOnWeapon_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippableSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippableSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippableSlot = { "EquippableSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetWeaponPartOnWeapon_Parms, EquippableSlot), Z_Construct_UEnum_Starbreeze_ESBZEquippableLoadoutSlot, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippableSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippableSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetWeaponPartOnWeapon_Parms, SlotIndex), METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_SlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_ModularPartSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_ModularPartSlot = { "ModularPartSlot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetWeaponPartOnWeapon_Parms, ModularPartSlot), Z_Construct_UClass_USBZWeaponPartSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_ModularPartSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_ModularPartSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippablePartDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippablePartDataAsset = { "EquippablePartDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZLoadoutLibrary_eventSetWeaponPartOnWeapon_Parms, EquippablePartDataAsset), Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippablePartDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippablePartDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippableSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippableSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_SlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_ModularPartSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::NewProp_EquippablePartDataAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZLoadoutLibrary, nullptr, "SetWeaponPartOnWeapon", nullptr, nullptr, sizeof(SBZLoadoutLibrary_eventSetWeaponPartOnWeapon_Parms), Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZLoadoutLibrary_NoRegister()
	{
		return USBZLoadoutLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZLoadoutLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZLoadoutLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZLoadoutLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetActivePlayerLoadoutIndex, "GetActivePlayerLoadoutIndex" }, // 2355765115
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetGloveData, "GetGloveData" }, // 1822346464
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetInventoryGloveSlotAt, "GetInventoryGloveSlotAt" }, // 522228787
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetInventorySuitSlotAt, "GetInventorySuitSlotAt" }, // 3368552121
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetMaskData, "GetMaskData" }, // 1043519078
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetSuitData, "GetSuitData" }, // 141380011
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlot, "GetWeaponConfigSlot" }, // 4237515413
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_GetWeaponConfigSlotsForEquippable, "GetWeaponConfigSlotsForEquippable" }, // 769339652
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_IsValidLoadout, "IsValidLoadout" }, // 1338161952
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_RemoveCosmeticPartOnWeapon, "RemoveCosmeticPartOnWeapon" }, // 2346969915
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_SetCosmeticPartOnWeapon, "SetCosmeticPartOnWeapon" }, // 1516076352
		{ &Z_Construct_UFunction_USBZLoadoutLibrary_SetWeaponPartOnWeapon, "SetWeaponPartOnWeapon" }, // 1991554630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZLoadoutLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLoadoutLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLoadoutLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZLoadoutLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZLoadoutLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZLoadoutLibrary_Statics::ClassParams = {
		&USBZLoadoutLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZLoadoutLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZLoadoutLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZLoadoutLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZLoadoutLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZLoadoutLibrary, 2916075219);
	template<> STARBREEZE_API UClass* StaticClass<USBZLoadoutLibrary>()
	{
		return USBZLoadoutLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZLoadoutLibrary(Z_Construct_UClass_USBZLoadoutLibrary, &USBZLoadoutLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZLoadoutLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZLoadoutLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
