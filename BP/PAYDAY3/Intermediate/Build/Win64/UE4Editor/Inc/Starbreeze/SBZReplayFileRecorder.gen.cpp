// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReplayFileRecorder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReplayFileRecorder() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayFileRecorder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReplayFileRecorder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameInstance_NoRegister();
// End Cross Module References
	void USBZReplayFileRecorder::StaticRegisterNativesUSBZReplayFileRecorder()
	{
	}
	UClass* Z_Construct_UClass_USBZReplayFileRecorder_NoRegister()
	{
		return USBZReplayFileRecorder::StaticClass();
	}
	struct Z_Construct_UClass_USBZReplayFileRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReplayFileRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayFileRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZReplayFileRecorder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZReplayFileRecorder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReplayFileRecorder_Statics::NewProp_GameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZReplayFileRecorder" },
		{ "ModuleRelativePath", "Public/SBZReplayFileRecorder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZReplayFileRecorder_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZReplayFileRecorder, GameInstance), Z_Construct_UClass_USBZGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZReplayFileRecorder_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFileRecorder_Statics::NewProp_GameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZReplayFileRecorder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZReplayFileRecorder_Statics::NewProp_GameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReplayFileRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZReplayFileRecorder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReplayFileRecorder_Statics::ClassParams = {
		&USBZReplayFileRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZReplayFileRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFileRecorder_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USBZReplayFileRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReplayFileRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReplayFileRecorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReplayFileRecorder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReplayFileRecorder, 2045050963);
	template<> STARBREEZE_API UClass* StaticClass<USBZReplayFileRecorder>()
	{
		return USBZReplayFileRecorder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReplayFileRecorder(Z_Construct_UClass_USBZReplayFileRecorder, &USBZReplayFileRecorder::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReplayFileRecorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReplayFileRecorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
