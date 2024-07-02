// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3PawnVariation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3PawnVariation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3PawnVariation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3PawnVariation();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FPD3PawnVariationArray();
// End Cross Module References
	void UPD3PawnVariation::StaticRegisterNativesUPD3PawnVariation()
	{
	}
	UClass* Z_Construct_UClass_UPD3PawnVariation_NoRegister()
	{
		return UPD3PawnVariation::StaticClass();
	}
	struct Z_Construct_UClass_UPD3PawnVariation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnTypeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnTypeArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3PawnVariation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3PawnVariation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3PawnVariation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3PawnVariation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3PawnVariation_Statics::NewProp_PawnTypeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3PawnVariation" },
		{ "ModuleRelativePath", "Public/PD3PawnVariation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPD3PawnVariation_Statics::NewProp_PawnTypeArray = { "PawnTypeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3PawnVariation, PawnTypeArray), Z_Construct_UScriptStruct_FPD3PawnVariationArray, METADATA_PARAMS(Z_Construct_UClass_UPD3PawnVariation_Statics::NewProp_PawnTypeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PawnVariation_Statics::NewProp_PawnTypeArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3PawnVariation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3PawnVariation_Statics::NewProp_PawnTypeArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3PawnVariation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3PawnVariation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3PawnVariation_Statics::ClassParams = {
		&UPD3PawnVariation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPD3PawnVariation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PawnVariation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3PawnVariation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3PawnVariation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3PawnVariation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3PawnVariation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3PawnVariation, 3598974657);
	template<> STARBREEZE_API UClass* StaticClass<UPD3PawnVariation>()
	{
		return UPD3PawnVariation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3PawnVariation(Z_Construct_UClass_UPD3PawnVariation, &UPD3PawnVariation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3PawnVariation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3PawnVariation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
