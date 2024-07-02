// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsMenuManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsMenuManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsMenuManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsMenuManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpClosed__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsMenuConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsMenuChildManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsMenuManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSettingsMenuManager**)Z_Param__Result=USBZSettingsMenuManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsMenuManager::execOnPopUpClosedConfirmAllChanges)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpClosedConfirmAllChanges(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsMenuManager::execOnPopUpClosedConfirmChanges)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpClosedConfirmChanges(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsMenuManager::execOnPopUpClosedConfirmResetToDefault)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpClosedConfirmResetToDefault(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSettingsMenuManager::execOnPopUpClosedUnappliedChanges)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopUpClosedUnappliedChanges(Z_Param_ActionName);
		P_NATIVE_END;
	}
	void USBZSettingsMenuManager::StaticRegisterNativesUSBZSettingsMenuManager()
	{
		UClass* Class = USBZSettingsMenuManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZSettingsMenuManager::execGet },
			{ "OnPopUpClosedConfirmAllChanges", &USBZSettingsMenuManager::execOnPopUpClosedConfirmAllChanges },
			{ "OnPopUpClosedConfirmChanges", &USBZSettingsMenuManager::execOnPopUpClosedConfirmChanges },
			{ "OnPopUpClosedConfirmResetToDefault", &USBZSettingsMenuManager::execOnPopUpClosedConfirmResetToDefault },
			{ "OnPopUpClosedUnappliedChanges", &USBZSettingsMenuManager::execOnPopUpClosedUnappliedChanges },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics
	{
		struct SBZSettingsMenuManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZSettingsMenuManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsMenuManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsMenuManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZSettingsMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsMenuManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZSettingsMenuManager_eventGet_Parms), Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsMenuManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsMenuManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics
	{
		struct SBZSettingsMenuManager_eventOnPopUpClosedConfirmAllChanges_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsMenuManager_eventOnPopUpClosedConfirmAllChanges_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsMenuManager, nullptr, "OnPopUpClosedConfirmAllChanges", nullptr, nullptr, sizeof(SBZSettingsMenuManager_eventOnPopUpClosedConfirmAllChanges_Parms), Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics
	{
		struct SBZSettingsMenuManager_eventOnPopUpClosedConfirmChanges_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsMenuManager_eventOnPopUpClosedConfirmChanges_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsMenuManager, nullptr, "OnPopUpClosedConfirmChanges", nullptr, nullptr, sizeof(SBZSettingsMenuManager_eventOnPopUpClosedConfirmChanges_Parms), Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics
	{
		struct SBZSettingsMenuManager_eventOnPopUpClosedConfirmResetToDefault_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsMenuManager_eventOnPopUpClosedConfirmResetToDefault_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsMenuManager, nullptr, "OnPopUpClosedConfirmResetToDefault", nullptr, nullptr, sizeof(SBZSettingsMenuManager_eventOnPopUpClosedConfirmResetToDefault_Parms), Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics
	{
		struct SBZSettingsMenuManager_eventOnPopUpClosedUnappliedChanges_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsMenuManager_eventOnPopUpClosedUnappliedChanges_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsMenuManager, nullptr, "OnPopUpClosedUnappliedChanges", nullptr, nullptr, sizeof(SBZSettingsMenuManager_eventOnPopUpClosedUnappliedChanges_Parms), Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsMenuManager_NoRegister()
	{
		return USBZSettingsMenuManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsMenuManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPopUpClosedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPopUpClosedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsMenuConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsMenuConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsMenuManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsMenuManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsMenuManager_Get, "Get" }, // 3125053246
		{ &Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmAllChanges, "OnPopUpClosedConfirmAllChanges" }, // 413218723
		{ &Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmChanges, "OnPopUpClosedConfirmChanges" }, // 3884794407
		{ &Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedConfirmResetToDefault, "OnPopUpClosedConfirmResetToDefault" }, // 775429636
		{ &Z_Construct_UFunction_USBZSettingsMenuManager_OnPopUpClosedUnappliedChanges, "OnPopUpClosedUnappliedChanges" }, // 700049628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsMenuManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsMenuManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_OnPopUpClosedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuManager" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_OnPopUpClosedDelegate = { "OnPopUpClosedDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsMenuManager, OnPopUpClosedDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPopUpClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_OnPopUpClosedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_OnPopUpClosedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SettingsMenuConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuManager" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SettingsMenuConfig = { "SettingsMenuConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsMenuManager, SettingsMenuConfig), Z_Construct_UClass_USBZSettingsMenuConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SettingsMenuConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SettingsMenuConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SubSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSettingsMenuManager" },
		{ "ModuleRelativePath", "Public/SBZSettingsMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SubSettings = { "SubSettings", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSettingsMenuManager, SubSettings), Z_Construct_UClass_USBZSettingsMenuChildManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SubSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SubSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSettingsMenuManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_OnPopUpClosedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SettingsMenuConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSettingsMenuManager_Statics::NewProp_SubSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsMenuManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsMenuManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsMenuManager_Statics::ClassParams = {
		&USBZSettingsMenuManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSettingsMenuManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsMenuManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsMenuManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsMenuManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsMenuManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsMenuManager, 2449386418);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsMenuManager>()
	{
		return USBZSettingsMenuManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsMenuManager(Z_Construct_UClass_USBZSettingsMenuManager, &USBZSettingsMenuManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsMenuManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsMenuManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
