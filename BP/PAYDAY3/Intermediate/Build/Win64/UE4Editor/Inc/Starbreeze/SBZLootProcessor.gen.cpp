// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLootProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLootProcessor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLootProcessor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLootProcessor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLootProcessorBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ASBZLootProcessor::execOnTrayOpened)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTrayOpened();
		P_NATIVE_END;
	}
	void ASBZLootProcessor::StaticRegisterNativesASBZLootProcessor()
	{
		UClass* Class = ASBZLootProcessor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTrayOpened", &ASBZLootProcessor::execOnTrayOpened },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZLootProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZLootProcessor, nullptr, "OnTrayOpened", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZLootProcessor_NoRegister()
	{
		return ASBZLootProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLootProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLootProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZLootProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZLootProcessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZLootProcessor_OnTrayOpened, "OnTrayOpened" }, // 3458040573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLootProcessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLootProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLootProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLootProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLootProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLootProcessor_Statics::ClassParams = {
		&ASBZLootProcessor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLootProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLootProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLootProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLootProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLootProcessor, 660456589);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLootProcessor>()
	{
		return ASBZLootProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLootProcessor(Z_Construct_UClass_ASBZLootProcessor, &ASBZLootProcessor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLootProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLootProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
