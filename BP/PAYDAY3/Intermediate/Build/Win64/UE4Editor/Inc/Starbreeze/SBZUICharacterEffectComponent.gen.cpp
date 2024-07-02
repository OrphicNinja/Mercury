// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZUICharacterEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZUICharacterEffectComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUICharacterEffectComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZUICharacterEffectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime();
// End Cross Module References
	void USBZUICharacterEffectComponent::StaticRegisterNativesUSBZUICharacterEffectComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZUICharacterEffectComponent_NoRegister()
	{
		return USBZUICharacterEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZUICharacterEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterEffectRuntimes_ValueProp;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CharacterEffectRuntimes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEffectRuntimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterEffectRuntimes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZUICharacterEffectComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZUICharacterEffectComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes_ValueProp = { "CharacterEffectRuntimes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZCharacterEffectRuntime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes_Key_KeyProp = { "CharacterEffectRuntimes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZUICharacterEffectComponent" },
		{ "ModuleRelativePath", "Public/SBZUICharacterEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes = { "CharacterEffectRuntimes", nullptr, (EPropertyFlags)0x0040000000002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZUICharacterEffectComponent, CharacterEffectRuntimes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::NewProp_CharacterEffectRuntimes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZUICharacterEffectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::ClassParams = {
		&USBZUICharacterEffectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZUICharacterEffectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZUICharacterEffectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZUICharacterEffectComponent, 3092764566);
	template<> STARBREEZE_API UClass* StaticClass<USBZUICharacterEffectComponent>()
	{
		return USBZUICharacterEffectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZUICharacterEffectComponent(Z_Construct_UClass_USBZUICharacterEffectComponent, &USBZUICharacterEffectComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZUICharacterEffectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZUICharacterEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
