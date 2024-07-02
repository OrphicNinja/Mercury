// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_SquadSabotage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_SquadSabotage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_SquadSabotage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_SquadSabotage();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void USBZAIOrder_SquadSabotage::StaticRegisterNativesUSBZAIOrder_SquadSabotage()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_SquadSabotage_NoRegister()
	{
		return USBZAIOrder_SquadSabotage::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotagingMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SabotagingMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder_TacticalMoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_SquadSabotage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SquadSabotage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::NewProp_SabotagingMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SquadSabotage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SquadSabotage.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::NewProp_SabotagingMember = { "SabotagingMember", nullptr, (EPropertyFlags)0x0044000000002005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SquadSabotage, SabotagingMember), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::NewProp_SabotagingMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::NewProp_SabotagingMember_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::NewProp_SabotagingMember,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_SquadSabotage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::ClassParams = {
		&USBZAIOrder_SquadSabotage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_SquadSabotage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_SquadSabotage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_SquadSabotage, 434911323);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_SquadSabotage>()
	{
		return USBZAIOrder_SquadSabotage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_SquadSabotage(Z_Construct_UClass_USBZAIOrder_SquadSabotage, &USBZAIOrder_SquadSabotage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_SquadSabotage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_SquadSabotage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
