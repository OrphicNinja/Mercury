// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavArea_NoPatrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavArea_NoPatrol() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_NoPatrol_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavArea_NoPatrol();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZNavArea_NoPatrol::StaticRegisterNativesUSBZNavArea_NoPatrol()
	{
	}
	UClass* Z_Construct_UClass_USBZNavArea_NoPatrol_NoRegister()
	{
		return USBZNavArea_NoPatrol::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavArea_NoPatrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavArea_NoPatrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavArea_NoPatrol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavArea_NoPatrol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavArea_NoPatrol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavArea_NoPatrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavArea_NoPatrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavArea_NoPatrol_Statics::ClassParams = {
		&USBZNavArea_NoPatrol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNavArea_NoPatrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavArea_NoPatrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavArea_NoPatrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavArea_NoPatrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavArea_NoPatrol, 691246920);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavArea_NoPatrol>()
	{
		return USBZNavArea_NoPatrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavArea_NoPatrol(Z_Construct_UClass_USBZNavArea_NoPatrol, &USBZNavArea_NoPatrol::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavArea_NoPatrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavArea_NoPatrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
