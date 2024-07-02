// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZItemProgressionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZItemProgressionManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemProgressionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZItemProgressionManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnInitializedItemProgressionDone__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerItemProgression_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZItemProgressionManager::execGetItemProgressionManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZItemProgressionManager**)Z_Param__Result=USBZItemProgressionManager::GetItemProgressionManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZItemProgressionManager::StaticRegisterNativesUSBZItemProgressionManager()
	{
		UClass* Class = USBZItemProgressionManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemProgressionManager", &USBZItemProgressionManager::execGetItemProgressionManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics
	{
		struct SBZItemProgressionManager_eventGetItemProgressionManager_Parms
		{
			const UObject* WorldContextObject;
			USBZItemProgressionManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZItemProgressionManager_eventGetItemProgressionManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZItemProgressionManager_eventGetItemProgressionManager_Parms, ReturnValue), Z_Construct_UClass_USBZItemProgressionManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZItemProgressionManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZItemProgressionManager, nullptr, "GetItemProgressionManager", nullptr, nullptr, sizeof(SBZItemProgressionManager_eventGetItemProgressionManager_Parms), Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZItemProgressionManager_NoRegister()
	{
		return USBZItemProgressionManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZItemProgressionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInitializedItemProgressionDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitializedItemProgressionDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerItemProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerItemProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZItemProgressionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZItemProgressionManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZItemProgressionManager_GetItemProgressionManager, "GetItemProgressionManager" }, // 3869143916
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemProgressionManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZItemProgressionManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZItemProgressionManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_OnInitializedItemProgressionDone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemProgressionManager" },
		{ "ModuleRelativePath", "Public/SBZItemProgressionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_OnInitializedItemProgressionDone = { "OnInitializedItemProgressionDone", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZItemProgressionManager, OnInitializedItemProgressionDone), Z_Construct_UDelegateFunction_Starbreeze_SBZOnInitializedItemProgressionDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_OnInitializedItemProgressionDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_OnInitializedItemProgressionDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_PlayerItemProgression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZItemProgressionManager" },
		{ "ModuleRelativePath", "Public/SBZItemProgressionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_PlayerItemProgression = { "PlayerItemProgression", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZItemProgressionManager, PlayerItemProgression), Z_Construct_UClass_USBZPlayerItemProgression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_PlayerItemProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_PlayerItemProgression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZItemProgressionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_OnInitializedItemProgressionDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZItemProgressionManager_Statics::NewProp_PlayerItemProgression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZItemProgressionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZItemProgressionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZItemProgressionManager_Statics::ClassParams = {
		&USBZItemProgressionManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZItemProgressionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemProgressionManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZItemProgressionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZItemProgressionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZItemProgressionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZItemProgressionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZItemProgressionManager, 2667525491);
	template<> STARBREEZE_API UClass* StaticClass<USBZItemProgressionManager>()
	{
		return USBZItemProgressionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZItemProgressionManager(Z_Construct_UClass_USBZItemProgressionManager, &USBZItemProgressionManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZItemProgressionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZItemProgressionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
