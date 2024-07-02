// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameEngine() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameEngine_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameEngine();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZGameEngine::execOnResumingGamePopupClosed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResumingGamePopupClosed(Z_Param_ActionName);
		P_NATIVE_END;
	}
	void USBZGameEngine::StaticRegisterNativesUSBZGameEngine()
	{
		UClass* Class = USBZGameEngine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnResumingGamePopupClosed", &USBZGameEngine::execOnResumingGamePopupClosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics
	{
		struct SBZGameEngine_eventOnResumingGamePopupClosed_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGameEngine_eventOnResumingGamePopupClosed_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGameEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGameEngine, nullptr, "OnResumingGamePopupClosed", nullptr, nullptr, sizeof(SBZGameEngine_eventOnResumingGamePopupClosed_Parms), Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGameEngine_NoRegister()
	{
		return USBZGameEngine::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGameEngine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGameEngine_OnResumingGamePopupClosed, "OnResumingGamePopupClosed" }, // 786265537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameEngine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameEngine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameEngine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameEngine_Statics::ClassParams = {
		&USBZGameEngine::StaticClass,
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
		0x000000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameEngine, 1275668817);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameEngine>()
	{
		return USBZGameEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameEngine(Z_Construct_UClass_USBZGameEngine, &USBZGameEngine::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
