// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineDataActionPhase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineDataActionPhase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataActionPhase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataActionPhase();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZStateMachineDataActionPhase::StaticRegisterNativesUSBZStateMachineDataActionPhase()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineDataActionPhase_NoRegister()
	{
		return USBZStateMachineDataActionPhase::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineDataActionPhase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataActionPhase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineDataActionPhase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics::ClassParams = {
		&USBZStateMachineDataActionPhase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineDataActionPhase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineDataActionPhase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineDataActionPhase, 3434878660);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineDataActionPhase>()
	{
		return USBZStateMachineDataActionPhase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineDataActionPhase(Z_Construct_UClass_USBZStateMachineDataActionPhase, &USBZStateMachineDataActionPhase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineDataActionPhase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineDataActionPhase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
