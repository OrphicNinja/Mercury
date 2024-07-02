// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZChallengeCategoryManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZChallengeCategoryManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZChallengeCategoryData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
// End Cross Module References
	DEFINE_FUNCTION(USBZChallengeCategoryManager::execGetChallengeCategoryData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(USBZChallengeCategoryData*,Z_Param_Out_OutCategoryList);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZChallengeCategoryManager::GetChallengeCategoryData(Z_Param_WorldContextObject,Z_Param_Out_OutCategoryList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeCategoryManager::execGetChallengeCategoryForChallenge)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZChallengeData,Z_Param_Out_ChallengeRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZChallengeCategoryData**)Z_Param__Result=USBZChallengeCategoryManager::GetChallengeCategoryForChallenge(Z_Param_WorldContextObject,Z_Param_Out_ChallengeRecord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeCategoryManager::execGetChallengeCategoryForTag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZChallengeCategoryData**)Z_Param__Result=USBZChallengeCategoryManager::GetChallengeCategoryForTag(Z_Param_WorldContextObject,Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZChallengeCategoryManager::execGetChallengeCategoryManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZChallengeCategoryManager**)Z_Param__Result=USBZChallengeCategoryManager::GetChallengeCategoryManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZChallengeCategoryManager::StaticRegisterNativesUSBZChallengeCategoryManager()
	{
		UClass* Class = USBZChallengeCategoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChallengeCategoryData", &USBZChallengeCategoryManager::execGetChallengeCategoryData },
			{ "GetChallengeCategoryForChallenge", &USBZChallengeCategoryManager::execGetChallengeCategoryForChallenge },
			{ "GetChallengeCategoryForTag", &USBZChallengeCategoryManager::execGetChallengeCategoryForTag },
			{ "GetChallengeCategoryManager", &USBZChallengeCategoryManager::execGetChallengeCategoryManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics
	{
		struct SBZChallengeCategoryManager_eventGetChallengeCategoryData_Parms
		{
			const UObject* WorldContextObject;
			TArray<USBZChallengeCategoryData*> OutCategoryList;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutCategoryList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCategoryList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_OutCategoryList_Inner = { "OutCategoryList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_OutCategoryList = { "OutCategoryList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryData_Parms, OutCategoryList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_OutCategoryList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::NewProp_OutCategoryList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeCategoryManager, nullptr, "GetChallengeCategoryData", nullptr, nullptr, sizeof(SBZChallengeCategoryManager_eventGetChallengeCategoryData_Parms), Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics
	{
		struct SBZChallengeCategoryManager_eventGetChallengeCategoryForChallenge_Parms
		{
			const UObject* WorldContextObject;
			FSBZChallengeData ChallengeRecord;
			USBZChallengeCategoryData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeRecord;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryForChallenge_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_ChallengeRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_ChallengeRecord = { "ChallengeRecord", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryForChallenge_Parms, ChallengeRecord), Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_ChallengeRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_ChallengeRecord_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryForChallenge_Parms, ReturnValue), Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_ChallengeRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeCategoryManager, nullptr, "GetChallengeCategoryForChallenge", nullptr, nullptr, sizeof(SBZChallengeCategoryManager_eventGetChallengeCategoryForChallenge_Parms), Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics
	{
		struct SBZChallengeCategoryManager_eventGetChallengeCategoryForTag_Parms
		{
			const UObject* WorldContextObject;
			FString InTag;
			USBZChallengeCategoryData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryForTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryForTag_Parms, InTag), METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_InTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_InTag_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryForTag_Parms, ReturnValue), Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_InTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeCategoryManager, nullptr, "GetChallengeCategoryForTag", nullptr, nullptr, sizeof(SBZChallengeCategoryManager_eventGetChallengeCategoryForTag_Parms), Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics
	{
		struct SBZChallengeCategoryManager_eventGetChallengeCategoryManager_Parms
		{
			const UObject* WorldContextObject;
			USBZChallengeCategoryManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZChallengeCategoryManager_eventGetChallengeCategoryManager_Parms, ReturnValue), Z_Construct_UClass_USBZChallengeCategoryManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZChallengeCategoryManager, nullptr, "GetChallengeCategoryManager", nullptr, nullptr, sizeof(SBZChallengeCategoryManager_eventGetChallengeCategoryManager_Parms), Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZChallengeCategoryManager_NoRegister()
	{
		return USBZChallengeCategoryManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZChallengeCategoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChallengeCategoryData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeCategoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeCategoryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZChallengeCategoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZChallengeCategoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryData, "GetChallengeCategoryData" }, // 4247767487
		{ &Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForChallenge, "GetChallengeCategoryForChallenge" }, // 4106285337
		{ &Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryForTag, "GetChallengeCategoryForTag" }, // 3779076068
		{ &Z_Construct_UFunction_USBZChallengeCategoryManager_GetChallengeCategoryManager, "GetChallengeCategoryManager" }, // 3665132123
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeCategoryManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZChallengeCategoryManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZChallengeCategoryManager_Statics::NewProp_ChallengeCategoryData_Inner = { "ChallengeCategoryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZChallengeCategoryData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZChallengeCategoryManager_Statics::NewProp_ChallengeCategoryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZChallengeCategoryManager" },
		{ "ModuleRelativePath", "Public/SBZChallengeCategoryManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZChallengeCategoryManager_Statics::NewProp_ChallengeCategoryData = { "ChallengeCategoryData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZChallengeCategoryManager, ChallengeCategoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZChallengeCategoryManager_Statics::NewProp_ChallengeCategoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryManager_Statics::NewProp_ChallengeCategoryData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZChallengeCategoryManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeCategoryManager_Statics::NewProp_ChallengeCategoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZChallengeCategoryManager_Statics::NewProp_ChallengeCategoryData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZChallengeCategoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZChallengeCategoryManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZChallengeCategoryManager_Statics::ClassParams = {
		&USBZChallengeCategoryManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZChallengeCategoryManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZChallengeCategoryManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZChallengeCategoryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZChallengeCategoryManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZChallengeCategoryManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZChallengeCategoryManager, 1178495856);
	template<> STARBREEZE_API UClass* StaticClass<USBZChallengeCategoryManager>()
	{
		return USBZChallengeCategoryManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZChallengeCategoryManager(Z_Construct_UClass_USBZChallengeCategoryManager, &USBZChallengeCategoryManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZChallengeCategoryManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZChallengeCategoryManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
