// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMissionResultLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMissionResultLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMissionResultLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMissionResultLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEndMissionResultData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData();
// End Cross Module References
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersBeenDefeatedCount)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersBeenDefeatedCount(Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersBeenKilledCount)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersBeenKilledCount(Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersBeenRevivedCount)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersBeenRevivedCount(Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersEquippableAccuracy)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersEquippableAccuracy(Z_Param_Out_ResultData,Z_Param_EquippableIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersHaveCivilianKilledCount)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersHaveCivilianKilledCount(Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersHaveGuardKilledCount)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersHaveGuardKilledCount(Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersHaveKilledCount)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersHaveKilledCount(Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetAllPlayersHaveSpecialKilledCount)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetAllPlayersHaveSpecialKilledCount(Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetCurrentPlayerEquippableAccuracy)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZMissionResultLibrary::GetCurrentPlayerEquippableAccuracy(Z_Param_WorldContextObject,Z_Param_Out_ResultData,Z_Param_EquippableIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetEquippableData)
	{
		P_GET_STRUCT_REF(FSBZCharacterEndMissionResultData,Z_Param_Out_CharacterData);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippableIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZEquippableEndMissionResultData*)Z_Param__Result=USBZMissionResultLibrary::GetEquippableData(Z_Param_Out_CharacterData,Z_Param_EquippableIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetPlayerCashReward)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetPlayerCashReward(Z_Param_WorldContextObject,Z_Param_Out_ResultData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetPlayerData)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_ResultData);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZPlayerEndMissionResultData*)Z_Param__Result=USBZMissionResultLibrary::GetPlayerData(Z_Param_Out_ResultData,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMissionResultLibrary::execGetTotalNumberOfSecuredBags)
	{
		P_GET_STRUCT_REF(FSBZEndMissionResultData,Z_Param_Out_Resultdata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZMissionResultLibrary::GetTotalNumberOfSecuredBags(Z_Param_Out_Resultdata);
		P_NATIVE_END;
	}
	void USBZMissionResultLibrary::StaticRegisterNativesUSBZMissionResultLibrary()
	{
		UClass* Class = USBZMissionResultLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllPlayersBeenDefeatedCount", &USBZMissionResultLibrary::execGetAllPlayersBeenDefeatedCount },
			{ "GetAllPlayersBeenKilledCount", &USBZMissionResultLibrary::execGetAllPlayersBeenKilledCount },
			{ "GetAllPlayersBeenRevivedCount", &USBZMissionResultLibrary::execGetAllPlayersBeenRevivedCount },
			{ "GetAllPlayersEquippableAccuracy", &USBZMissionResultLibrary::execGetAllPlayersEquippableAccuracy },
			{ "GetAllPlayersHaveCivilianKilledCount", &USBZMissionResultLibrary::execGetAllPlayersHaveCivilianKilledCount },
			{ "GetAllPlayersHaveGuardKilledCount", &USBZMissionResultLibrary::execGetAllPlayersHaveGuardKilledCount },
			{ "GetAllPlayersHaveKilledCount", &USBZMissionResultLibrary::execGetAllPlayersHaveKilledCount },
			{ "GetAllPlayersHaveSpecialKilledCount", &USBZMissionResultLibrary::execGetAllPlayersHaveSpecialKilledCount },
			{ "GetCurrentPlayerEquippableAccuracy", &USBZMissionResultLibrary::execGetCurrentPlayerEquippableAccuracy },
			{ "GetEquippableData", &USBZMissionResultLibrary::execGetEquippableData },
			{ "GetPlayerCashReward", &USBZMissionResultLibrary::execGetPlayerCashReward },
			{ "GetPlayerData", &USBZMissionResultLibrary::execGetPlayerData },
			{ "GetTotalNumberOfSecuredBags", &USBZMissionResultLibrary::execGetTotalNumberOfSecuredBags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersBeenDefeatedCount_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersBeenDefeatedCount_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersBeenDefeatedCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersBeenDefeatedCount", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersBeenDefeatedCount_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersBeenKilledCount_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersBeenKilledCount_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersBeenKilledCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersBeenKilledCount", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersBeenKilledCount_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersBeenRevivedCount_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersBeenRevivedCount_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersBeenRevivedCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersBeenRevivedCount", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersBeenRevivedCount_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersEquippableAccuracy_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 EquippableIndex;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersEquippableAccuracy_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersEquippableAccuracy_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersEquippableAccuracy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersEquippableAccuracy", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersEquippableAccuracy_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersHaveCivilianKilledCount_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveCivilianKilledCount_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveCivilianKilledCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersHaveCivilianKilledCount", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersHaveCivilianKilledCount_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersHaveGuardKilledCount_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveGuardKilledCount_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveGuardKilledCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersHaveGuardKilledCount", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersHaveGuardKilledCount_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersHaveKilledCount_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveKilledCount_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveKilledCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersHaveKilledCount", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersHaveKilledCount_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics
	{
		struct SBZMissionResultLibrary_eventGetAllPlayersHaveSpecialKilledCount_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveSpecialKilledCount_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetAllPlayersHaveSpecialKilledCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetAllPlayersHaveSpecialKilledCount", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetAllPlayersHaveSpecialKilledCount_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics
	{
		struct SBZMissionResultLibrary_eventGetCurrentPlayerEquippableAccuracy_Parms
		{
			const UObject* WorldContextObject;
			FSBZEndMissionResultData ResultData;
			int32 EquippableIndex;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetCurrentPlayerEquippableAccuracy_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetCurrentPlayerEquippableAccuracy_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetCurrentPlayerEquippableAccuracy_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetCurrentPlayerEquippableAccuracy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetCurrentPlayerEquippableAccuracy", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetCurrentPlayerEquippableAccuracy_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics
	{
		struct SBZMissionResultLibrary_eventGetEquippableData_Parms
		{
			FSBZCharacterEndMissionResultData CharacterData;
			int32 EquippableIndex;
			FSBZEquippableEndMissionResultData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EquippableIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_CharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetEquippableData_Parms, CharacterData), Z_Construct_UScriptStruct_FSBZCharacterEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_CharacterData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_EquippableIndex = { "EquippableIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetEquippableData_Parms, EquippableIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetEquippableData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZEquippableEndMissionResultData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_CharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_EquippableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetEquippableData", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetEquippableData_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics
	{
		struct SBZMissionResultLibrary_eventGetPlayerCashReward_Parms
		{
			const UObject* WorldContextObject;
			FSBZEndMissionResultData ResultData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetPlayerCashReward_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetPlayerCashReward_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetPlayerCashReward_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetPlayerCashReward", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetPlayerCashReward_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics
	{
		struct SBZMissionResultLibrary_eventGetPlayerData_Parms
		{
			FSBZEndMissionResultData ResultData;
			int32 PlayerId;
			FSBZPlayerEndMissionResultData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_ResultData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_ResultData = { "ResultData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetPlayerData_Parms, ResultData), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_ResultData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_ResultData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetPlayerData_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetPlayerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZPlayerEndMissionResultData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_ResultData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetPlayerData", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetPlayerData_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics
	{
		struct SBZMissionResultLibrary_eventGetTotalNumberOfSecuredBags_Parms
		{
			FSBZEndMissionResultData Resultdata;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resultdata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resultdata;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::NewProp_Resultdata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::NewProp_Resultdata = { "Resultdata", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetTotalNumberOfSecuredBags_Parms, Resultdata), Z_Construct_UScriptStruct_FSBZEndMissionResultData, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::NewProp_Resultdata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::NewProp_Resultdata_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMissionResultLibrary_eventGetTotalNumberOfSecuredBags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::NewProp_Resultdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMissionResultLibrary, nullptr, "GetTotalNumberOfSecuredBags", nullptr, nullptr, sizeof(SBZMissionResultLibrary_eventGetTotalNumberOfSecuredBags_Parms), Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMissionResultLibrary_NoRegister()
	{
		return USBZMissionResultLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZMissionResultLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMissionResultLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMissionResultLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenDefeatedCount, "GetAllPlayersBeenDefeatedCount" }, // 4246077865
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenKilledCount, "GetAllPlayersBeenKilledCount" }, // 2777872769
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersBeenRevivedCount, "GetAllPlayersBeenRevivedCount" }, // 3894214184
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersEquippableAccuracy, "GetAllPlayersEquippableAccuracy" }, // 1404458398
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveCivilianKilledCount, "GetAllPlayersHaveCivilianKilledCount" }, // 2376261321
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveGuardKilledCount, "GetAllPlayersHaveGuardKilledCount" }, // 1182565206
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveKilledCount, "GetAllPlayersHaveKilledCount" }, // 1270309005
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetAllPlayersHaveSpecialKilledCount, "GetAllPlayersHaveSpecialKilledCount" }, // 349238358
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetCurrentPlayerEquippableAccuracy, "GetCurrentPlayerEquippableAccuracy" }, // 3818813150
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetEquippableData, "GetEquippableData" }, // 2791647548
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerCashReward, "GetPlayerCashReward" }, // 3800648188
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetPlayerData, "GetPlayerData" }, // 2493996513
		{ &Z_Construct_UFunction_USBZMissionResultLibrary_GetTotalNumberOfSecuredBags, "GetTotalNumberOfSecuredBags" }, // 923266444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMissionResultLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMissionResultLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionResultLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMissionResultLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMissionResultLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMissionResultLibrary_Statics::ClassParams = {
		&USBZMissionResultLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMissionResultLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMissionResultLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMissionResultLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMissionResultLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMissionResultLibrary, 1476095270);
	template<> STARBREEZE_API UClass* StaticClass<USBZMissionResultLibrary>()
	{
		return USBZMissionResultLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMissionResultLibrary(Z_Construct_UClass_USBZMissionResultLibrary, &USBZMissionResultLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMissionResultLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMissionResultLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
