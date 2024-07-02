// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings();
// End Cross Module References
	DEFINE_FUNCTION(USBZSpawnManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSpawnManager**)Z_Param__Result=USBZSpawnManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSpawnManager::execOnPawnLifetimeChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnLifetimeChanged(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void USBZSpawnManager::StaticRegisterNativesUSBZSpawnManager()
	{
		UClass* Class = USBZSpawnManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZSpawnManager::execGet },
			{ "OnPawnLifetimeChanged", &USBZSpawnManager::execOnPawnLifetimeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSpawnManager_Get_Statics
	{
		struct SBZSpawnManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZSpawnManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZSpawnManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZSpawnManager_eventGet_Parms), Z_Construct_UFunction_USBZSpawnManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics
	{
		struct SBZSpawnManager_eventOnPawnLifetimeChanged_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnManager_eventOnPawnLifetimeChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnManager, nullptr, "OnPawnLifetimeChanged", nullptr, nullptr, sizeof(SBZSpawnManager_eventOnPawnLifetimeChanged_Parms), Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSpawnManager_NoRegister()
	{
		return USBZSpawnManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnPlatformSpawnSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnPlatformSpawnSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawnSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawnSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SpawnedPawnSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingDestroyedPawnArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingDestroyedPawnArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingDestroyedPawnArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSpawnManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSpawnManager_Get, "Get" }, // 322406982
		{ &Z_Construct_UFunction_USBZSpawnManager_OnPawnLifetimeChanged, "OnPawnLifetimeChanged" }, // 505787646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSpawnManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PawnPlatformSpawnSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnManager" },
		{ "ModuleRelativePath", "Public/SBZSpawnManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PawnPlatformSpawnSettings = { "PawnPlatformSpawnSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnManager, PawnPlatformSpawnSettings), Z_Construct_UScriptStruct_FSBZPawnPlatformSpawnSettings, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PawnPlatformSpawnSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PawnPlatformSpawnSettings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_SpawnedPawnSet_ElementProp = { "SpawnedPawnSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_SpawnedPawnSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnManager" },
		{ "ModuleRelativePath", "Public/SBZSpawnManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_SpawnedPawnSet = { "SpawnedPawnSet", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnManager, SpawnedPawnSet), METADATA_PARAMS(Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_SpawnedPawnSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_SpawnedPawnSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PendingDestroyedPawnArray_Inner = { "PendingDestroyedPawnArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PendingDestroyedPawnArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnManager" },
		{ "ModuleRelativePath", "Public/SBZSpawnManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PendingDestroyedPawnArray = { "PendingDestroyedPawnArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnManager, PendingDestroyedPawnArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PendingDestroyedPawnArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PendingDestroyedPawnArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSpawnManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PawnPlatformSpawnSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_SpawnedPawnSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_SpawnedPawnSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PendingDestroyedPawnArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnManager_Statics::NewProp_PendingDestroyedPawnArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSpawnManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnManager_Statics::ClassParams = {
		&USBZSpawnManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSpawnManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnManager_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnManager, 2696190903);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnManager>()
	{
		return USBZSpawnManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnManager(Z_Construct_UClass_USBZSpawnManager, &USBZSpawnManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
