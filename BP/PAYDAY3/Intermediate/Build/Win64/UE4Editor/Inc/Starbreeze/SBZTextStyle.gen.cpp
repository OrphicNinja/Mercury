// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTextStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTextStyle() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTextStyle_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTextStyle();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZColorStyle_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void USBZTextStyle::StaticRegisterNativesUSBZTextStyle()
	{
	}
	UClass* Z_Construct_UClass_USBZTextStyle_NoRegister()
	{
		return USBZTextStyle::StaticClass();
	}
	struct Z_Construct_UClass_USBZTextStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShadows_MetaData[];
#endif
		static void NewProp_bEnableShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTextStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZTextStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTextStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Font_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextStyle" },
		{ "ModuleRelativePath", "Public/SBZTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTextStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Margin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextStyle" },
		{ "ModuleRelativePath", "Public/SBZTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTextStyle, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Margin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextStyle_Statics::NewProp_bEnableShadows_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextStyle" },
		{ "ModuleRelativePath", "Public/SBZTextStyle.h" },
	};
#endif
	void Z_Construct_UClass_USBZTextStyle_Statics::NewProp_bEnableShadows_SetBit(void* Obj)
	{
		((USBZTextStyle*)Obj)->bEnableShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZTextStyle_Statics::NewProp_bEnableShadows = { "bEnableShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZTextStyle), &Z_Construct_UClass_USBZTextStyle_Statics::NewProp_bEnableShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_bEnableShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_bEnableShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextStyle" },
		{ "ModuleRelativePath", "Public/SBZTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTextStyle, ShadowColor), Z_Construct_UClass_USBZColorStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextStyle" },
		{ "ModuleRelativePath", "Public/SBZTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTextStyle, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTextStyle_Statics::NewProp_LineHeightPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZTextStyle" },
		{ "ModuleRelativePath", "Public/SBZTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZTextStyle_Statics::NewProp_LineHeightPercentage = { "LineHeightPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZTextStyle, LineHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_LineHeightPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::NewProp_LineHeightPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextStyle_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextStyle_Statics::NewProp_bEnableShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextStyle_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZTextStyle_Statics::NewProp_LineHeightPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTextStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZTextStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTextStyle_Statics::ClassParams = {
		&USBZTextStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZTextStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZTextStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTextStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTextStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTextStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTextStyle, 4053324651);
	template<> STARBREEZE_API UClass* StaticClass<USBZTextStyle>()
	{
		return USBZTextStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTextStyle(Z_Construct_UClass_USBZTextStyle, &USBZTextStyle::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTextStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTextStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
