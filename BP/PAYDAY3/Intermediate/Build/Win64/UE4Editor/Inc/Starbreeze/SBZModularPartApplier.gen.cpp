// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartApplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartApplier() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartApplier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(USBZModularPartApplier::execCreateNewConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZModularPartConfig**)Z_Param__Result=P_THIS->CreateNewConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularPartApplier::execDoesConfigNeedParts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesConfigNeedParts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularPartApplier::execGetExpectedParts)
	{
		P_GET_OBJECT(USBZModularPartDataAsset,Z_Param_PartAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<USBZModularPartDataAsset> >*)Z_Param__Result=P_THIS->GetExpectedParts(Z_Param_PartAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZModularPartApplier::execNeedConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedConfig();
		P_NATIVE_END;
	}
	void USBZModularPartApplier::StaticRegisterNativesUSBZModularPartApplier()
	{
		UClass* Class = USBZModularPartApplier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewConfig", &USBZModularPartApplier::execCreateNewConfig },
			{ "DoesConfigNeedParts", &USBZModularPartApplier::execDoesConfigNeedParts },
			{ "GetExpectedParts", &USBZModularPartApplier::execGetExpectedParts },
			{ "NeedConfig", &USBZModularPartApplier::execNeedConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics
	{
		struct SBZModularPartApplier_eventCreateNewConfig_Parms
		{
			USBZModularPartConfig* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularPartApplier_eventCreateNewConfig_Parms, ReturnValue), Z_Construct_UClass_USBZModularPartConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularPartApplier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularPartApplier, nullptr, "CreateNewConfig", nullptr, nullptr, sizeof(SBZModularPartApplier_eventCreateNewConfig_Parms), Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics
	{
		struct SBZModularPartApplier_eventDoesConfigNeedParts_Parms
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
	void Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZModularPartApplier_eventDoesConfigNeedParts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModularPartApplier_eventDoesConfigNeedParts_Parms), &Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularPartApplier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularPartApplier, nullptr, "DoesConfigNeedParts", nullptr, nullptr, sizeof(SBZModularPartApplier_eventDoesConfigNeedParts_Parms), Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics
	{
		struct SBZModularPartApplier_eventGetExpectedParts_Parms
		{
			const USBZModularPartDataAsset* PartAsset;
			TArray<TSubclassOf<USBZModularPartDataAsset> > ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartAsset;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_PartAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_PartAsset = { "PartAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularPartApplier_eventGetExpectedParts_Parms, PartAsset), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_PartAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_PartAsset_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularPartApplier_eventGetExpectedParts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_PartAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularPartApplier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularPartApplier, nullptr, "GetExpectedParts", nullptr, nullptr, sizeof(SBZModularPartApplier_eventGetExpectedParts_Parms), Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics
	{
		struct SBZModularPartApplier_eventNeedConfig_Parms
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
	void Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZModularPartApplier_eventNeedConfig_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZModularPartApplier_eventNeedConfig_Parms), &Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularPartApplier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularPartApplier, nullptr, "NeedConfig", nullptr, nullptr, sizeof(SBZModularPartApplier_eventNeedConfig_Parms), Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularPartApplier_NeedConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularPartApplier_NeedConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZModularPartApplier_NoRegister()
	{
		return USBZModularPartApplier::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartApplier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartApplier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZModularPartApplier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZModularPartApplier_CreateNewConfig, "CreateNewConfig" }, // 1858228438
		{ &Z_Construct_UFunction_USBZModularPartApplier_DoesConfigNeedParts, "DoesConfigNeedParts" }, // 2773480013
		{ &Z_Construct_UFunction_USBZModularPartApplier_GetExpectedParts, "GetExpectedParts" }, // 1950835438
		{ &Z_Construct_UFunction_USBZModularPartApplier_NeedConfig, "NeedConfig" }, // 2450148332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartApplier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartApplier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartApplier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartApplier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartApplier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartApplier_Statics::ClassParams = {
		&USBZModularPartApplier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartApplier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartApplier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartApplier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartApplier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartApplier, 3893729110);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartApplier>()
	{
		return USBZModularPartApplier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartApplier(Z_Construct_UClass_USBZModularPartApplier, &USBZModularPartApplier::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartApplier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartApplier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
