// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_PlayLifeAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_PlayLifeAction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_PlayLifeAction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_PlayLifeAction();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void USBZBTTask_PlayLifeAction::StaticRegisterNativesUSBZBTTask_PlayLifeAction()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_PlayLifeAction_NoRegister()
	{
		return USBZBTTask_PlayLifeAction::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeActionBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LifeActionBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UtilityScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UtilityScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPersistant_MetaData[];
#endif
		static void NewProp_bIsPersistant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPersistant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleStances_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_CompatibleStances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedHeistStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_AllowedHeistStates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Behavior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_PlayLifeAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayLifeAction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_LifeActionBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_PlayLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_LifeActionBBKey = { "LifeActionBBKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_PlayLifeAction, LifeActionBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_LifeActionBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_LifeActionBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_UtilityScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_PlayLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_UtilityScore = { "UtilityScore", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_PlayLifeAction, UtilityScore), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_UtilityScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_UtilityScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_bIsPersistant_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_PlayLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayLifeAction.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_bIsPersistant_SetBit(void* Obj)
	{
		((USBZBTTask_PlayLifeAction*)Obj)->bIsPersistant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_bIsPersistant = { "bIsPersistant", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_PlayLifeAction), &Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_bIsPersistant_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_bIsPersistant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_bIsPersistant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_CompatibleStances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_PlayLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_CompatibleStances = { "CompatibleStances", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_PlayLifeAction, CompatibleStances), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_CompatibleStances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_CompatibleStances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_AllowedHeistStates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_PlayLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_AllowedHeistStates = { "AllowedHeistStates", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_PlayLifeAction, AllowedHeistStates), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_AllowedHeistStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_AllowedHeistStates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_Behavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_PlayLifeAction" },
		{ "ModuleRelativePath", "Public/SBZBTTask_PlayLifeAction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_PlayLifeAction, Behavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_Behavior_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_LifeActionBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_UtilityScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_bIsPersistant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_CompatibleStances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_AllowedHeistStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::NewProp_Behavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_PlayLifeAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::ClassParams = {
		&USBZBTTask_PlayLifeAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_PlayLifeAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_PlayLifeAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_PlayLifeAction, 2321926333);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_PlayLifeAction>()
	{
		return USBZBTTask_PlayLifeAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_PlayLifeAction(Z_Construct_UClass_USBZBTTask_PlayLifeAction, &USBZBTTask_PlayLifeAction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_PlayLifeAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_PlayLifeAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
