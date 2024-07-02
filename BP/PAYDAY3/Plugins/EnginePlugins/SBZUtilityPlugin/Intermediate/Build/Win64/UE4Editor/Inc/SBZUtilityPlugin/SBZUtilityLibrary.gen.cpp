// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZUtilityPlugin/Public/SBZUtilityLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUtilityLibrary() {}
// Cross Module References
	SBZUTILITYPLUGIN_API UClass* Z_Construct_UClass_USBZUtilityLibrary_NoRegister();
	SBZUTILITYPLUGIN_API UClass* Z_Construct_UClass_USBZUtilityLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SBZUtilityPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZUtilityLibrary::execGetLocalPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=USBZUtilityLibrary::GetLocalPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZUtilityLibrary::StaticRegisterNativesUSBZUtilityLibrary()
	{
		UClass* Class = USBZUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalPlayerController", &USBZUtilityLibrary::execGetLocalPlayerController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics
	{
		struct SBZUtilityLibrary_eventGetLocalPlayerController_Parms
		{
			UObject* WorldContextObject;
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUtilityLibrary_eventGetLocalPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZUtilityLibrary_eventGetLocalPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZUtilityLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZUtilityLibrary, nullptr, "GetLocalPlayerController", nullptr, nullptr, sizeof(SBZUtilityLibrary_eventGetLocalPlayerController_Parms), Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZUtilityLibrary_NoRegister()
	{
		return USBZUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZUtilityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZUtilityLibrary_GetLocalPlayerController, "GetLocalPlayerController" }, // 2960340959
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZUtilityLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUtilityLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUtilityLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUtilityLibrary_Statics::ClassParams = {
		&USBZUtilityLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUtilityLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUtilityLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUtilityLibrary, 1215230803);
	template<> SBZUTILITYPLUGIN_API UClass* StaticClass<USBZUtilityLibrary>()
	{
		return USBZUtilityLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUtilityLibrary(Z_Construct_UClass_USBZUtilityLibrary, &USBZUtilityLibrary::StaticClass, TEXT("/Script/SBZUtilityPlugin"), TEXT("USBZUtilityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUtilityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
