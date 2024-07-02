// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCivilianManagerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCivilianManagerSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCivilianManagerSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCivilianManagerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnSpawnRequest();
// End Cross Module References
	void USBZCivilianManagerSettings::StaticRegisterNativesUSBZCivilianManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZCivilianManagerSettings_NoRegister()
	{
		return USBZCivilianManagerSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZCivilianManagerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAmountInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnAmountInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAliveCivilians_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAliveCivilians;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnUntilState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnUntilState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnUntilState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentOfCiviliansStaying_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PercentOfCiviliansStaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopStayingInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopStayingInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCivilianManagerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCivilianManagerSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_TickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, TickInterval), METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnAmountInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnAmountInterval = { "SpawnAmountInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, SpawnAmountInterval), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnAmountInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnAmountInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_MaxAliveCivilians_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_MaxAliveCivilians = { "MaxAliveCivilians", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, MaxAliveCivilians), METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_MaxAliveCivilians_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_MaxAliveCivilians_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnUntilState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnUntilState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnUntilState = { "SpawnUntilState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, SpawnUntilState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnUntilState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnUntilState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_CooldownInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_CooldownInterval = { "CooldownInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, CooldownInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_CooldownInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_CooldownInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnRequest = { "SpawnRequest", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, SpawnRequest), Z_Construct_UScriptStruct_FSBZPawnSpawnRequest, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_PercentOfCiviliansStaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_PercentOfCiviliansStaying = { "PercentOfCiviliansStaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, PercentOfCiviliansStaying), METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_PercentOfCiviliansStaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_PercentOfCiviliansStaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_StopStayingInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCivilianManagerSettings" },
		{ "ModuleRelativePath", "Public/SBZCivilianManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_StopStayingInterval = { "StopStayingInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCivilianManagerSettings, StopStayingInterval), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_StopStayingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_StopStayingInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCivilianManagerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_TickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnAmountInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_MaxAliveCivilians,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnUntilState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnUntilState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_CooldownInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_SpawnRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_PercentOfCiviliansStaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCivilianManagerSettings_Statics::NewProp_StopStayingInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCivilianManagerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCivilianManagerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCivilianManagerSettings_Statics::ClassParams = {
		&USBZCivilianManagerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCivilianManagerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCivilianManagerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCivilianManagerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCivilianManagerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCivilianManagerSettings, 1981067289);
	template<> STARBREEZE_API UClass* StaticClass<USBZCivilianManagerSettings>()
	{
		return USBZCivilianManagerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCivilianManagerSettings(Z_Construct_UClass_USBZCivilianManagerSettings, &USBZCivilianManagerSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCivilianManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCivilianManagerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
