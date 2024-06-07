// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeEnhancements/Public/TimeEnhancementsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeEnhancementsBPLibrary() {}
// Cross Module References
	TIMEENHANCEMENTS_API UClass* Z_Construct_UClass_UTimeEnhancementsBPLibrary_NoRegister();
	TIMEENHANCEMENTS_API UClass* Z_Construct_UClass_UTimeEnhancementsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TimeEnhancements();
// End Cross Module References
	DEFINE_FUNCTION(UTimeEnhancementsBPLibrary::execSixtyFramesPerSecondFrameDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTimeEnhancementsBPLibrary::SixtyFramesPerSecondFrameDuration();
		P_NATIVE_END;
	}
	void UTimeEnhancementsBPLibrary::StaticRegisterNativesUTimeEnhancementsBPLibrary()
	{
		UClass* Class = UTimeEnhancementsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SixtyFramesPerSecondFrameDuration", &UTimeEnhancementsBPLibrary::execSixtyFramesPerSecondFrameDuration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics
	{
		struct TimeEnhancementsBPLibrary_eventSixtyFramesPerSecondFrameDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeEnhancementsBPLibrary_eventSixtyFramesPerSecondFrameDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "TimeEnhancements" },
		{ "Comment", "/**\n\x09 * Returns the amount of seconds (standard unreal float semantics, 1.0f = 1s) that a frame takes at 60FPS\n\x09 */" },
		{ "Keywords", "TimeEnhancements Frames" },
		{ "ModuleRelativePath", "Public/TimeEnhancementsBPLibrary.h" },
		{ "ToolTip", "Returns the amount of seconds (standard unreal float semantics, 1.0f = 1s) that a frame takes at 60FPS" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeEnhancementsBPLibrary, nullptr, "SixtyFramesPerSecondFrameDuration", nullptr, nullptr, sizeof(TimeEnhancementsBPLibrary_eventSixtyFramesPerSecondFrameDuration_Parms), Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeEnhancementsBPLibrary_NoRegister()
	{
		return UTimeEnhancementsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeEnhancements,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeEnhancementsBPLibrary_SixtyFramesPerSecondFrameDuration, "SixtyFramesPerSecondFrameDuration" }, // 2297726122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Static time-related helper functions\n */" },
		{ "IncludePath", "TimeEnhancementsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TimeEnhancementsBPLibrary.h" },
		{ "ToolTip", "Static time-related helper functions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeEnhancementsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::ClassParams = {
		&UTimeEnhancementsBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeEnhancementsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeEnhancementsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeEnhancementsBPLibrary, 2411159512);
	template<> TIMEENHANCEMENTS_API UClass* StaticClass<UTimeEnhancementsBPLibrary>()
	{
		return UTimeEnhancementsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeEnhancementsBPLibrary(Z_Construct_UClass_UTimeEnhancementsBPLibrary, &UTimeEnhancementsBPLibrary::StaticClass, TEXT("/Script/TimeEnhancements"), TEXT("UTimeEnhancementsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeEnhancementsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
