// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHUDBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHUDBase();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHUDBase::execDelayedHudInitizalize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayedHudInitizalize();
		P_NATIVE_END;
	}
	void ASBZHUDBase::StaticRegisterNativesASBZHUDBase()
	{
		UClass* Class = ASBZHUDBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelayedHudInitizalize", &ASBZHUDBase::execDelayedHudInitizalize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHUDBase, nullptr, "DelayedHudInitizalize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHUDBase_NoRegister()
	{
		return ASBZHUDBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHUDBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHUDBase_DelayedHudInitizalize, "DelayedHudInitizalize" }, // 1446748707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHUDBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SBZHUDBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHUDBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHUDBase_Statics::ClassParams = {
		&ASBZHUDBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHUDBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHUDBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHUDBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHUDBase, 1616564616);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHUDBase>()
	{
		return ASBZHUDBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHUDBase(Z_Construct_UClass_ASBZHUDBase, &ASBZHUDBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHUDBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHUDBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
