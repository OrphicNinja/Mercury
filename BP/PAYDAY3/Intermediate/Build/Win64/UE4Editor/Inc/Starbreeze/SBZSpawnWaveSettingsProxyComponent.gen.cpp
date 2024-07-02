// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnWaveSettingsProxyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnWaveSettingsProxyComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSpawnWaveManagerDifficultySettings();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDifficulty();
// End Cross Module References
	void USBZSpawnWaveSettingsProxyComponent::StaticRegisterNativesUSBZSpawnWaveSettingsProxyComponent()
	{
	}
	UClass* Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_NoRegister()
	{
		return USBZSpawnWaveSettingsProxyComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearCountTypeOnAssigned_MetaData[];
#endif
		static void NewProp_bClearCountTypeOnAssigned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearCountTypeOnAssigned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearCountTypeOnUnassigned_MetaData[];
#endif
		static void NewProp_bClearCountTypeOnUnassigned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearCountTypeOnUnassigned;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifficultyToSettingsMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifficultyToSettingsMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DifficultyToSettingsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyToSettingsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DifficultyToSettingsMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSpawnWaveSettingsProxyComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettingsProxyComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnAssigned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettingsProxyComponent" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettingsProxyComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnAssigned_SetBit(void* Obj)
	{
		((USBZSpawnWaveSettingsProxyComponent*)Obj)->bClearCountTypeOnAssigned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnAssigned = { "bClearCountTypeOnAssigned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSpawnWaveSettingsProxyComponent), &Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnAssigned_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnAssigned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnAssigned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnUnassigned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettingsProxyComponent" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettingsProxyComponent.h" },
	};
#endif
	void Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnUnassigned_SetBit(void* Obj)
	{
		((USBZSpawnWaveSettingsProxyComponent*)Obj)->bClearCountTypeOnUnassigned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnUnassigned = { "bClearCountTypeOnUnassigned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSpawnWaveSettingsProxyComponent), &Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnUnassigned_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnUnassigned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnUnassigned_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_ValueProp = { "DifficultyToSettingsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZSpawnWaveManagerDifficultySettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_Key_KeyProp = { "DifficultyToSettingsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDifficulty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnWaveSettingsProxyComponent" },
		{ "ModuleRelativePath", "Public/SBZSpawnWaveSettingsProxyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap = { "DifficultyToSettingsMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnWaveSettingsProxyComponent, DifficultyToSettingsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnAssigned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_bClearCountTypeOnUnassigned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::NewProp_DifficultyToSettingsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSpawnWaveSettingsProxyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::ClassParams = {
		&USBZSpawnWaveSettingsProxyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnWaveSettingsProxyComponent, 202532271);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnWaveSettingsProxyComponent>()
	{
		return USBZSpawnWaveSettingsProxyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnWaveSettingsProxyComponent(Z_Construct_UClass_USBZSpawnWaveSettingsProxyComponent, &USBZSpawnWaveSettingsProxyComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnWaveSettingsProxyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnWaveSettingsProxyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
