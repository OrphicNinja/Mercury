// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_AttackTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_AttackTarget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_AttackTarget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_AttackTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void USBZBTTask_AttackTarget::StaticRegisterNativesUSBZBTTask_AttackTarget()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_AttackTarget_NoRegister()
	{
		return USBZBTTask_AttackTarget::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_AttackTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActorBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetActorBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOSLostAdditionalAimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LOSLostAdditionalAimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsContinousFire_MetaData[];
#endif
		static void NewProp_bIsContinousFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsContinousFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuosFireWhileTagActive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContinuosFireWhileTagActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldStopTelegraphOnAimingDone_MetaData[];
#endif
		static void NewProp_bShouldStopTelegraphOnAimingDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldStopTelegraphOnAimingDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimTimeModifierTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimTimeModifierTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_AttackTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_TargetActorBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_TargetActorBBKey = { "TargetActorBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AttackTarget, TargetActorBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_TargetActorBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_TargetActorBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AttackTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AttackTarget, AttackTime), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_RandomDeviation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AttackTarget, RandomDeviation), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_RandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_RandomDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTime = { "AimTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AttackTarget, AimTime), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_LOSLostAdditionalAimTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_LOSLostAdditionalAimTime = { "LOSLostAdditionalAimTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AttackTarget, LOSLostAdditionalAimTime), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_LOSLostAdditionalAimTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_LOSLostAdditionalAimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bIsContinousFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bIsContinousFire_SetBit(void* Obj)
	{
		((USBZBTTask_AttackTarget*)Obj)->bIsContinousFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bIsContinousFire = { "bIsContinousFire", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_AttackTarget), &Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bIsContinousFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bIsContinousFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bIsContinousFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_ContinuosFireWhileTagActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_ContinuosFireWhileTagActive = { "ContinuosFireWhileTagActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AttackTarget, ContinuosFireWhileTagActive), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_ContinuosFireWhileTagActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_ContinuosFireWhileTagActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bShouldStopTelegraphOnAimingDone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bShouldStopTelegraphOnAimingDone_SetBit(void* Obj)
	{
		((USBZBTTask_AttackTarget*)Obj)->bShouldStopTelegraphOnAimingDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bShouldStopTelegraphOnAimingDone = { "bShouldStopTelegraphOnAimingDone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_AttackTarget), &Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bShouldStopTelegraphOnAimingDone_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bShouldStopTelegraphOnAimingDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bShouldStopTelegraphOnAimingDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTimeModifierTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_AttackTarget" },
		{ "ModuleRelativePath", "Public/SBZBTTask_AttackTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTimeModifierTag = { "AimTimeModifierTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_AttackTarget, AimTimeModifierTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTimeModifierTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTimeModifierTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_TargetActorBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_RandomDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_LOSLostAdditionalAimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bIsContinousFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_ContinuosFireWhileTagActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_bShouldStopTelegraphOnAimingDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::NewProp_AimTimeModifierTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_AttackTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::ClassParams = {
		&USBZBTTask_AttackTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_AttackTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_AttackTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_AttackTarget, 2999231775);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_AttackTarget>()
	{
		return USBZBTTask_AttackTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_AttackTarget(Z_Construct_UClass_USBZBTTask_AttackTarget, &USBZBTTask_AttackTarget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_AttackTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_AttackTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
