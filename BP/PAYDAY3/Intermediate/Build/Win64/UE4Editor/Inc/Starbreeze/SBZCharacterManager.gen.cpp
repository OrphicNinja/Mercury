// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCharacterManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCharacterManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCharacterManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCharacterSlotData();
// End Cross Module References
	DEFINE_FUNCTION(USBZCharacterManager::execGetCharacterManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCharacterManager**)Z_Param__Result=USBZCharacterManager::GetCharacterManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCharacterManager::execGetPreferredCharacters)
	{
		P_GET_TARRAY_REF(FSBZCharacterSlotData,Z_Param_Out_PreferredCharacterIndexArrayOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPreferredCharacters(Z_Param_Out_PreferredCharacterIndexArrayOut);
		P_NATIVE_END;
	}
	void USBZCharacterManager::StaticRegisterNativesUSBZCharacterManager()
	{
		UClass* Class = USBZCharacterManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterManager", &USBZCharacterManager::execGetCharacterManager },
			{ "GetPreferredCharacters", &USBZCharacterManager::execGetPreferredCharacters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics
	{
		struct SBZCharacterManager_eventGetCharacterManager_Parms
		{
			const UObject* WorldContextObject;
			USBZCharacterManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterManager_eventGetCharacterManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterManager_eventGetCharacterManager_Parms, ReturnValue), Z_Construct_UClass_USBZCharacterManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterManager, nullptr, "GetCharacterManager", nullptr, nullptr, sizeof(SBZCharacterManager_eventGetCharacterManager_Parms), Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics
	{
		struct SBZCharacterManager_eventGetPreferredCharacters_Parms
		{
			TArray<FSBZCharacterSlotData> PreferredCharacterIndexArrayOut;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredCharacterIndexArrayOut_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreferredCharacterIndexArrayOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::NewProp_PreferredCharacterIndexArrayOut_Inner = { "PreferredCharacterIndexArrayOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCharacterSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::NewProp_PreferredCharacterIndexArrayOut = { "PreferredCharacterIndexArrayOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCharacterManager_eventGetPreferredCharacters_Parms, PreferredCharacterIndexArrayOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::NewProp_PreferredCharacterIndexArrayOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::NewProp_PreferredCharacterIndexArrayOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCharacterManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCharacterManager, nullptr, "GetPreferredCharacters", nullptr, nullptr, sizeof(SBZCharacterManager_eventGetPreferredCharacters_Parms), Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCharacterManager_NoRegister()
	{
		return USBZCharacterManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZCharacterManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCharacterManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCharacterManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCharacterManager_GetCharacterManager, "GetCharacterManager" }, // 848934617
		{ &Z_Construct_UFunction_USBZCharacterManager_GetPreferredCharacters, "GetPreferredCharacters" }, // 2607083843
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCharacterManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCharacterManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCharacterManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCharacterManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCharacterManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCharacterManager_Statics::ClassParams = {
		&USBZCharacterManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCharacterManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCharacterManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCharacterManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCharacterManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCharacterManager, 3672304327);
	template<> STARBREEZE_API UClass* StaticClass<USBZCharacterManager>()
	{
		return USBZCharacterManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCharacterManager(Z_Construct_UClass_USBZCharacterManager, &USBZCharacterManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCharacterManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCharacterManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
