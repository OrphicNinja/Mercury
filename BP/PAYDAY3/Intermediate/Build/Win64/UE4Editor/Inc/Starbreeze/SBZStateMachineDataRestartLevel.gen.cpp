// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineDataRestartLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineDataRestartLevel() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataRestartLevel_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataRestartLevel();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRestartLevelInfo();
// End Cross Module References
	void USBZStateMachineDataRestartLevel::StaticRegisterNativesUSBZStateMachineDataRestartLevel()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineDataRestartLevel_NoRegister()
	{
		return USBZStateMachineDataRestartLevel::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineDataRestartLevel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataRestartLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataRestartLevel" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataRestartLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineDataRestartLevel, Params), Z_Construct_UScriptStruct_FSBZRestartLevelInfo, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineDataRestartLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::ClassParams = {
		&USBZStateMachineDataRestartLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineDataRestartLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineDataRestartLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineDataRestartLevel, 234718849);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineDataRestartLevel>()
	{
		return USBZStateMachineDataRestartLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineDataRestartLevel(Z_Construct_UClass_USBZStateMachineDataRestartLevel, &USBZStateMachineDataRestartLevel::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineDataRestartLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineDataRestartLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
