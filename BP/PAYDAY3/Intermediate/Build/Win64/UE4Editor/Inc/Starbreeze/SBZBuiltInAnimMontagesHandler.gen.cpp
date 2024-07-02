// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBuiltInAnimMontagesHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBuiltInAnimMontagesHandler() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontagesHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZBuiltInAnimMontagesHandler::execGetActiveAnimMontageInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZBuiltInAnimMontageInstance>*)Z_Param__Result=P_THIS->GetActiveAnimMontageInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBuiltInAnimMontagesHandler::execHasAnyActiveAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyActiveAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBuiltInAnimMontagesHandler::execPlayAnimMontage)
	{
		P_GET_OBJECT(USBZBuiltInAnimMontage,Z_Param_AnimMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PlayAnimMontage(Z_Param_AnimMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBuiltInAnimMontagesHandler::execStopAnimMontage)
	{
		P_GET_OBJECT(USBZBuiltInAnimMontage,Z_Param_AnimMontage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnimMontage(Z_Param_AnimMontage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBuiltInAnimMontagesHandler::execStopAnimMontagesWithinGroup)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Group);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnimMontagesWithinGroup(Z_Param_Out_Group);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZBuiltInAnimMontagesHandler::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void USBZBuiltInAnimMontagesHandler::StaticRegisterNativesUSBZBuiltInAnimMontagesHandler()
	{
		UClass* Class = USBZBuiltInAnimMontagesHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveAnimMontageInstances", &USBZBuiltInAnimMontagesHandler::execGetActiveAnimMontageInstances },
			{ "HasAnyActiveAnimation", &USBZBuiltInAnimMontagesHandler::execHasAnyActiveAnimation },
			{ "PlayAnimMontage", &USBZBuiltInAnimMontagesHandler::execPlayAnimMontage },
			{ "StopAnimMontage", &USBZBuiltInAnimMontagesHandler::execStopAnimMontage },
			{ "StopAnimMontagesWithinGroup", &USBZBuiltInAnimMontagesHandler::execStopAnimMontagesWithinGroup },
			{ "Update", &USBZBuiltInAnimMontagesHandler::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics
	{
		struct SBZBuiltInAnimMontagesHandler_eventGetActiveAnimMontageInstances_Parms
		{
			TArray<FSBZBuiltInAnimMontageInstance> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBuiltInAnimMontagesHandler_eventGetActiveAnimMontageInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBuiltInAnimMontagesHandler, nullptr, "GetActiveAnimMontageInstances", nullptr, nullptr, sizeof(SBZBuiltInAnimMontagesHandler_eventGetActiveAnimMontageInstances_Parms), Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics
	{
		struct SBZBuiltInAnimMontagesHandler_eventHasAnyActiveAnimation_Parms
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
	void Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBuiltInAnimMontagesHandler_eventHasAnyActiveAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBuiltInAnimMontagesHandler_eventHasAnyActiveAnimation_Parms), &Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBuiltInAnimMontagesHandler, nullptr, "HasAnyActiveAnimation", nullptr, nullptr, sizeof(SBZBuiltInAnimMontagesHandler_eventHasAnyActiveAnimation_Parms), Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics
	{
		struct SBZBuiltInAnimMontagesHandler_eventPlayAnimMontage_Parms
		{
			const USBZBuiltInAnimMontage* AnimMontage;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBuiltInAnimMontagesHandler_eventPlayAnimMontage_Parms, AnimMontage), Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBuiltInAnimMontagesHandler_eventPlayAnimMontage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBuiltInAnimMontagesHandler, nullptr, "PlayAnimMontage", nullptr, nullptr, sizeof(SBZBuiltInAnimMontagesHandler_eventPlayAnimMontage_Parms), Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics
	{
		struct SBZBuiltInAnimMontagesHandler_eventStopAnimMontage_Parms
		{
			const USBZBuiltInAnimMontage* AnimMontage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBuiltInAnimMontagesHandler_eventStopAnimMontage_Parms, AnimMontage), Z_Construct_UClass_USBZBuiltInAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::NewProp_AnimMontage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBuiltInAnimMontagesHandler, nullptr, "StopAnimMontage", nullptr, nullptr, sizeof(SBZBuiltInAnimMontagesHandler_eventStopAnimMontage_Parms), Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics
	{
		struct SBZBuiltInAnimMontagesHandler_eventStopAnimMontagesWithinGroup_Parms
		{
			FName Group;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::NewProp_Group_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBuiltInAnimMontagesHandler_eventStopAnimMontagesWithinGroup_Parms, Group), METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::NewProp_Group,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBuiltInAnimMontagesHandler, nullptr, "StopAnimMontagesWithinGroup", nullptr, nullptr, sizeof(SBZBuiltInAnimMontagesHandler_eventStopAnimMontagesWithinGroup_Parms), Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics
	{
		struct SBZBuiltInAnimMontagesHandler_eventUpdate_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBuiltInAnimMontagesHandler_eventUpdate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBuiltInAnimMontagesHandler, nullptr, "Update", nullptr, nullptr, sizeof(SBZBuiltInAnimMontagesHandler_eventUpdate_Parms), Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_NoRegister()
	{
		return USBZBuiltInAnimMontagesHandler::StaticClass();
	}
	struct Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveAnimMontageInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveAnimMontageInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveAnimMontageInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_GetActiveAnimMontageInstances, "GetActiveAnimMontageInstances" }, // 486736026
		{ &Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_HasAnyActiveAnimation, "HasAnyActiveAnimation" }, // 3415556866
		{ &Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_PlayAnimMontage, "PlayAnimMontage" }, // 986527678
		{ &Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontage, "StopAnimMontage" }, // 513627624
		{ &Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_StopAnimMontagesWithinGroup, "StopAnimMontagesWithinGroup" }, // 1535988959
		{ &Z_Construct_UFunction_USBZBuiltInAnimMontagesHandler_Update, "Update" }, // 3142245363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBuiltInAnimMontagesHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::NewProp_ActiveAnimMontageInstances_Inner = { "ActiveAnimMontageInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBuiltInAnimMontageInstance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::NewProp_ActiveAnimMontageInstances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBuiltInAnimMontagesHandler" },
		{ "ModuleRelativePath", "Public/SBZBuiltInAnimMontagesHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::NewProp_ActiveAnimMontageInstances = { "ActiveAnimMontageInstances", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBuiltInAnimMontagesHandler, ActiveAnimMontageInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::NewProp_ActiveAnimMontageInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::NewProp_ActiveAnimMontageInstances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::NewProp_ActiveAnimMontageInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::NewProp_ActiveAnimMontageInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBuiltInAnimMontagesHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::ClassParams = {
		&USBZBuiltInAnimMontagesHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBuiltInAnimMontagesHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBuiltInAnimMontagesHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBuiltInAnimMontagesHandler, 3307289694);
	template<> STARBREEZE_API UClass* StaticClass<USBZBuiltInAnimMontagesHandler>()
	{
		return USBZBuiltInAnimMontagesHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBuiltInAnimMontagesHandler(Z_Construct_UClass_USBZBuiltInAnimMontagesHandler, &USBZBuiltInAnimMontagesHandler::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBuiltInAnimMontagesHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBuiltInAnimMontagesHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
