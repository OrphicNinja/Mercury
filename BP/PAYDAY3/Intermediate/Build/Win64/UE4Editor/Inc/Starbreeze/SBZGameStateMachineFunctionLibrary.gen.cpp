// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameStateMachineFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameStateMachineFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachineFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZCurrentPlatform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameStateMachine_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execGetAcceptMatchTimeout)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZGameStateMachineFunctionLibrary::GetAcceptMatchTimeout(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execGetChunkInstallProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ChunkID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USBZGameStateMachineFunctionLibrary::GetChunkInstallProgress(Z_Param_ChunkID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execGetCurrentPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZCurrentPlatform*)Z_Param__Result=USBZGameStateMachineFunctionLibrary::GetCurrentPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execGetGameStateMachine)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGameStateMachine**)Z_Param__Result=USBZGameStateMachineFunctionLibrary::GetGameStateMachine(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execGetGameStateMachineState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESBZGameStateMachineState>*)Z_Param__Result=USBZGameStateMachineFunctionLibrary::GetGameStateMachineState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execGetLobbyTimeout)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZGameStateMachineFunctionLibrary::GetLobbyTimeout(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execIsPie)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZGameStateMachineFunctionLibrary::IsPie(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGameStateMachineFunctionLibrary::execIsValidPakchunkIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PakchunkIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZGameStateMachineFunctionLibrary::IsValidPakchunkIndex(Z_Param_PakchunkIndex);
		P_NATIVE_END;
	}
	void USBZGameStateMachineFunctionLibrary::StaticRegisterNativesUSBZGameStateMachineFunctionLibrary()
	{
		UClass* Class = USBZGameStateMachineFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAcceptMatchTimeout", &USBZGameStateMachineFunctionLibrary::execGetAcceptMatchTimeout },
			{ "GetChunkInstallProgress", &USBZGameStateMachineFunctionLibrary::execGetChunkInstallProgress },
			{ "GetCurrentPlatform", &USBZGameStateMachineFunctionLibrary::execGetCurrentPlatform },
			{ "GetGameStateMachine", &USBZGameStateMachineFunctionLibrary::execGetGameStateMachine },
			{ "GetGameStateMachineState", &USBZGameStateMachineFunctionLibrary::execGetGameStateMachineState },
			{ "GetLobbyTimeout", &USBZGameStateMachineFunctionLibrary::execGetLobbyTimeout },
			{ "IsPie", &USBZGameStateMachineFunctionLibrary::execIsPie },
			{ "IsValidPakchunkIndex", &USBZGameStateMachineFunctionLibrary::execIsValidPakchunkIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventGetAcceptMatchTimeout_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetAcceptMatchTimeout_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetAcceptMatchTimeout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "GetAcceptMatchTimeout", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventGetAcceptMatchTimeout_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventGetChunkInstallProgress_Parms
		{
			int32 ChunkID;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunkID;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::NewProp_ChunkID = { "ChunkID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetChunkInstallProgress_Parms, ChunkID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetChunkInstallProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::NewProp_ChunkID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "GetChunkInstallProgress", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventGetChunkInstallProgress_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventGetCurrentPlatform_Parms
		{
			ESBZCurrentPlatform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetCurrentPlatform_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZCurrentPlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "GetCurrentPlatform", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventGetCurrentPlatform_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventGetGameStateMachine_Parms
		{
			const UObject* WorldContextObject;
			USBZGameStateMachine* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetGameStateMachine_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetGameStateMachine_Parms, ReturnValue), Z_Construct_UClass_USBZGameStateMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "GetGameStateMachine", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventGetGameStateMachine_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventGetGameStateMachineState_Parms
		{
			UObject* WorldContextObject;
			TEnumAsByte<ESBZGameStateMachineState> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetGameStateMachineState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetGameStateMachineState_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZGameStateMachineState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "GetGameStateMachineState", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventGetGameStateMachineState_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventGetLobbyTimeout_Parms
		{
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetLobbyTimeout_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventGetLobbyTimeout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "GetLobbyTimeout", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventGetLobbyTimeout_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventIsPie_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventIsPie_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStateMachineFunctionLibrary_eventIsPie_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachineFunctionLibrary_eventIsPie_Parms), &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "IsPie", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventIsPie_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics
	{
		struct SBZGameStateMachineFunctionLibrary_eventIsValidPakchunkIndex_Parms
		{
			int32 PakchunkIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PakchunkIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::NewProp_PakchunkIndex = { "PakchunkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameStateMachineFunctionLibrary_eventIsValidPakchunkIndex_Parms, PakchunkIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZGameStateMachineFunctionLibrary_eventIsValidPakchunkIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZGameStateMachineFunctionLibrary_eventIsValidPakchunkIndex_Parms), &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::NewProp_PakchunkIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, nullptr, "IsValidPakchunkIndex", nullptr, nullptr, sizeof(SBZGameStateMachineFunctionLibrary_eventIsValidPakchunkIndex_Parms), Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_NoRegister()
	{
		return USBZGameStateMachineFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetAcceptMatchTimeout, "GetAcceptMatchTimeout" }, // 3849353831
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetChunkInstallProgress, "GetChunkInstallProgress" }, // 1697958312
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetCurrentPlatform, "GetCurrentPlatform" }, // 103464320
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachine, "GetGameStateMachine" }, // 1175921865
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetGameStateMachineState, "GetGameStateMachineState" }, // 1865605139
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_GetLobbyTimeout, "GetLobbyTimeout" }, // 1332606075
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsPie, "IsPie" }, // 2735982035
		{ &Z_Construct_UFunction_USBZGameStateMachineFunctionLibrary_IsValidPakchunkIndex, "IsValidPakchunkIndex" }, // 817236014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameStateMachineFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameStateMachineFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameStateMachineFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::ClassParams = {
		&USBZGameStateMachineFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameStateMachineFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameStateMachineFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameStateMachineFunctionLibrary, 999010625);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameStateMachineFunctionLibrary>()
	{
		return USBZGameStateMachineFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameStateMachineFunctionLibrary(Z_Construct_UClass_USBZGameStateMachineFunctionLibrary, &USBZGameStateMachineFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameStateMachineFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameStateMachineFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
