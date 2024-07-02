// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_SquadOrderCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_SquadOrderCallback() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_SquadOrderCallback::StaticRegisterNativesUSBZBTDecorator_SquadOrderCallback()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_NoRegister()
	{
		return USBZBTDecorator_SquadOrderCallback::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_SquadOrderCallback.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_SquadOrderCallback.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_SquadOrderCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics::ClassParams = {
		&USBZBTDecorator_SquadOrderCallback::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_SquadOrderCallback, 1554032220);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_SquadOrderCallback>()
	{
		return USBZBTDecorator_SquadOrderCallback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_SquadOrderCallback(Z_Construct_UClass_USBZBTDecorator_SquadOrderCallback, &USBZBTDecorator_SquadOrderCallback::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_SquadOrderCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_SquadOrderCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
