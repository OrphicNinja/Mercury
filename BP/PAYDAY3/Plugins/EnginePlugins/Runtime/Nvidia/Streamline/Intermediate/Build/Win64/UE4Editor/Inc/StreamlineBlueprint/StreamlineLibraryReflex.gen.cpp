// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/StreamlineLibraryReflex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineLibraryReflex() {}
// Cross Module References
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryReflex_NoRegister();
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryReflex();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexSupport();
// End Cross Module References
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetDefaultReflexMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineReflexMode*)Z_Param__Result=UStreamlineLibraryReflex::GetDefaultReflexMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetGameLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStreamlineLibraryReflex::GetGameLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetGameToRenderLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStreamlineLibraryReflex::GetGameToRenderLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetReflexMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineReflexMode*)Z_Param__Result=UStreamlineLibraryReflex::GetReflexMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execGetRenderLatencyInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStreamlineLibraryReflex::GetRenderLatencyInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execIsReflexSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStreamlineLibraryReflex::IsReflexSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execQueryReflexSupport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineReflexSupport*)Z_Param__Result=UStreamlineLibraryReflex::QueryReflexSupport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryReflex::execSetReflexMode)
	{
		P_GET_ENUM(UStreamlineReflexMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryReflex::SetReflexMode(UStreamlineReflexMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	void UStreamlineLibraryReflex::StaticRegisterNativesUStreamlineLibraryReflex()
	{
		UClass* Class = UStreamlineLibraryReflex::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultReflexMode", &UStreamlineLibraryReflex::execGetDefaultReflexMode },
			{ "GetGameLatencyInMs", &UStreamlineLibraryReflex::execGetGameLatencyInMs },
			{ "GetGameToRenderLatencyInMs", &UStreamlineLibraryReflex::execGetGameToRenderLatencyInMs },
			{ "GetReflexMode", &UStreamlineLibraryReflex::execGetReflexMode },
			{ "GetRenderLatencyInMs", &UStreamlineLibraryReflex::execGetRenderLatencyInMs },
			{ "IsReflexSupported", &UStreamlineLibraryReflex::execIsReflexSupported },
			{ "QueryReflexSupport", &UStreamlineLibraryReflex::execQueryReflexSupport },
			{ "SetReflexMode", &UStreamlineLibraryReflex::execSetReflexMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics
	{
		struct StreamlineLibraryReflex_eventGetDefaultReflexMode_Parms
		{
			UStreamlineReflexMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetDefaultReflexMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetDefaultReflexMode", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventGetDefaultReflexMode_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics
	{
		struct StreamlineLibraryReflex_eventGetGameLatencyInMs_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetGameLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetGameLatencyInMs", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventGetGameLatencyInMs_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics
	{
		struct StreamlineLibraryReflex_eventGetGameToRenderLatencyInMs_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetGameToRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetGameToRenderLatencyInMs", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventGetGameToRenderLatencyInMs_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics
	{
		struct StreamlineLibraryReflex_eventGetReflexMode_Parms
		{
			UStreamlineReflexMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetReflexMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetReflexMode", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventGetReflexMode_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics
	{
		struct StreamlineLibraryReflex_eventGetRenderLatencyInMs_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryReflex_eventGetRenderLatencyInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "GetRenderLatencyInMs", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventGetRenderLatencyInMs_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics
	{
		struct StreamlineLibraryReflex_eventIsReflexSupported_Parms
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
	void Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StreamlineLibraryReflex_eventIsReflexSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StreamlineLibraryReflex_eventIsReflexSupported_Parms), &Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "IsReflexSupported", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventIsReflexSupported_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics
	{
		struct StreamlineLibraryReflex_eventQueryReflexSupport_Parms
		{
			UStreamlineReflexSupport ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryReflex_eventQueryReflexSupport_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexSupport, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "QueryReflexSupport", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventQueryReflexSupport_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics
	{
		struct StreamlineLibraryReflex_eventSetReflexMode_Parms
		{
			UStreamlineReflexMode Mode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryReflex_eventSetReflexMode_Parms, Mode), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineReflexMode, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryReflex, nullptr, "SetReflexMode", nullptr, nullptr, sizeof(StreamlineLibraryReflex_eventSetReflexMode_Parms), Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStreamlineLibraryReflex_NoRegister()
	{
		return UStreamlineLibraryReflex::StaticClass();
	}
	struct Z_Construct_UClass_UStreamlineLibraryReflex_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamlineLibraryReflex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamlineLibraryReflex_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetDefaultReflexMode, "GetDefaultReflexMode" }, // 1261082360
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameLatencyInMs, "GetGameLatencyInMs" }, // 1637433837
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetGameToRenderLatencyInMs, "GetGameToRenderLatencyInMs" }, // 82655383
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetReflexMode, "GetReflexMode" }, // 3365714591
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_GetRenderLatencyInMs, "GetRenderLatencyInMs" }, // 420965222
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_IsReflexSupported, "IsReflexSupported" }, // 1361643907
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_QueryReflexSupport, "QueryReflexSupport" }, // 719951635
		{ &Z_Construct_UFunction_UStreamlineLibraryReflex_SetReflexMode, "SetReflexMode" }, // 1173188014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineLibraryReflex_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreamlineLibraryReflex.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryReflex.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamlineLibraryReflex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineLibraryReflex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineLibraryReflex_Statics::ClassParams = {
		&UStreamlineLibraryReflex::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamlineLibraryReflex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineLibraryReflex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamlineLibraryReflex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamlineLibraryReflex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamlineLibraryReflex, 1488951842);
	template<> STREAMLINEBLUEPRINT_API UClass* StaticClass<UStreamlineLibraryReflex>()
	{
		return UStreamlineLibraryReflex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamlineLibraryReflex(Z_Construct_UClass_UStreamlineLibraryReflex, &UStreamlineLibraryReflex::StaticClass, TEXT("/Script/StreamlineBlueprint"), TEXT("UStreamlineLibraryReflex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineLibraryReflex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
