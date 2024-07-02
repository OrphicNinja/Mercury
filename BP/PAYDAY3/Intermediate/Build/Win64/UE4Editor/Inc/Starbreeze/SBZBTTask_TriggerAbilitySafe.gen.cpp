// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_TriggerAbilitySafe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_TriggerAbilitySafe() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAbilityInput();
// End Cross Module References
	void USBZBTTask_TriggerAbilitySafe::StaticRegisterNativesUSBZBTTask_TriggerAbilitySafe()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_NoRegister()
	{
		return USBZBTTask_TriggerAbilitySafe::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityInput_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCancelOnFinish_MetaData[];
#endif
		static void NewProp_bCancelOnFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCancelOnFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToHoldInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToHoldInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldWaitForAbility_MetaData[];
#endif
		static void NewProp_bShouldWaitForAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldWaitForAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_TriggerAbilitySafe.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_TriggerAbilitySafe.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_AbilityInput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_AbilityInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_TriggerAbilitySafe" },
		{ "ModuleRelativePath", "Public/SBZBTTask_TriggerAbilitySafe.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_AbilityInput = { "AbilityInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_TriggerAbilitySafe, AbilityInput), Z_Construct_UEnum_Starbreeze_ESBZAbilityInput, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_AbilityInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_AbilityInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bCancelOnFinish_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_TriggerAbilitySafe" },
		{ "ModuleRelativePath", "Public/SBZBTTask_TriggerAbilitySafe.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bCancelOnFinish_SetBit(void* Obj)
	{
		((USBZBTTask_TriggerAbilitySafe*)Obj)->bCancelOnFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bCancelOnFinish = { "bCancelOnFinish", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_TriggerAbilitySafe), &Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bCancelOnFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bCancelOnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bCancelOnFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_TimeToHoldInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_TriggerAbilitySafe" },
		{ "ModuleRelativePath", "Public/SBZBTTask_TriggerAbilitySafe.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_TimeToHoldInput = { "TimeToHoldInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_TriggerAbilitySafe, TimeToHoldInput), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_TimeToHoldInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_TimeToHoldInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bShouldWaitForAbility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_TriggerAbilitySafe" },
		{ "ModuleRelativePath", "Public/SBZBTTask_TriggerAbilitySafe.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bShouldWaitForAbility_SetBit(void* Obj)
	{
		((USBZBTTask_TriggerAbilitySafe*)Obj)->bShouldWaitForAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bShouldWaitForAbility = { "bShouldWaitForAbility", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_TriggerAbilitySafe), &Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bShouldWaitForAbility_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bShouldWaitForAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bShouldWaitForAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_AbilityInput_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_AbilityInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bCancelOnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_TimeToHoldInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::NewProp_bShouldWaitForAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_TriggerAbilitySafe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::ClassParams = {
		&USBZBTTask_TriggerAbilitySafe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_TriggerAbilitySafe, 3381292557);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_TriggerAbilitySafe>()
	{
		return USBZBTTask_TriggerAbilitySafe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_TriggerAbilitySafe(Z_Construct_UClass_USBZBTTask_TriggerAbilitySafe, &USBZBTTask_TriggerAbilitySafe::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_TriggerAbilitySafe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_TriggerAbilitySafe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
