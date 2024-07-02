// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFootContactNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFootContactNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFootContactNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFootContactNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFootType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFootContactIntensity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USBZFootContactNotify::StaticRegisterNativesUSBZFootContactNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZFootContactNotify_NoRegister()
	{
		return USBZFootContactNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZFootContactNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FootType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideIntensity_MetaData[];
#endif
		static void NewProp_bOverrideIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideIntensity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootContactIntensityOverride_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootContactIntensityOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FootContactIntensityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootContactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootContactVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFootContactNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFootContactNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZFootContactNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFootContactNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFootContactNotify" },
		{ "ModuleRelativePath", "Public/SBZFootContactNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootType = { "FootType", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFootContactNotify, FootType), Z_Construct_UEnum_Starbreeze_ESBZFootType, METADATA_PARAMS(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_bOverrideIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFootContactNotify" },
		{ "ModuleRelativePath", "Public/SBZFootContactNotify.h" },
	};
#endif
	void Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_bOverrideIntensity_SetBit(void* Obj)
	{
		((USBZFootContactNotify*)Obj)->bOverrideIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_bOverrideIntensity = { "bOverrideIntensity", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZFootContactNotify), &Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_bOverrideIntensity_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_bOverrideIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_bOverrideIntensity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactIntensityOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactIntensityOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFootContactNotify" },
		{ "ModuleRelativePath", "Public/SBZFootContactNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactIntensityOverride = { "FootContactIntensityOverride", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFootContactNotify, FootContactIntensityOverride), Z_Construct_UEnum_Starbreeze_ESBZFootContactIntensity, METADATA_PARAMS(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactIntensityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactIntensityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFootContactNotify" },
		{ "ModuleRelativePath", "Public/SBZFootContactNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactVelocity = { "FootContactVelocity", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFootContactNotify, FootContactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFootContactNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_bOverrideIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactIntensityOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactIntensityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFootContactNotify_Statics::NewProp_FootContactVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFootContactNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFootContactNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFootContactNotify_Statics::ClassParams = {
		&USBZFootContactNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZFootContactNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFootContactNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFootContactNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFootContactNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFootContactNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFootContactNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFootContactNotify, 2427984106);
	template<> STARBREEZE_API UClass* StaticClass<USBZFootContactNotify>()
	{
		return USBZFootContactNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFootContactNotify(Z_Construct_UClass_USBZFootContactNotify, &USBZFootContactNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFootContactNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFootContactNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
