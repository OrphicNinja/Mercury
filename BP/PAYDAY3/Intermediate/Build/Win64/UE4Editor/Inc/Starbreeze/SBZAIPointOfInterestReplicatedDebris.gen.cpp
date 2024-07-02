// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIPointOfInterestReplicatedDebris.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIPointOfInterestReplicatedDebris() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIPointOfInterest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAIPointOfInterestReplicatedDebris::execOnRep_OnSpawnDebris)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OnSpawnDebris();
		P_NATIVE_END;
	}
	void ASBZAIPointOfInterestReplicatedDebris::StaticRegisterNativesASBZAIPointOfInterestReplicatedDebris()
	{
		UClass* Class = ASBZAIPointOfInterestReplicatedDebris::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_OnSpawnDebris", &ASBZAIPointOfInterestReplicatedDebris::execOnRep_OnSpawnDebris },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestReplicatedDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris, nullptr, "OnRep_OnSpawnDebris", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_NoRegister()
	{
		return ASBZAIPointOfInterestReplicatedDebris::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debris_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Debris;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnDebris_MetaData[];
#endif
		static void NewProp_bSpawnDebris_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnDebris;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIPointOfInterest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAIPointOfInterestReplicatedDebris_OnRep_OnSpawnDebris, "OnRep_OnSpawnDebris" }, // 2602218491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIPointOfInterestReplicatedDebris.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestReplicatedDebris.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_Debris_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterestReplicatedDebris" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestReplicatedDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_Debris = { "Debris", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIPointOfInterestReplicatedDebris, Debris), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_Debris_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_Debris_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_bSpawnDebris_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPointOfInterestReplicatedDebris" },
		{ "ModuleRelativePath", "Public/SBZAIPointOfInterestReplicatedDebris.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_bSpawnDebris_SetBit(void* Obj)
	{
		((ASBZAIPointOfInterestReplicatedDebris*)Obj)->bSpawnDebris = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_bSpawnDebris = { "bSpawnDebris", "OnRep_OnSpawnDebris", (EPropertyFlags)0x0040000100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAIPointOfInterestReplicatedDebris), &Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_bSpawnDebris_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_bSpawnDebris_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_bSpawnDebris_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_Debris,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::NewProp_bSpawnDebris,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIPointOfInterestReplicatedDebris>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::ClassParams = {
		&ASBZAIPointOfInterestReplicatedDebris::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIPointOfInterestReplicatedDebris, 3882501842);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIPointOfInterestReplicatedDebris>()
	{
		return ASBZAIPointOfInterestReplicatedDebris::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIPointOfInterestReplicatedDebris(Z_Construct_UClass_ASBZAIPointOfInterestReplicatedDebris, &ASBZAIPointOfInterestReplicatedDebris::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIPointOfInterestReplicatedDebris"), false, nullptr, nullptr, nullptr);

	void ASBZAIPointOfInterestReplicatedDebris::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bSpawnDebris(TEXT("bSpawnDebris"));

		const bool bIsValid = true
			&& Name_bSpawnDebris == ClassReps[(int32)ENetFields_Private::bSpawnDebris].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBZAIPointOfInterestReplicatedDebris"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIPointOfInterestReplicatedDebris);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
