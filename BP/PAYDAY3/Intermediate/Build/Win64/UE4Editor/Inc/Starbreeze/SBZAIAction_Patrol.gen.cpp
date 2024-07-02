// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_Patrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_Patrol() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Patrol_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Patrol();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_Order();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIAction_Patrol::StaticRegisterNativesUSBZAIAction_Patrol()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_Patrol_NoRegister()
	{
		return USBZAIAction_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction_Order,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_Patrol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_Patrol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_Patrol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_Patrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_Patrol_Statics::ClassParams = {
		&USBZAIAction_Patrol::StaticClass,
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
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_Patrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_Patrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_Patrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_Patrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_Patrol, 3912348646);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_Patrol>()
	{
		return USBZAIAction_Patrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_Patrol(Z_Construct_UClass_USBZAIAction_Patrol, &USBZAIAction_Patrol::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_Patrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_Patrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
