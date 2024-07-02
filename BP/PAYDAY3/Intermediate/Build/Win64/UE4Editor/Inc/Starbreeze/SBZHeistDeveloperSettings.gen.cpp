// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHeistDeveloperSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHeistDeveloperSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHeistDeveloperSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHeistDeveloperSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZHeistDataLevelPair();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STARBREEZE_API UClass* Z_Construct_UClass_UPD3HeistDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZHeistDeveloperSettings::execGetAllHeistData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZHeistDataLevelPair>*)Z_Param__Result=USBZHeistDeveloperSettings::GetAllHeistData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHeistDeveloperSettings::execGetHeistDataFromLevelPath)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_LevelPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3HeistDataAsset**)Z_Param__Result=USBZHeistDeveloperSettings::GetHeistDataFromLevelPath(Z_Param_LevelPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHeistDeveloperSettings::execGetHeistDataFromLevelShortName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ShortName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPD3HeistDataAsset**)Z_Param__Result=USBZHeistDeveloperSettings::GetHeistDataFromLevelShortName(Z_Param_ShortName);
		P_NATIVE_END;
	}
	void USBZHeistDeveloperSettings::StaticRegisterNativesUSBZHeistDeveloperSettings()
	{
		UClass* Class = USBZHeistDeveloperSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllHeistData", &USBZHeistDeveloperSettings::execGetAllHeistData },
			{ "GetHeistDataFromLevelPath", &USBZHeistDeveloperSettings::execGetHeistDataFromLevelPath },
			{ "GetHeistDataFromLevelShortName", &USBZHeistDeveloperSettings::execGetHeistDataFromLevelShortName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics
	{
		struct SBZHeistDeveloperSettings_eventGetAllHeistData_Parms
		{
			TArray<FSBZHeistDataLevelPair> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHeistDataLevelPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeistDeveloperSettings_eventGetAllHeistData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeistDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHeistDeveloperSettings, nullptr, "GetAllHeistData", nullptr, nullptr, sizeof(SBZHeistDeveloperSettings_eventGetAllHeistData_Parms), Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics
	{
		struct SBZHeistDeveloperSettings_eventGetHeistDataFromLevelPath_Parms
		{
			FSoftObjectPath LevelPath;
			UPD3HeistDataAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeistDeveloperSettings_eventGetHeistDataFromLevelPath_Parms, LevelPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeistDeveloperSettings_eventGetHeistDataFromLevelPath_Parms, ReturnValue), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::NewProp_LevelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeistDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHeistDeveloperSettings, nullptr, "GetHeistDataFromLevelPath", nullptr, nullptr, sizeof(SBZHeistDeveloperSettings_eventGetHeistDataFromLevelPath_Parms), Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics
	{
		struct SBZHeistDeveloperSettings_eventGetHeistDataFromLevelShortName_Parms
		{
			FString ShortName;
			UPD3HeistDataAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShortName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::NewProp_ShortName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeistDeveloperSettings_eventGetHeistDataFromLevelShortName_Parms, ShortName), METADATA_PARAMS(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::NewProp_ShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::NewProp_ShortName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHeistDeveloperSettings_eventGetHeistDataFromLevelShortName_Parms, ReturnValue), Z_Construct_UClass_UPD3HeistDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::NewProp_ShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHeistDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHeistDeveloperSettings, nullptr, "GetHeistDataFromLevelShortName", nullptr, nullptr, sizeof(SBZHeistDeveloperSettings_eventGetHeistDataFromLevelShortName_Parms), Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHeistDeveloperSettings_NoRegister()
	{
		return USBZHeistDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZHeistDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeistLevelPairArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeistLevelPairArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeistLevelPairArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHeistDeveloperSettings_GetAllHeistData, "GetAllHeistData" }, // 958464258
		{ &Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelPath, "GetHeistDataFromLevelPath" }, // 1398392754
		{ &Z_Construct_UFunction_USBZHeistDeveloperSettings_GetHeistDataFromLevelShortName, "GetHeistDataFromLevelShortName" }, // 851003968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHeistDeveloperSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHeistDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::NewProp_HeistLevelPairArray_Inner = { "HeistLevelPairArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZHeistDataLevelPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::NewProp_HeistLevelPairArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHeistDeveloperSettings" },
		{ "ModuleRelativePath", "Public/SBZHeistDeveloperSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::NewProp_HeistLevelPairArray = { "HeistLevelPairArray", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHeistDeveloperSettings, HeistLevelPairArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::NewProp_HeistLevelPairArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::NewProp_HeistLevelPairArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::NewProp_HeistLevelPairArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::NewProp_HeistLevelPairArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHeistDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::ClassParams = {
		&USBZHeistDeveloperSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHeistDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHeistDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHeistDeveloperSettings, 157150512);
	template<> STARBREEZE_API UClass* StaticClass<USBZHeistDeveloperSettings>()
	{
		return USBZHeistDeveloperSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHeistDeveloperSettings(Z_Construct_UClass_USBZHeistDeveloperSettings, &USBZHeistDeveloperSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHeistDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHeistDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
