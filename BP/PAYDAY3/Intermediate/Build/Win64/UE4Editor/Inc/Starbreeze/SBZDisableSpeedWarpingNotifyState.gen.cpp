// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDisableSpeedWarpingNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDisableSpeedWarpingNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDisableSpeedWarpingNotifyState::StaticRegisterNativesUSBZDisableSpeedWarpingNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_NoRegister()
	{
		return USBZDisableSpeedWarpingNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZDisableSpeedWarpingNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDisableSpeedWarpingNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDisableSpeedWarpingNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics::ClassParams = {
		&USBZDisableSpeedWarpingNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDisableSpeedWarpingNotifyState, 3359322337);
	template<> STARBREEZE_API UClass* StaticClass<USBZDisableSpeedWarpingNotifyState>()
	{
		return USBZDisableSpeedWarpingNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDisableSpeedWarpingNotifyState(Z_Construct_UClass_USBZDisableSpeedWarpingNotifyState, &USBZDisableSpeedWarpingNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDisableSpeedWarpingNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDisableSpeedWarpingNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
