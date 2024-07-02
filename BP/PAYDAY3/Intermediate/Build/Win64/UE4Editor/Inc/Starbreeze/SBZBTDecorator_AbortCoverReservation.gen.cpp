// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_AbortCoverReservation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_AbortCoverReservation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_AbortCoverReservation::StaticRegisterNativesUSBZBTDecorator_AbortCoverReservation()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_NoRegister()
	{
		return USBZBTDecorator_AbortCoverReservation::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_AbortCoverReservation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_AbortCoverReservation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_AbortCoverReservation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics::ClassParams = {
		&USBZBTDecorator_AbortCoverReservation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_AbortCoverReservation, 1138717686);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_AbortCoverReservation>()
	{
		return USBZBTDecorator_AbortCoverReservation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_AbortCoverReservation(Z_Construct_UClass_USBZBTDecorator_AbortCoverReservation, &USBZBTDecorator_AbortCoverReservation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_AbortCoverReservation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_AbortCoverReservation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
