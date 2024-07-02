// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAirPathTestActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAirPathTestActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirPathTestActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAirPathTestActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ASBZAirPathTestActor::StaticRegisterNativesASBZAirPathTestActor()
	{
	}
	UClass* Z_Construct_UClass_ASBZAirPathTestActor_NoRegister()
	{
		return ASBZAirPathTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAirPathTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuzzingSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FuzzingSeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAirPathTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirPathTestActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAirPathTestActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAirPathTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_Start_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathTestActor" },
		{ "ModuleRelativePath", "Public/SBZAirPathTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAirPathTestActor, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_End_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathTestActor" },
		{ "ModuleRelativePath", "Public/SBZAirPathTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAirPathTestActor, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_NumPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathTestActor" },
		{ "ModuleRelativePath", "Public/SBZAirPathTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_NumPaths = { "NumPaths", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAirPathTestActor, NumPaths), METADATA_PARAMS(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_NumPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_NumPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_FuzzingSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAirPathTestActor" },
		{ "ModuleRelativePath", "Public/SBZAirPathTestActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_FuzzingSeed = { "FuzzingSeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAirPathTestActor, FuzzingSeed), METADATA_PARAMS(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_FuzzingSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_FuzzingSeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAirPathTestActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_NumPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAirPathTestActor_Statics::NewProp_FuzzingSeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAirPathTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAirPathTestActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAirPathTestActor_Statics::ClassParams = {
		&ASBZAirPathTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAirPathTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirPathTestActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAirPathTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAirPathTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAirPathTestActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAirPathTestActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAirPathTestActor, 1288700442);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAirPathTestActor>()
	{
		return ASBZAirPathTestActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAirPathTestActor(Z_Construct_UClass_ASBZAirPathTestActor, &ASBZAirPathTestActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAirPathTestActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAirPathTestActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
