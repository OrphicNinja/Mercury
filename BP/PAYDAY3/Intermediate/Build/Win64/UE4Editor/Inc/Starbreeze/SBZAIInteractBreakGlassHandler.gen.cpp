// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIInteractBreakGlassHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIInteractBreakGlassHandler() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIInteractBreakGlassHandler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIInteractBreakGlassHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIInteractBreakGlassHandler::execOnBreakGlassInteractionCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBreakGlassInteractionCompleted();
		P_NATIVE_END;
	}
	void USBZAIInteractBreakGlassHandler::StaticRegisterNativesUSBZAIInteractBreakGlassHandler()
	{
		UClass* Class = USBZAIInteractBreakGlassHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBreakGlassInteractionCompleted", &USBZAIInteractBreakGlassHandler::execOnBreakGlassInteractionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIInteractBreakGlassHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIInteractBreakGlassHandler, nullptr, "OnBreakGlassInteractionCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIInteractBreakGlassHandler_NoRegister()
	{
		return USBZAIInteractBreakGlassHandler::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIInteractBreakGlassHandler_OnBreakGlassInteractionCompleted, "OnBreakGlassInteractionCompleted" }, // 2032594897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIInteractBreakGlassHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIInteractBreakGlassHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIInteractBreakGlassHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::ClassParams = {
		&USBZAIInteractBreakGlassHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIInteractBreakGlassHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIInteractBreakGlassHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIInteractBreakGlassHandler, 1405322815);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIInteractBreakGlassHandler>()
	{
		return USBZAIInteractBreakGlassHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIInteractBreakGlassHandler(Z_Construct_UClass_USBZAIInteractBreakGlassHandler, &USBZAIInteractBreakGlassHandler::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIInteractBreakGlassHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIInteractBreakGlassHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
