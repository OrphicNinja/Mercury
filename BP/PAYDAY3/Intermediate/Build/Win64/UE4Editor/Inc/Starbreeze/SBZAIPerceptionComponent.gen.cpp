// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIPerceptionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIPerceptionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIPerceptionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZSenseConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIPerceptionComponent::execOnTargetPerception)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetPerception(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIPerceptionComponent::execOnTransporterBrutalCarrySkillPerceptionInfoUpdated)
	{
		P_GET_STRUCT_REF(FActorPerceptionUpdateInfo,Z_Param_Out_UpdateInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransporterBrutalCarrySkillPerceptionInfoUpdated(Z_Param_Out_UpdateInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZAIPerceptionComponent::execSetSenseConfig)
	{
		P_GET_ENUM(ESBZSenseConfig,Z_Param_ConfigID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSenseConfig(ESBZSenseConfig(Z_Param_ConfigID));
		P_NATIVE_END;
	}
	void USBZAIPerceptionComponent::StaticRegisterNativesUSBZAIPerceptionComponent()
	{
		UClass* Class = USBZAIPerceptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetPerception", &USBZAIPerceptionComponent::execOnTargetPerception },
			{ "OnTransporterBrutalCarrySkillPerceptionInfoUpdated", &USBZAIPerceptionComponent::execOnTransporterBrutalCarrySkillPerceptionInfoUpdated },
			{ "SetSenseConfig", &USBZAIPerceptionComponent::execSetSenseConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics
	{
		struct SBZAIPerceptionComponent_eventOnTargetPerception_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPerceptionComponent_eventOnTargetPerception_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPerceptionComponent_eventOnTargetPerception_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIPerceptionComponent, nullptr, "OnTargetPerception", nullptr, nullptr, sizeof(SBZAIPerceptionComponent_eventOnTargetPerception_Parms), Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics
	{
		struct SBZAIPerceptionComponent_eventOnTransporterBrutalCarrySkillPerceptionInfoUpdated_Parms
		{
			FActorPerceptionUpdateInfo UpdateInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::NewProp_UpdateInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::NewProp_UpdateInfo = { "UpdateInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPerceptionComponent_eventOnTransporterBrutalCarrySkillPerceptionInfoUpdated_Parms, UpdateInfo), Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo, METADATA_PARAMS(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::NewProp_UpdateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::NewProp_UpdateInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::NewProp_UpdateInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIPerceptionComponent, nullptr, "OnTransporterBrutalCarrySkillPerceptionInfoUpdated", nullptr, nullptr, sizeof(SBZAIPerceptionComponent_eventOnTransporterBrutalCarrySkillPerceptionInfoUpdated_Parms), Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics
	{
		struct SBZAIPerceptionComponent_eventSetSenseConfig_Parms
		{
			ESBZSenseConfig ConfigID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfigID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConfigID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::NewProp_ConfigID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::NewProp_ConfigID = { "ConfigID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIPerceptionComponent_eventSetSenseConfig_Parms, ConfigID), Z_Construct_UEnum_Starbreeze_ESBZSenseConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::NewProp_ConfigID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::NewProp_ConfigID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIPerceptionComponent, nullptr, "SetSenseConfig", nullptr, nullptr, sizeof(SBZAIPerceptionComponent_eventSetSenseConfig_Parms), Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIPerceptionComponent_NoRegister()
	{
		return USBZAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatSensesConfig_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CombatSensesConfig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatSensesConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CombatSensesConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistractedSensesConfig_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistractedSensesConfig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistractedSensesConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DistractedSensesConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIPerceptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIPerceptionComponent_OnTargetPerception, "OnTargetPerception" }, // 1515074248
		{ &Z_Construct_UFunction_USBZAIPerceptionComponent_OnTransporterBrutalCarrySkillPerceptionInfoUpdated, "OnTransporterBrutalCarrySkillPerceptionInfoUpdated" }, // 1248839832
		{ &Z_Construct_UFunction_USBZAIPerceptionComponent_SetSenseConfig, "SetSenseConfig" }, // 2613170588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "SBZAIPerceptionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPerceptionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_Inner = { "CombatSensesConfig", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPerceptionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig = { "CombatSensesConfig", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIPerceptionComponent, CombatSensesConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPerceptionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_Inner = { "DistractedSensesConfig", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIPerceptionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIPerceptionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig = { "DistractedSensesConfig", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIPerceptionComponent, DistractedSensesConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIPerceptionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_CombatSensesConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIPerceptionComponent_Statics::NewProp_DistractedSensesConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIPerceptionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIPerceptionComponent_Statics::ClassParams = {
		&USBZAIPerceptionComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIPerceptionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIPerceptionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIPerceptionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIPerceptionComponent, 1588285714);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIPerceptionComponent>()
	{
		return USBZAIPerceptionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIPerceptionComponent(Z_Construct_UClass_USBZAIPerceptionComponent, &USBZAIPerceptionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIPerceptionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIPerceptionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
