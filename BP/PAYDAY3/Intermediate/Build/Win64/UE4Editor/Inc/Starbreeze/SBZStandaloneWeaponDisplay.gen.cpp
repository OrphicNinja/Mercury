// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStandaloneWeaponDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStandaloneWeaponDisplay() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplay();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippablePartConfig_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseWeaponData_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZStandaloneWeaponDisplay::execRemovePart)
	{
		P_GET_OBJECT(USBZModularPartSlotBase,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePart(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStandaloneWeaponDisplay::execSetPart)
	{
		P_GET_OBJECT(USBZModularPartSlotBase,Z_Param_Slot);
		P_GET_OBJECT(USBZEquippablePartDataAsset,Z_Param_PartAsset);
		P_GET_OBJECT(USBZEquippablePartConfig,Z_Param_PartConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPart(Z_Param_Slot,Z_Param_PartAsset,Z_Param_PartConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStandaloneWeaponDisplay::execSetupWeaponConfig)
	{
		P_GET_STRUCT_REF(FSBZEquippableConfig,Z_Param_Out_InWeaponConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeaponConfig(Z_Param_Out_InWeaponConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZStandaloneWeaponDisplay::execSetupWeaponData)
	{
		P_GET_OBJECT(USBZBaseWeaponData,Z_Param_InWeaponData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeaponData(Z_Param_InWeaponData);
		P_NATIVE_END;
	}
	static FName NAME_ASBZStandaloneWeaponDisplay_OnWeaponSpawned = FName(TEXT("OnWeaponSpawned"));
	void ASBZStandaloneWeaponDisplay::OnWeaponSpawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBZStandaloneWeaponDisplay_OnWeaponSpawned),NULL);
	}
	void ASBZStandaloneWeaponDisplay::StaticRegisterNativesASBZStandaloneWeaponDisplay()
	{
		UClass* Class = ASBZStandaloneWeaponDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemovePart", &ASBZStandaloneWeaponDisplay::execRemovePart },
			{ "SetPart", &ASBZStandaloneWeaponDisplay::execSetPart },
			{ "SetupWeaponConfig", &ASBZStandaloneWeaponDisplay::execSetupWeaponConfig },
			{ "SetupWeaponData", &ASBZStandaloneWeaponDisplay::execSetupWeaponData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneWeaponDisplay, nullptr, "OnWeaponSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics
	{
		struct SBZStandaloneWeaponDisplay_eventRemovePart_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStandaloneWeaponDisplay_eventRemovePart_Parms, Slot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::NewProp_Slot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneWeaponDisplay, nullptr, "RemovePart", nullptr, nullptr, sizeof(SBZStandaloneWeaponDisplay_eventRemovePart_Parms), Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics
	{
		struct SBZStandaloneWeaponDisplay_eventSetPart_Parms
		{
			const USBZModularPartSlotBase* Slot;
			const USBZEquippablePartDataAsset* PartAsset;
			USBZEquippablePartConfig* PartConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStandaloneWeaponDisplay_eventSetPart_Parms, Slot), Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_Slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_PartAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_PartAsset = { "PartAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStandaloneWeaponDisplay_eventSetPart_Parms, PartAsset), Z_Construct_UClass_USBZEquippablePartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_PartAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_PartAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_PartConfig = { "PartConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStandaloneWeaponDisplay_eventSetPart_Parms, PartConfig), Z_Construct_UClass_USBZEquippablePartConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_Slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_PartAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::NewProp_PartConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneWeaponDisplay, nullptr, "SetPart", nullptr, nullptr, sizeof(SBZStandaloneWeaponDisplay_eventSetPart_Parms), Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics
	{
		struct SBZStandaloneWeaponDisplay_eventSetupWeaponConfig_Parms
		{
			FSBZEquippableConfig InWeaponConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeaponConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::NewProp_InWeaponConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::NewProp_InWeaponConfig = { "InWeaponConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStandaloneWeaponDisplay_eventSetupWeaponConfig_Parms, InWeaponConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::NewProp_InWeaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::NewProp_InWeaponConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::NewProp_InWeaponConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneWeaponDisplay, nullptr, "SetupWeaponConfig", nullptr, nullptr, sizeof(SBZStandaloneWeaponDisplay_eventSetupWeaponConfig_Parms), Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics
	{
		struct SBZStandaloneWeaponDisplay_eventSetupWeaponData_Parms
		{
			const USBZBaseWeaponData* InWeaponData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::NewProp_InWeaponData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::NewProp_InWeaponData = { "InWeaponData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStandaloneWeaponDisplay_eventSetupWeaponData_Parms, InWeaponData), Z_Construct_UClass_USBZBaseWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::NewProp_InWeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::NewProp_InWeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::NewProp_InWeaponData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStandaloneWeaponDisplay, nullptr, "SetupWeaponData", nullptr, nullptr, sizeof(SBZStandaloneWeaponDisplay_eventSetupWeaponData_Parms), Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplay_NoRegister()
	{
		return ASBZStandaloneWeaponDisplay::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeWeaponMeshes_MetaData[];
#endif
		static void NewProp_bMergeWeaponMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeWeaponMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRespawnAlways_MetaData[];
#endif
		static void NewProp_bRespawnAlways_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRespawnAlways;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotPointToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PivotPointToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceWithoutPivotPoint_MetaData[];
#endif
		static void NewProp_bForceWithoutPivotPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceWithoutPivotPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPivotPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPivotPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_OnWeaponSpawned, "OnWeaponSpawned" }, // 3533242205
		{ &Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_RemovePart, "RemovePart" }, // 3281472359
		{ &Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetPart, "SetPart" }, // 819079791
		{ &Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponConfig, "SetupWeaponConfig" }, // 78040714
		{ &Z_Construct_UFunction_ASBZStandaloneWeaponDisplay_SetupWeaponData, "SetupWeaponData" }, // 1221113937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStandaloneWeaponDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_WeaponConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_WeaponConfig = { "WeaponConfig", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, WeaponConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_WeaponConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_WeaponConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bMergeWeaponMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	void Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bMergeWeaponMeshes_SetBit(void* Obj)
	{
		((ASBZStandaloneWeaponDisplay*)Obj)->bMergeWeaponMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bMergeWeaponMeshes = { "bMergeWeaponMeshes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZStandaloneWeaponDisplay), &Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bMergeWeaponMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bMergeWeaponMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bMergeWeaponMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bRespawnAlways_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	void Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bRespawnAlways_SetBit(void* Obj)
	{
		((ASBZStandaloneWeaponDisplay*)Obj)->bRespawnAlways = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bRespawnAlways = { "bRespawnAlways", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZStandaloneWeaponDisplay), &Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bRespawnAlways_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bRespawnAlways_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bRespawnAlways_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedWeapon = { "SpawnedWeapon", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, SpawnedWeapon), Z_Construct_UClass_ASBZWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_PivotPointToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_PivotPointToSpawn = { "PivotPointToSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, PivotPointToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_PivotPointToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_PivotPointToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bForceWithoutPivotPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	void Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bForceWithoutPivotPoint_SetBit(void* Obj)
	{
		((ASBZStandaloneWeaponDisplay*)Obj)->bForceWithoutPivotPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bForceWithoutPivotPoint = { "bForceWithoutPivotPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZStandaloneWeaponDisplay), &Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bForceWithoutPivotPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bForceWithoutPivotPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bForceWithoutPivotPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_FOVMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_FOVMultiplier = { "FOVMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, FOVMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_FOVMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_FOVMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedPivotPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStandaloneWeaponDisplay" },
		{ "ModuleRelativePath", "Public/SBZStandaloneWeaponDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedPivotPoint = { "SpawnedPivotPoint", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZStandaloneWeaponDisplay, SpawnedPivotPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedPivotPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedPivotPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_WeaponConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bMergeWeaponMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bRespawnAlways,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_PivotPointToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_bForceWithoutPivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_FOVMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::NewProp_SpawnedPivotPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStandaloneWeaponDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::ClassParams = {
		&ASBZStandaloneWeaponDisplay::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStandaloneWeaponDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStandaloneWeaponDisplay, 1927624116);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStandaloneWeaponDisplay>()
	{
		return ASBZStandaloneWeaponDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStandaloneWeaponDisplay(Z_Construct_UClass_ASBZStandaloneWeaponDisplay, &ASBZStandaloneWeaponDisplay::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStandaloneWeaponDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStandaloneWeaponDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
