// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFineGrainedRateLimitManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFineGrainedRateLimitManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFineGrainedRateLimitManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZFineGrainedRateLimitManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	void USBZFineGrainedRateLimitManager::StaticRegisterNativesUSBZFineGrainedRateLimitManager()
	{
	}
	UClass* Z_Construct_UClass_USBZFineGrainedRateLimitManager_NoRegister()
	{
		return USBZFineGrainedRateLimitManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FGRLManagerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FGRLManagerClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZFineGrainedRateLimitManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFineGrainedRateLimitManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::NewProp_FGRLManagerClassName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFineGrainedRateLimitManager" },
		{ "ModuleRelativePath", "Public/SBZFineGrainedRateLimitManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::NewProp_FGRLManagerClassName = { "FGRLManagerClassName", nullptr, (EPropertyFlags)0x0040000000044005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZFineGrainedRateLimitManager, FGRLManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::NewProp_FGRLManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::NewProp_FGRLManagerClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::NewProp_FGRLManagerClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZFineGrainedRateLimitManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::ClassParams = {
		&USBZFineGrainedRateLimitManager::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZFineGrainedRateLimitManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZFineGrainedRateLimitManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZFineGrainedRateLimitManager, 45172822);
	template<> STARBREEZE_API UClass* StaticClass<USBZFineGrainedRateLimitManager>()
	{
		return USBZFineGrainedRateLimitManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZFineGrainedRateLimitManager(Z_Construct_UClass_USBZFineGrainedRateLimitManager, &USBZFineGrainedRateLimitManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZFineGrainedRateLimitManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZFineGrainedRateLimitManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
