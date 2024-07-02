// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSecuredBag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSecuredBag() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecuredBag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZSecuredBag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_ASBZSecuredBag_OnPlaced = FName(TEXT("OnPlaced"));
	void ASBZSecuredBag::OnPlaced(bool bDoCosmetics)
	{
		SBZSecuredBag_eventOnPlaced_Parms Parms;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZSecuredBag_OnPlaced),&Parms);
	}
	void ASBZSecuredBag::StaticRegisterNativesASBZSecuredBag()
	{
	}
	struct Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics
	{
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZSecuredBag_eventOnPlaced_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSecuredBag_eventOnPlaced_Parms), &Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSecuredBag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZSecuredBag, nullptr, "OnPlaced", nullptr, nullptr, sizeof(SBZSecuredBag_eventOnPlaced_Parms), Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZSecuredBag_OnPlaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZSecuredBag_OnPlaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZSecuredBag_NoRegister()
	{
		return ASBZSecuredBag::StaticClass();
	}
	struct Z_Construct_UClass_ASBZSecuredBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZSecuredBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZSecuredBag_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZSecuredBag_OnPlaced, "OnPlaced" }, // 4131920714
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZSecuredBag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSecuredBag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSecuredBag.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZSecuredBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZSecuredBag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZSecuredBag_Statics::ClassParams = {
		&ASBZSecuredBag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZSecuredBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZSecuredBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZSecuredBag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZSecuredBag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZSecuredBag, 2059758554);
	template<> STARBREEZE_API UClass* StaticClass<ASBZSecuredBag>()
	{
		return ASBZSecuredBag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZSecuredBag(Z_Construct_UClass_ASBZSecuredBag, &ASBZSecuredBag::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZSecuredBag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZSecuredBag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
