// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuLoadoutCustomization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuLoadoutCustomization() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutCustomization_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuLoadoutCustomization();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMenuStackScreenWidget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig();
// End Cross Module References
	DEFINE_FUNCTION(USBZMainMenuLoadoutCustomization::execCustomizeLoadout)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLoadoutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CustomizeLoadout(Z_Param_InLoadoutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMainMenuLoadoutCustomization::execSaveCachedLoadout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveCachedLoadout();
		P_NATIVE_END;
	}
	void USBZMainMenuLoadoutCustomization::StaticRegisterNativesUSBZMainMenuLoadoutCustomization()
	{
		UClass* Class = USBZMainMenuLoadoutCustomization::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomizeLoadout", &USBZMainMenuLoadoutCustomization::execCustomizeLoadout },
			{ "SaveCachedLoadout", &USBZMainMenuLoadoutCustomization::execSaveCachedLoadout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics
	{
		struct SBZMainMenuLoadoutCustomization_eventCustomizeLoadout_Parms
		{
			int32 InLoadoutIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::NewProp_InLoadoutIndex = { "InLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuLoadoutCustomization_eventCustomizeLoadout_Parms, InLoadoutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::NewProp_InLoadoutIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutCustomization, nullptr, "CustomizeLoadout", nullptr, nullptr, sizeof(SBZMainMenuLoadoutCustomization_eventCustomizeLoadout_Parms), Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuLoadoutCustomization, nullptr, "SaveCachedLoadout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutCustomization_NoRegister()
	{
		return USBZMainMenuLoadoutCustomization::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerLoadoutConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedPlayerLoadoutConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadoutIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMenuStackScreenWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_CustomizeLoadout, "CustomizeLoadout" }, // 2143664632
		{ &Z_Construct_UFunction_USBZMainMenuLoadoutCustomization_SaveCachedLoadout, "SaveCachedLoadout" }, // 1351508736
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuLoadoutCustomization.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutCustomization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_CachedPlayerLoadoutConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutCustomization" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_CachedPlayerLoadoutConfig = { "CachedPlayerLoadoutConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutCustomization, CachedPlayerLoadoutConfig), Z_Construct_UScriptStruct_FSBZPlayerLoadoutConfig, METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_CachedPlayerLoadoutConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_CachedPlayerLoadoutConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_LoadoutIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMainMenuLoadoutCustomization" },
		{ "ModuleRelativePath", "Public/SBZMainMenuLoadoutCustomization.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_LoadoutIndex = { "LoadoutIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMainMenuLoadoutCustomization, LoadoutIndex), METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_LoadoutIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_LoadoutIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_CachedPlayerLoadoutConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::NewProp_LoadoutIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuLoadoutCustomization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::ClassParams = {
		&USBZMainMenuLoadoutCustomization::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuLoadoutCustomization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuLoadoutCustomization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuLoadoutCustomization, 1994133843);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuLoadoutCustomization>()
	{
		return USBZMainMenuLoadoutCustomization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuLoadoutCustomization(Z_Construct_UClass_USBZMainMenuLoadoutCustomization, &USBZMainMenuLoadoutCustomization::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuLoadoutCustomization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuLoadoutCustomization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
