// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIActionData_Investigate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIActionData_Investigate() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_Investigate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_Investigate();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USBZAIActionData_Investigate::StaticRegisterNativesUSBZAIActionData_Investigate()
	{
	}
	UClass* Z_Construct_UClass_USBZAIActionData_Investigate_NoRegister()
	{
		return USBZAIActionData_Investigate::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIActionData_Investigate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigateActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvestigateActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIActionData_Investigate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIActionData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_Investigate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIActionData_Investigate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_Investigate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_Investigate_Statics::NewProp_InvestigateActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIActionData_Investigate" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_Investigate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIActionData_Investigate_Statics::NewProp_InvestigateActor = { "InvestigateActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIActionData_Investigate, InvestigateActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_Investigate_Statics::NewProp_InvestigateActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_Investigate_Statics::NewProp_InvestigateActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIActionData_Investigate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIActionData_Investigate_Statics::NewProp_InvestigateActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIActionData_Investigate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIActionData_Investigate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIActionData_Investigate_Statics::ClassParams = {
		&USBZAIActionData_Investigate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIActionData_Investigate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_Investigate_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_Investigate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_Investigate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIActionData_Investigate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIActionData_Investigate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIActionData_Investigate, 724396404);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIActionData_Investigate>()
	{
		return USBZAIActionData_Investigate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIActionData_Investigate(Z_Construct_UClass_USBZAIActionData_Investigate, &USBZAIActionData_Investigate::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIActionData_Investigate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIActionData_Investigate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
