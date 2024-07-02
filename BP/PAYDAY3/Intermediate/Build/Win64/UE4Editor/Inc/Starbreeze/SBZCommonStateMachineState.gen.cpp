// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZCommonStateMachineState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZCommonStateMachineState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCommonStateMachineState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCommonStateMachineState();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncLoadLevelParams();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAsyncLoadLevelInterface_NoRegister();
// End Cross Module References
	void USBZCommonStateMachineState::StaticRegisterNativesUSBZCommonStateMachineState()
	{
	}
	UClass* Z_Construct_UClass_USBZCommonStateMachineState_NoRegister()
	{
		return USBZCommonStateMachineState::StaticClass();
	}
	struct Z_Construct_UClass_USBZCommonStateMachineState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingTimeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncLoadingTimeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingTimeSliceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncLoadingTimeSliceOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadingTimeSliceDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncLoadingTimeSliceDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplayEnabled_MetaData[];
#endif
		static void NewProp_bReplayEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplayEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadLevelParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsyncLoadLevelParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZCommonStateMachineState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCommonStateMachineState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZCommonStateMachineState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZCommonStateMachineState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeOutTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCommonStateMachineState" },
		{ "ModuleRelativePath", "Public/SBZCommonStateMachineState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeOutTime = { "AsyncLoadingTimeOutTime", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCommonStateMachineState, AsyncLoadingTimeOutTime), METADATA_PARAMS(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCommonStateMachineState" },
		{ "ModuleRelativePath", "Public/SBZCommonStateMachineState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceOverride = { "AsyncLoadingTimeSliceOverride", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCommonStateMachineState, AsyncLoadingTimeSliceOverride), METADATA_PARAMS(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceDefaultValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCommonStateMachineState" },
		{ "ModuleRelativePath", "Public/SBZCommonStateMachineState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceDefaultValue = { "AsyncLoadingTimeSliceDefaultValue", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCommonStateMachineState, AsyncLoadingTimeSliceDefaultValue), METADATA_PARAMS(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_bReplayEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCommonStateMachineState" },
		{ "ModuleRelativePath", "Public/SBZCommonStateMachineState.h" },
	};
#endif
	void Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_bReplayEnabled_SetBit(void* Obj)
	{
		((USBZCommonStateMachineState*)Obj)->bReplayEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_bReplayEnabled = { "bReplayEnabled", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZCommonStateMachineState), &Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_bReplayEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_bReplayEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_bReplayEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadLevelParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZCommonStateMachineState" },
		{ "ModuleRelativePath", "Public/SBZCommonStateMachineState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadLevelParams = { "AsyncLoadLevelParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZCommonStateMachineState, AsyncLoadLevelParams), Z_Construct_UScriptStruct_FAsyncLoadLevelParams, METADATA_PARAMS(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadLevelParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadLevelParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZCommonStateMachineState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadingTimeSliceDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_bReplayEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZCommonStateMachineState_Statics::NewProp_AsyncLoadLevelParams,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZCommonStateMachineState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZAsyncLoadLevelInterface_NoRegister, (int32)VTABLE_OFFSET(USBZCommonStateMachineState, ISBZAsyncLoadLevelInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZCommonStateMachineState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZCommonStateMachineState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZCommonStateMachineState_Statics::ClassParams = {
		&USBZCommonStateMachineState::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZCommonStateMachineState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZCommonStateMachineState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZCommonStateMachineState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZCommonStateMachineState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZCommonStateMachineState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZCommonStateMachineState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZCommonStateMachineState, 3865053049);
	template<> STARBREEZE_API UClass* StaticClass<USBZCommonStateMachineState>()
	{
		return USBZCommonStateMachineState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZCommonStateMachineState(Z_Construct_UClass_USBZCommonStateMachineState, &USBZCommonStateMachineState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZCommonStateMachineState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZCommonStateMachineState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
