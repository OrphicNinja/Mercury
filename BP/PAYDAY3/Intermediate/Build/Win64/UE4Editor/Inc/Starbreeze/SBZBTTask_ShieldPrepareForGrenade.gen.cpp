// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_ShieldPrepareForGrenade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_ShieldPrepareForGrenade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZBTTask_ShieldPrepareForGrenade::StaticRegisterNativesUSBZBTTask_ShieldPrepareForGrenade()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_NoRegister()
	{
		return USBZBTTask_ShieldPrepareForGrenade::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComments_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_ShieldPrepareForGrenade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_ShieldPrepareForGrenade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::NewProp_VoiceComments_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_ShieldPrepareForGrenade" },
		{ "ModuleRelativePath", "Public/SBZBTTask_ShieldPrepareForGrenade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::NewProp_VoiceComments = { "VoiceComments", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VoiceComments, USBZBTTask_ShieldPrepareForGrenade), STRUCT_OFFSET(USBZBTTask_ShieldPrepareForGrenade, VoiceComments), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::NewProp_VoiceComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::NewProp_VoiceComments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::NewProp_VoiceComments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_ShieldPrepareForGrenade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::ClassParams = {
		&USBZBTTask_ShieldPrepareForGrenade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_ShieldPrepareForGrenade, 1474027426);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_ShieldPrepareForGrenade>()
	{
		return USBZBTTask_ShieldPrepareForGrenade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_ShieldPrepareForGrenade(Z_Construct_UClass_USBZBTTask_ShieldPrepareForGrenade, &USBZBTTask_ShieldPrepareForGrenade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_ShieldPrepareForGrenade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_ShieldPrepareForGrenade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
