// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEventLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEventLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEventLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEventLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameEventBroker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZEventLibrary::execGetGameEventBroker)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGameEventBroker**)Z_Param__Result=USBZEventLibrary::GetGameEventBroker(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZEventLibrary::StaticRegisterNativesUSBZEventLibrary()
	{
		UClass* Class = USBZEventLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameEventBroker", &USBZEventLibrary::execGetGameEventBroker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics
	{
		struct SBZEventLibrary_eventGetGameEventBroker_Parms
		{
			const UObject* WorldContextObject;
			USBZGameEventBroker* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEventLibrary_eventGetGameEventBroker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZEventLibrary_eventGetGameEventBroker_Parms, ReturnValue), Z_Construct_UClass_USBZGameEventBroker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEventLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEventLibrary, nullptr, "GetGameEventBroker", nullptr, nullptr, sizeof(SBZEventLibrary_eventGetGameEventBroker_Parms), Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZEventLibrary_NoRegister()
	{
		return USBZEventLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZEventLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEventLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZEventLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZEventLibrary_GetGameEventBroker, "GetGameEventBroker" }, // 4105187852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEventLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEventLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEventLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEventLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEventLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEventLibrary_Statics::ClassParams = {
		&USBZEventLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEventLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEventLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEventLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEventLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEventLibrary, 1423583080);
	template<> STARBREEZE_API UClass* StaticClass<USBZEventLibrary>()
	{
		return USBZEventLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEventLibrary(Z_Construct_UClass_USBZEventLibrary, &USBZEventLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEventLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEventLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
