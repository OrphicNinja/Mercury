// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGamepadBindingsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGamepadBindingsManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGamepadBindingsManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGamepadBindingsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZGamepadBindingsManager::execGetBindingNamesLocalized)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->GetBindingNamesLocalized(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZGamepadBindingsManager::execGetGamepadBindingsManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZGamepadBindingsManager**)Z_Param__Result=USBZGamepadBindingsManager::GetGamepadBindingsManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZGamepadBindingsManager::StaticRegisterNativesUSBZGamepadBindingsManager()
	{
		UClass* Class = USBZGamepadBindingsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBindingNamesLocalized", &USBZGamepadBindingsManager::execGetBindingNamesLocalized },
			{ "GetGamepadBindingsManager", &USBZGamepadBindingsManager::execGetGamepadBindingsManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics
	{
		struct SBZGamepadBindingsManager_eventGetBindingNamesLocalized_Parms
		{
			FKey InKey;
			TArray<FText> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGamepadBindingsManager_eventGetBindingNamesLocalized_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGamepadBindingsManager_eventGetBindingNamesLocalized_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_InKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGamepadBindingsManager, nullptr, "GetBindingNamesLocalized", nullptr, nullptr, sizeof(SBZGamepadBindingsManager_eventGetBindingNamesLocalized_Parms), Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics
	{
		struct SBZGamepadBindingsManager_eventGetGamepadBindingsManager_Parms
		{
			UObject* WorldContextObject;
			USBZGamepadBindingsManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGamepadBindingsManager_eventGetGamepadBindingsManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZGamepadBindingsManager_eventGetGamepadBindingsManager_Parms, ReturnValue), Z_Construct_UClass_USBZGamepadBindingsManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZGamepadBindingsManager, nullptr, "GetGamepadBindingsManager", nullptr, nullptr, sizeof(SBZGamepadBindingsManager_eventGetGamepadBindingsManager_Parms), Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZGamepadBindingsManager_NoRegister()
	{
		return USBZGamepadBindingsManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZGamepadBindingsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadBindingsPresetsConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GamepadBindingsPresetsConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGamepadBindingsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZGamepadBindingsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZGamepadBindingsManager_GetBindingNamesLocalized, "GetBindingNamesLocalized" }, // 3847725668
		{ &Z_Construct_UFunction_USBZGamepadBindingsManager_GetGamepadBindingsManager, "GetGamepadBindingsManager" }, // 3306678128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGamepadBindingsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGamepadBindingsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGamepadBindingsManager_Statics::NewProp_GamepadBindingsPresetsConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGamepadBindingsManager" },
		{ "ModuleRelativePath", "Public/SBZGamepadBindingsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZGamepadBindingsManager_Statics::NewProp_GamepadBindingsPresetsConfig = { "GamepadBindingsPresetsConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGamepadBindingsManager, GamepadBindingsPresetsConfig), Z_Construct_UClass_USBZGamepadBindingsPresetsConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZGamepadBindingsManager_Statics::NewProp_GamepadBindingsPresetsConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGamepadBindingsManager_Statics::NewProp_GamepadBindingsPresetsConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGamepadBindingsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGamepadBindingsManager_Statics::NewProp_GamepadBindingsPresetsConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGamepadBindingsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGamepadBindingsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGamepadBindingsManager_Statics::ClassParams = {
		&USBZGamepadBindingsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZGamepadBindingsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGamepadBindingsManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGamepadBindingsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGamepadBindingsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGamepadBindingsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGamepadBindingsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGamepadBindingsManager, 2425470828);
	template<> STARBREEZE_API UClass* StaticClass<USBZGamepadBindingsManager>()
	{
		return USBZGamepadBindingsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGamepadBindingsManager(Z_Construct_UClass_USBZGamepadBindingsManager, &USBZGamepadBindingsManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGamepadBindingsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGamepadBindingsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
