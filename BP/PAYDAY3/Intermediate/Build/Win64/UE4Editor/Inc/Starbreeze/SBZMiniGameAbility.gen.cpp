// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMiniGameAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMiniGameAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMiniGameAbility();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	void USBZMiniGameAbility::StaticRegisterNativesUSBZMiniGameAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZMiniGameAbility_NoRegister()
	{
		return USBZMiniGameAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZMiniGameAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinningParticipant_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WinningParticipant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMiniGameAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMiniGameAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMiniGameAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMiniGameAbility_Statics::NewProp_WinningParticipant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMiniGameAbility" },
		{ "ModuleRelativePath", "Public/SBZMiniGameAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMiniGameAbility_Statics::NewProp_WinningParticipant = { "WinningParticipant", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMiniGameAbility, WinningParticipant), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameAbility_Statics::NewProp_WinningParticipant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameAbility_Statics::NewProp_WinningParticipant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMiniGameAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMiniGameAbility_Statics::NewProp_WinningParticipant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMiniGameAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMiniGameAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMiniGameAbility_Statics::ClassParams = {
		&USBZMiniGameAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZMiniGameAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMiniGameAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMiniGameAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMiniGameAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMiniGameAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMiniGameAbility, 2066755644);
	template<> STARBREEZE_API UClass* StaticClass<USBZMiniGameAbility>()
	{
		return USBZMiniGameAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMiniGameAbility(Z_Construct_UClass_USBZMiniGameAbility, &USBZMiniGameAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMiniGameAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMiniGameAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
