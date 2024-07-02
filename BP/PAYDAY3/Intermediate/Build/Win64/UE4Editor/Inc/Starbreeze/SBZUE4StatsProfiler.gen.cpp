// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUE4StatsProfiler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUE4StatsProfiler() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUE4StatsProfiler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUE4StatsProfiler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZUE4StatsProfiler::execGetUE4StatsProfiler)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZUE4StatsProfiler**)Z_Param__Result=USBZUE4StatsProfiler::GetUE4StatsProfiler(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUE4StatsProfiler::execOnEnteredActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnteredActionPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZUE4StatsProfiler::execOnExitedActionPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitedActionPhase();
		P_NATIVE_END;
	}
	void USBZUE4StatsProfiler::StaticRegisterNativesUSBZUE4StatsProfiler()
	{
		UClass* Class = USBZUE4StatsProfiler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUE4StatsProfiler", &USBZUE4StatsProfiler::execGetUE4StatsProfiler },
			{ "OnEnteredActionPhase", &USBZUE4StatsProfiler::execOnEnteredActionPhase },
			{ "OnExitedActionPhase", &USBZUE4StatsProfiler::execOnExitedActionPhase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics
	{
		struct SBZUE4StatsProfiler_eventGetUE4StatsProfiler_Parms
		{
			const UObject* WorldContextObject;
			USBZUE4StatsProfiler* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUE4StatsProfiler_eventGetUE4StatsProfiler_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUE4StatsProfiler_eventGetUE4StatsProfiler_Parms, ReturnValue), Z_Construct_UClass_USBZUE4StatsProfiler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUE4StatsProfiler.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUE4StatsProfiler, nullptr, "GetUE4StatsProfiler", nullptr, nullptr, sizeof(SBZUE4StatsProfiler_eventGetUE4StatsProfiler_Parms), Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUE4StatsProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUE4StatsProfiler, nullptr, "OnEnteredActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUE4StatsProfiler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUE4StatsProfiler, nullptr, "OnExitedActionPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUE4StatsProfiler_NoRegister()
	{
		return USBZUE4StatsProfiler::StaticClass();
	}
	struct Z_Construct_UClass_USBZUE4StatsProfiler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUE4StatsProfiler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUE4StatsProfiler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUE4StatsProfiler_GetUE4StatsProfiler, "GetUE4StatsProfiler" }, // 2974901613
		{ &Z_Construct_UFunction_USBZUE4StatsProfiler_OnEnteredActionPhase, "OnEnteredActionPhase" }, // 1869172460
		{ &Z_Construct_UFunction_USBZUE4StatsProfiler_OnExitedActionPhase, "OnExitedActionPhase" }, // 3928702444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUE4StatsProfiler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUE4StatsProfiler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUE4StatsProfiler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUE4StatsProfiler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUE4StatsProfiler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUE4StatsProfiler_Statics::ClassParams = {
		&USBZUE4StatsProfiler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZUE4StatsProfiler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUE4StatsProfiler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUE4StatsProfiler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUE4StatsProfiler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUE4StatsProfiler, 2815610928);
	template<> STARBREEZE_API UClass* StaticClass<USBZUE4StatsProfiler>()
	{
		return USBZUE4StatsProfiler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUE4StatsProfiler(Z_Construct_UClass_USBZUE4StatsProfiler, &USBZUE4StatsProfiler::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUE4StatsProfiler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUE4StatsProfiler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
