// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZShockGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZShockGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZShockGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZShockGrenade();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGrenade();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZShockGrenadeActorData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
// End Cross Module References
	void ASBZShockGrenade::StaticRegisterNativesASBZShockGrenade()
	{
	}
	UClass* Z_Construct_UClass_ASBZShockGrenade_NoRegister()
	{
		return ASBZShockGrenade::StaticClass();
	}
	struct Z_Construct_UClass_ASBZShockGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShockedActorMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShockedActorMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShockedActorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ShockedActorMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentChainedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentChainedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInterweaveAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinInterweaveAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInterweaveDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinInterweaveDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectDistanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TraceEffectDistanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectDurationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TraceEffectDurationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectStunDurationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TraceEffectStunDurationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectComponentArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceEffectComponentArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEffectComponentArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceEffectComponentArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDetonationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveDetonationEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZShockGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZGrenade,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZShockGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CapsuleCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CapsuleCollision = { "CapsuleCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, CapsuleCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CapsuleCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CapsuleCollision_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap_ValueProp = { "ShockedActorMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZShockGrenadeActorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap_Key_KeyProp = { "ShockedActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap = { "ShockedActorMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, ShockedActorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CurrentChainedActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CurrentChainedActor = { "CurrentChainedActor", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, CurrentChainedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CurrentChainedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CurrentChainedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveAngle = { "MinInterweaveAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, MinInterweaveAngle), METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveDot = { "MinInterweaveDot", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, MinInterweaveDot), METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffect = { "TraceEffect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, TraceEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDistanceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDistanceName = { "TraceEffectDistanceName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, TraceEffectDistanceName), METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDistanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDistanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDurationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDurationName = { "TraceEffectDurationName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, TraceEffectDurationName), METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDurationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDurationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectStunDurationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectStunDurationName = { "TraceEffectStunDurationName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, TraceEffectStunDurationName), METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectStunDurationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectStunDurationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_Inner = { "TraceEffectComponentArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray = { "TraceEffectComponentArray", nullptr, (EPropertyFlags)0x002008800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, TraceEffectComponentArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ActiveDetonationEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZShockGrenade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZShockGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ActiveDetonationEffect = { "ActiveDetonationEffect", nullptr, (EPropertyFlags)0x002208000008200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZShockGrenade, ActiveDetonationEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ActiveDetonationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ActiveDetonationEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZShockGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CapsuleCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ShockedActorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_CurrentChainedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_MinInterweaveDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDistanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectDurationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectStunDurationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_TraceEffectComponentArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZShockGrenade_Statics::NewProp_ActiveDetonationEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZShockGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZShockGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZShockGrenade_Statics::ClassParams = {
		&ASBZShockGrenade::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASBZShockGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::PropPointers),
		0,
		0x008000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZShockGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZShockGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZShockGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZShockGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZShockGrenade, 3909987456);
	template<> STARBREEZE_API UClass* StaticClass<ASBZShockGrenade>()
	{
		return ASBZShockGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZShockGrenade(Z_Construct_UClass_ASBZShockGrenade, &ASBZShockGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZShockGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZShockGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
