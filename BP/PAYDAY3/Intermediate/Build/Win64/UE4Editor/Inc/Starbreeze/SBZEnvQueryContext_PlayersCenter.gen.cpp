// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryContext_PlayersCenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryContext_PlayersCenter() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryContext_PlayersCenter::StaticRegisterNativesUSBZEnvQueryContext_PlayersCenter()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_NoRegister()
	{
		return USBZEnvQueryContext_PlayersCenter::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryContext_PlayersCenter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryContext_PlayersCenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryContext_PlayersCenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics::ClassParams = {
		&USBZEnvQueryContext_PlayersCenter::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryContext_PlayersCenter, 593016626);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryContext_PlayersCenter>()
	{
		return USBZEnvQueryContext_PlayersCenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryContext_PlayersCenter(Z_Construct_UClass_USBZEnvQueryContext_PlayersCenter, &USBZEnvQueryContext_PlayersCenter::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryContext_PlayersCenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryContext_PlayersCenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
