// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_ClearBBValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_ClearBBValue() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ClearBBValue_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ClearBBValue();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_ClearBBValue::StaticRegisterNativesUSBZBTTask_ClearBBValue()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_ClearBBValue_NoRegister()
	{
		return USBZBTTask_ClearBBValue::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_ClearBBValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_ClearBBValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_ClearBBValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics::ClassParams = {
		&USBZBTTask_ClearBBValue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_ClearBBValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_ClearBBValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_ClearBBValue, 749191641);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_ClearBBValue>()
	{
		return USBZBTTask_ClearBBValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_ClearBBValue(Z_Construct_UClass_USBZBTTask_ClearBBValue, &USBZBTTask_ClearBBValue::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_ClearBBValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_ClearBBValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
