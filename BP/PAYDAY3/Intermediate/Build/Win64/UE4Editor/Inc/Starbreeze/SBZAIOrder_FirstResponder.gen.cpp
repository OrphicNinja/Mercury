// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_FirstResponder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_FirstResponder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FirstResponder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FirstResponder();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCoverPoint_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_FirstResponder::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_FirstResponder::execOnPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void USBZAIOrder_FirstResponder::StaticRegisterNativesUSBZAIOrder_FirstResponder()
	{
		UClass* Class = USBZAIOrder_FirstResponder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHeistStateChanged", &USBZAIOrder_FirstResponder::execOnHeistStateChanged },
			{ "OnPerceptionUpdated", &USBZAIOrder_FirstResponder::execOnPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics
	{
		struct SBZAIOrder_FirstResponder_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FirstResponder_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FirstResponder_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_FirstResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_FirstResponder, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZAIOrder_FirstResponder_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics
	{
		struct SBZAIOrder_FirstResponder_eventOnPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FirstResponder_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FirstResponder_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_FirstResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_FirstResponder, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(SBZAIOrder_FirstResponder_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_FirstResponder_NoRegister()
	{
		return USBZAIOrder_FirstResponder::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CoverPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnHeistStateChanged, "OnHeistStateChanged" }, // 2833049373
		{ &Z_Construct_UFunction_USBZAIOrder_FirstResponder_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 3163620748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_FirstResponder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FirstResponder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_CoverPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_FirstResponder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FirstResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_CoverPoint = { "CoverPoint", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_FirstResponder, CoverPoint), Z_Construct_UClass_ASBZCoverPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_CoverPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_CoverPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_SoundTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_FirstResponder" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FirstResponder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_SoundTags = { "SoundTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_FirstResponder, SoundTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_SoundTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_SoundTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_CoverPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::NewProp_SoundTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_FirstResponder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::ClassParams = {
		&USBZAIOrder_FirstResponder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_FirstResponder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_FirstResponder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_FirstResponder, 1952788821);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_FirstResponder>()
	{
		return USBZAIOrder_FirstResponder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_FirstResponder(Z_Construct_UClass_USBZAIOrder_FirstResponder, &USBZAIOrder_FirstResponder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_FirstResponder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_FirstResponder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
