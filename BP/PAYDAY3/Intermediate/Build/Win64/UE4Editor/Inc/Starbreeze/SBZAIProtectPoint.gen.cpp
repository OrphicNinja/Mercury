// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIProtectPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIProtectPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIProtectPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIProtectPoint();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIOrderTargetArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISquad_NoRegister();
// End Cross Module References
	void ASBZAIProtectPoint::StaticRegisterNativesASBZAIProtectPoint()
	{
	}
	UClass* Z_Construct_UClass_ASBZAIProtectPoint_NoRegister()
	{
		return ASBZAIProtectPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIProtectPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssignedSquad_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssignedSquad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIProtectPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIOrderTargetArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIProtectPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIProtectPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIProtectPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIProtectPoint_Statics::NewProp_AssignedSquad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIProtectPoint" },
		{ "ModuleRelativePath", "Public/SBZAIProtectPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIProtectPoint_Statics::NewProp_AssignedSquad = { "AssignedSquad", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIProtectPoint, AssignedSquad), Z_Construct_UClass_USBZAISquad_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIProtectPoint_Statics::NewProp_AssignedSquad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIProtectPoint_Statics::NewProp_AssignedSquad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIProtectPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIProtectPoint_Statics::NewProp_AssignedSquad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIProtectPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIProtectPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIProtectPoint_Statics::ClassParams = {
		&ASBZAIProtectPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAIProtectPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIProtectPoint_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIProtectPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIProtectPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIProtectPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIProtectPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIProtectPoint, 2850193686);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIProtectPoint>()
	{
		return ASBZAIProtectPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIProtectPoint(Z_Construct_UClass_ASBZAIProtectPoint, &ASBZAIProtectPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIProtectPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIProtectPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
