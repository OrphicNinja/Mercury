// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDamageType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZDamageType::StaticRegisterNativesUSBZDamageType()
	{
	}
	UClass* Z_Construct_UClass_USBZDamageType_NoRegister()
	{
		return USBZDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USBZDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvironmentHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeAbsorption_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DodgeAbsorption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsThrowableProjectile_MetaData[];
#endif
		static void NewProp_bIsThrowableProjectile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsThrowableProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHurtAllowed_MetaData[];
#endif
		static void NewProp_bIsHurtAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHurtAllowed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDamageType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageType_Statics::NewProp_TagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageType" },
		{ "ModuleRelativePath", "Public/SBZDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDamageType_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDamageType, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZDamageType_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageType_Statics::NewProp_TagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageType_Statics::NewProp_EnvironmentHits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageType" },
		{ "ModuleRelativePath", "Public/SBZDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZDamageType_Statics::NewProp_EnvironmentHits = { "EnvironmentHits", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDamageType, EnvironmentHits), METADATA_PARAMS(Z_Construct_UClass_USBZDamageType_Statics::NewProp_EnvironmentHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageType_Statics::NewProp_EnvironmentHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageType_Statics::NewProp_DodgeAbsorption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageType" },
		{ "ModuleRelativePath", "Public/SBZDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZDamageType_Statics::NewProp_DodgeAbsorption = { "DodgeAbsorption", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDamageType, DodgeAbsorption), METADATA_PARAMS(Z_Construct_UClass_USBZDamageType_Statics::NewProp_DodgeAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageType_Statics::NewProp_DodgeAbsorption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsThrowableProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageType" },
		{ "ModuleRelativePath", "Public/SBZDamageType.h" },
	};
#endif
	void Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsThrowableProjectile_SetBit(void* Obj)
	{
		((USBZDamageType*)Obj)->bIsThrowableProjectile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsThrowableProjectile = { "bIsThrowableProjectile", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDamageType), &Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsThrowableProjectile_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsThrowableProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsThrowableProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsHurtAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDamageType" },
		{ "ModuleRelativePath", "Public/SBZDamageType.h" },
	};
#endif
	void Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsHurtAllowed_SetBit(void* Obj)
	{
		((USBZDamageType*)Obj)->bIsHurtAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsHurtAllowed = { "bIsHurtAllowed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDamageType), &Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsHurtAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsHurtAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsHurtAllowed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDamageType_Statics::NewProp_TagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDamageType_Statics::NewProp_EnvironmentHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDamageType_Statics::NewProp_DodgeAbsorption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsThrowableProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDamageType_Statics::NewProp_bIsHurtAllowed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDamageType_Statics::ClassParams = {
		&USBZDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageType_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDamageType, 4037413338);
	template<> STARBREEZE_API UClass* StaticClass<USBZDamageType>()
	{
		return USBZDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDamageType(Z_Construct_UClass_USBZDamageType, &USBZDamageType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
