// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZGameplayAbility() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAbilityInput();
// End Cross Module References
	void USBZGameplayAbility::StaticRegisterNativesUSBZGameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_USBZGameplayAbility_NoRegister()
	{
		return USBZGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBZGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelAbilitiesOnActivationAttemptTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CancelAbilitiesOnActivationAttemptTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCancelAbilitiesOnFailedActivation_MetaData[];
#endif
		static void NewProp_bCancelAbilitiesOnFailedActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCancelAbilitiesOnFailedActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelOnOwnerTagGranted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CancelOnOwnerTagGranted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelOnInputPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CancelOnInputPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelOnInputPressedActivates_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CancelOnInputPressedActivates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostCancelOnInputPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostCancelOnInputPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedOwnerTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueuedOwnerTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCancelToggleOnInputPressed_MetaData[];
#endif
		static void NewProp_bIsCancelToggleOnInputPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCancelToggleOnInputPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCancelOnInputReleased_MetaData[];
#endif
		static void NewProp_bIsCancelOnInputReleased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCancelOnInputReleased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_QueuePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_InputPriority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Input_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTimeTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTimeTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagCooldownSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TagCooldownSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZGameplayAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelAbilitiesOnActivationAttemptTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelAbilitiesOnActivationAttemptTag = { "CancelAbilitiesOnActivationAttemptTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, CancelAbilitiesOnActivationAttemptTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelAbilitiesOnActivationAttemptTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelAbilitiesOnActivationAttemptTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bCancelAbilitiesOnFailedActivation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bCancelAbilitiesOnFailedActivation_SetBit(void* Obj)
	{
		((USBZGameplayAbility*)Obj)->bCancelAbilitiesOnFailedActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bCancelAbilitiesOnFailedActivation = { "bCancelAbilitiesOnFailedActivation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZGameplayAbility), &Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bCancelAbilitiesOnFailedActivation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bCancelAbilitiesOnFailedActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bCancelAbilitiesOnFailedActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnOwnerTagGranted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnOwnerTagGranted = { "CancelOnOwnerTagGranted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, CancelOnOwnerTagGranted), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnOwnerTagGranted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnOwnerTagGranted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressed = { "CancelOnInputPressed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, CancelOnInputPressed), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressedActivates_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressedActivates = { "CancelOnInputPressedActivates", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, CancelOnInputPressedActivates), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressedActivates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressedActivates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_PostCancelOnInputPressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_PostCancelOnInputPressed = { "PostCancelOnInputPressed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, PostCancelOnInputPressed), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_PostCancelOnInputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_PostCancelOnInputPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuedOwnerTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuedOwnerTags = { "QueuedOwnerTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, QueuedOwnerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuedOwnerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuedOwnerTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelToggleOnInputPressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelToggleOnInputPressed_SetBit(void* Obj)
	{
		((USBZGameplayAbility*)Obj)->bIsCancelToggleOnInputPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelToggleOnInputPressed = { "bIsCancelToggleOnInputPressed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZGameplayAbility), &Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelToggleOnInputPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelToggleOnInputPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelToggleOnInputPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelOnInputReleased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	void Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelOnInputReleased_SetBit(void* Obj)
	{
		((USBZGameplayAbility*)Obj)->bIsCancelOnInputReleased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelOnInputReleased = { "bIsCancelOnInputReleased", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USBZGameplayAbility), &Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelOnInputReleased_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelOnInputReleased_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelOnInputReleased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuePriority = { "QueuePriority", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, QueuePriority), METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_InputPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, InputPriority), METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_InputPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_InputPriority_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_Input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_Input_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, Input), Z_Construct_UEnum_Starbreeze_ESBZAbilityInput, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CooldownTimeTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CooldownTimeTags = { "CooldownTimeTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, CooldownTimeTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CooldownTimeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CooldownTimeTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_TagCooldownSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZGameplayAbility" },
		{ "ModuleRelativePath", "Public/SBZGameplayAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_TagCooldownSeconds = { "TagCooldownSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZGameplayAbility, TagCooldownSeconds), METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_TagCooldownSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_TagCooldownSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZGameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelAbilitiesOnActivationAttemptTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bCancelAbilitiesOnFailedActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnOwnerTagGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CancelOnInputPressedActivates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_PostCancelOnInputPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuedOwnerTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelToggleOnInputPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_bIsCancelOnInputReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_QueuePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_InputPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_Input_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_CooldownTimeTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZGameplayAbility_Statics::NewProp_TagCooldownSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZGameplayAbility_Statics::ClassParams = {
		&USBZGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZGameplayAbility, 1074133308);
	template<> STARBREEZE_API UClass* StaticClass<USBZGameplayAbility>()
	{
		return USBZGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZGameplayAbility(Z_Construct_UClass_USBZGameplayAbility, &USBZGameplayAbility::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
