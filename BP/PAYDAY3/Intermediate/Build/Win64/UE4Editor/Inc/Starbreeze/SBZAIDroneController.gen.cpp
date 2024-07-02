// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIDroneController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIDroneController() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIDroneController_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIDroneController();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAIArmedPawnController();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle();
// End Cross Module References
	void ASBZAIDroneController::StaticRegisterNativesASBZAIDroneController()
	{
	}
	UClass* Z_Construct_UClass_ASBZAIDroneController_NoRegister()
	{
		return ASBZAIDroneController::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAIDroneController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DespawnBehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedTasksUntilDespawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailedTasksUntilDespawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAIDroneController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZAIArmedPawnController,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDroneController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SBZAIDroneController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIDroneController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneController" },
		{ "ModuleRelativePath", "Public/SBZAIDroneController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDroneController, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BlackboardAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BlackboardAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneController" },
		{ "ModuleRelativePath", "Public/SBZAIDroneController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDroneController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_DespawnBehaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneController" },
		{ "ModuleRelativePath", "Public/SBZAIDroneController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_DespawnBehaviorTree = { "DespawnBehaviorTree", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDroneController, DespawnBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_DespawnBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_DespawnBehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_YawAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneController" },
		{ "ModuleRelativePath", "Public/SBZAIDroneController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_YawAngle = { "YawAngle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDroneController, YawAngle), Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_YawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_YawAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_PitchAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneController" },
		{ "ModuleRelativePath", "Public/SBZAIDroneController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_PitchAngle = { "PitchAngle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDroneController, PitchAngle), Z_Construct_UScriptStruct_FSBZAccelerationBasedAngle, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_PitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_PitchAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_FailedTasksUntilDespawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIDroneController" },
		{ "ModuleRelativePath", "Public/SBZAIDroneController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_FailedTasksUntilDespawn = { "FailedTasksUntilDespawn", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAIDroneController, FailedTasksUntilDespawn), nullptr, METADATA_PARAMS(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_FailedTasksUntilDespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_FailedTasksUntilDespawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAIDroneController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BlackboardAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_DespawnBehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_YawAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_PitchAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAIDroneController_Statics::NewProp_FailedTasksUntilDespawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAIDroneController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAIDroneController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAIDroneController_Statics::ClassParams = {
		&ASBZAIDroneController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZAIDroneController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAIDroneController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAIDroneController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAIDroneController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAIDroneController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAIDroneController, 1084024137);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAIDroneController>()
	{
		return ASBZAIDroneController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAIDroneController(Z_Construct_UClass_ASBZAIDroneController, &ASBZAIDroneController::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAIDroneController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAIDroneController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
