// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_GetClosestPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_GetClosestPosition() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_GetClosestPosition_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_GetClosestPosition();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USBZBTTask_GetClosestPosition::StaticRegisterNativesUSBZBTTask_GetClosestPosition()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_GetClosestPosition_NoRegister()
	{
		return USBZBTTask_GetClosestPosition::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveToLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveToLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectionExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_GetClosestPosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetClosestPosition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_GetClosestPosition" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetClosestPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_GetClosestPosition, TargetActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_MoveToLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_GetClosestPosition" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetClosestPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_MoveToLocation = { "MoveToLocation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_GetClosestPosition, MoveToLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_MoveToLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_MoveToLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_FilterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_GetClosestPosition" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetClosestPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_GetClosestPosition, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_ProjectionExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_GetClosestPosition" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetClosestPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_ProjectionExtent = { "ProjectionExtent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_GetClosestPosition, ProjectionExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_ProjectionExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_ProjectionExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_MoveToLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::NewProp_ProjectionExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_GetClosestPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::ClassParams = {
		&USBZBTTask_GetClosestPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_GetClosestPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_GetClosestPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_GetClosestPosition, 2892186191);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_GetClosestPosition>()
	{
		return USBZBTTask_GetClosestPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_GetClosestPosition(Z_Construct_UClass_USBZBTTask_GetClosestPosition, &USBZBTTask_GetClosestPosition::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_GetClosestPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_GetClosestPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
