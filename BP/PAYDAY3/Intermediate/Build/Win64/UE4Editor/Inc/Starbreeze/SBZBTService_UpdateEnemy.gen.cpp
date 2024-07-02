// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_UpdateEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_UpdateEnemy() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateEnemy_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateEnemy();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	void USBZBTService_UpdateEnemy::StaticRegisterNativesUSBZBTService_UpdateEnemy()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_UpdateEnemy_NoRegister()
	{
		return USBZBTService_UpdateEnemy::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemyBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentEnemyBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequirePerceivedHostile_MetaData[];
#endif
		static void NewProp_bRequirePerceivedHostile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequirePerceivedHostile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamStimuliDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeamStimuliDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceTickThrottle_MetaData[];
#endif
		static void NewProp_bUseDistanceTickThrottle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceTickThrottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickIntervalRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickIntervalRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickDistRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickDistRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_UpdateEnemy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_CurrentEnemyBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateEnemy" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_CurrentEnemyBBKey = { "CurrentEnemyBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateEnemy, CurrentEnemyBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_CurrentEnemyBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_CurrentEnemyBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateEnemy" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateEnemy, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_EQSRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bRequirePerceivedHostile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateEnemy" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bRequirePerceivedHostile_SetBit(void* Obj)
	{
		((USBZBTService_UpdateEnemy*)Obj)->bRequirePerceivedHostile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bRequirePerceivedHostile = { "bRequirePerceivedHostile", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTService_UpdateEnemy), &Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bRequirePerceivedHostile_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bRequirePerceivedHostile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bRequirePerceivedHostile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TeamStimuliDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateEnemy" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TeamStimuliDelay = { "TeamStimuliDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateEnemy, TeamStimuliDelay), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TeamStimuliDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TeamStimuliDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bUseDistanceTickThrottle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateEnemy" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bUseDistanceTickThrottle_SetBit(void* Obj)
	{
		((USBZBTService_UpdateEnemy*)Obj)->bUseDistanceTickThrottle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bUseDistanceTickThrottle = { "bUseDistanceTickThrottle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTService_UpdateEnemy), &Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bUseDistanceTickThrottle_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bUseDistanceTickThrottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bUseDistanceTickThrottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickIntervalRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateEnemy" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickIntervalRange = { "TickIntervalRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateEnemy, TickIntervalRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickIntervalRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickIntervalRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickDistRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateEnemy" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickDistRange = { "TickDistRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateEnemy, TickDistRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickDistRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickDistRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_CurrentEnemyBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_EQSRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bRequirePerceivedHostile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TeamStimuliDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_bUseDistanceTickThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickIntervalRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::NewProp_TickDistRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_UpdateEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::ClassParams = {
		&USBZBTService_UpdateEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_UpdateEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_UpdateEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_UpdateEnemy, 3912036987);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_UpdateEnemy>()
	{
		return USBZBTService_UpdateEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_UpdateEnemy(Z_Construct_UClass_USBZBTService_UpdateEnemy, &USBZBTService_UpdateEnemy::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_UpdateEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_UpdateEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
