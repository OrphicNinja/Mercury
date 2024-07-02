// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnActorNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnActorNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnActorNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnActorNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAnimationSpawnedActorSettings_NoRegister();
// End Cross Module References
	void USBZSpawnActorNotifyState::StaticRegisterNativesUSBZSpawnActorNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZSpawnActorNotifyState_NoRegister()
	{
		return USBZSpawnActorNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnActorNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZSpawnActorNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnActorNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::NewProp_SpawnSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSpawnActorNotifyState" },
		{ "ModuleRelativePath", "Public/SBZSpawnActorNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::NewProp_SpawnSettings = { "SpawnSettings", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSpawnActorNotifyState, SpawnSettings), Z_Construct_UClass_USBZAnimationSpawnedActorSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::NewProp_SpawnSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::NewProp_SpawnSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::NewProp_SpawnSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSpawnActorNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::ClassParams = {
		&USBZSpawnActorNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnActorNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnActorNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnActorNotifyState, 2457027648);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnActorNotifyState>()
	{
		return USBZSpawnActorNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnActorNotifyState(Z_Construct_UClass_USBZSpawnActorNotifyState, &USBZSpawnActorNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnActorNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnActorNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
