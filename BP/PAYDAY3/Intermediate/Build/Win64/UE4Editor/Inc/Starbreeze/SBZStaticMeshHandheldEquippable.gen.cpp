// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStaticMeshHandheldEquippable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStaticMeshHandheldEquippable() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZStaticMeshHandheldEquippable();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHandheldEquippable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZStaticMeshHandheldEquippable::execGetStaticMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetStaticMeshComponent();
		P_NATIVE_END;
	}
	void ASBZStaticMeshHandheldEquippable::StaticRegisterNativesASBZStaticMeshHandheldEquippable()
	{
		UClass* Class = ASBZStaticMeshHandheldEquippable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStaticMeshComponent", &ASBZStaticMeshHandheldEquippable::execGetStaticMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics
	{
		struct SBZStaticMeshHandheldEquippable_eventGetStaticMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZStaticMeshHandheldEquippable_eventGetStaticMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZStaticMeshHandheldEquippable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZStaticMeshHandheldEquippable, nullptr, "GetStaticMeshComponent", nullptr, nullptr, sizeof(SBZStaticMeshHandheldEquippable_eventGetStaticMeshComponent_Parms), Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_NoRegister()
	{
		return ASBZStaticMeshHandheldEquippable::StaticClass();
	}
	struct Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZHandheldEquippable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZStaticMeshHandheldEquippable_GetStaticMeshComponent, "GetStaticMeshComponent" }, // 407146470
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStaticMeshHandheldEquippable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStaticMeshHandheldEquippable.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZStaticMeshHandheldEquippable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::ClassParams = {
		&ASBZStaticMeshHandheldEquippable::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZStaticMeshHandheldEquippable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZStaticMeshHandheldEquippable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZStaticMeshHandheldEquippable, 2525949613);
	template<> STARBREEZE_API UClass* StaticClass<ASBZStaticMeshHandheldEquippable>()
	{
		return ASBZStaticMeshHandheldEquippable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZStaticMeshHandheldEquippable(Z_Construct_UClass_ASBZStaticMeshHandheldEquippable, &ASBZStaticMeshHandheldEquippable::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZStaticMeshHandheldEquippable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZStaticMeshHandheldEquippable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
