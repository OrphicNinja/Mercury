// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/IpNetDriverAccelByte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpNetDriverAccelByte() {}
// Cross Module References
	ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpNetDriverAccelByte_NoRegister();
	ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpNetDriverAccelByte();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
// End Cross Module References
	void UIpNetDriverAccelByte::StaticRegisterNativesUIpNetDriverAccelByte()
	{
	}
	UClass* Z_Construct_UClass_UIpNetDriverAccelByte_NoRegister()
	{
		return UIpNetDriverAccelByte::StaticClass();
	}
	struct Z_Construct_UClass_UIpNetDriverAccelByte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIpNetDriverAccelByte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriverAccelByte_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IpNetDriverAccelByte.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IpNetDriverAccelByte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIpNetDriverAccelByte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpNetDriverAccelByte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIpNetDriverAccelByte_Statics::ClassParams = {
		&UIpNetDriverAccelByte::StaticClass,
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
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UIpNetDriverAccelByte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriverAccelByte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIpNetDriverAccelByte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIpNetDriverAccelByte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIpNetDriverAccelByte, 4211374982);
	template<> ACCELBYTENETWORKUTILITIES_API UClass* StaticClass<UIpNetDriverAccelByte>()
	{
		return UIpNetDriverAccelByte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIpNetDriverAccelByte(Z_Construct_UClass_UIpNetDriverAccelByte, &UIpNetDriverAccelByte::StaticClass, TEXT("/Script/AccelByteNetworkUtilities"), TEXT("UIpNetDriverAccelByte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIpNetDriverAccelByte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
