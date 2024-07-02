// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWindVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWindVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWindVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWindVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindEmitterComponent_NoRegister();
// End Cross Module References
	void ASBZWindVolume::StaticRegisterNativesASBZWindVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZWindVolume_NoRegister()
	{
		return ASBZWindVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWindVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmitterComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWindVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWindVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZWindVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWindVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWindVolume_Statics::NewProp_EmitterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWindVolume_Statics::NewProp_EmitterComponent = { "EmitterComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWindVolume, EmitterComponent), Z_Construct_UClass_USBZWindEmitterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWindVolume_Statics::NewProp_EmitterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWindVolume_Statics::NewProp_EmitterComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZWindVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWindVolume_Statics::NewProp_EmitterComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWindVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWindVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWindVolume_Statics::ClassParams = {
		&ASBZWindVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZWindVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWindVolume_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZWindVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWindVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWindVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWindVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWindVolume, 3682193208);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWindVolume>()
	{
		return ASBZWindVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWindVolume(Z_Construct_UClass_ASBZWindVolume, &ASBZWindVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWindVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWindVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
