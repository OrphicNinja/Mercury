// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMatchmakingAccelByte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMatchmakingAccelByte() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingAccelByte_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmakingAccelByte();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZMatchmakingAccelByte::StaticRegisterNativesUSBZMatchmakingAccelByte()
	{
	}
	UClass* Z_Construct_UClass_USBZMatchmakingAccelByte_NoRegister()
	{
		return USBZMatchmakingAccelByte::StaticClass();
	}
	struct Z_Construct_UClass_USBZMatchmakingAccelByte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMatchmakingAccelByte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMatchmaking,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMatchmakingAccelByte_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMatchmakingAccelByte.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMatchmakingAccelByte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMatchmakingAccelByte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMatchmakingAccelByte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMatchmakingAccelByte_Statics::ClassParams = {
		&USBZMatchmakingAccelByte::StaticClass,
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
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMatchmakingAccelByte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMatchmakingAccelByte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMatchmakingAccelByte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMatchmakingAccelByte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMatchmakingAccelByte, 2036917961);
	template<> STARBREEZE_API UClass* StaticClass<USBZMatchmakingAccelByte>()
	{
		return USBZMatchmakingAccelByte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMatchmakingAccelByte(Z_Construct_UClass_USBZMatchmakingAccelByte, &USBZMatchmakingAccelByte::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMatchmakingAccelByte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMatchmakingAccelByte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
