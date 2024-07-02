// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAttractorPredicate_MinConcurrentUsers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAttractorPredicate_MinConcurrentUsers() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAttractorPredicate_MinConcurrentUsers::StaticRegisterNativesUSBZAttractorPredicate_MinConcurrentUsers()
	{
	}
	UClass* Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_NoRegister()
	{
		return USBZAttractorPredicate_MinConcurrentUsers::StaticClass();
	}
	struct Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinConcurentUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinConcurentUsers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAttractorPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAttractorPredicate_MinConcurrentUsers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate_MinConcurrentUsers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::NewProp_MinConcurentUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorPredicate_MinConcurrentUsers" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate_MinConcurrentUsers.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::NewProp_MinConcurentUsers = { "MinConcurentUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorPredicate_MinConcurrentUsers, MinConcurentUsers), METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::NewProp_MinConcurentUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::NewProp_MinConcurentUsers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::NewProp_MinConcurentUsers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAttractorPredicate_MinConcurrentUsers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::ClassParams = {
		&USBZAttractorPredicate_MinConcurrentUsers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAttractorPredicate_MinConcurrentUsers, 1004592768);
	template<> STARBREEZE_API UClass* StaticClass<USBZAttractorPredicate_MinConcurrentUsers>()
	{
		return USBZAttractorPredicate_MinConcurrentUsers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAttractorPredicate_MinConcurrentUsers(Z_Construct_UClass_USBZAttractorPredicate_MinConcurrentUsers, &USBZAttractorPredicate_MinConcurrentUsers::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAttractorPredicate_MinConcurrentUsers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAttractorPredicate_MinConcurrentUsers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
