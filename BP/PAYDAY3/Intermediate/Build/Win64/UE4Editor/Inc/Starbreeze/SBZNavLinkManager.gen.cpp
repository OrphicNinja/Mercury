// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZNavLinkManager.h"
#include "Starbreeze/Public/PD3HeistGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZNavLinkManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZNavLinkManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints();
// End Cross Module References
	DEFINE_FUNCTION(USBZNavLinkManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZNavLinkManager**)Z_Param__Result=USBZNavLinkManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZNavLinkManager::StaticRegisterNativesUSBZNavLinkManager()
	{
		UClass* Class = USBZNavLinkManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZNavLinkManager::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZNavLinkManager_Get_Statics
	{
		struct SBZNavLinkManager_eventGet_Parms
		{
			const UObject* WorldContextObject;
			USBZNavLinkManager* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNavLinkManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZNavLinkManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZNavLinkManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZNavLinkManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZNavLinkManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZNavLinkManager_eventGet_Parms), Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZNavLinkManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZNavLinkManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZNavLinkManager_NoRegister()
	{
		return USBZNavLinkManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZNavLinkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_PointRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNavLinkChecksPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNavLinkChecksPerFrame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedNavLinkPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNavLinkPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedNavLinkPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZNavLinkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZNavLinkManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZNavLinkManager_Get, "Get" }, // 3760386027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZNavLinkManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZNavLinkManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_PointRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkManager" },
		{ "ModuleRelativePath", "Public/SBZNavLinkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_PointRadius = { "PointRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkManager, PointRadius), METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_PointRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_PointRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_MaxNavLinkChecksPerFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkManager" },
		{ "ModuleRelativePath", "Public/SBZNavLinkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_MaxNavLinkChecksPerFrame = { "MaxNavLinkChecksPerFrame", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkManager, MaxNavLinkChecksPerFrame), METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_MaxNavLinkChecksPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_MaxNavLinkChecksPerFrame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_CachedNavLinkPoints_Inner = { "CachedNavLinkPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCachedNavLinkPoints, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_CachedNavLinkPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZNavLinkManager" },
		{ "ModuleRelativePath", "Public/SBZNavLinkManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_CachedNavLinkPoints = { "CachedNavLinkPoints", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZNavLinkManager, CachedNavLinkPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_CachedNavLinkPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_CachedNavLinkPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZNavLinkManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_PointRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_MaxNavLinkChecksPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_CachedNavLinkPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZNavLinkManager_Statics::NewProp_CachedNavLinkPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZNavLinkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZNavLinkManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZNavLinkManager_Statics::ClassParams = {
		&USBZNavLinkManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZNavLinkManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZNavLinkManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZNavLinkManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZNavLinkManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZNavLinkManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZNavLinkManager, 2340189996);
	template<> STARBREEZE_API UClass* StaticClass<USBZNavLinkManager>()
	{
		return USBZNavLinkManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZNavLinkManager(Z_Construct_UClass_USBZNavLinkManager, &USBZNavLinkManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZNavLinkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZNavLinkManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
