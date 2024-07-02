// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameStateMachineSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameStateMachineSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachineSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachineSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistCollection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoginScreenBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPSOCompilationScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionPhaseBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayBaseWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameErrorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBackendErrorWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLoadingScreen_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSafeHouseBaseWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execGetHeistCollections)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZHeistCollection>*)Z_Param__Result=USBZGameStateMachineSettings::GetHeistCollections(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execGetLevels)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoftObjectPath>*)Z_Param__Result=USBZGameStateMachineSettings::GetLevels(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execGetLevelsDev)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoftObjectPath>*)Z_Param__Result=USBZGameStateMachineSettings::GetLevelsDev(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execGetLevelsFeature)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoftObjectPath>*)Z_Param__Result=USBZGameStateMachineSettings::GetLevelsFeature(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execGetLevelsTutorial)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSoftObjectPath>*)Z_Param__Result=USBZGameStateMachineSettings::GetLevelsTutorial(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execIsLevelIdxValid)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_LevelIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZGameStateMachineSettings::IsLevelIdxValid(Z_Param_WorldContextObject,Z_Param_LevelIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execLevelIdxToPath)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_LevelIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=USBZGameStateMachineSettings::LevelIdxToPath(Z_Param_WorldContextObject,Z_Param_LevelIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execLevelPathToIdx)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_ObjectPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZGameStateMachineSettings::LevelPathToIdx(Z_Param_WorldContextObject,Z_Param_Out_ObjectPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineSettings::execLevelShortNameToIdx)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ShortName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZGameStateMachineSettings::LevelShortNameToIdx(Z_Param_WorldContextObject,Z_Param_ShortName);
		P_NATIVE_END;
	}
	void USBZGameStateMachineSettings::StaticRegisterNativesUSBZGameStateMachineSettings()
	{
		UClass* Class = USBZGameStateMachineSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeistCollections", &USBZGameStateMachineSettings::execGetHeistCollections },
			{ "GetLevels", &USBZGameStateMachineSettings::execGetLevels },
			{ "GetLevelsDev", &USBZGameStateMachineSettings::execGetLevelsDev },
			{ "GetLevelsFeature", &USBZGameStateMachineSettings::execGetLevelsFeature },
			{ "GetLevelsTutorial", &USBZGameStateMachineSettings::execGetLevelsTutorial },
			{ "IsLevelIdxValid", &USBZGameStateMachineSettings::execIsLevelIdxValid },
			{ "LevelIdxToPath", &USBZGameStateMachineSettings::execLevelIdxToPath },
			{ "LevelPathToIdx", &USBZGameStateMachineSettings::execLevelPathToIdx },
			{ "LevelShortNameToIdx", &USBZGameStateMachineSettings::execLevelShortNameToIdx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics
	{
		struct SBZGameStateMachineSettings_eventGetHeistCollections_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSBZHeistCollection> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetHeistCollections_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHeistCollection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetHeistCollections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "GetHeistCollections", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventGetHeistCollections_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics
	{
		struct SBZGameStateMachineSettings_eventGetLevels_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSoftObjectPath> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevels_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "GetLevels", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventGetLevels_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics
	{
		struct SBZGameStateMachineSettings_eventGetLevelsDev_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSoftObjectPath> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevelsDev_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevelsDev_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "GetLevelsDev", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventGetLevelsDev_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics
	{
		struct SBZGameStateMachineSettings_eventGetLevelsFeature_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSoftObjectPath> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevelsFeature_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevelsFeature_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "GetLevelsFeature", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventGetLevelsFeature_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics
	{
		struct SBZGameStateMachineSettings_eventGetLevelsTutorial_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSoftObjectPath> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevelsTutorial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventGetLevelsTutorial_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "GetLevelsTutorial", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventGetLevelsTutorial_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics
	{
		struct SBZGameStateMachineSettings_eventIsLevelIdxValid_Parms
		{
			const UObject* WorldContextObject;
			int32 LevelIdx;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventIsLevelIdxValid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventIsLevelIdxValid_Parms, LevelIdx), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStateMachineSettings_eventIsLevelIdxValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachineSettings_eventIsLevelIdxValid_Parms), &Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "IsLevelIdxValid", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventIsLevelIdxValid_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics
	{
		struct SBZGameStateMachineSettings_eventLevelIdxToPath_Parms
		{
			const UObject* WorldContextObject;
			int32 LevelIdx;
			FSoftObjectPath ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIdx;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelIdxToPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_LevelIdx = { "LevelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelIdxToPath_Parms, LevelIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelIdxToPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_LevelIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "LevelIdxToPath", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventLevelIdxToPath_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics
	{
		struct SBZGameStateMachineSettings_eventLevelPathToIdx_Parms
		{
			const UObject* WorldContextObject;
			FSoftObjectPath ObjectPath;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelPathToIdx_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelPathToIdx_Parms, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_ObjectPath_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelPathToIdx_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_ObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "LevelPathToIdx", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventLevelPathToIdx_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics
	{
		struct SBZGameStateMachineSettings_eventLevelShortNameToIdx_Parms
		{
			const UObject* WorldContextObject;
			FString ShortName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShortName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelShortNameToIdx_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_ShortName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelShortNameToIdx_Parms, ShortName), METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_ShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_ShortName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineSettings_eventLevelShortNameToIdx_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_ShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineSettings, nullptr, "LevelShortNameToIdx", nullptr, nullptr, sizeof(SBZGameStateMachineSettings_eventLevelShortNameToIdx_Parms), Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameStateMachineSettings_NoRegister()
	{
		return USBZGameStateMachineSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameStateMachineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingTransitionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingTransitionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackScreenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlackScreenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntroSequenceSafetyTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntroSequenceSafetyTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroSequenceSafetyTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutroSequenceSafetyTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobOveviewToActionPhaseDropInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JobOveviewToActionPhaseDropInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobOverviewWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JobOverviewWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPhaseWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionPhaseWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultScreenWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultScreenWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainMenuWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameErrorWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameErrorWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingScreenWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSOCompilationScreenWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PSOCompilationScreenWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginScreenWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoginScreenWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeHouseWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SafeHouseWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplayWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackendErrorWidgetClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackendErrorWidgetClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginScreenWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoginScreenWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSOCompilationScreenWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PSOCompilationScreenWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobOverviewWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_JobOverviewWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionPhaseWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionPhaseWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReplayWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultScreenWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ResultScreenWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameErrorWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameErrorWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackendErrorWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BackendErrorWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoadingScreenWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeHouseWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SafeHouseWidgetClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeistCollections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Levels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Levels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelsTutorial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelsTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelsTutorial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeveloperLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeveloperLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SafeHouseLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SafeHouseLevel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FeatureLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeatureLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FeatureLevels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameStateMachineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameStateMachineSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_GetHeistCollections, "GetHeistCollections" }, // 4228228276
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevels, "GetLevels" }, // 2127873148
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsDev, "GetLevelsDev" }, // 109546171
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsFeature, "GetLevelsFeature" }, // 3205601350
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_GetLevelsTutorial, "GetLevelsTutorial" }, // 769784696
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_IsLevelIdxValid, "IsLevelIdxValid" }, // 1834301771
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_LevelIdxToPath, "LevelIdxToPath" }, // 3154787110
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_LevelPathToIdx, "LevelPathToIdx" }, // 3285499643
		{ &Z_Construct_UFunction_USBZGameStateMachineSettings_LevelShortNameToIdx, "LevelShortNameToIdx" }, // 3378849711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameStateMachineSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingTransitionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingTransitionLevel = { "LoadingTransitionLevel", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, LoadingTransitionLevel), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingTransitionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingTransitionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BlackScreenTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BlackScreenTime = { "BlackScreenTime", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, BlackScreenTime), METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BlackScreenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BlackScreenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_IntroSequenceSafetyTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_IntroSequenceSafetyTimeout = { "IntroSequenceSafetyTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, IntroSequenceSafetyTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_IntroSequenceSafetyTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_IntroSequenceSafetyTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_OutroSequenceSafetyTimeout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_OutroSequenceSafetyTimeout = { "OutroSequenceSafetyTimeout", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, OutroSequenceSafetyTimeout), METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_OutroSequenceSafetyTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_OutroSequenceSafetyTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOveviewToActionPhaseDropInTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOveviewToActionPhaseDropInTime = { "JobOveviewToActionPhaseDropInTime", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, JobOveviewToActionPhaseDropInTime), METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOveviewToActionPhaseDropInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOveviewToActionPhaseDropInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClassName = { "JobOverviewWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, JobOverviewWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClassName = { "ActionPhaseWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, ActionPhaseWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClassName = { "ResultScreenWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, ResultScreenWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClassName = { "MainMenuWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, MainMenuWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClassName = { "GameErrorWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, GameErrorWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClassName = { "LoadingScreenWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, LoadingScreenWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClassName = { "PSOCompilationScreenWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, PSOCompilationScreenWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClassName = { "LoginScreenWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, LoginScreenWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClassName = { "SafeHouseWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, SafeHouseWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClassName = { "ReplayWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, ReplayWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClassName = { "BackendErrorWidgetClassName", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, BackendErrorWidgetClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClass = { "LoginScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, LoginScreenWidgetClass), Z_Construct_UClass_USBZLoginScreenBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClass = { "PSOCompilationScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, PSOCompilationScreenWidgetClass), Z_Construct_UClass_USBZPSOCompilationScreen_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClass = { "JobOverviewWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, JobOverviewWidgetClass), Z_Construct_UClass_USBZJobOverviewBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClass = { "ActionPhaseWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, ActionPhaseWidgetClass), Z_Construct_UClass_USBZActionPhaseBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClass = { "ReplayWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, ReplayWidgetClass), Z_Construct_UClass_USBZReplayBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClass = { "ResultScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, ResultScreenWidgetClass), Z_Construct_UClass_USBZWidgetBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, MainMenuWidgetClass), Z_Construct_UClass_USBZMainMenuWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClass = { "GameErrorWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, GameErrorWidgetClass), Z_Construct_UClass_USBZGameErrorWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClass = { "BackendErrorWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, BackendErrorWidgetClass), Z_Construct_UClass_USBZBackendErrorWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClass = { "LoadingScreenWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, LoadingScreenWidgetClass), Z_Construct_UClass_USBZLoadingScreen_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClass = { "SafeHouseWidgetClass", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, SafeHouseWidgetClass), Z_Construct_UClass_USBZSafeHouseBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_HeistCollections_Inner = { "HeistCollections", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHeistCollection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_HeistCollections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_HeistCollections = { "HeistCollections", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, HeistCollections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_HeistCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_HeistCollections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_Levels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_Levels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LevelsTutorial_Inner = { "LevelsTutorial", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LevelsTutorial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LevelsTutorial = { "LevelsTutorial", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, LevelsTutorial), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LevelsTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LevelsTutorial_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_DeveloperLevels_Inner = { "DeveloperLevels", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_DeveloperLevels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_DeveloperLevels = { "DeveloperLevels", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, DeveloperLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_DeveloperLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_DeveloperLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseLevel = { "SafeHouseLevel", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, SafeHouseLevel), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseLevel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_FeatureLevels_Inner = { "FeatureLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_FeatureLevels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameStateMachineSettings" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_FeatureLevels = { "FeatureLevels", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameStateMachineSettings, FeatureLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_FeatureLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_FeatureLevels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameStateMachineSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingTransitionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BlackScreenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_IntroSequenceSafetyTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_OutroSequenceSafetyTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOveviewToActionPhaseDropInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoginScreenWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_PSOCompilationScreenWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_JobOverviewWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ActionPhaseWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ReplayWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_ResultScreenWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_MainMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_GameErrorWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_BackendErrorWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LoadingScreenWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_HeistCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_HeistCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_Levels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_Levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LevelsTutorial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_LevelsTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_DeveloperLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_DeveloperLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_SafeHouseLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_FeatureLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameStateMachineSettings_Statics::NewProp_FeatureLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameStateMachineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameStateMachineSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameStateMachineSettings_Statics::ClassParams = {
		&USBZGameStateMachineSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGameStateMachineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameStateMachineSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameStateMachineSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameStateMachineSettings, 3882196699);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameStateMachineSettings>()
	{
		return USBZGameStateMachineSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameStateMachineSettings(Z_Construct_UClass_USBZGameStateMachineSettings, &USBZGameStateMachineSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameStateMachineSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameStateMachineSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
