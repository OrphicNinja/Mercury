// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteNetworkUtilities/Public/IpConnectionAccelByte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpConnectionAccelByte() {}
// Cross Module References
	ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpConnectionAccelByte_NoRegister();
	ACCELBYTENETWORKUTILITIES_API UClass* Z_Construct_UClass_UIpConnectionAccelByte();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	UPackage* Z_Construct_UPackage__Script_AccelByteNetworkUtilities();
// End Cross Module References
	void UIpConnectionAccelByte::StaticRegisterNativesUIpConnectionAccelByte()
	{
	}
	UClass* Z_Construct_UClass_UIpConnectionAccelByte_NoRegister()
	{
		return UIpConnectionAccelByte::StaticClass();
	}
	struct Z_Construct_UClass_UIpConnectionAccelByte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIpConnectionAccelByte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteNetworkUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpConnectionAccelByte_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IpConnectionAccelByte.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IpConnectionAccelByte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIpConnectionAccelByte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpConnectionAccelByte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIpConnectionAccelByte_Statics::ClassParams = {
		&UIpConnectionAccelByte::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIpConnectionAccelByte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnectionAccelByte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIpConnectionAccelByte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIpConnectionAccelByte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIpConnectionAccelByte, 2989623964);
	template<> ACCELBYTENETWORKUTILITIES_API UClass* StaticClass<UIpConnectionAccelByte>()
	{
		return UIpConnectionAccelByte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIpConnectionAccelByte(Z_Construct_UClass_UIpConnectionAccelByte, &UIpConnectionAccelByte::StaticClass, TEXT("/Script/AccelByteNetworkUtilities"), TEXT("UIpConnectionAccelByte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIpConnectionAccelByte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
