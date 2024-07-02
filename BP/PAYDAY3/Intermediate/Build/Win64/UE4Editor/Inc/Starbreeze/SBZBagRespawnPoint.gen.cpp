// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagRespawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagRespawnPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagRespawnPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagRespawnPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBagRespawnPoint::execDisableBagRespawnPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableBagRespawnPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBagRespawnPoint::execEnableBagRespawnPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableBagRespawnPoint();
		P_NATIVE_END;
	}
	void ASBZBagRespawnPoint::StaticRegisterNativesASBZBagRespawnPoint()
	{
		UClass* Class = ASBZBagRespawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableBagRespawnPoint", &ASBZBagRespawnPoint::execDisableBagRespawnPoint },
			{ "EnableBagRespawnPoint", &ASBZBagRespawnPoint::execEnableBagRespawnPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagRespawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagRespawnPoint, nullptr, "DisableBagRespawnPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagRespawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagRespawnPoint, nullptr, "EnableBagRespawnPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBagRespawnPoint_NoRegister()
	{
		return ASBZBagRespawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBagRespawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartEnabled_MetaData[];
#endif
		static void NewProp_bStartEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBagRespawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBagRespawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBagRespawnPoint_DisableBagRespawnPoint, "DisableBagRespawnPoint" }, // 2113052834
		{ &Z_Construct_UFunction_ASBZBagRespawnPoint_EnableBagRespawnPoint, "EnableBagRespawnPoint" }, // 4026217507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagRespawnPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBagRespawnPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagRespawnPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagRespawnPoint_Statics::NewProp_bStartEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagRespawnPoint" },
		{ "ModuleRelativePath", "Public/SBZBagRespawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagRespawnPoint_Statics::NewProp_bStartEnabled_SetBit(void* Obj)
	{
		((ASBZBagRespawnPoint*)Obj)->bStartEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagRespawnPoint_Statics::NewProp_bStartEnabled = { "bStartEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBagRespawnPoint), &Z_Construct_UClass_ASBZBagRespawnPoint_Statics::NewProp_bStartEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagRespawnPoint_Statics::NewProp_bStartEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagRespawnPoint_Statics::NewProp_bStartEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBagRespawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagRespawnPoint_Statics::NewProp_bStartEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBagRespawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBagRespawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBagRespawnPoint_Statics::ClassParams = {
		&ASBZBagRespawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBagRespawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagRespawnPoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBagRespawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagRespawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBagRespawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBagRespawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBagRespawnPoint, 1328472069);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBagRespawnPoint>()
	{
		return ASBZBagRespawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBagRespawnPoint(Z_Construct_UClass_ASBZBagRespawnPoint, &ASBZBagRespawnPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBagRespawnPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBagRespawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
