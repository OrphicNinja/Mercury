// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCarryType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCarryType() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarryType_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCarryType();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZControlsReference();
// End Cross Module References
	void USBZCarryType::StaticRegisterNativesUSBZCarryType()
	{
	}
	UClass* Z_Construct_UClass_USBZCarryType_NoRegister()
	{
		return USBZCarryType::StaticClass();
	}
	struct Z_Construct_UClass_USBZCarryType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CarryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarryIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CarryIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlsReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlsReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCarryType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarryType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCarryType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCarryType.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarryType" },
		{ "ModuleRelativePath", "Public/SBZCarryType.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryName = { "CarryName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCarryType, CarryName), METADATA_PARAMS(Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarryType" },
		{ "ModuleRelativePath", "Public/SBZCarryType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryIcon = { "CarryIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCarryType, CarryIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCarryType_Statics::NewProp_ControlsReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCarryType" },
		{ "ModuleRelativePath", "Public/SBZCarryType.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCarryType_Statics::NewProp_ControlsReference = { "ControlsReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCarryType, ControlsReference), Z_Construct_UScriptStruct_FSBZControlsReference, METADATA_PARAMS(Z_Construct_UClass_USBZCarryType_Statics::NewProp_ControlsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarryType_Statics::NewProp_ControlsReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCarryType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCarryType_Statics::NewProp_CarryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCarryType_Statics::NewProp_ControlsReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCarryType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCarryType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCarryType_Statics::ClassParams = {
		&USBZCarryType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCarryType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarryType_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCarryType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCarryType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCarryType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCarryType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCarryType, 1917835322);
	template<> STARBREEZE_API UClass* StaticClass<USBZCarryType>()
	{
		return USBZCarryType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCarryType(Z_Construct_UClass_USBZCarryType, &USBZCarryType::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCarryType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCarryType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
