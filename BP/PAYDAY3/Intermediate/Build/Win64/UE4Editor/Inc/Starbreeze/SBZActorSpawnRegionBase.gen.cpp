// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZActorSpawnRegionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZActorSpawnRegionBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnRegionBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnRegionBase();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZActorSpawnBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void ASBZActorSpawnRegionBase::StaticRegisterNativesASBZActorSpawnRegionBase()
	{
	}
	UClass* Z_Construct_UClass_ASBZActorSpawnRegionBase_NoRegister()
	{
		return ASBZActorSpawnRegionBase::StaticClass();
	}
	struct Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationBreadth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnLocationBreadth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationClearance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnLocationClearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationGridOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocationGridOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldIgnoreActorScale_MetaData[];
#endif
		static void NewProp_bShouldIgnoreActorScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldIgnoreActorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSurfaceNormalAligned_MetaData[];
#endif
		static void NewProp_bSurfaceNormalAligned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSurfaceNormalAligned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomHeadingOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomHeadingOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSpawnLocationGenerationDebugShapes_MetaData[];
#endif
		static void NewProp_bDrawSpawnLocationGenerationDebugShapes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSpawnLocationGenerationDebugShapes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZActorSpawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZActorSpawnRegionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleRadius = { "CollisionCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnRegionBase, CollisionCapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleHalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleHalfHeight = { "CollisionCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnRegionBase, CollisionCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationBreadth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationBreadth = { "SpawnLocationBreadth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnRegionBase, SpawnLocationBreadth), METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationBreadth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationBreadth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationClearance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationClearance = { "SpawnLocationClearance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnRegionBase, SpawnLocationClearance), METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationClearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationClearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationGridOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationGridOffset = { "SpawnLocationGridOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnRegionBase, SpawnLocationGridOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationGridOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationGridOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bShouldIgnoreActorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bShouldIgnoreActorScale_SetBit(void* Obj)
	{
		((ASBZActorSpawnRegionBase*)Obj)->bShouldIgnoreActorScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bShouldIgnoreActorScale = { "bShouldIgnoreActorScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZActorSpawnRegionBase), &Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bShouldIgnoreActorScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bShouldIgnoreActorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bShouldIgnoreActorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationOffset = { "SpawnLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnRegionBase, SpawnLocationOffset), METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bSurfaceNormalAligned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bSurfaceNormalAligned_SetBit(void* Obj)
	{
		((ASBZActorSpawnRegionBase*)Obj)->bSurfaceNormalAligned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bSurfaceNormalAligned = { "bSurfaceNormalAligned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZActorSpawnRegionBase), &Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bSurfaceNormalAligned_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bSurfaceNormalAligned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bSurfaceNormalAligned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_RandomHeadingOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_RandomHeadingOffset = { "RandomHeadingOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZActorSpawnRegionBase, RandomHeadingOffset), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_RandomHeadingOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_RandomHeadingOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bDrawSpawnLocationGenerationDebugShapes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZActorSpawnRegionBase" },
		{ "ModuleRelativePath", "Public/SBZActorSpawnRegionBase.h" },
	};
#endif
	void Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bDrawSpawnLocationGenerationDebugShapes_SetBit(void* Obj)
	{
		((ASBZActorSpawnRegionBase*)Obj)->bDrawSpawnLocationGenerationDebugShapes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bDrawSpawnLocationGenerationDebugShapes = { "bDrawSpawnLocationGenerationDebugShapes", nullptr, (EPropertyFlags)0x0010040000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZActorSpawnRegionBase), &Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bDrawSpawnLocationGenerationDebugShapes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bDrawSpawnLocationGenerationDebugShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bDrawSpawnLocationGenerationDebugShapes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_CollisionCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationBreadth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationClearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationGridOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bShouldIgnoreActorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_SpawnLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bSurfaceNormalAligned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_RandomHeadingOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::NewProp_bDrawSpawnLocationGenerationDebugShapes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZActorSpawnRegionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::ClassParams = {
		&ASBZActorSpawnRegionBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZActorSpawnRegionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZActorSpawnRegionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZActorSpawnRegionBase, 3822229846);
	template<> STARBREEZE_API UClass* StaticClass<ASBZActorSpawnRegionBase>()
	{
		return ASBZActorSpawnRegionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZActorSpawnRegionBase(Z_Construct_UClass_ASBZActorSpawnRegionBase, &ASBZActorSpawnRegionBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZActorSpawnRegionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZActorSpawnRegionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
