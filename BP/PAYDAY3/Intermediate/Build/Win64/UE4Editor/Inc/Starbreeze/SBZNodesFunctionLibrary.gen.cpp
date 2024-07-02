// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNodesFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNodesFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNodesFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNodesFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
// End Cross Module References
	DEFINE_FUNCTION(USBZNodesFunctionLibrary::execCheckRNG)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_RngBitmask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZNodesFunctionLibrary::CheckRNG(Z_Param_Index,Z_Param_RngBitmask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZNodesFunctionLibrary::execRollRNG)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
		P_GET_PROPERTY(FIntProperty,Z_Param_LastOutputPinIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Min);
		P_GET_PROPERTY(FIntProperty,Z_Param_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USBZNodesFunctionLibrary::RollRNG(Z_Param_Out_RandomStream,Z_Param_LastOutputPinIndex,Z_Param_Min,Z_Param_Max);
		P_NATIVE_END;
	}
	void USBZNodesFunctionLibrary::StaticRegisterNativesUSBZNodesFunctionLibrary()
	{
		UClass* Class = USBZNodesFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckRNG", &USBZNodesFunctionLibrary::execCheckRNG },
			{ "RollRNG", &USBZNodesFunctionLibrary::execRollRNG },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics
	{
		struct SBZNodesFunctionLibrary_eventCheckRNG_Parms
		{
			int32 Index;
			int32 RngBitmask;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RngBitmask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNodesFunctionLibrary_eventCheckRNG_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_RngBitmask = { "RngBitmask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNodesFunctionLibrary_eventCheckRNG_Parms, RngBitmask), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZNodesFunctionLibrary_eventCheckRNG_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZNodesFunctionLibrary_eventCheckRNG_Parms), &Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_RngBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNodesFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNodesFunctionLibrary, nullptr, "CheckRNG", nullptr, nullptr, sizeof(SBZNodesFunctionLibrary_eventCheckRNG_Parms), Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics
	{
		struct SBZNodesFunctionLibrary_eventRollRNG_Parms
		{
			FRandomStream RandomStream;
			int32 LastOutputPinIndex;
			int32 Min;
			int32 Max;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastOutputPinIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNodesFunctionLibrary_eventRollRNG_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_RandomStream_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_LastOutputPinIndex = { "LastOutputPinIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNodesFunctionLibrary_eventRollRNG_Parms, LastOutputPinIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNodesFunctionLibrary_eventRollRNG_Parms, Min), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNodesFunctionLibrary_eventRollRNG_Parms, Max), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNodesFunctionLibrary_eventRollRNG_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_RandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_LastOutputPinIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNodesFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNodesFunctionLibrary, nullptr, "RollRNG", nullptr, nullptr, sizeof(SBZNodesFunctionLibrary_eventRollRNG_Parms), Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZNodesFunctionLibrary_NoRegister()
	{
		return USBZNodesFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZNodesFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZNodesFunctionLibrary_CheckRNG, "CheckRNG" }, // 1651561959
		{ &Z_Construct_UFunction_USBZNodesFunctionLibrary_RollRNG, "RollRNG" }, // 610696489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNodesFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNodesFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNodesFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::ClassParams = {
		&USBZNodesFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNodesFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNodesFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNodesFunctionLibrary, 1143546996);
	template<> STARBREEZE_API UClass* StaticClass<USBZNodesFunctionLibrary>()
	{
		return USBZNodesFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNodesFunctionLibrary(Z_Construct_UClass_USBZNodesFunctionLibrary, &USBZNodesFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNodesFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNodesFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
