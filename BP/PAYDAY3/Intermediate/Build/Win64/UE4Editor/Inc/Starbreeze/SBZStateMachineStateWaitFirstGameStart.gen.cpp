// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateWaitFirstGameStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateWaitFirstGameStart() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaDataLoader_NoRegister();
// End Cross Module References
	void USBZStateMachineStateWaitFirstGameStart::StaticRegisterNativesUSBZStateMachineStateWaitFirstGameStart()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_NoRegister()
	{
		return USBZStateMachineStateWaitFirstGameStart::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataLoader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaDataLoader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateWaitFirstGameStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitFirstGameStart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::NewProp_MetaDataLoader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateWaitFirstGameStart" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateWaitFirstGameStart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::NewProp_MetaDataLoader = { "MetaDataLoader", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateWaitFirstGameStart, MetaDataLoader), Z_Construct_UClass_USBZMetaDataLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::NewProp_MetaDataLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::NewProp_MetaDataLoader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::NewProp_MetaDataLoader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateWaitFirstGameStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::ClassParams = {
		&USBZStateMachineStateWaitFirstGameStart::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateWaitFirstGameStart, 2397531626);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateWaitFirstGameStart>()
	{
		return USBZStateMachineStateWaitFirstGameStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateWaitFirstGameStart(Z_Construct_UClass_USBZStateMachineStateWaitFirstGameStart, &USBZStateMachineStateWaitFirstGameStart::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateWaitFirstGameStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateWaitFirstGameStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
