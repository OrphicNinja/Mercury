// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDialogDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDialogDataAsset() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDialogType();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZDialogLineDefinition();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer();
// End Cross Module References
	void USBZDialogDataAsset::StaticRegisterNativesUSBZDialogDataAsset()
	{
	}
	UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister()
	{
		return USBZDialogDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USBZDialogDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DialogType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DialogType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogLines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipFirstDelay_MetaData[];
#endif
		static void NewProp_bSkipFirstDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipFirstDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDeadAllowed_MetaData[];
#endif
		static void NewProp_bIsDeadAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDeadAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHumanShieldVictimAllowed_MetaData[];
#endif
		static void NewProp_bIsHumanShieldVictimAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHumanShieldVictimAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHostageAllowed_MetaData[];
#endif
		static void NewProp_bIsHostageAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHostageAllowed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoiceSwitchesPerPerformer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceSwitchesPerPerformer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VoiceSwitchesPerPerformer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDialogDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDialogDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogType = { "DialogType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogDataAsset, DialogType), Z_Construct_UEnum_Starbreeze_ESBZDialogType, METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogDataAsset, Priority), METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogLines_Inner = { "DialogLines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZDialogLineDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogLines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogLines = { "DialogLines", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogDataAsset, DialogLines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bSkipFirstDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bSkipFirstDelay_SetBit(void* Obj)
	{
		((USBZDialogDataAsset*)Obj)->bSkipFirstDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bSkipFirstDelay = { "bSkipFirstDelay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDialogDataAsset), &Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bSkipFirstDelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bSkipFirstDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bSkipFirstDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsDeadAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsDeadAllowed_SetBit(void* Obj)
	{
		((USBZDialogDataAsset*)Obj)->bIsDeadAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsDeadAllowed = { "bIsDeadAllowed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDialogDataAsset), &Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsDeadAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsDeadAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsDeadAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHumanShieldVictimAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHumanShieldVictimAllowed_SetBit(void* Obj)
	{
		((USBZDialogDataAsset*)Obj)->bIsHumanShieldVictimAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHumanShieldVictimAllowed = { "bIsHumanShieldVictimAllowed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDialogDataAsset), &Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHumanShieldVictimAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHumanShieldVictimAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHumanShieldVictimAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHostageAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHostageAllowed_SetBit(void* Obj)
	{
		((USBZDialogDataAsset*)Obj)->bIsHostageAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHostageAllowed = { "bIsHostageAllowed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDialogDataAsset), &Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHostageAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHostageAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHostageAllowed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_VoiceSwitchesPerPerformer_Inner = { "VoiceSwitchesPerPerformer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZVoiceSwitchPerPerformer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_VoiceSwitchesPerPerformer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogDataAsset" },
		{ "ModuleRelativePath", "Public/SBZDialogDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_VoiceSwitchesPerPerformer = { "VoiceSwitchesPerPerformer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogDataAsset, VoiceSwitchesPerPerformer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_VoiceSwitchesPerPerformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_VoiceSwitchesPerPerformer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDialogDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogLines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_DialogLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bSkipFirstDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsDeadAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHumanShieldVictimAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_bIsHostageAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_VoiceSwitchesPerPerformer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogDataAsset_Statics::NewProp_VoiceSwitchesPerPerformer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDialogDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDialogDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDialogDataAsset_Statics::ClassParams = {
		&USBZDialogDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDialogDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDialogDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDialogDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDialogDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDialogDataAsset, 2937719818);
	template<> STARBREEZE_API UClass* StaticClass<USBZDialogDataAsset>()
	{
		return USBZDialogDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDialogDataAsset(Z_Construct_UClass_USBZDialogDataAsset, &USBZDialogDataAsset::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDialogDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDialogDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
