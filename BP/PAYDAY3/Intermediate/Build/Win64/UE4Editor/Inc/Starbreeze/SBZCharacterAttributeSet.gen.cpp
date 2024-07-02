// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterAttributeSet() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAttributeSet_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterAttributeSet();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPawnAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZCharacterAttributeSet::StaticRegisterNativesUSBZCharacterAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_USBZCharacterAttributeSet_NoRegister()
	{
		return USBZCharacterAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPawnAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterAttributeSet_Statics::ClassParams = {
		&USBZCharacterAttributeSet::StaticClass,
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
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterAttributeSet, 1999379274);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterAttributeSet>()
	{
		return USBZCharacterAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterAttributeSet(Z_Construct_UClass_USBZCharacterAttributeSet, &USBZCharacterAttributeSet::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
