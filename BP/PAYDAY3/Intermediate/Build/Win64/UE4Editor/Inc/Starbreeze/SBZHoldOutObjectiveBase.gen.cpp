// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHoldOutObjectiveBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHoldOutObjectiveBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZObjective_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USBZHoldOutObjectiveBase::execGetMaxProgressCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxProgressCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutObjectiveBase::execGetProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutObjectiveBase::execGetProgressCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetProgressCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutObjectiveBase::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHoldOutObjectiveBase::execIsOptional)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOptional();
		P_NATIVE_END;
	}
	void USBZHoldOutObjectiveBase::StaticRegisterNativesUSBZHoldOutObjectiveBase()
	{
		UClass* Class = USBZHoldOutObjectiveBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxProgressCount", &USBZHoldOutObjectiveBase::execGetMaxProgressCount },
			{ "GetProgress", &USBZHoldOutObjectiveBase::execGetProgress },
			{ "GetProgressCount", &USBZHoldOutObjectiveBase::execGetProgressCount },
			{ "IsActive", &USBZHoldOutObjectiveBase::execIsActive },
			{ "IsOptional", &USBZHoldOutObjectiveBase::execIsOptional },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics
	{
		struct SBZHoldOutObjectiveBase_eventGetMaxProgressCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutObjectiveBase_eventGetMaxProgressCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutObjectiveBase, nullptr, "GetMaxProgressCount", nullptr, nullptr, sizeof(SBZHoldOutObjectiveBase_eventGetMaxProgressCount_Parms), Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics
	{
		struct SBZHoldOutObjectiveBase_eventGetProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutObjectiveBase_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutObjectiveBase, nullptr, "GetProgress", nullptr, nullptr, sizeof(SBZHoldOutObjectiveBase_eventGetProgress_Parms), Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics
	{
		struct SBZHoldOutObjectiveBase_eventGetProgressCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHoldOutObjectiveBase_eventGetProgressCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutObjectiveBase, nullptr, "GetProgressCount", nullptr, nullptr, sizeof(SBZHoldOutObjectiveBase_eventGetProgressCount_Parms), Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics
	{
		struct SBZHoldOutObjectiveBase_eventIsActive_Parms
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
	void Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZHoldOutObjectiveBase_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutObjectiveBase_eventIsActive_Parms), &Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutObjectiveBase, nullptr, "IsActive", nullptr, nullptr, sizeof(SBZHoldOutObjectiveBase_eventIsActive_Parms), Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics
	{
		struct SBZHoldOutObjectiveBase_eventIsOptional_Parms
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
	void Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZHoldOutObjectiveBase_eventIsOptional_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHoldOutObjectiveBase_eventIsOptional_Parms), &Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHoldOutObjectiveBase, nullptr, "IsOptional", nullptr, nullptr, sizeof(SBZHoldOutObjectiveBase_eventIsOptional_Parms), Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase_NoRegister()
	{
		return USBZHoldOutObjectiveBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseCondition_MetaData[];
#endif
		static void NewProp_bReverseCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOptional_MetaData[];
#endif
		static void NewProp_bIsOptional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOptional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBroadcastProgressChanged_MetaData[];
#endif
		static void NewProp_bBroadcastProgressChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBroadcastProgressChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTagsOnStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTagsOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTagsOnProgressIncreased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTagsOnProgressIncreased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTagsOnProgressDecreased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTagsOnProgressDecreased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTagsOnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTagsOnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedTagsOnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrantedTagsOnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTagsOnStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTagsOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTagsOnProgressIncreased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTagsOnProgressIncreased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTagsOnProgressDecreased_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTagsOnProgressDecreased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTagsOnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTagsOnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedTagsOnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedTagsOnFail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetMaxProgressCount, "GetMaxProgressCount" }, // 1087168745
		{ &Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgress, "GetProgress" }, // 3364348642
		{ &Z_Construct_UFunction_USBZHoldOutObjectiveBase_GetProgressCount, "GetProgressCount" }, // 3835276188
		{ &Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsActive, "IsActive" }, // 2509424261
		{ &Z_Construct_UFunction_USBZHoldOutObjectiveBase_IsOptional, "IsOptional" }, // 3295683484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHoldOutObjectiveBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bReverseCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	void Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bReverseCondition_SetBit(void* Obj)
	{
		((USBZHoldOutObjectiveBase*)Obj)->bReverseCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bReverseCondition = { "bReverseCondition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHoldOutObjectiveBase), &Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bReverseCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bReverseCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bReverseCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bIsOptional_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	void Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bIsOptional_SetBit(void* Obj)
	{
		((USBZHoldOutObjectiveBase*)Obj)->bIsOptional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bIsOptional = { "bIsOptional", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHoldOutObjectiveBase), &Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bIsOptional_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bIsOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bIsOptional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bBroadcastProgressChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	void Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bBroadcastProgressChanged_SetBit(void* Obj)
	{
		((USBZHoldOutObjectiveBase*)Obj)->bBroadcastProgressChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bBroadcastProgressChanged = { "bBroadcastProgressChanged", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHoldOutObjectiveBase), &Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bBroadcastProgressChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bBroadcastProgressChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bBroadcastProgressChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_UIObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_UIObjective = { "UIObjective", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, UIObjective), Z_Construct_UClass_ASBZObjective_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_UIObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_UIObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnStart = { "GrantedTagsOnStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnStart), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressIncreased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressIncreased = { "GrantedTagsOnProgressIncreased", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnProgressIncreased), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressIncreased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressIncreased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressDecreased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressDecreased = { "GrantedTagsOnProgressDecreased", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnProgressDecreased), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressDecreased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressDecreased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnSuccess = { "GrantedTagsOnSuccess", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnSuccess), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnFail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnFail = { "GrantedTagsOnFail", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, GrantedTagsOnFail), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnStart = { "RemovedTagsOnStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnStart), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressIncreased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressIncreased = { "RemovedTagsOnProgressIncreased", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnProgressIncreased), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressIncreased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressIncreased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressDecreased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressDecreased = { "RemovedTagsOnProgressDecreased", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnProgressDecreased), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressDecreased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressDecreased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnSuccess = { "RemovedTagsOnSuccess", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnSuccess), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnFail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHoldOutObjectiveBase" },
		{ "ModuleRelativePath", "Public/SBZHoldOutObjectiveBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnFail = { "RemovedTagsOnFail", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHoldOutObjectiveBase, RemovedTagsOnFail), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnFail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bReverseCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bIsOptional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_bBroadcastProgressChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_UIObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressIncreased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnProgressDecreased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_GrantedTagsOnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressIncreased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnProgressDecreased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::NewProp_RemovedTagsOnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHoldOutObjectiveBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::ClassParams = {
		&USBZHoldOutObjectiveBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHoldOutObjectiveBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHoldOutObjectiveBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHoldOutObjectiveBase, 3377576645);
	template<> STARBREEZE_API UClass* StaticClass<USBZHoldOutObjectiveBase>()
	{
		return USBZHoldOutObjectiveBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHoldOutObjectiveBase(Z_Construct_UClass_USBZHoldOutObjectiveBase, &USBZHoldOutObjectiveBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHoldOutObjectiveBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHoldOutObjectiveBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
