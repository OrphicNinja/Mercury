// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIShieldCoverAttachPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIShieldCoverAttachPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIShieldCoverAttachPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void ASBZAIShieldCoverAttachPoint::StaticRegisterNativesASBZAIShieldCoverAttachPoint()
	{
	}
	UClass* Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_NoRegister()
	{
		return ASBZAIShieldCoverAttachPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Occupier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Occupier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockingCovers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockingCovers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockingCovers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIShieldCoverAttachPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIShieldCoverAttachPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_Occupier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldCoverAttachPoint" },
		{ "ModuleRelativePath", "Public/SBZAIShieldCoverAttachPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_Occupier = { "Occupier", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIShieldCoverAttachPoint, Occupier), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_Occupier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_Occupier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_BlockingCovers_Inner = { "BlockingCovers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_BlockingCovers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIShieldCoverAttachPoint" },
		{ "ModuleRelativePath", "Public/SBZAIShieldCoverAttachPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_BlockingCovers = { "BlockingCovers", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIShieldCoverAttachPoint, BlockingCovers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_BlockingCovers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_BlockingCovers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_Occupier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_BlockingCovers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::NewProp_BlockingCovers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIShieldCoverAttachPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::ClassParams = {
		&ASBZAIShieldCoverAttachPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIShieldCoverAttachPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIShieldCoverAttachPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIShieldCoverAttachPoint, 643499544);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIShieldCoverAttachPoint>()
	{
		return ASBZAIShieldCoverAttachPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIShieldCoverAttachPoint(Z_Construct_UClass_ASBZAIShieldCoverAttachPoint, &ASBZAIShieldCoverAttachPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIShieldCoverAttachPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIShieldCoverAttachPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
