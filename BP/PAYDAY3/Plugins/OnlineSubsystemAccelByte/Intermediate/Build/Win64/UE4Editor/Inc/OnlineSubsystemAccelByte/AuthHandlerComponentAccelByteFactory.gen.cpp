// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemAccelByte/Public/AuthHandlerComponentAccelByteFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthHandlerComponentAccelByteFactory() {}
// Cross Module References
	ONLINESUBSYSTEMACCELBYTE_API UClass* Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_NoRegister();
	ONLINESUBSYSTEMACCELBYTE_API UClass* Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemAccelByte();
// End Cross Module References
	void UAuthHandlerComponentAccelByteFactory::StaticRegisterNativesUAuthHandlerComponentAccelByteFactory()
	{
	}
	UClass* Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_NoRegister()
	{
		return UAuthHandlerComponentAccelByteFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemAccelByte,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AuthHandlerComponentAccelByteFactory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AuthHandlerComponentAccelByteFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthHandlerComponentAccelByteFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics::ClassParams = {
		&UAuthHandlerComponentAccelByteFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthHandlerComponentAccelByteFactory, 2091775379);
	template<> ONLINESUBSYSTEMACCELBYTE_API UClass* StaticClass<UAuthHandlerComponentAccelByteFactory>()
	{
		return UAuthHandlerComponentAccelByteFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthHandlerComponentAccelByteFactory(Z_Construct_UClass_UAuthHandlerComponentAccelByteFactory, &UAuthHandlerComponentAccelByteFactory::StaticClass, TEXT("/Script/OnlineSubsystemAccelByte"), TEXT("UAuthHandlerComponentAccelByteFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthHandlerComponentAccelByteFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
