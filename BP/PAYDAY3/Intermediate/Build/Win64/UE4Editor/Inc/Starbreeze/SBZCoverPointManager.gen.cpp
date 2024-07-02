// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCoverPointManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCoverPointManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoverPointManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoverPointManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZCoverShootingPoints();
// End Cross Module References
	DEFINE_FUNCTION(USBZCoverPointManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZCoverPointManager**)Z_Param__Result=USBZCoverPointManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCoverPointManager::execGetCoverSafeness)
	{
		P_GET_OBJECT(ASBZCoverPoint,Z_Param_CoverPoint);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Enemies);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetCoverSafeness(Z_Param_CoverPoint,Z_Param_Out_Enemies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCoverPointManager::execGetCoverWithinBounds)
	{
		P_GET_STRUCT_REF(FBoxSphereBounds,Z_Param_Out_Bounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASBZCoverPoint*>*)Z_Param__Result=P_THIS->GetCoverWithinBounds(Z_Param_Out_Bounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZCoverPointManager::execGetShootingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSBZCoverShootingPoints>*)Z_Param__Result=P_THIS->GetShootingPoints();
		P_NATIVE_END;
	}
	void USBZCoverPointManager::StaticRegisterNativesUSBZCoverPointManager()
	{
		UClass* Class = USBZCoverPointManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZCoverPointManager::execGet },
			{ "GetCoverSafeness", &USBZCoverPointManager::execGetCoverSafeness },
			{ "GetCoverWithinBounds", &USBZCoverPointManager::execGetCoverWithinBounds },
			{ "GetShootingPoints", &USBZCoverPointManager::execGetShootingPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZCoverPointManager_Get_Statics
	{
		struct SBZCoverPointManager_eventGet_Parms
		{
			UObject* WorldContextObject;
			USBZCoverPointManager* ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZCoverPointManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPointManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCoverPointManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZCoverPointManager_eventGet_Parms), Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCoverPointManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCoverPointManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics
	{
		struct SBZCoverPointManager_eventGetCoverSafeness_Parms
		{
			const ASBZCoverPoint* CoverPoint;
			TArray<AActor*> Enemies;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemies;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_CoverPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_CoverPoint = { "CoverPoint", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGetCoverSafeness_Parms, CoverPoint), Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_CoverPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_CoverPoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_Enemies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGetCoverSafeness_Parms, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_Enemies_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGetCoverSafeness_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_CoverPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_Enemies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_Enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPointManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCoverPointManager, nullptr, "GetCoverSafeness", nullptr, nullptr, sizeof(SBZCoverPointManager_eventGetCoverSafeness_Parms), Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics
	{
		struct SBZCoverPointManager_eventGetCoverWithinBounds_Parms
		{
			FBoxSphereBounds Bounds;
			TArray<ASBZCoverPoint*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGetCoverWithinBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_Bounds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGetCoverWithinBounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPointManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCoverPointManager, nullptr, "GetCoverWithinBounds", nullptr, nullptr, sizeof(SBZCoverPointManager_eventGetCoverWithinBounds_Parms), Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics
	{
		struct SBZCoverPointManager_eventGetShootingPoints_Parms
		{
			TArray<FSBZCoverShootingPoints> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZCoverShootingPoints, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZCoverPointManager_eventGetShootingPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZCoverPointManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZCoverPointManager, nullptr, "GetShootingPoints", nullptr, nullptr, sizeof(SBZCoverPointManager_eventGetShootingPoints_Parms), Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZCoverPointManager_NoRegister()
	{
		return USBZCoverPointManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZCoverPointManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCoverPointManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZCoverPointManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZCoverPointManager_Get, "Get" }, // 3153114224
		{ &Z_Construct_UFunction_USBZCoverPointManager_GetCoverSafeness, "GetCoverSafeness" }, // 2935312570
		{ &Z_Construct_UFunction_USBZCoverPointManager_GetCoverWithinBounds, "GetCoverWithinBounds" }, // 569758452
		{ &Z_Construct_UFunction_USBZCoverPointManager_GetShootingPoints, "GetShootingPoints" }, // 1132618703
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCoverPointManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCoverPointManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCoverPointManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCoverPointManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCoverPointManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCoverPointManager_Statics::ClassParams = {
		&USBZCoverPointManager::StaticClass,
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
		0x002010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCoverPointManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCoverPointManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCoverPointManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCoverPointManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCoverPointManager, 1649149257);
	template<> STARBREEZE_API UClass* StaticClass<USBZCoverPointManager>()
	{
		return USBZCoverPointManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCoverPointManager(Z_Construct_UClass_USBZCoverPointManager, &USBZCoverPointManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCoverPointManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCoverPointManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
