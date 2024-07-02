// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAnimationSpawnedActorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAnimationSpawnedActorSettings() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimationSpawnedActorSettings_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimationSpawnedActorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCosmeticProp_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD();
// End Cross Module References
	void USBZAnimationSpawnedActorSettings::StaticRegisterNativesUSBZAnimationSpawnedActorSettings()
	{
	}
	UClass* Z_Construct_UClass_USBZAnimationSpawnedActorSettings_NoRegister()
	{
		return USBZAnimationSpawnedActorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachmentBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachmentOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DespawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropIfInterrupted_MetaData[];
#endif
		static void NewProp_bDropIfInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropIfInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DespawnDelayInterrupted_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DespawnDelayInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleStancesToDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompatibleStancesToDrop;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CPDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CPDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAnimationSpawnedActorSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimationSpawnedActorSettings, ActorToSpawn), Z_Construct_UClass_ASBZCosmeticProp_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_ActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentBone = { "AttachmentBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimationSpawnedActorSettings, AttachmentBone), METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentOffset = { "AttachmentOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimationSpawnedActorSettings, AttachmentOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelay = { "DespawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimationSpawnedActorSettings, DespawnDelay), METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_bDropIfInterrupted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	void Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_bDropIfInterrupted_SetBit(void* Obj)
	{
		((USBZAnimationSpawnedActorSettings*)Obj)->bDropIfInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_bDropIfInterrupted = { "bDropIfInterrupted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAnimationSpawnedActorSettings), &Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_bDropIfInterrupted_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_bDropIfInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_bDropIfInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelayInterrupted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelayInterrupted = { "DespawnDelayInterrupted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimationSpawnedActorSettings, DespawnDelayInterrupted), METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelayInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelayInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CompatibleStancesToDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CompatibleStancesToDrop = { "CompatibleStancesToDrop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimationSpawnedActorSettings, CompatibleStancesToDrop), METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CompatibleStancesToDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CompatibleStancesToDrop_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CPDs_Inner = { "CPDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZAnimationSpawnedActorCPD, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CPDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAnimationSpawnedActorSettings" },
		{ "ModuleRelativePath", "Public/SBZAnimationSpawnedActorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CPDs = { "CPDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAnimationSpawnedActorSettings, CPDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CPDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CPDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_ActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_AttachmentOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_bDropIfInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_DespawnDelayInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CompatibleStancesToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CPDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::NewProp_CPDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAnimationSpawnedActorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::ClassParams = {
		&USBZAnimationSpawnedActorSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAnimationSpawnedActorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAnimationSpawnedActorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAnimationSpawnedActorSettings, 2607626382);
	template<> STARBREEZE_API UClass* StaticClass<USBZAnimationSpawnedActorSettings>()
	{
		return USBZAnimationSpawnedActorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAnimationSpawnedActorSettings(Z_Construct_UClass_USBZAnimationSpawnedActorSettings, &USBZAnimationSpawnedActorSettings::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAnimationSpawnedActorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAnimationSpawnedActorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
