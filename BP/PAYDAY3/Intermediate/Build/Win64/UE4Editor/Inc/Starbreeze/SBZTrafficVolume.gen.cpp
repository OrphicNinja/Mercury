// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTrafficVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTrafficVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZTrafficLights_NoRegister();
// End Cross Module References
	void ASBZTrafficVolume::StaticRegisterNativesASBZTrafficVolume()
	{
	}
	UClass* Z_Construct_UClass_ASBZTrafficVolume_NoRegister()
	{
		return ASBZTrafficVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZTrafficVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficLightActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrafficLightActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrafficLightIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrafficLightIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZTrafficVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZTrafficVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTrafficVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVolume" },
		{ "ModuleRelativePath", "Public/SBZTrafficVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightActor = { "TrafficLightActor", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficVolume, TrafficLightActor), Z_Construct_UClass_ASBZTrafficLights_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTrafficVolume" },
		{ "ModuleRelativePath", "Public/SBZTrafficVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightIndex = { "TrafficLightIndex", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZTrafficVolume, TrafficLightIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZTrafficVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZTrafficVolume_Statics::NewProp_TrafficLightIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZTrafficVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZTrafficVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZTrafficVolume_Statics::ClassParams = {
		&ASBZTrafficVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZTrafficVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficVolume_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZTrafficVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZTrafficVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZTrafficVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZTrafficVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZTrafficVolume, 2269217536);
	template<> STARBREEZE_API UClass* StaticClass<ASBZTrafficVolume>()
	{
		return ASBZTrafficVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZTrafficVolume(Z_Construct_UClass_ASBZTrafficVolume, &ASBZTrafficVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZTrafficVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZTrafficVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
