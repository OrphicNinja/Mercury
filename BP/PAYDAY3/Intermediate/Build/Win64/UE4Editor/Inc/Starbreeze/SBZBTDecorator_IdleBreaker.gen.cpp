// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_IdleBreaker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_IdleBreaker() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_IdleBreaker_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_IdleBreaker();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
// End Cross Module References
	void USBZBTDecorator_IdleBreaker::StaticRegisterNativesUSBZBTDecorator_IdleBreaker()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_IdleBreaker_NoRegister()
	{
		return USBZBTDecorator_IdleBreaker::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPredictedDuration_MetaData[];
#endif
		static void NewProp_bHasPredictedDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPredictedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedDurationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictedDurationKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_IdleBreaker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_IdleBreaker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_bHasPredictedDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_IdleBreaker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_IdleBreaker.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_bHasPredictedDuration_SetBit(void* Obj)
	{
		((USBZBTDecorator_IdleBreaker*)Obj)->bHasPredictedDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_bHasPredictedDuration = { "bHasPredictedDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_IdleBreaker), &Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_bHasPredictedDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_bHasPredictedDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_bHasPredictedDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_PredictedDurationKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_IdleBreaker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_IdleBreaker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_PredictedDurationKey = { "PredictedDurationKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_IdleBreaker, PredictedDurationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_PredictedDurationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_PredictedDurationKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_InitWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_IdleBreaker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_IdleBreaker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_InitWaitTime = { "InitWaitTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_IdleBreaker, InitWaitTime), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_InitWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_InitWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_CoolDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_IdleBreaker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_IdleBreaker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_CoolDown = { "CoolDown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_IdleBreaker, CoolDown), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_CoolDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_CoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_IdleBreaker" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_IdleBreaker.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_IdleBreaker, Duration), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_bHasPredictedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_PredictedDurationKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_InitWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_CoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_IdleBreaker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::ClassParams = {
		&USBZBTDecorator_IdleBreaker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_IdleBreaker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_IdleBreaker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_IdleBreaker, 737106777);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_IdleBreaker>()
	{
		return USBZBTDecorator_IdleBreaker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_IdleBreaker(Z_Construct_UClass_USBZBTDecorator_IdleBreaker, &USBZBTDecorator_IdleBreaker::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_IdleBreaker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_IdleBreaker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
