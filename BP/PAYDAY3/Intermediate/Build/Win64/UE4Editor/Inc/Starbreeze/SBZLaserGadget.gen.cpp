// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZLaserGadget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZLaserGadget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLaserGadget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZLaserGadget();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZToggleGadget();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASBZLaserGadget::StaticRegisterNativesASBZLaserGadget()
	{
	}
	UClass* Z_Construct_UClass_ASBZLaserGadget_NoRegister()
	{
		return ASBZLaserGadget::StaticClass();
	}
	struct Z_Construct_UClass_ASBZLaserGadget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZLaserGadget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZToggleGadget,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGadget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZLaserGadget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGadget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZLaserGadget_Statics::NewProp_LaserMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZLaserGadget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZLaserGadget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZLaserGadget_Statics::NewProp_LaserMesh = { "LaserMesh", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZLaserGadget, LaserMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGadget_Statics::NewProp_LaserMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGadget_Statics::NewProp_LaserMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZLaserGadget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZLaserGadget_Statics::NewProp_LaserMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZLaserGadget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZLaserGadget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZLaserGadget_Statics::ClassParams = {
		&ASBZLaserGadget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZLaserGadget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGadget_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZLaserGadget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZLaserGadget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZLaserGadget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZLaserGadget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZLaserGadget, 2882646483);
	template<> STARBREEZE_API UClass* StaticClass<ASBZLaserGadget>()
	{
		return ASBZLaserGadget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZLaserGadget(Z_Construct_UClass_ASBZLaserGadget, &ASBZLaserGadget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZLaserGadget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZLaserGadget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
