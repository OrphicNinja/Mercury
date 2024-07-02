// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_FollowShield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_FollowShield() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FollowShield_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FollowShield();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIOrder_FollowShield::StaticRegisterNativesUSBZAIOrder_FollowShield()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_FollowShield_NoRegister()
	{
		return USBZAIOrder_FollowShield::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_FollowShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_FollowShield.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowShield.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_AvoidanceOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_FollowShield" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_AvoidanceOverride = { "AvoidanceOverride", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_FollowShield, AvoidanceOverride), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_AvoidanceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_AvoidanceOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_FrictionOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_FollowShield" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FollowShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_FrictionOverride = { "FrictionOverride", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_FollowShield, FrictionOverride), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_FrictionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_FrictionOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_AvoidanceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::NewProp_FrictionOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_FollowShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::ClassParams = {
		&USBZAIOrder_FollowShield::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_FollowShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_FollowShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_FollowShield, 1454704190);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_FollowShield>()
	{
		return USBZAIOrder_FollowShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_FollowShield(Z_Construct_UClass_USBZAIOrder_FollowShield, &USBZAIOrder_FollowShield::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_FollowShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_FollowShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
