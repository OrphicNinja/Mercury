// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRappellingRopeNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRappellingRopeNotifyState() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeNotifyState_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRappellingRopeData_NoRegister();
// End Cross Module References
	void USBZRappellingRopeNotifyState::StaticRegisterNativesUSBZRappellingRopeNotifyState()
	{
	}
	UClass* Z_Construct_UClass_USBZRappellingRopeNotifyState_NoRegister()
	{
		return USBZRappellingRopeNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RappellingRopeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RappellingRopeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZRappellingRopeNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeNotifyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::NewProp_RappellingRopeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRappellingRopeNotifyState" },
		{ "ModuleRelativePath", "Public/SBZRappellingRopeNotifyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::NewProp_RappellingRopeData = { "RappellingRopeData", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRappellingRopeNotifyState, RappellingRopeData), Z_Construct_UClass_USBZRappellingRopeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::NewProp_RappellingRopeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::NewProp_RappellingRopeData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::NewProp_RappellingRopeData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRappellingRopeNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::ClassParams = {
		&USBZRappellingRopeNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::PropPointers),
		0,
		0x000130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRappellingRopeNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRappellingRopeNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRappellingRopeNotifyState, 333234930);
	template<> STARBREEZE_API UClass* StaticClass<USBZRappellingRopeNotifyState>()
	{
		return USBZRappellingRopeNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRappellingRopeNotifyState(Z_Construct_UClass_USBZRappellingRopeNotifyState, &USBZRappellingRopeNotifyState::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRappellingRopeNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRappellingRopeNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
