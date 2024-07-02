// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineBlueprint/Public/StreamlineLibraryDLSSG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineLibraryDLSSG() {}
// Cross Module References
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG_NoRegister();
	STREAMLINEBLUEPRINT_API UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_StreamlineBlueprint();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode();
	STREAMLINEBLUEPRINT_API UEnum* Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport();
// End Cross Module References
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDefaultDLSSGMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineDLSSGMode*)Z_Param__Result=UStreamlineLibraryDLSSG::GetDefaultDLSSGMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDLSSGFrameTiming)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FrameRateInHertz);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FramesPresented);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(Z_Param_Out_FrameRateInHertz,Z_Param_Out_FramesPresented);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDLSSGMinimumDriverVersion)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMajor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinDriverVersionMinor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryDLSSG::GetDLSSGMinimumDriverVersion(Z_Param_Out_MinDriverVersionMajor,Z_Param_Out_MinDriverVersionMinor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetDLSSGMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineDLSSGMode*)Z_Param__Result=UStreamlineLibraryDLSSG::GetDLSSGMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execGetSupportedDLSSGModes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UStreamlineDLSSGMode>*)Z_Param__Result=UStreamlineLibraryDLSSG::GetSupportedDLSSGModes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execIsDLSSGModeSupported)
	{
		P_GET_ENUM(UStreamlineDLSSGMode,Z_Param_DLSSGMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStreamlineLibraryDLSSG::IsDLSSGModeSupported(UStreamlineDLSSGMode(Z_Param_DLSSGMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execIsDLSSGSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStreamlineLibraryDLSSG::IsDLSSGSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execQueryDLSSGSupport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStreamlineDLSSGSupport*)Z_Param__Result=UStreamlineLibraryDLSSG::QueryDLSSGSupport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStreamlineLibraryDLSSG::execSetDLSSGMode)
	{
		P_GET_ENUM(UStreamlineDLSSGMode,Z_Param_DLSSGMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStreamlineLibraryDLSSG::SetDLSSGMode(UStreamlineDLSSGMode(Z_Param_DLSSGMode));
		P_NATIVE_END;
	}
	void UStreamlineLibraryDLSSG::StaticRegisterNativesUStreamlineLibraryDLSSG()
	{
		UClass* Class = UStreamlineLibraryDLSSG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultDLSSGMode", &UStreamlineLibraryDLSSG::execGetDefaultDLSSGMode },
			{ "GetDLSSGFrameTiming", &UStreamlineLibraryDLSSG::execGetDLSSGFrameTiming },
			{ "GetDLSSGMinimumDriverVersion", &UStreamlineLibraryDLSSG::execGetDLSSGMinimumDriverVersion },
			{ "GetDLSSGMode", &UStreamlineLibraryDLSSG::execGetDLSSGMode },
			{ "GetSupportedDLSSGModes", &UStreamlineLibraryDLSSG::execGetSupportedDLSSGModes },
			{ "IsDLSSGModeSupported", &UStreamlineLibraryDLSSG::execIsDLSSGModeSupported },
			{ "IsDLSSGSupported", &UStreamlineLibraryDLSSG::execIsDLSSGSupported },
			{ "QueryDLSSGSupport", &UStreamlineLibraryDLSSG::execQueryDLSSGSupport },
			{ "SetDLSSGMode", &UStreamlineLibraryDLSSG::execSetDLSSGMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDefaultDLSSGMode_Parms
		{
			UStreamlineDLSSGMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDefaultDLSSGMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDefaultDLSSGMode", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventGetDefaultDLSSGMode_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms
		{
			float FrameRateInHertz;
			int32 FramesPresented;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameRateInHertz;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FramesPresented;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FrameRateInHertz = { "FrameRateInHertz", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms, FrameRateInHertz), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FramesPresented = { "FramesPresented", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms, FramesPresented), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FrameRateInHertz,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::NewProp_FramesPresented,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDLSSGFrameTiming", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventGetDLSSGFrameTiming_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms
		{
			int32 MinDriverVersionMajor;
			int32 MinDriverVersionMinor;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMajor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDriverVersionMinor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor = { "MinDriverVersionMajor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms, MinDriverVersionMajor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor = { "MinDriverVersionMinor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms, MinDriverVersionMinor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMajor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::NewProp_MinDriverVersionMinor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDLSSGMinimumDriverVersion", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventGetDLSSGMinimumDriverVersion_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetDLSSGMode_Parms
		{
			UStreamlineDLSSGMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetDLSSGMode_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetDLSSGMode", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventGetDLSSGMode_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics
	{
		struct StreamlineLibraryDLSSG_eventGetSupportedDLSSGModes_Parms
		{
			TArray<UStreamlineDLSSGMode> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventGetSupportedDLSSGModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "GetSupportedDLSSGModes", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventGetSupportedDLSSGModes_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics
	{
		struct StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms
		{
			UStreamlineDLSSGMode DLSSGMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DLSSGMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DLSSGMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode = { "DLSSGMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms, DLSSGMode), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms), &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_DLSSGMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "IsDLSSGModeSupported", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventIsDLSSGModeSupported_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics
	{
		struct StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms
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
	void Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms), &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "IsDLSSGSupported", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventIsDLSSGSupported_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics
	{
		struct StreamlineLibraryDLSSG_eventQueryDLSSGSupport_Parms
		{
			UStreamlineDLSSGSupport ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventQueryDLSSGSupport_Parms, ReturnValue), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGSupport, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "QueryDLSSGSupport", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventQueryDLSSGSupport_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics
	{
		struct StreamlineLibraryDLSSG_eventSetDLSSGMode_Parms
		{
			UStreamlineDLSSGMode DLSSGMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DLSSGMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DLSSGMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode = { "DLSSGMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StreamlineLibraryDLSSG_eventSetDLSSGMode_Parms, DLSSGMode), Z_Construct_UEnum_StreamlineBlueprint_UStreamlineDLSSGMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::NewProp_DLSSGMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamlineLibraryDLSSG, nullptr, "SetDLSSGMode", nullptr, nullptr, sizeof(StreamlineLibraryDLSSG_eventSetDLSSGMode_Parms), Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG_NoRegister()
	{
		return UStreamlineLibraryDLSSG::StaticClass();
	}
	struct Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamlineBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDefaultDLSSGMode, "GetDefaultDLSSGMode" }, // 63660532
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGFrameTiming, "GetDLSSGFrameTiming" }, // 1293334994
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMinimumDriverVersion, "GetDLSSGMinimumDriverVersion" }, // 3083027519
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetDLSSGMode, "GetDLSSGMode" }, // 120890003
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_GetSupportedDLSSGModes, "GetSupportedDLSSGModes" }, // 1113133833
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGModeSupported, "IsDLSSGModeSupported" }, // 1215994554
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_IsDLSSGSupported, "IsDLSSGSupported" }, // 3518848459
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_QueryDLSSGSupport, "QueryDLSSGSupport" }, // 2673413607
		{ &Z_Construct_UFunction_UStreamlineLibraryDLSSG_SetDLSSGMode, "SetDLSSGMode" }, // 350228611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreamlineLibraryDLSSG.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreamlineLibraryDLSSG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineLibraryDLSSG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::ClassParams = {
		&UStreamlineLibraryDLSSG::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamlineLibraryDLSSG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamlineLibraryDLSSG, 1121863821);
	template<> STREAMLINEBLUEPRINT_API UClass* StaticClass<UStreamlineLibraryDLSSG>()
	{
		return UStreamlineLibraryDLSSG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamlineLibraryDLSSG(Z_Construct_UClass_UStreamlineLibraryDLSSG, &UStreamlineLibraryDLSSG::StaticClass, TEXT("/Script/StreamlineBlueprint"), TEXT("UStreamlineLibraryDLSSG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineLibraryDLSSG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
