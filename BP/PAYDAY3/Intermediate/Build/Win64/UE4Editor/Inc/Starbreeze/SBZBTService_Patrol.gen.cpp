// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_Patrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_Patrol() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UDEPRECATED_SBZBTService_Patrol::StaticRegisterNativesUDEPRECATED_SBZBTService_Patrol()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_NoRegister()
	{
		return UDEPRECATED_SBZBTService_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPointKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_Patrol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_Patrol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::NewProp_PatrolPointKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_Patrol" },
		{ "ModuleRelativePath", "Public/SBZBTService_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::NewProp_PatrolPointKey = { "PatrolPointKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZBTService_Patrol, PatrolPointKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::NewProp_PatrolPointKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::NewProp_PatrolPointKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::NewProp_PatrolPointKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_SBZBTService_Patrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::ClassParams = {
		&UDEPRECATED_SBZBTService_Patrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::PropPointers),
		0,
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_SBZBTService_Patrol, 2033188166);
	template<> STARBREEZE_API UClass* StaticClass<UDEPRECATED_SBZBTService_Patrol>()
	{
		return UDEPRECATED_SBZBTService_Patrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_SBZBTService_Patrol(Z_Construct_UClass_UDEPRECATED_SBZBTService_Patrol, &UDEPRECATED_SBZBTService_Patrol::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UDEPRECATED_SBZBTService_Patrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_SBZBTService_Patrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
