// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_Peek.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_Peek() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Peek_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_Peek();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTTask_Peek::StaticRegisterNativesUSBZBTTask_Peek()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_Peek_NoRegister()
	{
		return USBZBTTask_Peek::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_Peek_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCoverPointBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentCoverPointBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootingPointLocationBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShootingPointLocationBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotAnglePeek_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DotAnglePeek;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveForwardAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveForwardAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSidewaysAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSidewaysAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalStepOutDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditionalStepOutDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldCareAboutNeighbors_MetaData[];
#endif
		static void NewProp_bShouldCareAboutNeighbors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldCareAboutNeighbors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_Peek_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_Peek.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_CurrentCoverPointBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_CurrentCoverPointBBKey = { "CurrentCoverPointBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Peek, CurrentCoverPointBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_CurrentCoverPointBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_CurrentCoverPointBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_ShootingPointLocationBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_ShootingPointLocationBBKey = { "ShootingPointLocationBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Peek, ShootingPointLocationBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_ShootingPointLocationBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_ShootingPointLocationBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_TargetBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_TargetBBKey = { "TargetBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Peek, TargetBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_TargetBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_TargetBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_DotAnglePeek_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_DotAnglePeek = { "DotAnglePeek", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Peek, DotAnglePeek), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_DotAnglePeek_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_DotAnglePeek_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveForwardAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveForwardAmount = { "MoveForwardAmount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Peek, MoveForwardAmount), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveForwardAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveForwardAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveSidewaysAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveSidewaysAmount = { "MoveSidewaysAmount", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Peek, MoveSidewaysAmount), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveSidewaysAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveSidewaysAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_AdditionalStepOutDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_AdditionalStepOutDistance = { "AdditionalStepOutDistance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_Peek, AdditionalStepOutDistance), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_AdditionalStepOutDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_AdditionalStepOutDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_bShouldCareAboutNeighbors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_Peek" },
		{ "ModuleRelativePath", "Public/SBZBTTask_Peek.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_bShouldCareAboutNeighbors_SetBit(void* Obj)
	{
		((USBZBTTask_Peek*)Obj)->bShouldCareAboutNeighbors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_bShouldCareAboutNeighbors = { "bShouldCareAboutNeighbors", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_Peek), &Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_bShouldCareAboutNeighbors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_bShouldCareAboutNeighbors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_bShouldCareAboutNeighbors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_Peek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_CurrentCoverPointBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_ShootingPointLocationBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_TargetBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_DotAnglePeek,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveForwardAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_MoveSidewaysAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_AdditionalStepOutDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_Peek_Statics::NewProp_bShouldCareAboutNeighbors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_Peek_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_Peek>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_Peek_Statics::ClassParams = {
		&USBZBTTask_Peek::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_Peek_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_Peek_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_Peek_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_Peek()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_Peek_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_Peek, 3921884089);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_Peek>()
	{
		return USBZBTTask_Peek::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_Peek(Z_Construct_UClass_USBZBTTask_Peek, &USBZBTTask_Peek::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_Peek"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_Peek);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
