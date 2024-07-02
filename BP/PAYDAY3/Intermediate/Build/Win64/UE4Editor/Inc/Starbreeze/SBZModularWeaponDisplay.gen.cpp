// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularWeaponDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularWeaponDisplay() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModularWeaponDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZModularWeaponDisplay();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup();
// End Cross Module References
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execBuildWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execGetWeaponData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZBaseWeaponData**)Z_Param__Result=P_THIS->GetWeaponData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execGetWeaponModMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZEquippableConfig*)Z_Param__Result=P_THIS->GetWeaponModMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execModuleMeshLoadingDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModuleMeshLoadingDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execRemoveSlot)
	{
		P_GET_OBJECT(USBZModularPartSlotBase,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSlot(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execSetupWeaponData)
	{
		P_GET_OBJECT(USBZBaseWeaponData,Z_Param_InWeaponData);
		P_GET_UBOOL(Z_Param_bBuildNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeaponData(Z_Param_InWeaponData,Z_Param_bBuildNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execSetupWeaponModMap)
	{
		P_GET_STRUCT(FSBZEquippableConfig,Z_Param_InWeaponModMap);
		P_GET_UBOOL(Z_Param_bBuildNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeaponModMap(Z_Param_InWeaponModMap,Z_Param_bBuildNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execSetVisible)
	{
		P_GET_UBOOL(Z_Param_bIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisible(Z_Param_bIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZModularWeaponDisplay::execSwapModPart)
	{
		P_GET_OBJECT(USBZModularPartSlotBase,Z_Param_Slot);
		P_GET_OBJECT(USBZEquippablePartDataAsset,Z_Param_EquippablePart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapModPart(Z_Param_Slot,Z_Param_EquippablePart);
		P_NATIVE_END;
	}
	void ASBZModularWeaponDisplay::StaticRegisterNativesASBZModularWeaponDisplay()
	{
		UClass* Class = ASBZModularWeaponDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildWeapon", &ASBZModularWeaponDisplay::execBuildWeapon },
			{ "GetWeaponData", &ASBZModularWeaponDisplay::execGetWeaponData },
			{ "GetWeaponModMap", &ASBZModularWeaponDisplay::execGetWeaponModMap },
			{ "ModuleMeshLoadingDone", &ASBZModularWeaponDisplay::execModuleMeshLoadingDone },
			{ "RemoveSlot", &ASBZModularWeaponDisplay::execRemoveSlot },
			{ "SetupWeaponData", &ASBZModularWeaponDisplay::execSetupWeaponData },
			{ "SetupWeaponModMap", &ASBZModularWeaponDisplay::execSetupWeaponModMap },
			{ "SetVisible", &ASBZModularWeaponDisplay::execSetVisible },
			{ "SwapModPart", &ASBZModularWeaponDisplay::execSwapModPart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "BuildWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics
	{
		struct SBZModularWeaponDisplay_eventGetWeaponData_Parms
		{
			USBZBaseWeaponData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularWeaponDisplay_eventGetWeaponData_Parms, ReturnValue), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "GetWeaponData", nullptr, nullptr, sizeof(SBZModularWeaponDisplay_eventGetWeaponData_Parms), Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics
	{
		struct SBZModularWeaponDisplay_eventGetWeaponModMap_Parms
		{
			FSBZEquippableConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularWeaponDisplay_eventGetWeaponModMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "GetWeaponModMap", nullptr, nullptr, sizeof(SBZModularWeaponDisplay_eventGetWeaponModMap_Parms), Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "ModuleMeshLoadingDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics
	{
		struct SBZModularWeaponDisplay_eventRemoveSlot_Parms
		{
			const USBZModularPartSlotBase* Slot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularWeaponDisplay_eventRemoveSlot_Parms, Slot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "RemoveSlot", nullptr, nullptr, sizeof(SBZModularWeaponDisplay_eventRemoveSlot_Parms), Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics
	{
		struct SBZModularWeaponDisplay_eventSetupWeaponData_Parms
		{
			USBZBaseWeaponData* InWeaponData;
			bool bBuildNow;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWeaponData;
		static void NewProp_bBuildNow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildNow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::NewProp_InWeaponData = { "InWeaponData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularWeaponDisplay_eventSetupWeaponData_Parms, InWeaponData), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::NewProp_bBuildNow_SetBit(void* Obj)
	{
		((SBZModularWeaponDisplay_eventSetupWeaponData_Parms*)Obj)->bBuildNow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::NewProp_bBuildNow = { "bBuildNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModularWeaponDisplay_eventSetupWeaponData_Parms), &Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::NewProp_bBuildNow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::NewProp_InWeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::NewProp_bBuildNow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "SetupWeaponData", nullptr, nullptr, sizeof(SBZModularWeaponDisplay_eventSetupWeaponData_Parms), Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics
	{
		struct SBZModularWeaponDisplay_eventSetupWeaponModMap_Parms
		{
			FSBZEquippableConfig InWeaponModMap;
			bool bBuildNow;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponModMap;
		static void NewProp_bBuildNow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildNow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::NewProp_InWeaponModMap = { "InWeaponModMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularWeaponDisplay_eventSetupWeaponModMap_Parms, InWeaponModMap), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::NewProp_bBuildNow_SetBit(void* Obj)
	{
		((SBZModularWeaponDisplay_eventSetupWeaponModMap_Parms*)Obj)->bBuildNow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::NewProp_bBuildNow = { "bBuildNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModularWeaponDisplay_eventSetupWeaponModMap_Parms), &Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::NewProp_bBuildNow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::NewProp_InWeaponModMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::NewProp_bBuildNow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "SetupWeaponModMap", nullptr, nullptr, sizeof(SBZModularWeaponDisplay_eventSetupWeaponModMap_Parms), Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics
	{
		struct SBZModularWeaponDisplay_eventSetVisible_Parms
		{
			bool bIsVisible;
		};
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((SBZModularWeaponDisplay_eventSetVisible_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModularWeaponDisplay_eventSetVisible_Parms), &Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "SetVisible", nullptr, nullptr, sizeof(SBZModularWeaponDisplay_eventSetVisible_Parms), Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics
	{
		struct SBZModularWeaponDisplay_eventSwapModPart_Parms
		{
			const USBZModularPartSlotBase* Slot;
			const USBZEquippablePartDataAsset* EquippablePart;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippablePart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippablePart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularWeaponDisplay_eventSwapModPart_Parms, Slot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_EquippablePart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_EquippablePart = { "EquippablePart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularWeaponDisplay_eventSwapModPart_Parms, EquippablePart), Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_EquippablePart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_EquippablePart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::NewProp_EquippablePart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZModularWeaponDisplay, nullptr, "SwapModPart", nullptr, nullptr, sizeof(SBZModularWeaponDisplay_eventSwapModPart_Parms), Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZModularWeaponDisplay_NoRegister()
	{
		return ASBZModularWeaponDisplay::StaticClass();
	}
	struct Z_Construct_UClass_ASBZModularWeaponDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModularMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponModMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponModMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponModMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeaponModMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_BuildWeapon, "BuildWeapon" }, // 2143216986
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponData, "GetWeaponData" }, // 3478969635
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_GetWeaponModMap, "GetWeaponModMap" }, // 23510561
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_ModuleMeshLoadingDone, "ModuleMeshLoadingDone" }, // 1638604580
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_RemoveSlot, "RemoveSlot" }, // 1961581812
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponData, "SetupWeaponData" }, // 4049612093
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_SetupWeaponModMap, "SetupWeaponModMap" }, // 2315246561
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_SetVisible, "SetVisible" }, // 104801049
		{ &Z_Construct_UFunction_ASBZModularWeaponDisplay_SwapModPart, "SwapModPart" }, // 4025104957
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularWeaponDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_ModularMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularWeaponDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_ModularMeshComponent = { "ModularMeshComponent", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModularWeaponDisplay, ModularMeshComponent), Z_Construct_UClass_USBZModularMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_ModularMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_ModularMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularWeaponDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModularWeaponDisplay, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModularWeaponDisplay, WeaponData), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap_ValueProp = { "WeaponModMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZEquippablePartConfigGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap_Key_KeyProp = { "WeaponModMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZModularWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZModularWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap = { "WeaponModMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZModularWeaponDisplay, WeaponModMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_ModularMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::NewProp_WeaponModMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZModularWeaponDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::ClassParams = {
		&ASBZModularWeaponDisplay::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZModularWeaponDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZModularWeaponDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZModularWeaponDisplay, 3989925577);
	template<> STARBREEZE_API UClass* StaticClass<ASBZModularWeaponDisplay>()
	{
		return ASBZModularWeaponDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZModularWeaponDisplay(Z_Construct_UClass_ASBZModularWeaponDisplay, &ASBZModularWeaponDisplay::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZModularWeaponDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZModularWeaponDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
