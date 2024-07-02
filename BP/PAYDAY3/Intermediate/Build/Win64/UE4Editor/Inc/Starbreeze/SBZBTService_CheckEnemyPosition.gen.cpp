// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_CheckEnemyPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_CheckEnemyPosition() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CheckEnemyPosition_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_CheckEnemyPosition();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTService_CheckEnemyPosition::StaticRegisterNativesUSBZBTService_CheckEnemyPosition()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_CheckEnemyPosition_NoRegister()
	{
		return USBZBTService_CheckEnemyPosition::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_CheckEnemyPosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_CheckEnemyPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_CheckEnemyPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics::ClassParams = {
		&USBZBTService_CheckEnemyPosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_CheckEnemyPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_CheckEnemyPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_CheckEnemyPosition, 427017527);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_CheckEnemyPosition>()
	{
		return USBZBTService_CheckEnemyPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_CheckEnemyPosition(Z_Construct_UClass_USBZBTService_CheckEnemyPosition, &USBZBTService_CheckEnemyPosition::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_CheckEnemyPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_CheckEnemyPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
