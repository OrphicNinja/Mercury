// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagSpawner() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagSpawner_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBagSpawner::execStartSpawningBags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpawningBags();
		P_NATIVE_END;
	}
	void ASBZBagSpawner::StaticRegisterNativesASBZBagSpawner()
	{
		UClass* Class = ASBZBagSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSpawningBags", &ASBZBagSpawner::execStartSpawningBags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBagSpawner, nullptr, "StartSpawningBags", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBagSpawner_NoRegister()
	{
		return ASBZBagSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBagSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBetweenSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenSpawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagTypeToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagTypeToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLaunchBag_MetaData[];
#endif
		static void NewProp_bShouldLaunchBag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLaunchBag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldLaunchWithinCone_MetaData[];
#endif
		static void NewProp_bShouldLaunchWithinCone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldLaunchWithinCone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBagSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBagSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBagSpawner_StartSpawningBags, "StartSpawningBags" }, // 3501003940
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBagSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_NumberOfBags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_NumberOfBags = { "NumberOfBags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagSpawner, NumberOfBags), METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_NumberOfBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_NumberOfBags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_DelayBetweenSpawns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_DelayBetweenSpawns = { "DelayBetweenSpawns", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagSpawner, DelayBetweenSpawns), METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_DelayBetweenSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_DelayBetweenSpawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_BagTypeToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_BagTypeToSpawn = { "BagTypeToSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagSpawner, BagTypeToSpawn), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_BagTypeToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_BagTypeToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchBag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchBag_SetBit(void* Obj)
	{
		((ASBZBagSpawner*)Obj)->bShouldLaunchBag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchBag = { "bShouldLaunchBag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBagSpawner), &Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchBag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchBag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchBag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagSpawner, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchDirection = { "LaunchDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagSpawner, LaunchDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchWithinCone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchWithinCone_SetBit(void* Obj)
	{
		((ASBZBagSpawner*)Obj)->bShouldLaunchWithinCone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchWithinCone = { "bShouldLaunchWithinCone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBagSpawner), &Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchWithinCone_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchWithinCone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchWithinCone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_ConeAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBagSpawner" },
		{ "ModuleRelativePath", "Public/SBZBagSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_ConeAngle = { "ConeAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBagSpawner, ConeAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_ConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_ConeAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBagSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_NumberOfBags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_DelayBetweenSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_BagTypeToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchBag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_LaunchDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_bShouldLaunchWithinCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBagSpawner_Statics::NewProp_ConeAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBagSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBagSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBagSpawner_Statics::ClassParams = {
		&ASBZBagSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBagSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBagSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBagSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBagSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBagSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBagSpawner, 1134765012);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBagSpawner>()
	{
		return ASBZBagSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBagSpawner(Z_Construct_UClass_ASBZBagSpawner, &ASBZBagSpawner::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBagSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBagSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
