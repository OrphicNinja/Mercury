// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/PD3SecuritySettingDataModifiers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePD3SecuritySettingDataModifiers() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SecuritySettingDataModifiers_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SecuritySettingDataModifiers();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3SpawnSquadPawn_NoRegister();
// End Cross Module References
	void UPD3SecuritySettingDataModifiers::StaticRegisterNativesUPD3SecuritySettingDataModifiers()
	{
	}
	UClass* Z_Construct_UClass_UPD3SecuritySettingDataModifiers_NoRegister()
	{
		return UPD3SecuritySettingDataModifiers::StaticClass();
	}
	struct Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwappedSpawnGroups_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwappedSpawnGroups_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwappedSpawnGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SwappedSpawnGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PD3SecuritySettingDataModifiers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PD3SecuritySettingDataModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups_ValueProp = { "SwappedSpawnGroups", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPD3SpawnSquadPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups_Key_KeyProp = { "SwappedSpawnGroups_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPD3SpawnSquadPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PD3SecuritySettingDataModifiers" },
		{ "ModuleRelativePath", "Public/PD3SecuritySettingDataModifiers.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups = { "SwappedSpawnGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPD3SecuritySettingDataModifiers, SwappedSpawnGroups), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::NewProp_SwappedSpawnGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPD3SecuritySettingDataModifiers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::ClassParams = {
		&UPD3SecuritySettingDataModifiers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPD3SecuritySettingDataModifiers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPD3SecuritySettingDataModifiers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPD3SecuritySettingDataModifiers, 2875109530);
	template<> STARBREEZE_API UClass* StaticClass<UPD3SecuritySettingDataModifiers>()
	{
		return UPD3SecuritySettingDataModifiers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPD3SecuritySettingDataModifiers(Z_Construct_UClass_UPD3SecuritySettingDataModifiers, &UPD3SecuritySettingDataModifiers::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UPD3SecuritySettingDataModifiers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPD3SecuritySettingDataModifiers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
