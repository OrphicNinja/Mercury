// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMissionGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMissionGameMode() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMissionGameMode_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMissionGameMode();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGameMode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIVisibilityManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCoverPointManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMissionGameMode::execOnActionPhaseExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPhaseExited();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMissionGameMode::execOnActionPhaseStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActionPhaseStarted();
		P_NATIVE_END;
	}
	void ASBZMissionGameMode::StaticRegisterNativesASBZMissionGameMode()
	{
		UClass* Class = ASBZMissionGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActionPhaseExited", &ASBZMissionGameMode::execOnActionPhaseExited },
			{ "OnActionPhaseStarted", &ASBZMissionGameMode::execOnActionPhaseStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionGameMode, nullptr, "OnActionPhaseExited", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMissionGameMode, nullptr, "OnActionPhaseStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMissionGameMode_NoRegister()
	{
		return ASBZMissionGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMissionGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVisibilityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIVisibilityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPointManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverPointManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirePermissionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirePermissionManager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReconnectPlayerStateDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReconnectPlayerStateDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReconnectPlayerStateDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInactivePlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInactivePlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMissionGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMissionGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseExited, "OnActionPhaseExited" }, // 2553088784
		{ &Z_Construct_UFunction_ASBZMissionGameMode_OnActionPhaseStarted, "OnActionPhaseStarted" }, // 1204913507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZMissionGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_SpawnManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_SpawnManager = { "SpawnManager", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionGameMode, SpawnManager), Z_Construct_UClass_USBZSpawnManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_SpawnManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_SpawnManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_AIVisibilityManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionGameMode" },
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_AIVisibilityManager = { "AIVisibilityManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionGameMode, AIVisibilityManager), Z_Construct_UClass_ASBZAIVisibilityManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_AIVisibilityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_AIVisibilityManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_CoverPointManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_CoverPointManager = { "CoverPointManager", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionGameMode, CoverPointManager), Z_Construct_UClass_USBZCoverPointManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_CoverPointManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_CoverPointManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_FirePermissionManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_FirePermissionManager = { "FirePermissionManager", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionGameMode, FirePermissionManager), Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_FirePermissionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_FirePermissionManager_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_ReconnectPlayerStateDataArray_Inner = { "ReconnectPlayerStateDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZReconnectPlayerStateData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_ReconnectPlayerStateDataArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionGameMode" },
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_ReconnectPlayerStateDataArray = { "ReconnectPlayerStateDataArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionGameMode, ReconnectPlayerStateDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_ReconnectPlayerStateDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_ReconnectPlayerStateDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_MaxInactivePlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMissionGameMode" },
		{ "ModuleRelativePath", "Public/SBZMissionGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_MaxInactivePlayers = { "MaxInactivePlayers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMissionGameMode, MaxInactivePlayers), METADATA_PARAMS(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_MaxInactivePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_MaxInactivePlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMissionGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_SpawnManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_AIVisibilityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_CoverPointManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_FirePermissionManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_ReconnectPlayerStateDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_ReconnectPlayerStateDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMissionGameMode_Statics::NewProp_MaxInactivePlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMissionGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMissionGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMissionGameMode_Statics::ClassParams = {
		&ASBZMissionGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMissionGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::PropPointers),
		0,
		0x008002ADu,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMissionGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMissionGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMissionGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMissionGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMissionGameMode, 2221357010);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMissionGameMode>()
	{
		return ASBZMissionGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMissionGameMode(Z_Construct_UClass_ASBZMissionGameMode, &ASBZMissionGameMode::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMissionGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMissionGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
