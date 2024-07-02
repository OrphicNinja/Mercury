// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_SetBBKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_SetBBKey() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_SetBBKey_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_SetBBKey();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTTask_SetBBKey::StaticRegisterNativesUSBZBTTask_SetBBKey()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_SetBBKey_NoRegister()
	{
		return USBZBTTask_SetBBKey::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_SetBBKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_SetBBKey.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_SetBBKey.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::NewProp_TargetToSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_SetBBKey" },
		{ "ModuleRelativePath", "Public/SBZBTTask_SetBBKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::NewProp_TargetToSet = { "TargetToSet", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_SetBBKey, TargetToSet), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::NewProp_TargetToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::NewProp_TargetToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::NewProp_TargetToSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_SetBBKey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::ClassParams = {
		&USBZBTTask_SetBBKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_SetBBKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_SetBBKey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_SetBBKey, 1190930790);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_SetBBKey>()
	{
		return USBZBTTask_SetBBKey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_SetBBKey(Z_Construct_UClass_USBZBTTask_SetBBKey, &USBZBTTask_SetBBKey::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_SetBBKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_SetBBKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
