// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_DroneDespawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_DroneDespawn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_DroneDespawn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_DroneDespawn();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_AirMoveTo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_DroneDespawn::StaticRegisterNativesUSBZBTTask_DroneDespawn()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_DroneDespawn_NoRegister()
	{
		return USBZBTTask_DroneDespawn::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnSplineMaxDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DespawnSplineMaxDist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBTTask_AirMoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_DroneDespawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_DroneDespawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::NewProp_DespawnSplineMaxDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_DroneDespawn" },
		{ "ModuleRelativePath", "Public/SBZBTTask_DroneDespawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::NewProp_DespawnSplineMaxDist = { "DespawnSplineMaxDist", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_DroneDespawn, DespawnSplineMaxDist), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::NewProp_DespawnSplineMaxDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::NewProp_DespawnSplineMaxDist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::NewProp_DespawnSplineMaxDist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_DroneDespawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::ClassParams = {
		&USBZBTTask_DroneDespawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_DroneDespawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_DroneDespawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_DroneDespawn, 3222244067);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_DroneDespawn>()
	{
		return USBZBTTask_DroneDespawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_DroneDespawn(Z_Construct_UClass_USBZBTTask_DroneDespawn, &USBZBTTask_DroneDespawn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_DroneDespawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_DroneDespawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif