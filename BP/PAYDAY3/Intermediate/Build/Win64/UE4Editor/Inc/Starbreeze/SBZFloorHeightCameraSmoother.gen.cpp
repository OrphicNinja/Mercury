// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFloorHeightCameraSmoother.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFloorHeightCameraSmoother() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFloorHeightCameraSmoother_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFloorHeightCameraSmoother();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZFloorHeightCameraSmoother::StaticRegisterNativesUSBZFloorHeightCameraSmoother()
	{
	}
	UClass* Z_Construct_UClass_USBZFloorHeightCameraSmoother_NoRegister()
	{
		return USBZFloorHeightCameraSmoother::StaticClass();
	}
	struct Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFloorHeightCameraSmoother.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFloorHeightCameraSmoother.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFloorHeightCameraSmoother" },
		{ "ModuleRelativePath", "Public/SBZFloorHeightCameraSmoother.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFloorHeightCameraSmoother, InterpSpeed), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_CharacterSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFloorHeightCameraSmoother" },
		{ "ModuleRelativePath", "Public/SBZFloorHeightCameraSmoother.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_CharacterSpeed = { "CharacterSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFloorHeightCameraSmoother, CharacterSpeed), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_CharacterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_CharacterSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::NewProp_CharacterSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFloorHeightCameraSmoother>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::ClassParams = {
		&USBZFloorHeightCameraSmoother::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFloorHeightCameraSmoother()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFloorHeightCameraSmoother_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFloorHeightCameraSmoother, 3453597454);
	template<> STARBREEZE_API UClass* StaticClass<USBZFloorHeightCameraSmoother>()
	{
		return USBZFloorHeightCameraSmoother::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFloorHeightCameraSmoother(Z_Construct_UClass_USBZFloorHeightCameraSmoother, &USBZFloorHeightCameraSmoother::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFloorHeightCameraSmoother"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFloorHeightCameraSmoother);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
