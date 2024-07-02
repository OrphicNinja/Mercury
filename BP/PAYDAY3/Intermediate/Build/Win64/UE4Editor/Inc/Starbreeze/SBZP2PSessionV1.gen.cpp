// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZP2PSessionV1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZP2PSessionV1() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZP2PSessionV1_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZP2PSessionV1();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZP2PSession();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZP2PSessionV1::StaticRegisterNativesUSBZP2PSessionV1()
	{
	}
	UClass* Z_Construct_UClass_USBZP2PSessionV1_NoRegister()
	{
		return USBZP2PSessionV1::StaticClass();
	}
	struct Z_Construct_UClass_USBZP2PSessionV1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZP2PSessionV1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZP2PSession,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZP2PSessionV1_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZP2PSessionV1.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZP2PSessionV1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZP2PSessionV1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZP2PSessionV1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZP2PSessionV1_Statics::ClassParams = {
		&USBZP2PSessionV1::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZP2PSessionV1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZP2PSessionV1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZP2PSessionV1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZP2PSessionV1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZP2PSessionV1, 2941238980);
	template<> STARBREEZE_API UClass* StaticClass<USBZP2PSessionV1>()
	{
		return USBZP2PSessionV1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZP2PSessionV1(Z_Construct_UClass_USBZP2PSessionV1, &USBZP2PSessionV1::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZP2PSessionV1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZP2PSessionV1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
