// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSuitPartSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSuitPartSlot() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSuitPartSlot();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZCosmeticsPartSlot();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSuitPartSlot::StaticRegisterNativesUSBZSuitPartSlot()
	{
	}
	UClass* Z_Construct_UClass_USBZSuitPartSlot_NoRegister()
	{
		return USBZSuitPartSlot::StaticClass();
	}
	struct Z_Construct_UClass_USBZSuitPartSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuitPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuitPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSuitPartSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZCosmeticsPartSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitPartSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSuitPartSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSuitPartSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSuitPartSlot_Statics::NewProp_SuitPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSuitPartSlot" },
		{ "ModuleRelativePath", "Public/SBZSuitPartSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZSuitPartSlot_Statics::NewProp_SuitPart = { "SuitPart", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSuitPartSlot, SuitPart), nullptr, METADATA_PARAMS(Z_Construct_UClass_USBZSuitPartSlot_Statics::NewProp_SuitPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPartSlot_Statics::NewProp_SuitPart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSuitPartSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSuitPartSlot_Statics::NewProp_SuitPart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSuitPartSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSuitPartSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSuitPartSlot_Statics::ClassParams = {
		&USBZSuitPartSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSuitPartSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPartSlot_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSuitPartSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSuitPartSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSuitPartSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSuitPartSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSuitPartSlot, 2548765166);
	template<> STARBREEZE_API UClass* StaticClass<USBZSuitPartSlot>()
	{
		return USBZSuitPartSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSuitPartSlot(Z_Construct_UClass_USBZSuitPartSlot, &USBZSuitPartSlot::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSuitPartSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSuitPartSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
