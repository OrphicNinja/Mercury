// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFragGrenadeData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFragGrenadeData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFragGrenadeData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFragGrenadeData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGrenadeData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDamageType_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHurtReactionData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister();
// End Cross Module References
	void USBZFragGrenadeData::StaticRegisterNativesUSBZFragGrenadeData()
	{
	}
	UClass* Z_Construct_UClass_USBZFragGrenadeData_NoRegister()
	{
		return USBZFragGrenadeData::StaticClass();
	}
	struct Z_Construct_UClass_USBZFragGrenadeData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FriendlyPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInstigatorPlayerDamageScale_MetaData[];
#endif
		static void NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorPlayerDamageScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorPlayerDamageScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtReactionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HurtReactionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFragGrenadeData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGrenadeData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFragGrenadeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageGameplayEffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageGameplayEffectClass = { "DamageGameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFragGrenadeData, DamageGameplayEffectClass), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageGameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFragGrenadeData, DamageTypeClass), Z_Construct_UClass_USBZDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_FriendlyPlayerDamageScale = { "FriendlyPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFragGrenadeData, FriendlyPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_FriendlyPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeData.h" },
	};
#endif
	void Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit(void* Obj)
	{
		((USBZFragGrenadeData*)Obj)->bUseInstigatorPlayerDamageScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_bUseInstigatorPlayerDamageScale = { "bUseInstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZFragGrenadeData), &Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_bUseInstigatorPlayerDamageScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_bUseInstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_InstigatorPlayerDamageScale = { "InstigatorPlayerDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFragGrenadeData, InstigatorPlayerDamageScale), METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_InstigatorPlayerDamageScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_HurtReactionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFragGrenadeData" },
		{ "ModuleRelativePath", "Public/SBZFragGrenadeData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_HurtReactionData = { "HurtReactionData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFragGrenadeData, HurtReactionData), Z_Construct_UScriptStruct_FSBZHurtReactionData, METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_HurtReactionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_HurtReactionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFragGrenadeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageGameplayEffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_FriendlyPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_bUseInstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_InstigatorPlayerDamageScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFragGrenadeData_Statics::NewProp_HurtReactionData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZFragGrenadeData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZHurtReactionDataInterface_NoRegister, (int32)VTABLE_OFFSET(USBZFragGrenadeData, ISBZHurtReactionDataInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFragGrenadeData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFragGrenadeData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFragGrenadeData_Statics::ClassParams = {
		&USBZFragGrenadeData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZFragGrenadeData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFragGrenadeData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFragGrenadeData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFragGrenadeData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFragGrenadeData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFragGrenadeData, 678390113);
	template<> STARBREEZE_API UClass* StaticClass<USBZFragGrenadeData>()
	{
		return USBZFragGrenadeData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFragGrenadeData(Z_Construct_UClass_USBZFragGrenadeData, &USBZFragGrenadeData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFragGrenadeData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFragGrenadeData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
