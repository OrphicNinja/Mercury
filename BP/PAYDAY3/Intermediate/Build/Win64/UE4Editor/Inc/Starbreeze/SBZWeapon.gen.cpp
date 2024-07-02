// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeapon() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZWeapon();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZEquippable();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularMeshComponent_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASBZWeapon::StaticRegisterNativesASBZWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASBZWeapon_NoRegister()
	{
		return ASBZWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASBZWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeMeshes_MetaData[];
#endif
		static void NewProp_bMergeMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModularMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModularMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEmpty_MetaData[];
#endif
		static void NewProp_bIsEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEmpty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCycle_MetaData[];
#endif
		static void NewProp_bIsCycle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShaderSightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShaderSightOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityTrackedComponentMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityTrackedComponentMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityTrackedComponentMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VelocityTrackedComponentMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrespawnedActorMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrespawnedActorMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrespawnedActorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PrespawnedActorMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponCustomizationFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponCustomizationFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZEquippable,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bMergeMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bMergeMeshes_SetBit(void* Obj)
	{
		((ASBZWeapon*)Obj)->bMergeMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bMergeMeshes = { "bMergeMeshes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWeapon), &Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bMergeMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bMergeMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bMergeMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ModularMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ModularMeshComponent = { "ModularMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeapon, ModularMeshComponent), Z_Construct_UClass_USBZModularMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ModularMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ModularMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((ASBZWeapon*)Obj)->bIsReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWeapon), &Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsEmpty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsEmpty_SetBit(void* Obj)
	{
		((ASBZWeapon*)Obj)->bIsEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsEmpty = { "bIsEmpty", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWeapon), &Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsEmpty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	void Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsCycle_SetBit(void* Obj)
	{
		((ASBZWeapon*)Obj)->bIsCycle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsCycle = { "bIsCycle", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZWeapon), &Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsCycle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponTags = { "WeaponTags", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeapon, WeaponTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ShaderSightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ShaderSightOffset = { "ShaderSightOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeapon, ShaderSightOffset), METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ShaderSightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ShaderSightOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap_ValueProp = { "VelocityTrackedComponentMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZVelocityTrackedComponentArrayData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap_Key_KeyProp = { "VelocityTrackedComponentMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap = { "VelocityTrackedComponentMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeapon, VelocityTrackedComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap_ValueProp = { "PrespawnedActorMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap_Key_KeyProp = { "PrespawnedActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap = { "PrespawnedActorMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeapon, PrespawnedActorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponCustomizationFOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeapon" },
		{ "ModuleRelativePath", "Public/SBZWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponCustomizationFOV = { "WeaponCustomizationFOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZWeapon, WeaponCustomizationFOV), METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponCustomizationFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponCustomizationFOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bMergeMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ModularMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsEmpty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_bIsCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_ShaderSightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_VelocityTrackedComponentMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_PrespawnedActorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZWeapon_Statics::NewProp_WeaponCustomizationFOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZWeapon_Statics::ClassParams = {
		&ASBZWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZWeapon, 3997057310);
	template<> STARBREEZE_API UClass* StaticClass<ASBZWeapon>()
	{
		return ASBZWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZWeapon(Z_Construct_UClass_ASBZWeapon, &ASBZWeapon::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
