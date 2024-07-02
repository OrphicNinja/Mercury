// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_CrewAIStealthMarking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_CrewAIStealthMarking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthMarking();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTService_CrewAIStealthMarking::StaticRegisterNativesUSBZBTService_CrewAIStealthMarking()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_NoRegister()
	{
		return USBZBTService_CrewAIStealthMarking::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_CrewAIStealthMarking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_CrewAIStealthMarking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_CrewAIStealthMarking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics::ClassParams = {
		&USBZBTService_CrewAIStealthMarking::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_CrewAIStealthMarking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_CrewAIStealthMarking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_CrewAIStealthMarking, 3053110738);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_CrewAIStealthMarking>()
	{
		return USBZBTService_CrewAIStealthMarking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_CrewAIStealthMarking(Z_Construct_UClass_USBZBTService_CrewAIStealthMarking, &USBZBTService_CrewAIStealthMarking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_CrewAIStealthMarking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_CrewAIStealthMarking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
