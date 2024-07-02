// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZZiplineMotor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZZiplineMotor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZiplineMotor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZZiplineMotor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCosmeticProp();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZZiplinerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCableComponent_NoRegister();
// End Cross Module References
	void ASBZZiplineMotor::StaticRegisterNativesASBZZiplineMotor()
	{
	}
	UClass* Z_Construct_UClass_ASBZZiplineMotor_NoRegister()
	{
		return ASBZZiplineMotor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZZiplineMotor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AheadOffsetFromZipLiner_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AheadOffsetFromZipLiner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAheadOffsetFromZipLiner_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalAheadOffsetFromZipLiner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetFromZipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetFromZipLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZipLiner_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ZipLiner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZZiplineMotor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZCosmeticProp,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZiplineMotor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZZiplineMotor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineMotor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_AheadOffsetFromZipLiner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineMotor" },
		{ "ModuleRelativePath", "Public/SBZZiplineMotor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_AheadOffsetFromZipLiner = { "AheadOffsetFromZipLiner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZiplineMotor, AheadOffsetFromZipLiner), METADATA_PARAMS(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_AheadOffsetFromZipLiner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_AheadOffsetFromZipLiner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_VerticalAheadOffsetFromZipLiner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineMotor" },
		{ "ModuleRelativePath", "Public/SBZZiplineMotor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_VerticalAheadOffsetFromZipLiner = { "VerticalAheadOffsetFromZipLiner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZiplineMotor, VerticalAheadOffsetFromZipLiner), METADATA_PARAMS(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_VerticalAheadOffsetFromZipLiner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_VerticalAheadOffsetFromZipLiner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_OffsetFromZipLine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineMotor" },
		{ "ModuleRelativePath", "Public/SBZZiplineMotor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_OffsetFromZipLine = { "OffsetFromZipLine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZiplineMotor, OffsetFromZipLine), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_OffsetFromZipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_OffsetFromZipLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_ZipLiner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineMotor" },
		{ "ModuleRelativePath", "Public/SBZZiplineMotor.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_ZipLiner = { "ZipLiner", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZiplineMotor, ZipLiner), Z_Construct_UClass_USBZZiplinerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_ZipLiner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_ZipLiner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_CableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZZiplineMotor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZZiplineMotor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_CableComponent = { "CableComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZZiplineMotor, CableComponent), Z_Construct_UClass_USBZCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_CableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_CableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZZiplineMotor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_AheadOffsetFromZipLiner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_VerticalAheadOffsetFromZipLiner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_OffsetFromZipLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_ZipLiner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZZiplineMotor_Statics::NewProp_CableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZZiplineMotor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZZiplineMotor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZZiplineMotor_Statics::ClassParams = {
		&ASBZZiplineMotor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZZiplineMotor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZiplineMotor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZZiplineMotor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZZiplineMotor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZZiplineMotor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZZiplineMotor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZZiplineMotor, 945622714);
	template<> STARBREEZE_API UClass* StaticClass<ASBZZiplineMotor>()
	{
		return ASBZZiplineMotor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZZiplineMotor(Z_Construct_UClass_ASBZZiplineMotor, &ASBZZiplineMotor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZZiplineMotor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZZiplineMotor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
