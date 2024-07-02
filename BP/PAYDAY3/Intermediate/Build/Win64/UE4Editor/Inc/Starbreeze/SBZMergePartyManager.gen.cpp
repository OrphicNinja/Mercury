// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMergePartyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMergePartyManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMergePartyManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMergePartyManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZMergePartyManager::execGetMergePartyManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZMergePartyManager**)Z_Param__Result=USBZMergePartyManager::GetMergePartyManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZMergePartyManager::StaticRegisterNativesUSBZMergePartyManager()
	{
		UClass* Class = USBZMergePartyManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMergePartyManager", &USBZMergePartyManager::execGetMergePartyManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics
	{
		struct SBZMergePartyManager_eventGetMergePartyManager_Parms
		{
			UObject* WorldContextObject;
			USBZMergePartyManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMergePartyManager_eventGetMergePartyManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMergePartyManager_eventGetMergePartyManager_Parms, ReturnValue), Z_Construct_UClass_USBZMergePartyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMergePartyManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMergePartyManager, nullptr, "GetMergePartyManager", nullptr, nullptr, sizeof(SBZMergePartyManager_eventGetMergePartyManager_Parms), Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMergePartyManager_NoRegister()
	{
		return USBZMergePartyManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZMergePartyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerPlayerLeavingResultStateMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerPlayerLeavingResultStateMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPlayerLeavingResultStateMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ServerPlayerLeavingResultStateMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMergePartyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMergePartyManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMergePartyManager_GetMergePartyManager, "GetMergePartyManager" }, // 3081380254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMergePartyManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMergePartyManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMergePartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap_ValueProp = { "ServerPlayerLeavingResultStateMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZMergePartyPlayerInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap_Key_KeyProp = { "ServerPlayerLeavingResultStateMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMergePartyManager" },
		{ "ModuleRelativePath", "Public/SBZMergePartyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap = { "ServerPlayerLeavingResultStateMap", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMergePartyManager, ServerPlayerLeavingResultStateMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMergePartyManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMergePartyManager_Statics::NewProp_ServerPlayerLeavingResultStateMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMergePartyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMergePartyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMergePartyManager_Statics::ClassParams = {
		&USBZMergePartyManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMergePartyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMergePartyManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMergePartyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMergePartyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMergePartyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMergePartyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMergePartyManager, 2172281110);
	template<> STARBREEZE_API UClass* StaticClass<USBZMergePartyManager>()
	{
		return USBZMergePartyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMergePartyManager(Z_Construct_UClass_USBZMergePartyManager, &USBZMergePartyManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMergePartyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMergePartyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
