// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebuggerOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebuggerOptions() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebuggerOptions_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebuggerOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions();
// End Cross Module References
	DEFINE_FUNCTION(USBZDebuggerOptions::execIsGod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZDebuggerOptions::IsGod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDebuggerOptions::execIsInaudible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZDebuggerOptions::IsInaudible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDebuggerOptions::execIsInfiniteAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZDebuggerOptions::IsInfiniteAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDebuggerOptions::execIsPlayerAutomaticallyInvisibleForAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZDebuggerOptions::IsPlayerAutomaticallyInvisibleForAI();
		P_NATIVE_END;
	}
	void USBZDebuggerOptions::StaticRegisterNativesUSBZDebuggerOptions()
	{
		UClass* Class = USBZDebuggerOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGod", &USBZDebuggerOptions::execIsGod },
			{ "IsInaudible", &USBZDebuggerOptions::execIsInaudible },
			{ "IsInfiniteAmmo", &USBZDebuggerOptions::execIsInfiniteAmmo },
			{ "IsPlayerAutomaticallyInvisibleForAI", &USBZDebuggerOptions::execIsPlayerAutomaticallyInvisibleForAI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics
	{
		struct SBZDebuggerOptions_eventIsGod_Parms
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
	void Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDebuggerOptions_eventIsGod_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDebuggerOptions_eventIsGod_Parms), &Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebuggerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebuggerOptions, nullptr, "IsGod", nullptr, nullptr, sizeof(SBZDebuggerOptions_eventIsGod_Parms), Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebuggerOptions_IsGod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebuggerOptions_IsGod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics
	{
		struct SBZDebuggerOptions_eventIsInaudible_Parms
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
	void Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDebuggerOptions_eventIsInaudible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDebuggerOptions_eventIsInaudible_Parms), &Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebuggerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebuggerOptions, nullptr, "IsInaudible", nullptr, nullptr, sizeof(SBZDebuggerOptions_eventIsInaudible_Parms), Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics
	{
		struct SBZDebuggerOptions_eventIsInfiniteAmmo_Parms
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
	void Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDebuggerOptions_eventIsInfiniteAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDebuggerOptions_eventIsInfiniteAmmo_Parms), &Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebuggerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebuggerOptions, nullptr, "IsInfiniteAmmo", nullptr, nullptr, sizeof(SBZDebuggerOptions_eventIsInfiniteAmmo_Parms), Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics
	{
		struct SBZDebuggerOptions_eventIsPlayerAutomaticallyInvisibleForAI_Parms
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
	void Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZDebuggerOptions_eventIsPlayerAutomaticallyInvisibleForAI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDebuggerOptions_eventIsPlayerAutomaticallyInvisibleForAI_Parms), &Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDebuggerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDebuggerOptions, nullptr, "IsPlayerAutomaticallyInvisibleForAI", nullptr, nullptr, sizeof(SBZDebuggerOptions_eventIsPlayerAutomaticallyInvisibleForAI_Parms), Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDebuggerOptions_NoRegister()
	{
		return USBZDebuggerOptions::StaticClass();
	}
	struct Z_Construct_UClass_USBZDebuggerOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDebuggerOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDebuggerOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDebuggerOptions_IsGod, "IsGod" }, // 1806745953
		{ &Z_Construct_UFunction_USBZDebuggerOptions_IsInaudible, "IsInaudible" }, // 257786738
		{ &Z_Construct_UFunction_USBZDebuggerOptions_IsInfiniteAmmo, "IsInfiniteAmmo" }, // 2387589941
		{ &Z_Construct_UFunction_USBZDebuggerOptions_IsPlayerAutomaticallyInvisibleForAI, "IsPlayerAutomaticallyInvisibleForAI" }, // 3115542017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebuggerOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDebuggerOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebuggerOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebuggerOptions_Statics::NewProp_PlayerOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebuggerOptions" },
		{ "ModuleRelativePath", "Public/SBZDebuggerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDebuggerOptions_Statics::NewProp_PlayerOptions = { "PlayerOptions", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDebuggerOptions, PlayerOptions), Z_Construct_UScriptStruct_FSBZPlayerDebuggerOptions, METADATA_PARAMS(Z_Construct_UClass_USBZDebuggerOptions_Statics::NewProp_PlayerOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebuggerOptions_Statics::NewProp_PlayerOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDebuggerOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebuggerOptions_Statics::NewProp_PlayerOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDebuggerOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDebuggerOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDebuggerOptions_Statics::ClassParams = {
		&USBZDebuggerOptions::StaticClass,
		"DoNotSubmit",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDebuggerOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebuggerOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDebuggerOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebuggerOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDebuggerOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDebuggerOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDebuggerOptions, 713088868);
	template<> STARBREEZE_API UClass* StaticClass<USBZDebuggerOptions>()
	{
		return USBZDebuggerOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDebuggerOptions(Z_Construct_UClass_USBZDebuggerOptions, &USBZDebuggerOptions::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDebuggerOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDebuggerOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
