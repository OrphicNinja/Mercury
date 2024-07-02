// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineDataReplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineDataReplay() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataReplay_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineDataReplay();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReplayInfo();
// End Cross Module References
	void USBZStateMachineDataReplay::StaticRegisterNativesUSBZStateMachineDataReplay()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineDataReplay_NoRegister()
	{
		return USBZStateMachineDataReplay::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineDataReplay_Statics
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
	UObject* (*const Z_Construct_UClass_USBZStateMachineDataReplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZStateMachineData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataReplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineDataReplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataReplay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineDataReplay_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineDataReplay" },
		{ "ModuleRelativePath", "Public/SBZStateMachineDataReplay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZStateMachineDataReplay_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineDataReplay, Params), Z_Construct_UScriptStruct_FSBZReplayInfo, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataReplay_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataReplay_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineDataReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineDataReplay_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineDataReplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineDataReplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineDataReplay_Statics::ClassParams = {
		&USBZStateMachineDataReplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineDataReplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataReplay_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineDataReplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineDataReplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineDataReplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineDataReplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineDataReplay, 2059932023);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineDataReplay>()
	{
		return USBZStateMachineDataReplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineDataReplay(Z_Construct_UClass_USBZStateMachineDataReplay, &USBZStateMachineDataReplay::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineDataReplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineDataReplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
