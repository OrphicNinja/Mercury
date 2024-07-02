// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReactionPredicate_CanScream.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReactionPredicate_CanScream() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_CanScream_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate_CanScream();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionPredicate();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZReactionPredicate_CanScream::StaticRegisterNativesUSBZReactionPredicate_CanScream()
	{
	}
	UClass* Z_Construct_UClass_USBZReactionPredicate_CanScream_NoRegister()
	{
		return USBZReactionPredicate_CanScream::StaticClass();
	}
	struct Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreamInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreamInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScreamsPerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxScreamsPerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerScreamDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlayerScreamDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZReactionPredicate,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReactionPredicate_CanScream.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_CanScream.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_ScreamInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_CanScream" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_CanScream.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_ScreamInterval = { "ScreamInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_CanScream, ScreamInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_ScreamInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_ScreamInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxScreamsPerInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_CanScream" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_CanScream.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxScreamsPerInterval = { "MaxScreamsPerInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_CanScream, MaxScreamsPerInterval), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxScreamsPerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxScreamsPerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxPlayerScreamDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReactionPredicate_CanScream" },
		{ "ModuleRelativePath", "Public/SBZReactionPredicate_CanScream.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxPlayerScreamDistance = { "MaxPlayerScreamDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReactionPredicate_CanScream, MaxPlayerScreamDistance), METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxPlayerScreamDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxPlayerScreamDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_ScreamInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxScreamsPerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::NewProp_MaxPlayerScreamDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReactionPredicate_CanScream>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::ClassParams = {
		&USBZReactionPredicate_CanScream::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReactionPredicate_CanScream()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReactionPredicate_CanScream_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReactionPredicate_CanScream, 2698672217);
	template<> STARBREEZE_API UClass* StaticClass<USBZReactionPredicate_CanScream>()
	{
		return USBZReactionPredicate_CanScream::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReactionPredicate_CanScream(Z_Construct_UClass_USBZReactionPredicate_CanScream, &USBZReactionPredicate_CanScream::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReactionPredicate_CanScream"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReactionPredicate_CanScream);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
