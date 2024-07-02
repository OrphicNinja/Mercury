// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrderDebugBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrderDebugBlueprintLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquadOrder_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrderDebugBlueprintLibrary::execSetOrderToAllSquads)
	{
		P_GET_OBJECT(UObject,Z_Param_ContextObject);
		P_GET_OBJECT(UClass,Z_Param_AIOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZAIOrderDebugBlueprintLibrary::SetOrderToAllSquads(Z_Param_ContextObject,Z_Param_AIOrder);
		P_NATIVE_END;
	}
	void USBZAIOrderDebugBlueprintLibrary::StaticRegisterNativesUSBZAIOrderDebugBlueprintLibrary()
	{
		UClass* Class = USBZAIOrderDebugBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOrderToAllSquads", &USBZAIOrderDebugBlueprintLibrary::execSetOrderToAllSquads },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics
	{
		struct SBZAIOrderDebugBlueprintLibrary_eventSetOrderToAllSquads_Parms
		{
			UObject* ContextObject;
			TSubclassOf<USBZAISquadOrder>  AIOrder;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrderDebugBlueprintLibrary_eventSetOrderToAllSquads_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::NewProp_AIOrder = { "AIOrder", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrderDebugBlueprintLibrary_eventSetOrderToAllSquads_Parms, AIOrder), Z_Construct_UClass_USBZAISquadOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::NewProp_ContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::NewProp_AIOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrderDebugBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary, nullptr, "SetOrderToAllSquads", nullptr, nullptr, sizeof(SBZAIOrderDebugBlueprintLibrary_eventSetOrderToAllSquads_Parms), Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_NoRegister()
	{
		return USBZAIOrderDebugBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrderDebugBlueprintLibrary_SetOrderToAllSquads, "SetOrderToAllSquads" }, // 3075366702
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrderDebugBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrderDebugBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrderDebugBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::ClassParams = {
		&USBZAIOrderDebugBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrderDebugBlueprintLibrary, 168417890);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrderDebugBlueprintLibrary>()
	{
		return USBZAIOrderDebugBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrderDebugBlueprintLibrary(Z_Construct_UClass_USBZAIOrderDebugBlueprintLibrary, &USBZAIOrderDebugBlueprintLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrderDebugBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrderDebugBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
