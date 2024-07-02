// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZModularPartConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZModularPartConfig() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartConfig_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZModularPartConfig::execSetPart)
	{
		P_GET_OBJECT(USBZModularPartDataAsset,Z_Param_PartAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPart(Z_Param_PartAsset,Z_Param_Index);
		P_NATIVE_END;
	}
	void USBZModularPartConfig::StaticRegisterNativesUSBZModularPartConfig()
	{
		UClass* Class = USBZModularPartConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPart", &USBZModularPartConfig::execSetPart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics
	{
		struct SBZModularPartConfig_eventSetPart_Parms
		{
			const USBZModularPartDataAsset* PartAsset;
			int32 Index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartAsset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::NewProp_PartAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::NewProp_PartAsset = { "PartAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularPartConfig_eventSetPart_Parms, PartAsset), Z_Construct_UClass_USBZModularPartDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::NewProp_PartAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::NewProp_PartAsset_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZModularPartConfig_eventSetPart_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::NewProp_PartAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZModularPartConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZModularPartConfig, nullptr, "SetPart", nullptr, nullptr, sizeof(SBZModularPartConfig_eventSetPart_Parms), Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZModularPartConfig_SetPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZModularPartConfig_SetPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZModularPartConfig_NoRegister()
	{
		return USBZModularPartConfig::StaticClass();
	}
	struct Z_Construct_UClass_USBZModularPartConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZModularPartConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZModularPartConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZModularPartConfig_SetPart, "SetPart" }, // 4096844607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZModularPartConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZModularPartConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZModularPartConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZModularPartConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZModularPartConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZModularPartConfig_Statics::ClassParams = {
		&USBZModularPartConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZModularPartConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZModularPartConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZModularPartConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZModularPartConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZModularPartConfig, 2870513776);
	template<> STARBREEZE_API UClass* StaticClass<USBZModularPartConfig>()
	{
		return USBZModularPartConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZModularPartConfig(Z_Construct_UClass_USBZModularPartConfig, &USBZModularPartConfig::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZModularPartConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZModularPartConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
