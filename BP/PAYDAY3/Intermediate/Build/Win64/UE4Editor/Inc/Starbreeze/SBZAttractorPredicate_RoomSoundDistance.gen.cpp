// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAttractorPredicate_RoomSoundDistance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAttractorPredicate_RoomSoundDistance() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAttractorPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAttractorPredicate_RoomSoundDistance::StaticRegisterNativesUSBZAttractorPredicate_RoomSoundDistance()
	{
	}
	UClass* Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_NoRegister()
	{
		return USBZAttractorPredicate_RoomSoundDistance::StaticClass();
	}
	struct Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAttractorPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAttractorPredicate_RoomSoundDistance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAttractorPredicate_RoomSoundDistance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAttractorPredicate_RoomSoundDistance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics::ClassParams = {
		&USBZAttractorPredicate_RoomSoundDistance::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAttractorPredicate_RoomSoundDistance, 1631282309);
	template<> STARBREEZE_API UClass* StaticClass<USBZAttractorPredicate_RoomSoundDistance>()
	{
		return USBZAttractorPredicate_RoomSoundDistance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAttractorPredicate_RoomSoundDistance(Z_Construct_UClass_USBZAttractorPredicate_RoomSoundDistance, &USBZAttractorPredicate_RoomSoundDistance::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAttractorPredicate_RoomSoundDistance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAttractorPredicate_RoomSoundDistance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
