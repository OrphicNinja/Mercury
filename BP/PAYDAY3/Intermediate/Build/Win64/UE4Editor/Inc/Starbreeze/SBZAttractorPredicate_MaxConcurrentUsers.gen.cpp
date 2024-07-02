// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAttractorPredicate_MaxConcurrentUsers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAttractorPredicate_MaxConcurrentUsers() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAttractorPredicate_MaxConcurrentUsers::StaticRegisterNativesUSBZAttractorPredicate_MaxConcurrentUsers()
	{
	}
	UClass* Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_NoRegister()
	{
		return USBZAttractorPredicate_MaxConcurrentUsers::StaticClass();
	}
	struct Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurentUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurentUsers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAttractorPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAttractorPredicate_MaxConcurrentUsers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate_MaxConcurrentUsers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::NewProp_MaxConcurentUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAttractorPredicate_MaxConcurrentUsers" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate_MaxConcurrentUsers.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::NewProp_MaxConcurentUsers = { "MaxConcurentUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAttractorPredicate_MaxConcurrentUsers, MaxConcurentUsers), METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::NewProp_MaxConcurentUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::NewProp_MaxConcurentUsers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::NewProp_MaxConcurentUsers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAttractorPredicate_MaxConcurrentUsers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::ClassParams = {
		&USBZAttractorPredicate_MaxConcurrentUsers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAttractorPredicate_MaxConcurrentUsers, 4248457473);
	template<> STARBREEZE_API UClass* StaticClass<USBZAttractorPredicate_MaxConcurrentUsers>()
	{
		return USBZAttractorPredicate_MaxConcurrentUsers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAttractorPredicate_MaxConcurrentUsers(Z_Construct_UClass_USBZAttractorPredicate_MaxConcurrentUsers, &USBZAttractorPredicate_MaxConcurrentUsers::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAttractorPredicate_MaxConcurrentUsers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAttractorPredicate_MaxConcurrentUsers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
