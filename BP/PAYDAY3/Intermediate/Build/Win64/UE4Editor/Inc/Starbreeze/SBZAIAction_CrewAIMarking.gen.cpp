// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_CrewAIMarking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_CrewAIMarking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_CrewAIMarking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_CrewAIMarking();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIAction_CrewAIMarking::StaticRegisterNativesUSBZAIAction_CrewAIMarking()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_CrewAIMarking_NoRegister()
	{
		return USBZAIAction_CrewAIMarking::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_CrewAIMarking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_CrewAIMarking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_CrewAIMarking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics::ClassParams = {
		&USBZAIAction_CrewAIMarking::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_CrewAIMarking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_CrewAIMarking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_CrewAIMarking, 3955845580);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_CrewAIMarking>()
	{
		return USBZAIAction_CrewAIMarking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_CrewAIMarking(Z_Construct_UClass_USBZAIAction_CrewAIMarking, &USBZAIAction_CrewAIMarking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_CrewAIMarking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_CrewAIMarking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
