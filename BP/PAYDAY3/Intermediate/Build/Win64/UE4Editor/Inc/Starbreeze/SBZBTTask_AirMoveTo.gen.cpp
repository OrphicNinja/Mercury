// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_AirMoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_AirMoveTo() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_AirMoveTo_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_AirMoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void USBZBTTask_AirMoveTo::StaticRegisterNativesUSBZBTTask_AirMoveTo()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_AirMoveTo_NoRegister()
	{
		return USBZBTTask_AirMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveGoalBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveGoalBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodesPerUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodesPerUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveGoalActorUpdateDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveGoalActorUpdateDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_AirMoveTo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AirMoveTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AirMoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AirMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalBBKey = { "MoveGoalBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AirMoveTo, MoveGoalBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_NodesPerUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AirMoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AirMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_NodesPerUpdate = { "NodesPerUpdate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AirMoveTo, NodesPerUpdate), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_NodesPerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_NodesPerUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_DesiredHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AirMoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AirMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_DesiredHeightOffset = { "DesiredHeightOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AirMoveTo, DesiredHeightOffset), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_DesiredHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_DesiredHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalActorUpdateDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AirMoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AirMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalActorUpdateDistance = { "MoveGoalActorUpdateDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AirMoveTo, MoveGoalActorUpdateDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalActorUpdateDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalActorUpdateDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AirMoveTo" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AirMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AirMoveTo, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_EQSRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_NodesPerUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_DesiredHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_MoveGoalActorUpdateDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::NewProp_EQSRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_AirMoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::ClassParams = {
		&USBZBTTask_AirMoveTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_AirMoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_AirMoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_AirMoveTo, 3965654603);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_AirMoveTo>()
	{
		return USBZBTTask_AirMoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_AirMoveTo(Z_Construct_UClass_USBZBTTask_AirMoveTo, &USBZBTTask_AirMoveTo::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_AirMoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_AirMoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
