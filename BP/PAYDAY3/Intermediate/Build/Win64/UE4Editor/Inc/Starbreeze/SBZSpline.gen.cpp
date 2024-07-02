// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpline() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSpline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnEnter__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnLeft__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnEndReached__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnStop__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSplineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZSpline::execGetInputSplines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASBZSpline*>*)Z_Param__Result=P_THIS->GetInputSplines();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZSpline::execGetOutputSplines)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASBZSpline*>*)Z_Param__Result=P_THIS->GetOutputSplines();
		P_NATIVE_END;
	}
	void ASBZSpline::StaticRegisterNativesASBZSpline()
	{
		UClass* Class = ASBZSpline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputSplines", &ASBZSpline::execGetInputSplines },
			{ "GetOutputSplines", &ASBZSpline::execGetOutputSplines },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics
	{
		struct SBZSpline_eventGetInputSplines_Parms
		{
			TArray<ASBZSpline*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpline_eventGetInputSplines_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpline, nullptr, "GetInputSplines", nullptr, nullptr, sizeof(SBZSpline_eventGetInputSplines_Parms), Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpline_GetInputSplines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpline_GetInputSplines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics
	{
		struct SBZSpline_eventGetOutputSplines_Parms
		{
			TArray<ASBZSpline*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZSpline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpline_eventGetOutputSplines_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSpline, nullptr, "GetOutputSplines", nullptr, nullptr, sizeof(SBZSpline_eventGetOutputSplines_Parms), Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSpline_GetOutputSplines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSpline_GetOutputSplines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSpline_NoRegister()
	{
		return ASBZSpline::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSpline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSpline_GetInputSplines, "GetInputSplines" }, // 2029607703
		{ &Z_Construct_UFunction_ASBZSpline_GetOutputSplines, "GetOutputSplines" }, // 3523171495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSpline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEntered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpline" },
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEntered = { "OnEntered", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpline, OnEntered), Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnEnter__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpline" },
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnLeft = { "OnLeft", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpline, OnLeft), Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnLeft__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEndReached_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpline" },
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEndReached = { "OnEndReached", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpline, OnEndReached), Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnEndReached__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEndReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEndReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpline" },
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpline, OnStop), Z_Construct_UDelegateFunction_Starbreeze_SBZSplineOnStop__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZSpline.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZSpline, SplineComponent), Z_Construct_UClass_USBZSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpline_Statics::NewProp_SplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnEndReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpline_Statics::NewProp_OnStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZSpline_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSpline_Statics::ClassParams = {
		&ASBZSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSpline, 3700020254);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSpline>()
	{
		return ASBZSpline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSpline(Z_Construct_UClass_ASBZSpline, &ASBZSpline::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
