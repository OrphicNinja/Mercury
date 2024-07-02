// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoteDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoteDebug() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoteDebug_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoteDebug();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVote();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZVoteDebug::StaticRegisterNativesUSBZVoteDebug()
	{
	}
	UClass* Z_Construct_UClass_USBZVoteDebug_NoRegister()
	{
		return USBZVoteDebug::StaticClass();
	}
	struct Z_Construct_UClass_USBZVoteDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVoteDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZVote,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoteDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVoteDebug.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVoteDebug.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVoteDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVoteDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVoteDebug_Statics::ClassParams = {
		&USBZVoteDebug::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVoteDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoteDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVoteDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVoteDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVoteDebug, 3319547424);
	template<> STARBREEZE_API UClass* StaticClass<USBZVoteDebug>()
	{
		return USBZVoteDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVoteDebug(Z_Construct_UClass_USBZVoteDebug, &USBZVoteDebug::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVoteDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVoteDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
