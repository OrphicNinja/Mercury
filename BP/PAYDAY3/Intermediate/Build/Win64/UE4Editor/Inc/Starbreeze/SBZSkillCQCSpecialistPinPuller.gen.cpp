// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSkillCQCSpecialistPinPuller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSkillCQCSpecialistPinPuller() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSkillData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGrenadeData_NoRegister();
// End Cross Module References
	void USBZSkillCQCSpecialistPinPuller::StaticRegisterNativesUSBZSkillCQCSpecialistPinPuller()
	{
	}
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_NoRegister()
	{
		return USBZSkillCQCSpecialistPinPuller::StaticClass();
	}
	struct Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrenadeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrenadeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrenadeAttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GrenadeAttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlashBangDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlashBangDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZSkillData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSkillCQCSpecialistPinPuller.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistPinPuller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillCQCSpecialistPinPuller" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistPinPuller.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeData = { "GrenadeData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillCQCSpecialistPinPuller, GrenadeData), Z_Construct_UClass_USBZGrenadeData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeAttachSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillCQCSpecialistPinPuller" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistPinPuller.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeAttachSocket = { "GrenadeAttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillCQCSpecialistPinPuller, GrenadeAttachSocket), METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeAttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeAttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_FlashBangDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSkillCQCSpecialistPinPuller" },
		{ "ModuleRelativePath", "Public/SBZSkillCQCSpecialistPinPuller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_FlashBangDelay = { "FlashBangDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSkillCQCSpecialistPinPuller, FlashBangDelay), METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_FlashBangDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_FlashBangDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_GrenadeAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::NewProp_FlashBangDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSkillCQCSpecialistPinPuller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::ClassParams = {
		&USBZSkillCQCSpecialistPinPuller::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSkillCQCSpecialistPinPuller, 1383529290);
	template<> STARBREEZE_API UClass* StaticClass<USBZSkillCQCSpecialistPinPuller>()
	{
		return USBZSkillCQCSpecialistPinPuller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSkillCQCSpecialistPinPuller(Z_Construct_UClass_USBZSkillCQCSpecialistPinPuller, &USBZSkillCQCSpecialistPinPuller::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSkillCQCSpecialistPinPuller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSkillCQCSpecialistPinPuller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
