// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEnvQueryTest_DrillState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEnvQueryTest_DrillState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_DrillState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEnvQueryTest_DrillState();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDrillState();
// End Cross Module References
	void USBZEnvQueryTest_DrillState::StaticRegisterNativesUSBZEnvQueryTest_DrillState()
	{
	}
	UClass* Z_Construct_UClass_USBZEnvQueryTest_DrillState_NoRegister()
	{
		return USBZEnvQueryTest_DrillState::StaticClass();
	}
	struct Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMatchNonDrills_MetaData[];
#endif
		static void NewProp_bMatchNonDrills_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchNonDrills;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchState_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MatchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZEnvQueryTest_DrillState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_DrillState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_bMatchNonDrills_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_DrillState" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_DrillState.h" },
	};
#endif
	void Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_bMatchNonDrills_SetBit(void* Obj)
	{
		((USBZEnvQueryTest_DrillState*)Obj)->bMatchNonDrills = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_bMatchNonDrills = { "bMatchNonDrills", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZEnvQueryTest_DrillState), &Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_bMatchNonDrills_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_bMatchNonDrills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_bMatchNonDrills_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState_Inner = { "MatchState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZDrillState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZEnvQueryTest_DrillState" },
		{ "ModuleRelativePath", "Public/SBZEnvQueryTest_DrillState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState = { "MatchState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZEnvQueryTest_DrillState, MatchState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_bMatchNonDrills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::NewProp_MatchState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZEnvQueryTest_DrillState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::ClassParams = {
		&USBZEnvQueryTest_DrillState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEnvQueryTest_DrillState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEnvQueryTest_DrillState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEnvQueryTest_DrillState, 3566967528);
	template<> STARBREEZE_API UClass* StaticClass<USBZEnvQueryTest_DrillState>()
	{
		return USBZEnvQueryTest_DrillState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEnvQueryTest_DrillState(Z_Construct_UClass_USBZEnvQueryTest_DrillState, &USBZEnvQueryTest_DrillState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEnvQueryTest_DrillState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEnvQueryTest_DrillState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
