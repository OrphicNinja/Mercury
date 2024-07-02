// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineDataOutroVariation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineDataOutroVariation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataOutroVariation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataOutroVariation();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZStateMachineDataOutroVariation::StaticRegisterNativesUSBZStateMachineDataOutroVariation()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineDataOutroVariation_NoRegister()
	{
		return USBZStateMachineDataOutroVariation::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineDataOutroVariation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataOutroVariation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineDataOutroVariation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics::ClassParams = {
		&USBZStateMachineDataOutroVariation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineDataOutroVariation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineDataOutroVariation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineDataOutroVariation, 3386856428);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineDataOutroVariation>()
	{
		return USBZStateMachineDataOutroVariation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineDataOutroVariation(Z_Construct_UClass_USBZStateMachineDataOutroVariation, &USBZStateMachineDataOutroVariation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineDataOutroVariation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineDataOutroVariation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
