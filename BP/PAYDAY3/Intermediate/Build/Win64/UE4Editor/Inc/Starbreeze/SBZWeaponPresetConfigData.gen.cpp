// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWeaponPresetConfigData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWeaponPresetConfigData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPresetConfigData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWeaponPresetConfigData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInventoryBaseData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZEquippableConfig();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZWeaponPresetModularConfigItem();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZModularPartSlotBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZWeaponPresetConfigData::execGetEquippableConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZEquippableConfig*)Z_Param__Result=P_THIS->GetEquippableConfig();
		P_NATIVE_END;
	}
	void USBZWeaponPresetConfigData::StaticRegisterNativesUSBZWeaponPresetConfigData()
	{
		UClass* Class = USBZWeaponPresetConfigData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEquippableConfig", &USBZWeaponPresetConfigData::execGetEquippableConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics
	{
		struct SBZWeaponPresetConfigData_eventGetEquippableConfig_Parms
		{
			FSBZEquippableConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWeaponPresetConfigData_eventGetEquippableConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWeaponPresetConfigData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWeaponPresetConfigData, nullptr, "GetEquippableConfig", nullptr, nullptr, sizeof(SBZWeaponPresetConfigData_eventGetEquippableConfig_Parms), Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWeaponPresetConfigData_NoRegister()
	{
		return USBZWeaponPresetConfigData::StaticClass();
	}
	struct Z_Construct_UClass_USBZWeaponPresetConfigData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModData_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltEquippableConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltEquippableConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZInventoryBaseData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWeaponPresetConfigData_GetEquippableConfig, "GetEquippableConfig" }, // 518658808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZWeaponPresetConfigData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWeaponPresetConfigData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPresetConfigData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPresetConfigData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPresetConfigData, WeaponData), Z_Construct_UClass_USBZEquippableData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData_ValueProp = { "ModData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZWeaponPresetModularConfigItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData_Key_KeyProp = { "ModData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZModularPartSlotBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPresetConfigData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPresetConfigData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData = { "ModData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPresetConfigData, ModData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_BuiltEquippableConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWeaponPresetConfigData" },
		{ "ModuleRelativePath", "Public/SBZWeaponPresetConfigData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_BuiltEquippableConfig = { "BuiltEquippableConfig", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWeaponPresetConfigData, BuiltEquippableConfig), Z_Construct_UScriptStruct_FSBZEquippableConfig, METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_BuiltEquippableConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_BuiltEquippableConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_ModData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::NewProp_BuiltEquippableConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWeaponPresetConfigData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::ClassParams = {
		&USBZWeaponPresetConfigData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWeaponPresetConfigData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWeaponPresetConfigData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWeaponPresetConfigData, 582997675);
	template<> STARBREEZE_API UClass* StaticClass<USBZWeaponPresetConfigData>()
	{
		return USBZWeaponPresetConfigData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWeaponPresetConfigData(Z_Construct_UClass_USBZWeaponPresetConfigData, &USBZWeaponPresetConfigData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWeaponPresetConfigData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWeaponPresetConfigData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
