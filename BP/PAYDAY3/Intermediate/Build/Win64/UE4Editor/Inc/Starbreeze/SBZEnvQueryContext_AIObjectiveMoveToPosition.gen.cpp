// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryContext_AIObjectiveMoveToPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryContext_AIObjectiveMoveToPosition() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryContext_AIObjectiveMoveToPosition::StaticRegisterNativesUSBZEnvQueryContext_AIObjectiveMoveToPosition()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_NoRegister()
	{
		return USBZEnvQueryContext_AIObjectiveMoveToPosition::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryContext_AIObjectiveMoveToPosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryContext_AIObjectiveMoveToPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryContext_AIObjectiveMoveToPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics::ClassParams = {
		&USBZEnvQueryContext_AIObjectiveMoveToPosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryContext_AIObjectiveMoveToPosition, 1721045542);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryContext_AIObjectiveMoveToPosition>()
	{
		return USBZEnvQueryContext_AIObjectiveMoveToPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition(Z_Construct_UClass_USBZEnvQueryContext_AIObjectiveMoveToPosition, &USBZEnvQueryContext_AIObjectiveMoveToPosition::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryContext_AIObjectiveMoveToPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryContext_AIObjectiveMoveToPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
