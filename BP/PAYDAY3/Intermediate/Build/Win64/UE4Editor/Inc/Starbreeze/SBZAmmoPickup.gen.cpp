// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAmmoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAmmoPickup() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoPickup_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAmmoPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZComponentSelector();
// End Cross Module References
	void ASBZAmmoPickup::StaticRegisterNativesASBZAmmoPickup()
	{
	}
	UClass* Z_Construct_UClass_ASBZAmmoPickup_NoRegister()
	{
		return ASBZAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAmmoPickup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAmmoPickup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PickupModifier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmmoPickup" },
		{ "ModuleRelativePath", "Public/SBZAmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PickupModifier = { "PickupModifier", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAmmoPickup, PickupModifier), METADATA_PARAMS(Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PickupModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PickupModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PhysicsComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAmmoPickup" },
		{ "ModuleRelativePath", "Public/SBZAmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PhysicsComponent = { "PhysicsComponent", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAmmoPickup, PhysicsComponent), Z_Construct_UScriptStruct_FSBZComponentSelector, METADATA_PARAMS(Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PhysicsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PhysicsComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAmmoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PickupModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAmmoPickup_Statics::NewProp_PhysicsComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAmmoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAmmoPickup_Statics::ClassParams = {
		&ASBZAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAmmoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoPickup_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAmmoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAmmoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAmmoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAmmoPickup, 198041778);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAmmoPickup>()
	{
		return ASBZAmmoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAmmoPickup(Z_Construct_UClass_ASBZAmmoPickup, &ASBZAmmoPickup::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
