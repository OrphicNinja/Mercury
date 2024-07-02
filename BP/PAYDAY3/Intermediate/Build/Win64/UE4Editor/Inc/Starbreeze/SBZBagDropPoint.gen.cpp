// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagDropPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagDropPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagDropPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagDropPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBagDropPoint::execDisableAsBagDropPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAsBagDropPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagDropPoint::execEnableAsBagDropPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableAsBagDropPoint();
		P_NATIVE_END;
	}
	void ASBZBagDropPoint::StaticRegisterNativesASBZBagDropPoint()
	{
		UClass* Class = ASBZBagDropPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableAsBagDropPoint", &ASBZBagDropPoint::execDisableAsBagDropPoint },
			{ "EnableAsBagDropPoint", &ASBZBagDropPoint::execEnableAsBagDropPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagDropPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagDropPoint, nullptr, "DisableAsBagDropPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagDropPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagDropPoint, nullptr, "EnableAsBagDropPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBagDropPoint_NoRegister()
	{
		return ASBZBagDropPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBagDropPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldActivateOnBeginPlay_MetaData[];
#endif
		static void NewProp_bShouldActivateOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldActivateOnBeginPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBagDropPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBagDropPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBagDropPoint_DisableAsBagDropPoint, "DisableAsBagDropPoint" }, // 2020434535
		{ &Z_Construct_UFunction_ASBZBagDropPoint_EnableAsBagDropPoint, "EnableAsBagDropPoint" }, // 2365787958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagDropPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBagDropPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagDropPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagDropPoint_Statics::NewProp_bShouldActivateOnBeginPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagDropPoint" },
		{ "ModuleRelativePath", "Public/SBZBagDropPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagDropPoint_Statics::NewProp_bShouldActivateOnBeginPlay_SetBit(void* Obj)
	{
		((ASBZBagDropPoint*)Obj)->bShouldActivateOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagDropPoint_Statics::NewProp_bShouldActivateOnBeginPlay = { "bShouldActivateOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBagDropPoint), &Z_Construct_UClass_ASBZBagDropPoint_Statics::NewProp_bShouldActivateOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagDropPoint_Statics::NewProp_bShouldActivateOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagDropPoint_Statics::NewProp_bShouldActivateOnBeginPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBagDropPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagDropPoint_Statics::NewProp_bShouldActivateOnBeginPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBagDropPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBagDropPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBagDropPoint_Statics::ClassParams = {
		&ASBZBagDropPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBagDropPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagDropPoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBagDropPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagDropPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBagDropPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBagDropPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBagDropPoint, 2978306852);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBagDropPoint>()
	{
		return ASBZBagDropPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBagDropPoint(Z_Construct_UClass_ASBZBagDropPoint, &ASBZBagDropPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBagDropPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBagDropPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
