// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVariationSetUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVariationSetUtils() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetUtils_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVariationSetData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZVariationSetUtils::execApplyVariation)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(USBZVariationSetData,Z_Param_VariationSet);
		P_GET_PROPERTY(FIntProperty,Z_Param_VariationIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZVariationSetUtils::ApplyVariation(Z_Param_Actor,Z_Param_VariationSet,Z_Param_VariationIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVariationSetUtils::execApplyVariationToSkeletal)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComponent);
		P_GET_OBJECT(USBZVariationSetData,Z_Param_VariationSet);
		P_GET_PROPERTY(FIntProperty,Z_Param_VariationIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZVariationSetUtils::ApplyVariationToSkeletal(Z_Param_SkelComponent,Z_Param_VariationSet,Z_Param_VariationIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZVariationSetUtils::execApplyVariationToStatic)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StatComponent);
		P_GET_OBJECT(USBZVariationSetData,Z_Param_VariationSet);
		P_GET_PROPERTY(FIntProperty,Z_Param_VariationIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZVariationSetUtils::ApplyVariationToStatic(Z_Param_StatComponent,Z_Param_VariationSet,Z_Param_VariationIdx);
		P_NATIVE_END;
	}
	void USBZVariationSetUtils::StaticRegisterNativesUSBZVariationSetUtils()
	{
		UClass* Class = USBZVariationSetUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyVariation", &USBZVariationSetUtils::execApplyVariation },
			{ "ApplyVariationToSkeletal", &USBZVariationSetUtils::execApplyVariationToSkeletal },
			{ "ApplyVariationToStatic", &USBZVariationSetUtils::execApplyVariationToStatic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics
	{
		struct SBZVariationSetUtils_eventApplyVariation_Parms
		{
			AActor* Actor;
			USBZVariationSetData* VariationSet;
			int32 VariationIdx;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariationIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::NewProp_VariationSet = { "VariationSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariation_Parms, VariationSet), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::NewProp_VariationIdx = { "VariationIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariation_Parms, VariationIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::NewProp_VariationSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::NewProp_VariationIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVariationSetUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVariationSetUtils, nullptr, "ApplyVariation", nullptr, nullptr, sizeof(SBZVariationSetUtils_eventApplyVariation_Parms), Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics
	{
		struct SBZVariationSetUtils_eventApplyVariationToSkeletal_Parms
		{
			USkeletalMeshComponent* SkelComponent;
			USBZVariationSetData* VariationSet;
			int32 VariationIdx;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariationIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_SkelComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_SkelComponent = { "SkelComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariationToSkeletal_Parms, SkelComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_SkelComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_SkelComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_VariationSet = { "VariationSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariationToSkeletal_Parms, VariationSet), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_VariationIdx = { "VariationIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariationToSkeletal_Parms, VariationIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_SkelComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_VariationSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::NewProp_VariationIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVariationSetUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVariationSetUtils, nullptr, "ApplyVariationToSkeletal", nullptr, nullptr, sizeof(SBZVariationSetUtils_eventApplyVariationToSkeletal_Parms), Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics
	{
		struct SBZVariationSetUtils_eventApplyVariationToStatic_Parms
		{
			UStaticMeshComponent* StatComponent;
			USBZVariationSetData* VariationSet;
			int32 VariationIdx;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariationSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariationIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_StatComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_StatComponent = { "StatComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariationToStatic_Parms, StatComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_StatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_StatComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_VariationSet = { "VariationSet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariationToStatic_Parms, VariationSet), Z_Construct_UClass_USBZVariationSetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_VariationIdx = { "VariationIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVariationSetUtils_eventApplyVariationToStatic_Parms, VariationIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_StatComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_VariationSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::NewProp_VariationIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVariationSetUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVariationSetUtils, nullptr, "ApplyVariationToStatic", nullptr, nullptr, sizeof(SBZVariationSetUtils_eventApplyVariationToStatic_Parms), Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVariationSetUtils_NoRegister()
	{
		return USBZVariationSetUtils::StaticClass();
	}
	struct Z_Construct_UClass_USBZVariationSetUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVariationSetUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVariationSetUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariation, "ApplyVariation" }, // 3880741651
		{ &Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToSkeletal, "ApplyVariationToSkeletal" }, // 193375094
		{ &Z_Construct_UFunction_USBZVariationSetUtils_ApplyVariationToStatic, "ApplyVariationToStatic" }, // 263535461
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVariationSetUtils_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVariationSetUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVariationSetUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVariationSetUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVariationSetUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVariationSetUtils_Statics::ClassParams = {
		&USBZVariationSetUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZVariationSetUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVariationSetUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVariationSetUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVariationSetUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVariationSetUtils, 1871112887);
	template<> STARBREEZE_API UClass* StaticClass<USBZVariationSetUtils>()
	{
		return USBZVariationSetUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVariationSetUtils(Z_Construct_UClass_USBZVariationSetUtils, &USBZVariationSetUtils::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVariationSetUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVariationSetUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
