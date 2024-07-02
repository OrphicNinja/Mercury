// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryContext_MoveToPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryContext_MoveToPosition() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZEnvQueryContext_MoveToPosition::StaticRegisterNativesUSBZEnvQueryContext_MoveToPosition()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_NoRegister()
	{
		return USBZEnvQueryContext_MoveToPosition::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryContext_MoveToPosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryContext_MoveToPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryContext_MoveToPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics::ClassParams = {
		&USBZEnvQueryContext_MoveToPosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryContext_MoveToPosition, 1036815713);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryContext_MoveToPosition>()
	{
		return USBZEnvQueryContext_MoveToPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryContext_MoveToPosition(Z_Construct_UClass_USBZEnvQueryContext_MoveToPosition, &USBZEnvQueryContext_MoveToPosition::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryContext_MoveToPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryContext_MoveToPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
