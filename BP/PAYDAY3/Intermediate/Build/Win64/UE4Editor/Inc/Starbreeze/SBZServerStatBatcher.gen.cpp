// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZServerStatBatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZServerStatBatcher() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZServerStatBatcher_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZServerStatBatcher();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FMultipleUsersStatRequests();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZServerStatBatcher::execHandleMissionEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OutroVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMissionEnd(Z_Param_OutroVariation);
		P_NATIVE_END;
	}
	void USBZServerStatBatcher::StaticRegisterNativesUSBZServerStatBatcher()
	{
		UClass* Class = USBZServerStatBatcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleMissionEnd", &USBZServerStatBatcher::execHandleMissionEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics
	{
		struct SBZServerStatBatcher_eventHandleMissionEnd_Parms
		{
			int32 OutroVariation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutroVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutroVariation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::NewProp_OutroVariation = { "OutroVariation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZServerStatBatcher_eventHandleMissionEnd_Parms, OutroVariation), METADATA_PARAMS(Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::NewProp_OutroVariation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::NewProp_OutroVariation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZServerStatBatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZServerStatBatcher, nullptr, "HandleMissionEnd", nullptr, nullptr, sizeof(SBZServerStatBatcher_eventHandleMissionEnd_Parms), Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZServerStatBatcher_NoRegister()
	{
		return USBZServerStatBatcher::StaticClass();
	}
	struct Z_Construct_UClass_USBZServerStatBatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedServerStatRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedServerStatRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZServerStatBatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZServerStatBatcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZServerStatBatcher_HandleMissionEnd, "HandleMissionEnd" }, // 120699208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZServerStatBatcher_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZServerStatBatcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZServerStatBatcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_CachedServerStatRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZServerStatBatcher" },
		{ "ModuleRelativePath", "Public/SBZServerStatBatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_CachedServerStatRequests = { "CachedServerStatRequests", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZServerStatBatcher, CachedServerStatRequests), Z_Construct_UScriptStruct_FMultipleUsersStatRequests, METADATA_PARAMS(Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_CachedServerStatRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_CachedServerStatRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_WorldContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZServerStatBatcher" },
		{ "ModuleRelativePath", "Public/SBZServerStatBatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZServerStatBatcher, WorldContext), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_WorldContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_WorldContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZServerStatBatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_CachedServerStatRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZServerStatBatcher_Statics::NewProp_WorldContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZServerStatBatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZServerStatBatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZServerStatBatcher_Statics::ClassParams = {
		&USBZServerStatBatcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZServerStatBatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZServerStatBatcher_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZServerStatBatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZServerStatBatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZServerStatBatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZServerStatBatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZServerStatBatcher, 4193231520);
	template<> STARBREEZE_API UClass* StaticClass<USBZServerStatBatcher>()
	{
		return USBZServerStatBatcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZServerStatBatcher(Z_Construct_UClass_USBZServerStatBatcher, &USBZServerStatBatcher::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZServerStatBatcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZServerStatBatcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
