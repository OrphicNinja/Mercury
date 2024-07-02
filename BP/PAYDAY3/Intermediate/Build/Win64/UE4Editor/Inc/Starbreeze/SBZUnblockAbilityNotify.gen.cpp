// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUnblockAbilityNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUnblockAbilityNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUnblockAbilityNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUnblockAbilityNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZUnblockAbilityNotify::StaticRegisterNativesUSBZUnblockAbilityNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZUnblockAbilityNotify_NoRegister()
	{
		return USBZUnblockAbilityNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZUnblockAbilityNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZUnblockAbilityNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUnblockAbilityNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::NewProp_TagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUnblockAbilityNotify" },
		{ "ModuleRelativePath", "Public/SBZUnblockAbilityNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUnblockAbilityNotify, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::NewProp_TagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::NewProp_TagContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUnblockAbilityNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::ClassParams = {
		&USBZUnblockAbilityNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUnblockAbilityNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUnblockAbilityNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUnblockAbilityNotify, 3140325465);
	template<> STARBREEZE_API UClass* StaticClass<USBZUnblockAbilityNotify>()
	{
		return USBZUnblockAbilityNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUnblockAbilityNotify(Z_Construct_UClass_USBZUnblockAbilityNotify, &USBZUnblockAbilityNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUnblockAbilityNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUnblockAbilityNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
