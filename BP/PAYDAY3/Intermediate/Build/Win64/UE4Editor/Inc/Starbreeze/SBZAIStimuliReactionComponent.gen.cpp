// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIStimuliReactionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIStimuliReactionComponent() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIStimuliReactionComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIStimuliReactionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZStimuliReaction();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Escalate_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZActionNotificationAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIStimuliReactionComponent::execHandleStimuli)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStimuli(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void USBZAIStimuliReactionComponent::StaticRegisterNativesUSBZAIStimuliReactionComponent()
	{
		UClass* Class = USBZAIStimuliReactionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleStimuli", &USBZAIStimuliReactionComponent::execHandleStimuli },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics
	{
		struct SBZAIStimuliReactionComponent_eventHandleStimuli_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIStimuliReactionComponent_eventHandleStimuli_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIStimuliReactionComponent_eventHandleStimuli_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIStimuliReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIStimuliReactionComponent, nullptr, "HandleStimuli", nullptr, nullptr, sizeof(SBZAIStimuliReactionComponent_eventHandleStimuli_Parms), Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIStimuliReactionComponent_NoRegister()
	{
		return USBZAIStimuliReactionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Reactions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscalationOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EscalationOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReasonAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReasonAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedCharacters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIStimuliReactionComponent_HandleStimuli, "HandleStimuli" }, // 1816582039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZAIStimuliReactionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIStimuliReactionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_Reactions_Inner = { "Reactions", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZStimuliReaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_Reactions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIStimuliReactionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIStimuliReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_Reactions = { "Reactions", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIStimuliReactionComponent, Reactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_Reactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_Reactions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_EscalationOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIStimuliReactionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIStimuliReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_EscalationOrder = { "EscalationOrder", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIStimuliReactionComponent, EscalationOrder), Z_Construct_UClass_USBZAIOrder_Escalate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_EscalationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_EscalationOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_ReasonAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIStimuliReactionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIStimuliReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_ReasonAssets = { "ReasonAssets", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ReasonAssets, USBZAIStimuliReactionComponent), STRUCT_OFFSET(USBZAIStimuliReactionComponent, ReasonAssets), Z_Construct_UClass_USBZActionNotificationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_ReasonAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_ReasonAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_DetectedCharacters_Inner = { "DetectedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_DetectedCharacters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIStimuliReactionComponent" },
		{ "ModuleRelativePath", "Public/SBZAIStimuliReactionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_DetectedCharacters = { "DetectedCharacters", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIStimuliReactionComponent, DetectedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_DetectedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_DetectedCharacters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_Reactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_Reactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_EscalationOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_ReasonAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_DetectedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::NewProp_DetectedCharacters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIStimuliReactionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::ClassParams = {
		&USBZAIStimuliReactionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIStimuliReactionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIStimuliReactionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIStimuliReactionComponent, 64475937);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIStimuliReactionComponent>()
	{
		return USBZAIStimuliReactionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIStimuliReactionComponent(Z_Construct_UClass_USBZAIStimuliReactionComponent, &USBZAIStimuliReactionComponent::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIStimuliReactionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIStimuliReactionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
