// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIActionData_FreeHostage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIActionData_FreeHostage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_FreeHostage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_FreeHostage();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode();
// End Cross Module References
	void USBZAIActionData_FreeHostage::StaticRegisterNativesUSBZAIActionData_FreeHostage()
	{
	}
	UClass* Z_Construct_UClass_USBZAIActionData_FreeHostage_NoRegister()
	{
		return USBZAIActionData_FreeHostage::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIActionData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIActionData_FreeHostage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_FreeHostage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIActionData_FreeHostage" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_FreeHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIActionData_FreeHostage, Target), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIActionData_FreeHostage" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_FreeHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIActionData_FreeHostage, Mode), Z_Construct_UEnum_Starbreeze_ESBZAIOrderMode, METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIActionData_FreeHostage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::ClassParams = {
		&USBZAIActionData_FreeHostage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIActionData_FreeHostage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIActionData_FreeHostage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIActionData_FreeHostage, 3635964286);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIActionData_FreeHostage>()
	{
		return USBZAIActionData_FreeHostage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIActionData_FreeHostage(Z_Construct_UClass_USBZAIActionData_FreeHostage, &USBZAIActionData_FreeHostage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIActionData_FreeHostage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIActionData_FreeHostage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
