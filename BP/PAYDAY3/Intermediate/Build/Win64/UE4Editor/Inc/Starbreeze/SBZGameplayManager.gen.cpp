// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameplayManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGameplayManager**)Z_Param__Result=USBZGameplayManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayManager::execOnActionPhaseExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPhaseExited();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayManager::execOnActionPhaseStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPhaseStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayManager::execOnBlackScreenStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlackScreenStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayManager::execOnOutroSequenceStarted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OutroVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOutroSequenceStarted(Z_Param_OutroVariation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayManager::execOnPlayableLevelInitialized)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayableLevelInitialized(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameplayManager::execOnRestartLevelStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartLevelStarted();
		P_NATIVE_END;
	}
	void USBZGameplayManager::StaticRegisterNativesUSBZGameplayManager()
	{
		UClass* Class = USBZGameplayManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZGameplayManager::execGet },
			{ "OnActionPhaseExited", &USBZGameplayManager::execOnActionPhaseExited },
			{ "OnActionPhaseStarted", &USBZGameplayManager::execOnActionPhaseStarted },
			{ "OnBlackScreenStarted", &USBZGameplayManager::execOnBlackScreenStarted },
			{ "OnOutroSequenceStarted", &USBZGameplayManager::execOnOutroSequenceStarted },
			{ "OnPlayableLevelInitialized", &USBZGameplayManager::execOnPlayableLevelInitialized },
			{ "OnRestartLevelStarted", &USBZGameplayManager::execOnRestartLevelStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameplayManager_Get_Statics
	{
		struct SBZGameplayManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZGameplayManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZGameplayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameplayManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZGameplayManager_eventGet_Parms), Z_Construct_UFunction_USBZGameplayManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayManager, nullptr, "OnActionPhaseExited", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayManager, nullptr, "OnActionPhaseStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayManager, nullptr, "OnBlackScreenStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics
	{
		struct SBZGameplayManager_eventOnOutroSequenceStarted_Parms
		{
			int32 OutroVariation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayManager_eventOnOutroSequenceStarted_Parms, OutroVariation), METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayManager, nullptr, "OnOutroSequenceStarted", nullptr, nullptr, sizeof(SBZGameplayManager_eventOnOutroSequenceStarted_Parms), Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics
	{
		struct SBZGameplayManager_eventOnPlayableLevelInitialized_Parms
		{
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameplayManager_eventOnPlayableLevelInitialized_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayManager, nullptr, "OnPlayableLevelInitialized", nullptr, nullptr, sizeof(SBZGameplayManager_eventOnPlayableLevelInitialized_Parms), Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameplayManager, nullptr, "OnRestartLevelStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameplayManager_NoRegister()
	{
		return USBZGameplayManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplaySystems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplaySystems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplaySystems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameplayManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameplayManager_Get, "Get" }, // 478046896
		{ &Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseExited, "OnActionPhaseExited" }, // 2305129510
		{ &Z_Construct_UFunction_USBZGameplayManager_OnActionPhaseStarted, "OnActionPhaseStarted" }, // 3031782173
		{ &Z_Construct_UFunction_USBZGameplayManager_OnBlackScreenStarted, "OnBlackScreenStarted" }, // 1302339890
		{ &Z_Construct_UFunction_USBZGameplayManager_OnOutroSequenceStarted, "OnOutroSequenceStarted" }, // 2539493889
		{ &Z_Construct_UFunction_USBZGameplayManager_OnPlayableLevelInitialized, "OnPlayableLevelInitialized" }, // 3157286252
		{ &Z_Construct_UFunction_USBZGameplayManager_OnRestartLevelStarted, "OnRestartLevelStarted" }, // 230227573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGameplayManager_Statics::NewProp_GameplaySystems_Inner = { "GameplaySystems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayManager_Statics::NewProp_GameplaySystems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayManager" },
		{ "ModuleRelativePath", "Public/SBZGameplayManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameplayManager_Statics::NewProp_GameplaySystems = { "GameplaySystems", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayManager, GameplaySystems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayManager_Statics::NewProp_GameplaySystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayManager_Statics::NewProp_GameplaySystems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameplayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayManager_Statics::NewProp_GameplaySystems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayManager_Statics::NewProp_GameplaySystems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayManager_Statics::ClassParams = {
		&USBZGameplayManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameplayManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayManager, 2662021525);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayManager>()
	{
		return USBZGameplayManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayManager(Z_Construct_UClass_USBZGameplayManager, &USBZGameplayManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
