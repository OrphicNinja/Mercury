// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerStatisticsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerStatisticsManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZLevelTimesStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZServerStatBatcher_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStatisticsManagerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerStatisticsManager::execGetHeistBestTimes)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_LevelPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZLevelTimesStruct>*)Z_Param__Result=P_THIS->GetHeistBestTimes(Z_Param_LevelPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerStatisticsManager::execGetPlayerStatisticsManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZPlayerStatisticsManager**)Z_Param__Result=USBZPlayerStatisticsManager::GetPlayerStatisticsManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZPlayerStatisticsManager::StaticRegisterNativesUSBZPlayerStatisticsManager()
	{
		UClass* Class = USBZPlayerStatisticsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeistBestTimes", &USBZPlayerStatisticsManager::execGetHeistBestTimes },
			{ "GetPlayerStatisticsManager", &USBZPlayerStatisticsManager::execGetPlayerStatisticsManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics
	{
		struct SBZPlayerStatisticsManager_eventGetHeistBestTimes_Parms
		{
			FSoftObjectPath LevelPath;
			TArray<FSBZLevelTimesStruct> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::NewProp_LevelPath = { "LevelPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerStatisticsManager_eventGetHeistBestTimes_Parms, LevelPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZLevelTimesStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerStatisticsManager_eventGetHeistBestTimes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::NewProp_LevelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerStatisticsManager, nullptr, "GetHeistBestTimes", nullptr, nullptr, sizeof(SBZPlayerStatisticsManager_eventGetHeistBestTimes_Parms), Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics
	{
		struct SBZPlayerStatisticsManager_eventGetPlayerStatisticsManager_Parms
		{
			const UObject* WorldContextObject;
			USBZPlayerStatisticsManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerStatisticsManager_eventGetPlayerStatisticsManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerStatisticsManager_eventGetPlayerStatisticsManager_Parms, ReturnValue), Z_Construct_UClass_USBZPlayerStatisticsManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerStatisticsManager, nullptr, "GetPlayerStatisticsManager", nullptr, nullptr, sizeof(SBZPlayerStatisticsManager_eventGetPlayerStatisticsManager_Parms), Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerStatisticsManager_NoRegister()
	{
		return USBZPlayerStatisticsManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerStatisticsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatisticsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStatisticsData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerPlayerStatisticsData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerPlayerStatisticsData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPlayerStatisticsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ServerPlayerStatisticsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStatBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerStatBatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerStatisticsManager_GetHeistBestTimes, "GetHeistBestTimes" }, // 254430493
		{ &Z_Construct_UFunction_USBZPlayerStatisticsManager_GetPlayerStatisticsManager, "GetPlayerStatisticsManager" }, // 1440876742
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerStatisticsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_PlayerStatisticsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatisticsManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_PlayerStatisticsData = { "PlayerStatisticsData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerStatisticsManager, PlayerStatisticsData), Z_Construct_UClass_USBZPlayerStatisticsData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_PlayerStatisticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_PlayerStatisticsData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData_ValueProp = { "ServerPlayerStatisticsData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZPlayerStatisticsData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData_Key_KeyProp = { "ServerPlayerStatisticsData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatisticsManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData = { "ServerPlayerStatisticsData", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerStatisticsManager, ServerPlayerStatisticsData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerStatBatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStatisticsManager" },
		{ "ModuleRelativePath", "Public/SBZPlayerStatisticsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerStatBatcher = { "ServerStatBatcher", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerStatisticsManager, ServerStatBatcher), Z_Construct_UClass_USBZServerStatBatcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerStatBatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerStatBatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_PlayerStatisticsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerPlayerStatisticsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::NewProp_ServerStatBatcher,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZPlayerStatisticsManagerInterface_NoRegister, (int32)VTABLE_OFFSET(USBZPlayerStatisticsManager, ISBZPlayerStatisticsManagerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerStatisticsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::ClassParams = {
		&USBZPlayerStatisticsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerStatisticsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerStatisticsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerStatisticsManager, 407720933);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerStatisticsManager>()
	{
		return USBZPlayerStatisticsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerStatisticsManager(Z_Construct_UClass_USBZPlayerStatisticsManager, &USBZPlayerStatisticsManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerStatisticsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerStatisticsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
