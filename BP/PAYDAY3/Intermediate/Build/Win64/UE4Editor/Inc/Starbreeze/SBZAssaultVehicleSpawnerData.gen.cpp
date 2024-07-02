// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAssaultVehicleSpawnerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAssaultVehicleSpawnerData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAssaultVehicleSpawnerData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
// End Cross Module References
	void USBZAssaultVehicleSpawnerData::StaticRegisterNativesUSBZAssaultVehicleSpawnerData()
	{
	}
	UClass* Z_Construct_UClass_USBZAssaultVehicleSpawnerData_NoRegister()
	{
		return USBZAssaultVehicleSpawnerData::StaticClass();
	}
	struct Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Vehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumSpawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedPawnTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedPawnTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInitialSpawn_MetaData[];
#endif
		static void NewProp_bUseInitialSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInitialSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSpawnNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialSpawnNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialSpawnOnly_MetaData[];
#endif
		static void NewProp_bInitialSpawnOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialSpawnOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAssaultVehicleSpawnerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAssaultVehicleSpawnerData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_Vehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssaultVehicleSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZAssaultVehicleSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_Vehicle = { "Vehicle", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssaultVehicleSpawnerData, Vehicle), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_Vehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_Vehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_MaxNumSpawns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssaultVehicleSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZAssaultVehicleSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_MaxNumSpawns = { "MaxNumSpawns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssaultVehicleSpawnerData, MaxNumSpawns), METADATA_PARAMS(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_MaxNumSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_MaxNumSpawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_AllowedPawnTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssaultVehicleSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZAssaultVehicleSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_AllowedPawnTypes = { "AllowedPawnTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssaultVehicleSpawnerData, AllowedPawnTypes), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_AllowedPawnTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_AllowedPawnTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bUseInitialSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssaultVehicleSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZAssaultVehicleSpawnerData.h" },
	};
#endif
	void Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bUseInitialSpawn_SetBit(void* Obj)
	{
		((USBZAssaultVehicleSpawnerData*)Obj)->bUseInitialSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bUseInitialSpawn = { "bUseInitialSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAssaultVehicleSpawnerData), &Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bUseInitialSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bUseInitialSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bUseInitialSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_InitialSpawnNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssaultVehicleSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZAssaultVehicleSpawnerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_InitialSpawnNum = { "InitialSpawnNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAssaultVehicleSpawnerData, InitialSpawnNum), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_InitialSpawnNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_InitialSpawnNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bInitialSpawnOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAssaultVehicleSpawnerData" },
		{ "ModuleRelativePath", "Public/SBZAssaultVehicleSpawnerData.h" },
	};
#endif
	void Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bInitialSpawnOnly_SetBit(void* Obj)
	{
		((USBZAssaultVehicleSpawnerData*)Obj)->bInitialSpawnOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bInitialSpawnOnly = { "bInitialSpawnOnly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAssaultVehicleSpawnerData), &Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bInitialSpawnOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bInitialSpawnOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bInitialSpawnOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_Vehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_MaxNumSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_AllowedPawnTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bUseInitialSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_InitialSpawnNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::NewProp_bInitialSpawnOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAssaultVehicleSpawnerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::ClassParams = {
		&USBZAssaultVehicleSpawnerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAssaultVehicleSpawnerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAssaultVehicleSpawnerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAssaultVehicleSpawnerData, 4052921822);
	template<> STARBREEZE_API UClass* StaticClass<USBZAssaultVehicleSpawnerData>()
	{
		return USBZAssaultVehicleSpawnerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAssaultVehicleSpawnerData(Z_Construct_UClass_USBZAssaultVehicleSpawnerData, &USBZAssaultVehicleSpawnerData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAssaultVehicleSpawnerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAssaultVehicleSpawnerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
