// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_Crew_CheckCoverSafeness.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_Crew_CheckCoverSafeness() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_Crew_CheckCoverSafeness::StaticRegisterNativesUSBZBTDecorator_Crew_CheckCoverSafeness()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_NoRegister()
	{
		return USBZBTDecorator_Crew_CheckCoverSafeness::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSafenessScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinSafenessScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_Crew_CheckCoverSafeness.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Crew_CheckCoverSafeness.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::NewProp_MinSafenessScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_Crew_CheckCoverSafeness" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Crew_CheckCoverSafeness.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::NewProp_MinSafenessScore = { "MinSafenessScore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_Crew_CheckCoverSafeness, MinSafenessScore), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::NewProp_MinSafenessScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::NewProp_MinSafenessScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::NewProp_MinSafenessScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_Crew_CheckCoverSafeness>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::ClassParams = {
		&USBZBTDecorator_Crew_CheckCoverSafeness::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_Crew_CheckCoverSafeness, 520488221);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_Crew_CheckCoverSafeness>()
	{
		return USBZBTDecorator_Crew_CheckCoverSafeness::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_Crew_CheckCoverSafeness(Z_Construct_UClass_USBZBTDecorator_Crew_CheckCoverSafeness, &USBZBTDecorator_Crew_CheckCoverSafeness::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_Crew_CheckCoverSafeness"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_Crew_CheckCoverSafeness);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
