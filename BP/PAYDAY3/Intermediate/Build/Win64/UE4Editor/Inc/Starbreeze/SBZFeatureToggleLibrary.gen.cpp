// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFeatureToggleLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFeatureToggleLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFeatureToggleLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFeatureToggleLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZFeatureToggleLibrary::execGetFeatureToggleValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FeatureName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZFeatureToggleLibrary::GetFeatureToggleValue(Z_Param_WorldContextObject,Z_Param_FeatureName);
		P_NATIVE_END;
	}
	void USBZFeatureToggleLibrary::StaticRegisterNativesUSBZFeatureToggleLibrary()
	{
		UClass* Class = USBZFeatureToggleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureToggleValue", &USBZFeatureToggleLibrary::execGetFeatureToggleValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics
	{
		struct SBZFeatureToggleLibrary_eventGetFeatureToggleValue_Parms
		{
			const UObject* WorldContextObject;
			FString FeatureName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeatureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FeatureName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFeatureToggleLibrary_eventGetFeatureToggleValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_FeatureName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_FeatureName = { "FeatureName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFeatureToggleLibrary_eventGetFeatureToggleValue_Parms, FeatureName), METADATA_PARAMS(Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_FeatureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_FeatureName_MetaData)) };
	void Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZFeatureToggleLibrary_eventGetFeatureToggleValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZFeatureToggleLibrary_eventGetFeatureToggleValue_Parms), &Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_FeatureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFeatureToggleLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZFeatureToggleLibrary, nullptr, "GetFeatureToggleValue", nullptr, nullptr, sizeof(SBZFeatureToggleLibrary_eventGetFeatureToggleValue_Parms), Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZFeatureToggleLibrary_NoRegister()
	{
		return USBZFeatureToggleLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZFeatureToggleLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZFeatureToggleLibrary_GetFeatureToggleValue, "GetFeatureToggleValue" }, // 3065491952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFeatureToggleLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFeatureToggleLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFeatureToggleLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::ClassParams = {
		&USBZFeatureToggleLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFeatureToggleLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFeatureToggleLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFeatureToggleLibrary, 4231384211);
	template<> STARBREEZE_API UClass* StaticClass<USBZFeatureToggleLibrary>()
	{
		return USBZFeatureToggleLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFeatureToggleLibrary(Z_Construct_UClass_USBZFeatureToggleLibrary, &USBZFeatureToggleLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFeatureToggleLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFeatureToggleLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
