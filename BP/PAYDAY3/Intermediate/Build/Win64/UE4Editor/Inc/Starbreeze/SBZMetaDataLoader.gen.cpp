// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMetaDataLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMetaDataLoader() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaDataLoader_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaDataLoader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZMetaDataLoader::execOnRetryGetUserEntitlements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryGetUserEntitlements();
		P_NATIVE_END;
	}
	void USBZMetaDataLoader::StaticRegisterNativesUSBZMetaDataLoader()
	{
		UClass* Class = USBZMetaDataLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRetryGetUserEntitlements", &USBZMetaDataLoader::execOnRetryGetUserEntitlements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMetaDataLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMetaDataLoader, nullptr, "OnRetryGetUserEntitlements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMetaDataLoader_NoRegister()
	{
		return USBZMetaDataLoader::StaticClass();
	}
	struct Z_Construct_UClass_USBZMetaDataLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMetaDataLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMetaDataLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMetaDataLoader_OnRetryGetUserEntitlements, "OnRetryGetUserEntitlements" }, // 3286804323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMetaDataLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMetaDataLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMetaDataLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMetaDataLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMetaDataLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMetaDataLoader_Statics::ClassParams = {
		&USBZMetaDataLoader::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMetaDataLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMetaDataLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMetaDataLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMetaDataLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMetaDataLoader, 100333796);
	template<> STARBREEZE_API UClass* StaticClass<USBZMetaDataLoader>()
	{
		return USBZMetaDataLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMetaDataLoader(Z_Construct_UClass_USBZMetaDataLoader, &USBZMetaDataLoader::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMetaDataLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMetaDataLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
