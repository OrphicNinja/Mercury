// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NISBlueprint/Public/NISLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNISLibrary() {}
// Cross Module References
	NISBLUEPRINT_API UClass* Z_Construct_UClass_UNISLibrary_NoRegister();
	NISBLUEPRINT_API UClass* Z_Construct_UClass_UNISLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NISBlueprint();
	NISBLUEPRINT_API UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode();
// End Cross Module References
	DEFINE_FUNCTION(UNISLibrary::execGetDefaultNISMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNISMode*)Z_Param__Result=UNISLibrary::GetDefaultNISMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execGetNISRecommendedScreenPercentage)
	{
		P_GET_ENUM(UNISMode,Z_Param_NISMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNISLibrary::GetNISRecommendedScreenPercentage(UNISMode(Z_Param_NISMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execGetNISScreenPercentageRange)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinScreenPercentage);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxScreenPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::GetNISScreenPercentageRange(Z_Param_Out_MinScreenPercentage,Z_Param_Out_MaxScreenPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execGetSupportedNISModes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UNISMode>*)Z_Param__Result=UNISLibrary::GetSupportedNISModes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execIsNISModeSupported)
	{
		P_GET_ENUM(UNISMode,Z_Param_NISMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNISLibrary::IsNISModeSupported(UNISMode(Z_Param_NISMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execIsNISSupported)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNISLibrary::IsNISSupported();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execSetNISCustomScreenPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CustomScreenPercentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::SetNISCustomScreenPercentage(Z_Param_CustomScreenPercentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execSetNISMode)
	{
		P_GET_ENUM(UNISMode,Z_Param_NISMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::SetNISMode(UNISMode(Z_Param_NISMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNISLibrary::execSetNISSharpness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sharpness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNISLibrary::SetNISSharpness(Z_Param_Sharpness);
		P_NATIVE_END;
	}
	void UNISLibrary::StaticRegisterNativesUNISLibrary()
	{
		UClass* Class = UNISLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultNISMode", &UNISLibrary::execGetDefaultNISMode },
			{ "GetNISRecommendedScreenPercentage", &UNISLibrary::execGetNISRecommendedScreenPercentage },
			{ "GetNISScreenPercentageRange", &UNISLibrary::execGetNISScreenPercentageRange },
			{ "GetSupportedNISModes", &UNISLibrary::execGetSupportedNISModes },
			{ "IsNISModeSupported", &UNISLibrary::execIsNISModeSupported },
			{ "IsNISSupported", &UNISLibrary::execIsNISSupported },
			{ "SetNISCustomScreenPercentage", &UNISLibrary::execSetNISCustomScreenPercentage },
			{ "SetNISMode", &UNISLibrary::execSetNISMode },
			{ "SetNISSharpness", &UNISLibrary::execSetNISSharpness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics
	{
		struct NISLibrary_eventGetDefaultNISMode_Parms
		{
			UNISMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventGetDefaultNISMode_Parms, ReturnValue), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetDefaultNISMode", nullptr, nullptr, sizeof(NISLibrary_eventGetDefaultNISMode_Parms), Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics
	{
		struct NISLibrary_eventGetNISRecommendedScreenPercentage_Parms
		{
			UNISMode NISMode;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NISMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NISMode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode = { "NISMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventGetNISRecommendedScreenPercentage_Parms, NISMode), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventGetNISRecommendedScreenPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_NISMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetNISRecommendedScreenPercentage", nullptr, nullptr, sizeof(NISLibrary_eventGetNISRecommendedScreenPercentage_Parms), Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics
	{
		struct NISLibrary_eventGetNISScreenPercentageRange_Parms
		{
			float MinScreenPercentage;
			float MaxScreenPercentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenPercentage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScreenPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MinScreenPercentage = { "MinScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventGetNISScreenPercentageRange_Parms, MinScreenPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MaxScreenPercentage = { "MaxScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventGetNISScreenPercentageRange_Parms, MaxScreenPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MinScreenPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::NewProp_MaxScreenPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetNISScreenPercentageRange", nullptr, nullptr, sizeof(NISLibrary_eventGetNISScreenPercentageRange_Parms), Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics
	{
		struct NISLibrary_eventGetSupportedNISModes_Parms
		{
			TArray<UNISMode> ReturnValue;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventGetSupportedNISModes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "GetSupportedNISModes", nullptr, nullptr, sizeof(NISLibrary_eventGetSupportedNISModes_Parms), Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics
	{
		struct NISLibrary_eventIsNISModeSupported_Parms
		{
			UNISMode NISMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NISMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NISMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode = { "NISMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventIsNISModeSupported_Parms, NISMode), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NISLibrary_eventIsNISModeSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NISLibrary_eventIsNISModeSupported_Parms), &Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_NISMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "IsNISModeSupported", nullptr, nullptr, sizeof(NISLibrary_eventIsNISModeSupported_Parms), Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_IsNISModeSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_IsNISModeSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics
	{
		struct NISLibrary_eventIsNISSupported_Parms
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
	void Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NISLibrary_eventIsNISSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NISLibrary_eventIsNISSupported_Parms), &Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "IsNISSupported", nullptr, nullptr, sizeof(NISLibrary_eventIsNISSupported_Parms), Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_IsNISSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_IsNISSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics
	{
		struct NISLibrary_eventSetNISCustomScreenPercentage_Parms
		{
			float CustomScreenPercentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomScreenPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::NewProp_CustomScreenPercentage = { "CustomScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventSetNISCustomScreenPercentage_Parms, CustomScreenPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::NewProp_CustomScreenPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "SetNISCustomScreenPercentage", nullptr, nullptr, sizeof(NISLibrary_eventSetNISCustomScreenPercentage_Parms), Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics
	{
		struct NISLibrary_eventSetNISMode_Parms
		{
			UNISMode NISMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NISMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NISMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode = { "NISMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventSetNISMode_Parms, NISMode), Z_Construct_UEnum_NISBlueprint_UNISMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::NewProp_NISMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "SetNISMode", nullptr, nullptr, sizeof(NISLibrary_eventSetNISMode_Parms), Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_SetNISMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_SetNISMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics
	{
		struct NISLibrary_eventSetNISSharpness_Parms
		{
			float Sharpness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sharpness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::NewProp_Sharpness = { "Sharpness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NISLibrary_eventSetNISSharpness_Parms, Sharpness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::NewProp_Sharpness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNISLibrary, nullptr, "SetNISSharpness", nullptr, nullptr, sizeof(NISLibrary_eventSetNISSharpness_Parms), Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNISLibrary_SetNISSharpness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNISLibrary_SetNISSharpness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNISLibrary_NoRegister()
	{
		return UNISLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNISLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNISLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NISBlueprint,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNISLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNISLibrary_GetDefaultNISMode, "GetDefaultNISMode" }, // 2726511254
		{ &Z_Construct_UFunction_UNISLibrary_GetNISRecommendedScreenPercentage, "GetNISRecommendedScreenPercentage" }, // 419257863
		{ &Z_Construct_UFunction_UNISLibrary_GetNISScreenPercentageRange, "GetNISScreenPercentageRange" }, // 3810753892
		{ &Z_Construct_UFunction_UNISLibrary_GetSupportedNISModes, "GetSupportedNISModes" }, // 2807538077
		{ &Z_Construct_UFunction_UNISLibrary_IsNISModeSupported, "IsNISModeSupported" }, // 320490937
		{ &Z_Construct_UFunction_UNISLibrary_IsNISSupported, "IsNISSupported" }, // 2655304013
		{ &Z_Construct_UFunction_UNISLibrary_SetNISCustomScreenPercentage, "SetNISCustomScreenPercentage" }, // 3445116907
		{ &Z_Construct_UFunction_UNISLibrary_SetNISMode, "SetNISMode" }, // 437463642
		{ &Z_Construct_UFunction_UNISLibrary_SetNISSharpness, "SetNISSharpness" }, // 1296300133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNISLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NISLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NISLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNISLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNISLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNISLibrary_Statics::ClassParams = {
		&UNISLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNISLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNISLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNISLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNISLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNISLibrary, 3034348951);
	template<> NISBLUEPRINT_API UClass* StaticClass<UNISLibrary>()
	{
		return UNISLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNISLibrary(Z_Construct_UClass_UNISLibrary, &UNISLibrary::StaticClass, TEXT("/Script/NISBlueprint"), TEXT("UNISLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNISLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
