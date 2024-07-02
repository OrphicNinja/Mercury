// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIUtilityDecider_AIObjectiveSearch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIUtilityDecider_AIObjectiveSearch() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZRoomVolume_NoRegister();
// End Cross Module References
	void USBZAIUtilityDecider_AIObjectiveSearch::StaticRegisterNativesUSBZAIUtilityDecider_AIObjectiveSearch()
	{
	}
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_NoRegister()
	{
		return USBZAIUtilityDecider_AIObjectiveSearch::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoomToSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentRoomToSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRoomBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetRoomBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIUtilityDecider_AIObjectiveSearch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveSearch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_CurrentRoomToSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveSearch" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_CurrentRoomToSearch = { "CurrentRoomToSearch", nullptr, (EPropertyFlags)0x0024080000002005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveSearch, CurrentRoomToSearch), Z_Construct_UClass_ASBZRoomVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_CurrentRoomToSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_CurrentRoomToSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_TargetRoomBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIUtilityDecider_AIObjectiveSearch" },
		{ "ModuleRelativePath", "Public/SBZAIUtilityDecider_AIObjectiveSearch.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_TargetRoomBBKey = { "TargetRoomBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIUtilityDecider_AIObjectiveSearch, TargetRoomBBKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_TargetRoomBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_TargetRoomBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_CurrentRoomToSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::NewProp_TargetRoomBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIUtilityDecider_AIObjectiveSearch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::ClassParams = {
		&USBZAIUtilityDecider_AIObjectiveSearch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIUtilityDecider_AIObjectiveSearch, 752549278);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIUtilityDecider_AIObjectiveSearch>()
	{
		return USBZAIUtilityDecider_AIObjectiveSearch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIUtilityDecider_AIObjectiveSearch(Z_Construct_UClass_USBZAIUtilityDecider_AIObjectiveSearch, &USBZAIUtilityDecider_AIObjectiveSearch::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIUtilityDecider_AIObjectiveSearch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIUtilityDecider_AIObjectiveSearch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
