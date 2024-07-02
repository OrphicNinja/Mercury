// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDSChallengeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDSChallengeManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDSChallengeManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDSChallengeManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZChallengeData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ACCELBYTECUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FUserChallengeRecord();
// End Cross Module References
	DEFINE_FUNCTION(USBZDSChallengeManager::execGetCompletedChallengesDuringMission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZChallengeData>*)Z_Param__Result=P_THIS->GetCompletedChallengesDuringMission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDSChallengeManager::execGetDSChallengeManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZDSChallengeManager**)Z_Param__Result=USBZDSChallengeManager::GetDSChallengeManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZDSChallengeManager::StaticRegisterNativesUSBZDSChallengeManager()
	{
		UClass* Class = USBZDSChallengeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCompletedChallengesDuringMission", &USBZDSChallengeManager::execGetCompletedChallengesDuringMission },
			{ "GetDSChallengeManager", &USBZDSChallengeManager::execGetDSChallengeManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics
	{
		struct SBZDSChallengeManager_eventGetCompletedChallengesDuringMission_Parms
		{
			TArray<FSBZChallengeData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZChallengeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDSChallengeManager_eventGetCompletedChallengesDuringMission_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDSChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDSChallengeManager, nullptr, "GetCompletedChallengesDuringMission", nullptr, nullptr, sizeof(SBZDSChallengeManager_eventGetCompletedChallengesDuringMission_Parms), Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics
	{
		struct SBZDSChallengeManager_eventGetDSChallengeManager_Parms
		{
			const UObject* WorldContextObject;
			USBZDSChallengeManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDSChallengeManager_eventGetDSChallengeManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDSChallengeManager_eventGetDSChallengeManager_Parms, ReturnValue), Z_Construct_UClass_USBZDSChallengeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDSChallengeManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDSChallengeManager, nullptr, "GetDSChallengeManager", nullptr, nullptr, sizeof(SBZDSChallengeManager_eventGetDSChallengeManager_Parms), Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDSChallengeManager_NoRegister()
	{
		return USBZDSChallengeManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZDSChallengeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChallengeRecordCaches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeRecordCaches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChallengeRecordCaches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDSChallengeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDSChallengeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDSChallengeManager_GetCompletedChallengesDuringMission, "GetCompletedChallengesDuringMission" }, // 3537916808
		{ &Z_Construct_UFunction_USBZDSChallengeManager_GetDSChallengeManager, "GetDSChallengeManager" }, // 624398840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDSChallengeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDSChallengeManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDSChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDSChallengeManager_Statics::NewProp_ChallengeRecordCaches_Inner = { "ChallengeRecordCaches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUserChallengeRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDSChallengeManager_Statics::NewProp_ChallengeRecordCaches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDSChallengeManager" },
		{ "ModuleRelativePath", "Public/SBZDSChallengeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZDSChallengeManager_Statics::NewProp_ChallengeRecordCaches = { "ChallengeRecordCaches", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDSChallengeManager, ChallengeRecordCaches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDSChallengeManager_Statics::NewProp_ChallengeRecordCaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDSChallengeManager_Statics::NewProp_ChallengeRecordCaches_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDSChallengeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDSChallengeManager_Statics::NewProp_ChallengeRecordCaches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDSChallengeManager_Statics::NewProp_ChallengeRecordCaches,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDSChallengeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDSChallengeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDSChallengeManager_Statics::ClassParams = {
		&USBZDSChallengeManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDSChallengeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDSChallengeManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDSChallengeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDSChallengeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDSChallengeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDSChallengeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDSChallengeManager, 4152095533);
	template<> STARBREEZE_API UClass* StaticClass<USBZDSChallengeManager>()
	{
		return USBZDSChallengeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDSChallengeManager(Z_Construct_UClass_USBZDSChallengeManager, &USBZDSChallengeManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDSChallengeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDSChallengeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
