// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryContext_SquadOrderTargetConnector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryContext_SquadOrderTargetConnector() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryContext_SquadOrderTargetConnector::StaticRegisterNativesUSBZEnvQueryContext_SquadOrderTargetConnector()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_NoRegister()
	{
		return USBZEnvQueryContext_SquadOrderTargetConnector::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryContext_SquadOrderTargetConnector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryContext_SquadOrderTargetConnector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryContext_SquadOrderTargetConnector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics::ClassParams = {
		&USBZEnvQueryContext_SquadOrderTargetConnector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryContext_SquadOrderTargetConnector, 3844015325);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryContext_SquadOrderTargetConnector>()
	{
		return USBZEnvQueryContext_SquadOrderTargetConnector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryContext_SquadOrderTargetConnector(Z_Construct_UClass_USBZEnvQueryContext_SquadOrderTargetConnector, &USBZEnvQueryContext_SquadOrderTargetConnector::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryContext_SquadOrderTargetConnector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryContext_SquadOrderTargetConnector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
