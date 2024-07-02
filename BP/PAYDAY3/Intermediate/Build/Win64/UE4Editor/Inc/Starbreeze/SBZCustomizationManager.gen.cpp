// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCustomizationManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCustomizationManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCustomizationManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCustomizationManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMaskData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMaskConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCustomizationRotateComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStandaloneWeaponDisplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMask_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZCustomizationManager::execGetCustomizationManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASBZCustomizationManager**)Z_Param__Result=ASBZCustomizationManager::GetCustomizationManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execGetMainMenuMannequinVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMainMenuMannequinVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execHideCustomizableMannequin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideCustomizableMannequin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execHideGlobalMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideGlobalMask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execHideMainMenuMannequin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMainMenuMannequin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execSetMainMenuMannequinRotationEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainMenuMannequinRotationEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execShowCustomizableMannequin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCustomizableMannequin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execShowCustomizableWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCustomizableWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execShowGlobalMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowGlobalMask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execShowMainMenuMannequin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMainMenuMannequin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execSpawnGlobalMask)
	{
		P_GET_OBJECT(USBZMaskData,Z_Param_MaskData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnGlobalMask(Z_Param_MaskData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZCustomizationManager::execSpawnGlobalMaskWithConfig)
	{
		P_GET_STRUCT_REF(FSBZMaskConfig,Z_Param_Out_InMaskConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnGlobalMaskWithConfig(Z_Param_Out_InMaskConfig);
		P_NATIVE_END;
	}
	void ASBZCustomizationManager::StaticRegisterNativesASBZCustomizationManager()
	{
		UClass* Class = ASBZCustomizationManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomizationManager", &ASBZCustomizationManager::execGetCustomizationManager },
			{ "GetMainMenuMannequinVisibility", &ASBZCustomizationManager::execGetMainMenuMannequinVisibility },
			{ "HideCustomizableMannequin", &ASBZCustomizationManager::execHideCustomizableMannequin },
			{ "HideGlobalMask", &ASBZCustomizationManager::execHideGlobalMask },
			{ "HideMainMenuMannequin", &ASBZCustomizationManager::execHideMainMenuMannequin },
			{ "SetMainMenuMannequinRotationEnabled", &ASBZCustomizationManager::execSetMainMenuMannequinRotationEnabled },
			{ "ShowCustomizableMannequin", &ASBZCustomizationManager::execShowCustomizableMannequin },
			{ "ShowCustomizableWeapon", &ASBZCustomizationManager::execShowCustomizableWeapon },
			{ "ShowGlobalMask", &ASBZCustomizationManager::execShowGlobalMask },
			{ "ShowMainMenuMannequin", &ASBZCustomizationManager::execShowMainMenuMannequin },
			{ "SpawnGlobalMask", &ASBZCustomizationManager::execSpawnGlobalMask },
			{ "SpawnGlobalMaskWithConfig", &ASBZCustomizationManager::execSpawnGlobalMaskWithConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics
	{
		struct SBZCustomizationManager_eventGetCustomizationManager_Parms
		{
			const UObject* WorldContextObject;
			ASBZCustomizationManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationManager_eventGetCustomizationManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationManager_eventGetCustomizationManager_Parms, ReturnValue), Z_Construct_UClass_ASBZCustomizationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "GetCustomizationManager", nullptr, nullptr, sizeof(SBZCustomizationManager_eventGetCustomizationManager_Parms), Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics
	{
		struct SBZCustomizationManager_eventGetMainMenuMannequinVisibility_Parms
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
	void Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZCustomizationManager_eventGetMainMenuMannequinVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCustomizationManager_eventGetMainMenuMannequinVisibility_Parms), &Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "GetMainMenuMannequinVisibility", nullptr, nullptr, sizeof(SBZCustomizationManager_eventGetMainMenuMannequinVisibility_Parms), Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "HideCustomizableMannequin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "HideGlobalMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "HideMainMenuMannequin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics
	{
		struct SBZCustomizationManager_eventSetMainMenuMannequinRotationEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZCustomizationManager_eventSetMainMenuMannequinRotationEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZCustomizationManager_eventSetMainMenuMannequinRotationEnabled_Parms), &Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "SetMainMenuMannequinRotationEnabled", nullptr, nullptr, sizeof(SBZCustomizationManager_eventSetMainMenuMannequinRotationEnabled_Parms), Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "ShowCustomizableMannequin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "ShowCustomizableWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "ShowGlobalMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "ShowMainMenuMannequin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics
	{
		struct SBZCustomizationManager_eventSpawnGlobalMask_Parms
		{
			const USBZMaskData* MaskData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::NewProp_MaskData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::NewProp_MaskData = { "MaskData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationManager_eventSpawnGlobalMask_Parms, MaskData), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::NewProp_MaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::NewProp_MaskData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::NewProp_MaskData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "SpawnGlobalMask", nullptr, nullptr, sizeof(SBZCustomizationManager_eventSpawnGlobalMask_Parms), Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics
	{
		struct SBZCustomizationManager_eventSpawnGlobalMaskWithConfig_Parms
		{
			FSBZMaskConfig InMaskConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMaskConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMaskConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::NewProp_InMaskConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::NewProp_InMaskConfig = { "InMaskConfig", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCustomizationManager_eventSpawnGlobalMaskWithConfig_Parms, InMaskConfig), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::NewProp_InMaskConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::NewProp_InMaskConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::NewProp_InMaskConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZCustomizationManager, nullptr, "SpawnGlobalMaskWithConfig", nullptr, nullptr, sizeof(SBZCustomizationManager_eventSpawnGlobalMaskWithConfig_Parms), Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZCustomizationManager_NoRegister()
	{
		return ASBZCustomizationManager::StaticClass();
	}
	struct Z_Construct_UClass_ASBZCustomizationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationForMannequin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotationForMannequin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartMaskData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskCustomizationCameraName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaskCustomizationCameraName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskRotationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MaskRotationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOffsetForCameraFromMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnOffsetForCameraFromMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationForMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotationForMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MannequinToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MannequinToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitCustomizationCameraName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SuitCustomizationCameraName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitRotationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SuitRotationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOffsetForCameraFromMannequin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnOffsetForCameraFromMannequin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationForSuit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotationForSuit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCustomizationCameraName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponCustomizationCameraName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRotationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponRotationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnOffsetForCameraFromWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnOffsetForCameraFromWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotationForWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotationForWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandaloneWeaponDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StandaloneWeaponDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mannequin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mannequin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaskConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZCustomizationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZCustomizationManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZCustomizationManager_GetCustomizationManager, "GetCustomizationManager" }, // 1135523677
		{ &Z_Construct_UFunction_ASBZCustomizationManager_GetMainMenuMannequinVisibility, "GetMainMenuMannequinVisibility" }, // 2314662780
		{ &Z_Construct_UFunction_ASBZCustomizationManager_HideCustomizableMannequin, "HideCustomizableMannequin" }, // 3785977948
		{ &Z_Construct_UFunction_ASBZCustomizationManager_HideGlobalMask, "HideGlobalMask" }, // 3088306414
		{ &Z_Construct_UFunction_ASBZCustomizationManager_HideMainMenuMannequin, "HideMainMenuMannequin" }, // 1289224102
		{ &Z_Construct_UFunction_ASBZCustomizationManager_SetMainMenuMannequinRotationEnabled, "SetMainMenuMannequinRotationEnabled" }, // 909036787
		{ &Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableMannequin, "ShowCustomizableMannequin" }, // 2722312094
		{ &Z_Construct_UFunction_ASBZCustomizationManager_ShowCustomizableWeapon, "ShowCustomizableWeapon" }, // 3448364821
		{ &Z_Construct_UFunction_ASBZCustomizationManager_ShowGlobalMask, "ShowGlobalMask" }, // 834510149
		{ &Z_Construct_UFunction_ASBZCustomizationManager_ShowMainMenuMannequin, "ShowMainMenuMannequin" }, // 835276975
		{ &Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMask, "SpawnGlobalMask" }, // 2604347510
		{ &Z_Construct_UFunction_ASBZCustomizationManager_SpawnGlobalMaskWithConfig, "SpawnGlobalMaskWithConfig" }, // 1585514407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCustomizationManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMannequin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMannequin = { "StartRotationForMannequin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, StartRotationForMannequin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMannequin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMannequin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartMaskData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartMaskData = { "StartMaskData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, StartMaskData), Z_Construct_UClass_USBZMaskData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartMaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartMaskData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskCustomizationCameraName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskCustomizationCameraName = { "MaskCustomizationCameraName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, MaskCustomizationCameraName), METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskCustomizationCameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskCustomizationCameraName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskRotationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskRotationComponent = { "MaskRotationComponent", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, MaskRotationComponent), Z_Construct_UClass_USBZCustomizationRotateComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskRotationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskRotationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMask = { "SpawnOffsetForCameraFromMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, SpawnOffsetForCameraFromMask), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMask = { "StartRotationForMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, StartRotationForMask), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MannequinToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MannequinToSpawn = { "MannequinToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, MannequinToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MannequinToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MannequinToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitCustomizationCameraName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitCustomizationCameraName = { "SuitCustomizationCameraName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, SuitCustomizationCameraName), METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitCustomizationCameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitCustomizationCameraName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitRotationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitRotationComponent = { "SuitRotationComponent", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, SuitRotationComponent), Z_Construct_UClass_USBZCustomizationRotateComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitRotationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitRotationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMannequin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMannequin = { "SpawnOffsetForCameraFromMannequin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, SpawnOffsetForCameraFromMannequin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMannequin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMannequin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForSuit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForSuit = { "StartRotationForSuit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, StartRotationForSuit), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForSuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForSuit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponCustomizationCameraName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponCustomizationCameraName = { "WeaponCustomizationCameraName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, WeaponCustomizationCameraName), METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponCustomizationCameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponCustomizationCameraName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponRotationComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponRotationComponent = { "WeaponRotationComponent", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, WeaponRotationComponent), Z_Construct_UClass_USBZCustomizationRotateComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponRotationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponRotationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromWeapon = { "SpawnOffsetForCameraFromWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, SpawnOffsetForCameraFromWeapon), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForWeapon = { "StartRotationForWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, StartRotationForWeapon), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StandaloneWeaponDisplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StandaloneWeaponDisplay = { "StandaloneWeaponDisplay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, StandaloneWeaponDisplay), Z_Construct_UClass_ASBZStandaloneWeaponDisplay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StandaloneWeaponDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StandaloneWeaponDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_GlobalMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_GlobalMask = { "GlobalMask", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, GlobalMask), Z_Construct_UClass_ASBZMask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_GlobalMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_GlobalMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_Mannequin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_Mannequin = { "Mannequin", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, Mannequin), Z_Construct_UClass_ASBZMainMenuPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_Mannequin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_Mannequin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCustomizationManager" },
		{ "ModuleRelativePath", "Public/SBZCustomizationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskConfig = { "MaskConfig", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZCustomizationManager, MaskConfig), Z_Construct_UScriptStruct_FSBZMaskConfig, METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZCustomizationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMannequin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartMaskData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskCustomizationCameraName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskRotationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MannequinToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitCustomizationCameraName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SuitRotationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromMannequin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForSuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponCustomizationCameraName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_WeaponRotationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_SpawnOffsetForCameraFromWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StartRotationForWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_StandaloneWeaponDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_GlobalMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_Mannequin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZCustomizationManager_Statics::NewProp_MaskConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZCustomizationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZCustomizationManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZCustomizationManager_Statics::ClassParams = {
		&ASBZCustomizationManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZCustomizationManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZCustomizationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZCustomizationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZCustomizationManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZCustomizationManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZCustomizationManager, 3767574305);
	template<> STARBREEZE_API UClass* StaticClass<ASBZCustomizationManager>()
	{
		return ASBZCustomizationManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZCustomizationManager(Z_Construct_UClass_ASBZCustomizationManager, &ASBZCustomizationManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZCustomizationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZCustomizationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
