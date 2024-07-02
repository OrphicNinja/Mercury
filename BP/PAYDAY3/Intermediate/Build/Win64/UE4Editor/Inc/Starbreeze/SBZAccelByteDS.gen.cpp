// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteDS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteDS() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteDS_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteDS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAccelByteDS::StaticRegisterNativesUSBZAccelByteDS()
	{
	}
	UClass* Z_Construct_UClass_USBZAccelByteDS_NoRegister()
	{
		return USBZAccelByteDS::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteDS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteDS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteDS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteDS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteDS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteDS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteDS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteDS_Statics::ClassParams = {
		&USBZAccelByteDS::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteDS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteDS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteDS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteDS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteDS, 2278348410);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteDS>()
	{
		return USBZAccelByteDS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteDS(Z_Construct_UClass_USBZAccelByteDS, &USBZAccelByteDS::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteDS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteDS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
