// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_InformPolice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_InformPolice() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_InformPolice_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_InformPolice();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_InformPolice::StaticRegisterNativesUSBZBTTask_InformPolice()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_InformPolice_NoRegister()
	{
		return USBZBTTask_InformPolice::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_InformPolice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseMaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseMaxRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_InformPolice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_InformPolice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_InformPolice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_InformPolice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_InformPolice_Statics::NewProp_NoiseMaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_InformPolice" },
		{ "ModuleRelativePath", "Public/SBZBTTask_InformPolice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_InformPolice_Statics::NewProp_NoiseMaxRange = { "NoiseMaxRange", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_InformPolice, NoiseMaxRange), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_InformPolice_Statics::NewProp_NoiseMaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_InformPolice_Statics::NewProp_NoiseMaxRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_InformPolice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_InformPolice_Statics::NewProp_NoiseMaxRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_InformPolice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_InformPolice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_InformPolice_Statics::ClassParams = {
		&USBZBTTask_InformPolice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_InformPolice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_InformPolice_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_InformPolice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_InformPolice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_InformPolice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_InformPolice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_InformPolice, 3294036807);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_InformPolice>()
	{
		return USBZBTTask_InformPolice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_InformPolice(Z_Construct_UClass_USBZBTTask_InformPolice, &USBZBTTask_InformPolice::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_InformPolice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_InformPolice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
