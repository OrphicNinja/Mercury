// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGlobalModifiers.h"
#include "Starbreeze/Public/PD3HeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGlobalModifiers() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGlobalModifiers_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGlobalModifiers();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZGlobalModifiers::StaticRegisterNativesUSBZGlobalModifiers()
	{
	}
	UClass* Z_Construct_UClass_USBZGlobalModifiers_NoRegister()
	{
		return USBZGlobalModifiers::StaticClass();
	}
	struct Z_Construct_UClass_USBZGlobalModifiers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModifierValues_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifierValues_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModifierValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGlobalModifiers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGlobalModifiers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGlobalModifiers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGlobalModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues_ValueProp = { "ModifierValues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues_Key_KeyProp = { "ModifierValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGlobalModifiers" },
		{ "ModuleRelativePath", "Public/SBZGlobalModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues = { "ModifierValues", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGlobalModifiers, ModifierValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGlobalModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGlobalModifiers_Statics::NewProp_ModifierValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGlobalModifiers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGlobalModifiers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGlobalModifiers_Statics::ClassParams = {
		&USBZGlobalModifiers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGlobalModifiers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGlobalModifiers_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGlobalModifiers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGlobalModifiers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGlobalModifiers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGlobalModifiers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGlobalModifiers, 1172613469);
	template<> STARBREEZE_API UClass* StaticClass<USBZGlobalModifiers>()
	{
		return USBZGlobalModifiers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGlobalModifiers(Z_Construct_UClass_USBZGlobalModifiers, &USBZGlobalModifiers::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGlobalModifiers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGlobalModifiers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
