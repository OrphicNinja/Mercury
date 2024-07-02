// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Attack() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Attack_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Attack();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_TacticalMoveTo();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3DefeatState();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_Attack::execOnTargetDefeatStateChanged)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InSBZPlayerState);
		P_GET_ENUM(EPD3DefeatState,Z_Param_OldDefeatState);
		P_GET_ENUM(EPD3DefeatState,Z_Param_InDefeatState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDefeatStateChanged(Z_Param_InSBZPlayerState,EPD3DefeatState(Z_Param_OldDefeatState),EPD3DefeatState(Z_Param_InDefeatState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIOrder_Attack::execOnTargetKilled)
	{
		P_GET_OBJECT(APawn,Z_Param_KilledPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetKilled(Z_Param_KilledPawn);
		P_NATIVE_END;
	}
	void USBZAIOrder_Attack::StaticRegisterNativesUSBZAIOrder_Attack()
	{
		UClass* Class = USBZAIOrder_Attack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetDefeatStateChanged", &USBZAIOrder_Attack::execOnTargetDefeatStateChanged },
			{ "OnTargetKilled", &USBZAIOrder_Attack::execOnTargetKilled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics
	{
		struct SBZAIOrder_Attack_eventOnTargetDefeatStateChanged_Parms
		{
			ASBZPlayerState* InSBZPlayerState;
			EPD3DefeatState OldDefeatState;
			EPD3DefeatState InDefeatState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSBZPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldDefeatState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDefeatState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDefeatState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_InSBZPlayerState = { "InSBZPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_Attack_eventOnTargetDefeatStateChanged_Parms, InSBZPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState = { "OldDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_Attack_eventOnTargetDefeatStateChanged_Parms, OldDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState = { "InDefeatState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_Attack_eventOnTargetDefeatStateChanged_Parms, InDefeatState), Z_Construct_UEnum_Starbreeze_EPD3DefeatState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_InSBZPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_OldDefeatState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::NewProp_InDefeatState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_Attack, nullptr, "OnTargetDefeatStateChanged", nullptr, nullptr, sizeof(SBZAIOrder_Attack_eventOnTargetDefeatStateChanged_Parms), Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics
	{
		struct SBZAIOrder_Attack_eventOnTargetKilled_Parms
		{
			APawn* KilledPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KilledPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::NewProp_KilledPawn = { "KilledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_Attack_eventOnTargetKilled_Parms, KilledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::NewProp_KilledPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_Attack, nullptr, "OnTargetKilled", nullptr, nullptr, sizeof(SBZAIOrder_Attack_eventOnTargetKilled_Parms), Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Attack_NoRegister()
	{
		return USBZAIOrder_Attack::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder_TacticalMoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_Attack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetDefeatStateChanged, "OnTargetDefeatStateChanged" }, // 2209983277
		{ &Z_Construct_UFunction_USBZAIOrder_Attack_OnTargetKilled, "OnTargetKilled" }, // 288044999
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Attack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Attack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Attack_Statics::ClassParams = {
		&USBZAIOrder_Attack::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Attack, 2087995536);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Attack>()
	{
		return USBZAIOrder_Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Attack(Z_Construct_UClass_USBZAIOrder_Attack, &USBZAIOrder_Attack::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
