// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIInteractCutGlassHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIInteractCutGlassHandler() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIInteractCutGlassHandler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIInteractCutGlassHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIInteractCutGlassHandler::execOnCutGlassInteractionCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCutGlassInteractionCompleted();
		P_NATIVE_END;
	}
	void USBZAIInteractCutGlassHandler::StaticRegisterNativesUSBZAIInteractCutGlassHandler()
	{
		UClass* Class = USBZAIInteractCutGlassHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCutGlassInteractionCompleted", &USBZAIInteractCutGlassHandler::execOnCutGlassInteractionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIInteractCutGlassHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIInteractCutGlassHandler, nullptr, "OnCutGlassInteractionCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIInteractCutGlassHandler_NoRegister()
	{
		return USBZAIInteractCutGlassHandler::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIInteractCutGlassHandler_OnCutGlassInteractionCompleted, "OnCutGlassInteractionCompleted" }, // 2824964455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIInteractCutGlassHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIInteractCutGlassHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIInteractCutGlassHandler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIInteractCutGlassHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIInteractCutGlassHandler, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIInteractCutGlassHandler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIInteractCutGlassHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x001200000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIInteractCutGlassHandler, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::NewProp_Interactor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIInteractCutGlassHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::ClassParams = {
		&USBZAIInteractCutGlassHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIInteractCutGlassHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIInteractCutGlassHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIInteractCutGlassHandler, 4151845063);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIInteractCutGlassHandler>()
	{
		return USBZAIInteractCutGlassHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIInteractCutGlassHandler(Z_Construct_UClass_USBZAIInteractCutGlassHandler, &USBZAIInteractCutGlassHandler::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIInteractCutGlassHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIInteractCutGlassHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
