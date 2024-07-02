// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlaceableData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlaceableData() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableData_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlaceableData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	void USBZPlaceableData::StaticRegisterNativesUSBZPlaceableData()
	{
	}
	UClass* Z_Construct_UClass_USBZPlaceableData_NoRegister()
	{
		return USBZPlaceableData::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlaceableData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_GhostActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventoryMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInventoryMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDropdownTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDropdownTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlopeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlopeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideGravityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArcParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementOffsetAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlacementOffsetAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLinetraceInitially_MetaData[];
#endif
		static void NewProp_bUseLinetraceInitially_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLinetraceInitially;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredTagContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticsDeployString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticsDeployString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlaceableData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZEquippableData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlaceableData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_GhostActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_GhostActorClass = { "GhostActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, GhostActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_GhostActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_GhostActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventoryMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventoryMax = { "AmmoInventoryMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, AmmoInventoryMax), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventoryMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventoryMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventory = { "AmmoInventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, AmmoInventory), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxTraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxTraceDistance = { "MaxTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, MaxTraceDistance), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxDropdownTraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxDropdownTraceDistance = { "MaxDropdownTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, MaxDropdownTraceDistance), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxDropdownTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxDropdownTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_TraceStepSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_TraceStepSize = { "TraceStepSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, TraceStepSize), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_TraceStepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_TraceStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxSlopeAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxSlopeAngle = { "MaxSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, MaxSlopeAngle), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_OverrideGravityZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, OverrideGravityZ), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_OverrideGravityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_OverrideGravityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_ArcParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_ArcParam = { "ArcParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, ArcParam), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_ArcParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_ArcParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_BoxExtents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_BoxExtents = { "BoxExtents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, BoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_BoxExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_BoxExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_PlacementOffsetAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_PlacementOffsetAngle = { "PlacementOffsetAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, PlacementOffsetAngle), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_PlacementOffsetAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_PlacementOffsetAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_bUseLinetraceInitially_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	void Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_bUseLinetraceInitially_SetBit(void* Obj)
	{
		((USBZPlaceableData*)Obj)->bUseLinetraceInitially = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_bUseLinetraceInitially = { "bUseLinetraceInitially", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZPlaceableData), &Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_bUseLinetraceInitially_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_bUseLinetraceInitially_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_bUseLinetraceInitially_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_RequiredTagContainer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_RequiredTagContainer = { "RequiredTagContainer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, RequiredTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_RequiredTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_RequiredTagContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_StatisticsDeployString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlaceableData" },
		{ "ModuleRelativePath", "Public/SBZPlaceableData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_StatisticsDeployString = { "StatisticsDeployString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlaceableData, StatisticsDeployString), METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_StatisticsDeployString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_StatisticsDeployString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlaceableData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_GhostActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventoryMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_AmmoInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxDropdownTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_TraceStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_MaxSlopeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_OverrideGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_ArcParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_BoxExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_PlacementOffsetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_bUseLinetraceInitially,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_RequiredTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlaceableData_Statics::NewProp_StatisticsDeployString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlaceableData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlaceableData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlaceableData_Statics::ClassParams = {
		&USBZPlaceableData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZPlaceableData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlaceableData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlaceableData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlaceableData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlaceableData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlaceableData, 1148584399);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlaceableData>()
	{
		return USBZPlaceableData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlaceableData(Z_Construct_UClass_USBZPlaceableData, &USBZPlaceableData::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlaceableData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlaceableData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
