// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReactionPredicate_GlobalCooldown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReactionPredicate_GlobalCooldown() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZReactionPredicate_GlobalCooldown::StaticRegisterNativesUSBZReactionPredicate_GlobalCooldown()
	{
	}
	UClass* Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_NoRegister()
	{
		return USBZReactionPredicate_GlobalCooldown::StaticClass();
	}
	struct Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalCooldownKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GlobalCooldownKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZReactionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReactionPredicate_GlobalCooldown.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_GlobalCooldown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_WaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_GlobalCooldown" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_GlobalCooldown.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_GlobalCooldown, WaitTime), METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_GlobalCooldownKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_GlobalCooldown" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_GlobalCooldown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_GlobalCooldownKey = { "GlobalCooldownKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_GlobalCooldown, GlobalCooldownKey), METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_GlobalCooldownKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_GlobalCooldownKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::NewProp_GlobalCooldownKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReactionPredicate_GlobalCooldown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::ClassParams = {
		&USBZReactionPredicate_GlobalCooldown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReactionPredicate_GlobalCooldown, 2653338304);
	template<> STARBREEZE_API UClass* StaticClass<USBZReactionPredicate_GlobalCooldown>()
	{
		return USBZReactionPredicate_GlobalCooldown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReactionPredicate_GlobalCooldown(Z_Construct_UClass_USBZReactionPredicate_GlobalCooldown, &USBZReactionPredicate_GlobalCooldown::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReactionPredicate_GlobalCooldown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReactionPredicate_GlobalCooldown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
