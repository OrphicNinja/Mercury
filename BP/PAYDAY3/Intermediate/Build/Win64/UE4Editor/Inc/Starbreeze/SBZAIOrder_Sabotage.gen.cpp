// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_Sabotage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_Sabotage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Sabotage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_Sabotage();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USBZAIOrder_Sabotage::StaticRegisterNativesUSBZAIOrder_Sabotage()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_Sabotage_NoRegister()
	{
		return USBZAIOrder_Sabotage::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_Sabotage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SabotageActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SabotageActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableSabotageTargetOnFail_MetaData[];
#endif
		static void NewProp_bDisableSabotageTargetOnFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableSabotageTargetOnFail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_Sabotage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Sabotage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_SabotageActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Sabotage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Sabotage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_SabotageActor = { "SabotageActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Sabotage, SabotageActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_SabotageActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_SabotageActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Sabotage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Sabotage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_Sabotage, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_BlackboardKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_bDisableSabotageTargetOnFail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_Sabotage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_Sabotage.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_bDisableSabotageTargetOnFail_SetBit(void* Obj)
	{
		((USBZAIOrder_Sabotage*)Obj)->bDisableSabotageTargetOnFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_bDisableSabotageTargetOnFail = { "bDisableSabotageTargetOnFail", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder_Sabotage), &Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_bDisableSabotageTargetOnFail_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_bDisableSabotageTargetOnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_bDisableSabotageTargetOnFail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_SabotageActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_BlackboardKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::NewProp_bDisableSabotageTargetOnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_Sabotage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::ClassParams = {
		&USBZAIOrder_Sabotage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_Sabotage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_Sabotage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_Sabotage, 1348098832);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_Sabotage>()
	{
		return USBZAIOrder_Sabotage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_Sabotage(Z_Construct_UClass_USBZAIOrder_Sabotage, &USBZAIOrder_Sabotage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_Sabotage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_Sabotage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
