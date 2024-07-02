// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerAttackEventBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerAttackEventBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAttackEventBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerAttackEventBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWorldEventBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZPlayerAttackEventBase::StaticRegisterNativesUSBZPlayerAttackEventBase()
	{
	}
	UClass* Z_Construct_UClass_USBZPlayerAttackEventBase_NoRegister()
	{
		return USBZPlayerAttackEventBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerAttackEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSinceAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeSinceAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWorldEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerAttackEventBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerAttackEventBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAttackEventBase" },
		{ "ModuleRelativePath", "Public/SBZPlayerAttackEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAttackEventBase, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxTimeSinceAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerAttackEventBase" },
		{ "ModuleRelativePath", "Public/SBZPlayerAttackEventBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxTimeSinceAttack = { "MaxTimeSinceAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerAttackEventBase, MaxTimeSinceAttack), METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxTimeSinceAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxTimeSinceAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::NewProp_MaxTimeSinceAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerAttackEventBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::ClassParams = {
		&USBZPlayerAttackEventBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerAttackEventBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerAttackEventBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerAttackEventBase, 1508499839);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerAttackEventBase>()
	{
		return USBZPlayerAttackEventBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerAttackEventBase(Z_Construct_UClass_USBZPlayerAttackEventBase, &USBZPlayerAttackEventBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerAttackEventBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerAttackEventBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
