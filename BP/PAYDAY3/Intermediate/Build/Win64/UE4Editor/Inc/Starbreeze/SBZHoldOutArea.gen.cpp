// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutArea() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutArea_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHoldOutArea();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveStarted__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveProgressChanged__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutAreaComplete__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZTagEventActiveDelegate__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIProtectPoint_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHoldOutModifiers();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveProgressionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutFogProgressionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTagEventInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHoldOutArea::execGetDroneMoveToLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDroneMoveToLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutArea::execIsAnyObjectiveActive)
	{
		P_GET_UBOOL(Z_Param_bIgnoreOptionalObjectives);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnyObjectiveActive(Z_Param_bIgnoreOptionalObjectives);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutArea::execOnObjectiveProgressChangedCallBack)
	{
		P_GET_OBJECT(USBZHoldOutObjectiveBase,Z_Param_Objective);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldProgressCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewProgressCount);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GrantedTags);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemovedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveProgressChangedCallBack(Z_Param_Objective,Z_Param_OldProgressCount,Z_Param_NewProgressCount,Z_Param_Out_GrantedTags,Z_Param_Out_RemovedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutArea::execOnObjectiveResultChangedCallBack)
	{
		P_GET_ENUM(ESBZHoldOutObjectiveResult,Z_Param_Result);
		P_GET_OBJECT(USBZHoldOutObjectiveBase,Z_Param_InObjective);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GrantedTags);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemovedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveResultChangedCallBack(ESBZHoldOutObjectiveResult(Z_Param_Result),Z_Param_InObjective,Z_Param_Out_GrantedTags,Z_Param_Out_RemovedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutArea::execOnObjectiveStartedCallBack)
	{
		P_GET_OBJECT(USBZHoldOutObjectiveBase,Z_Param_Objective);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GrantedTags);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_RemovedTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveStartedCallBack(Z_Param_Objective,Z_Param_Out_GrantedTags,Z_Param_Out_RemovedTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutArea::execSelectAsCurrentArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAsCurrentArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutArea::execStart)
	{
		P_GET_ENUM(ESBZHoldOutModeDifficulty,Z_Param_Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start(ESBZHoldOutModeDifficulty(Z_Param_Difficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZHoldOutArea::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	void ASBZHoldOutArea::StaticRegisterNativesASBZHoldOutArea()
	{
		UClass* Class = ASBZHoldOutArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDroneMoveToLocation", &ASBZHoldOutArea::execGetDroneMoveToLocation },
			{ "IsAnyObjectiveActive", &ASBZHoldOutArea::execIsAnyObjectiveActive },
			{ "OnObjectiveProgressChangedCallBack", &ASBZHoldOutArea::execOnObjectiveProgressChangedCallBack },
			{ "OnObjectiveResultChangedCallBack", &ASBZHoldOutArea::execOnObjectiveResultChangedCallBack },
			{ "OnObjectiveStartedCallBack", &ASBZHoldOutArea::execOnObjectiveStartedCallBack },
			{ "SelectAsCurrentArea", &ASBZHoldOutArea::execSelectAsCurrentArea },
			{ "Start", &ASBZHoldOutArea::execStart },
			{ "Stop", &ASBZHoldOutArea::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics
	{
		struct SBZHoldOutArea_eventGetDroneMoveToLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventGetDroneMoveToLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "GetDroneMoveToLocation", nullptr, nullptr, sizeof(SBZHoldOutArea_eventGetDroneMoveToLocation_Parms), Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics
	{
		struct SBZHoldOutArea_eventIsAnyObjectiveActive_Parms
		{
			bool bIgnoreOptionalObjectives;
			bool ReturnValue;
		};
		static void NewProp_bIgnoreOptionalObjectives_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOptionalObjectives;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_bIgnoreOptionalObjectives_SetBit(void* Obj)
	{
		((SBZHoldOutArea_eventIsAnyObjectiveActive_Parms*)Obj)->bIgnoreOptionalObjectives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_bIgnoreOptionalObjectives = { "bIgnoreOptionalObjectives", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutArea_eventIsAnyObjectiveActive_Parms), &Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_bIgnoreOptionalObjectives_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZHoldOutArea_eventIsAnyObjectiveActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutArea_eventIsAnyObjectiveActive_Parms), &Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_bIgnoreOptionalObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "IsAnyObjectiveActive", nullptr, nullptr, sizeof(SBZHoldOutArea_eventIsAnyObjectiveActive_Parms), Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics
	{
		struct SBZHoldOutArea_eventOnObjectiveProgressChangedCallBack_Parms
		{
			USBZHoldOutObjectiveBase* Objective;
			int32 OldProgressCount;
			int32 NewProgressCount;
			FGameplayTagContainer GrantedTags;
			FGameplayTagContainer RemovedTags;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldProgressCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewProgressCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveProgressChangedCallBack_Parms, Objective), Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_OldProgressCount = { "OldProgressCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveProgressChangedCallBack_Parms, OldProgressCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_NewProgressCount = { "NewProgressCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveProgressChangedCallBack_Parms, NewProgressCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveProgressChangedCallBack_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveProgressChangedCallBack_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_OldProgressCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_NewProgressCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "OnObjectiveProgressChangedCallBack", nullptr, nullptr, sizeof(SBZHoldOutArea_eventOnObjectiveProgressChangedCallBack_Parms), Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics
	{
		struct SBZHoldOutArea_eventOnObjectiveResultChangedCallBack_Parms
		{
			ESBZHoldOutObjectiveResult Result;
			USBZHoldOutObjectiveBase* InObjective;
			FGameplayTagContainer GrantedTags;
			FGameplayTagContainer RemovedTags;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveResultChangedCallBack_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZHoldOutObjectiveResult, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_InObjective = { "InObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveResultChangedCallBack_Parms, InObjective), Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveResultChangedCallBack_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveResultChangedCallBack_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_InObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "OnObjectiveResultChangedCallBack", nullptr, nullptr, sizeof(SBZHoldOutArea_eventOnObjectiveResultChangedCallBack_Parms), Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics
	{
		struct SBZHoldOutArea_eventOnObjectiveStartedCallBack_Parms
		{
			USBZHoldOutObjectiveBase* Objective;
			FGameplayTagContainer GrantedTags;
			FGameplayTagContainer RemovedTags;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveStartedCallBack_Parms, Objective), Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveStartedCallBack_Parms, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags = { "RemovedTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventOnObjectiveStartedCallBack_Parms, RemovedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_GrantedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::NewProp_RemovedTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "OnObjectiveStartedCallBack", nullptr, nullptr, sizeof(SBZHoldOutArea_eventOnObjectiveStartedCallBack_Parms), Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "SelectAsCurrentArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics
	{
		struct SBZHoldOutArea_eventStart_Parms
		{
			ESBZHoldOutModeDifficulty Difficulty;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutArea_eventStart_Parms, Difficulty), Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::NewProp_Difficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "Start", nullptr, nullptr, sizeof(SBZHoldOutArea_eventStart_Parms), Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHoldOutArea_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHoldOutArea_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHoldOutArea_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHoldOutArea, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHoldOutArea_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHoldOutArea_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHoldOutArea_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHoldOutArea_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHoldOutArea_NoRegister()
	{
		return ASBZHoldOutArea::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHoldOutArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveResultChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveResultChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveProgressChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveProgressChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAreaCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAreaCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTagEventActiveDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTagEventActiveDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objectives;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnAreaCompletedAIOrders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAreaCompletedAIOrders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnAreaCompletedAIOrders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProtectPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProtectPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProtectPoints;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModifierCounts_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifierCounts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModifierCounts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiersPerDifficulty_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifiersPerDifficulty_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifiersPerDifficulty_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifiersPerDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModifiersPerDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DroneMoveToLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DroneMoveToLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnWaveSettingsProxyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnWaveSettingsProxyComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnWaveProgressionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnWaveProgressionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogProgressionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogProgressionComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinDifficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplySpawnSettingsWhenSelected_MetaData[];
#endif
		static void NewProp_bApplySpawnSettingsWhenSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplySpawnSettingsWhenSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHoldOutArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHoldOutArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHoldOutArea_GetDroneMoveToLocation, "GetDroneMoveToLocation" }, // 1512210930
		{ &Z_Construct_UFunction_ASBZHoldOutArea_IsAnyObjectiveActive, "IsAnyObjectiveActive" }, // 4270410161
		{ &Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveProgressChangedCallBack, "OnObjectiveProgressChangedCallBack" }, // 3249532874
		{ &Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveResultChangedCallBack, "OnObjectiveResultChangedCallBack" }, // 1311553573
		{ &Z_Construct_UFunction_ASBZHoldOutArea_OnObjectiveStartedCallBack, "OnObjectiveStartedCallBack" }, // 1973034322
		{ &Z_Construct_UFunction_ASBZHoldOutArea_SelectAsCurrentArea, "SelectAsCurrentArea" }, // 324210743
		{ &Z_Construct_UFunction_ASBZHoldOutArea_Start, "Start" }, // 3842793158
		{ &Z_Construct_UFunction_ASBZHoldOutArea_Stop, "Stop" }, // 3742833910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveStarted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveStarted = { "OnObjectiveStarted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, OnObjectiveStarted), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveResultChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveResultChanged = { "OnObjectiveResultChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, OnObjectiveResultChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveResultChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveResultChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveProgressChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveProgressChanged = { "OnObjectiveProgressChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, OnObjectiveProgressChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutObjectiveProgressChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveProgressChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveProgressChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompleted = { "OnAreaCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, OnAreaCompleted), Z_Construct_UDelegateFunction_Starbreeze_SBZHoldOutAreaComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnTagEventActiveDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnTagEventActiveDelegate = { "OnTagEventActiveDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, OnTagEventActiveDelegate), Z_Construct_UDelegateFunction_Starbreeze_SBZTagEventActiveDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnTagEventActiveDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnTagEventActiveDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompletedAIOrders_Inner = { "OnAreaCompletedAIOrders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZSpawnWaveFilteredOrder, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompletedAIOrders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompletedAIOrders = { "OnAreaCompletedAIOrders", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, OnAreaCompletedAIOrders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompletedAIOrders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompletedAIOrders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ProtectPoints_Inner = { "ProtectPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAIProtectPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ProtectPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ProtectPoints = { "ProtectPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, ProtectPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ProtectPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ProtectPoints_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts_ValueProp = { "ModifierCounts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts_Key_KeyProp = { "ModifierCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts = { "ModifierCounts", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, ModifierCounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_ValueProp = { "ModifiersPerDifficulty", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZHoldOutModifiers, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_Key_KeyProp = { "ModifiersPerDifficulty_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty = { "ModifiersPerDifficulty", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, ModifiersPerDifficulty), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_DroneMoveToLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_DroneMoveToLocation = { "DroneMoveToLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, DroneMoveToLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_DroneMoveToLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_DroneMoveToLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveSettingsProxyComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveSettingsProxyComponent = { "SpawnWaveSettingsProxyComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, SpawnWaveSettingsProxyComponent), Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveSettingsProxyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveSettingsProxyComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveProgressionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveProgressionComponent = { "SpawnWaveProgressionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, SpawnWaveProgressionComponent), Z_Construct_UClass_USBZSpawnWaveProgressionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveProgressionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveProgressionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_FogProgressionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_FogProgressionComponent = { "FogProgressionComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, FogProgressionComponent), Z_Construct_UClass_USBZHoldOutFogProgressionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_FogProgressionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_FogProgressionComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_MinDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_MinDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_MinDifficulty = { "MinDifficulty", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHoldOutArea, MinDifficulty), Z_Construct_UEnum_Starbreeze_ESBZHoldOutModeDifficulty, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_MinDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_MinDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_bApplySpawnSettingsWhenSelected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutArea" },
		{ "ModuleRelativePath", "Public/SBZHoldOutArea.h" },
	};
#endif
	void Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_bApplySpawnSettingsWhenSelected_SetBit(void* Obj)
	{
		((ASBZHoldOutArea*)Obj)->bApplySpawnSettingsWhenSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_bApplySpawnSettingsWhenSelected = { "bApplySpawnSettingsWhenSelected", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZHoldOutArea), &Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_bApplySpawnSettingsWhenSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_bApplySpawnSettingsWhenSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_bApplySpawnSettingsWhenSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHoldOutArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveResultChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnObjectiveProgressChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnTagEventActiveDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_Objectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompletedAIOrders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_OnAreaCompletedAIOrders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ProtectPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ProtectPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifierCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_ModifiersPerDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_DroneMoveToLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveSettingsProxyComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_SpawnWaveProgressionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_FogProgressionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_MinDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_MinDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHoldOutArea_Statics::NewProp_bApplySpawnSettingsWhenSelected,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZHoldOutArea_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZTagEventInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHoldOutArea, ISBZTagEventInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHoldOutArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHoldOutArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHoldOutArea_Statics::ClassParams = {
		&ASBZHoldOutArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHoldOutArea_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHoldOutArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHoldOutArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHoldOutArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHoldOutArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHoldOutArea, 970811644);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHoldOutArea>()
	{
		return ASBZHoldOutArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHoldOutArea(Z_Construct_UClass_ASBZHoldOutArea, &ASBZHoldOutArea::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHoldOutArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHoldOutArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
