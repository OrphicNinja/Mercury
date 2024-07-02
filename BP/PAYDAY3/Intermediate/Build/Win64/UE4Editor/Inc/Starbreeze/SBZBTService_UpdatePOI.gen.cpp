// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_UpdatePOI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_UpdatePOI() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdatePOI_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdatePOI();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTService_UpdatePOI::StaticRegisterNativesUSBZBTService_UpdatePOI()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_UpdatePOI_NoRegister()
	{
		return USBZBTService_UpdatePOI::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_UpdatePOI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_UpdatePOI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdatePOI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_UpdatePOI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdatePOI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_UpdatePOI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_UpdatePOI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_UpdatePOI_Statics::ClassParams = {
		&USBZBTService_UpdatePOI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdatePOI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdatePOI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_UpdatePOI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_UpdatePOI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_UpdatePOI, 3109183764);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_UpdatePOI>()
	{
		return USBZBTService_UpdatePOI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_UpdatePOI(Z_Construct_UClass_USBZBTService_UpdatePOI, &USBZBTService_UpdatePOI::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_UpdatePOI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_UpdatePOI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
