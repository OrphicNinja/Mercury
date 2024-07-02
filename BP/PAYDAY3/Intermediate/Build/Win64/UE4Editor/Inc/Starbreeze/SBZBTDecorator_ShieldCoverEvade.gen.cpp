// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_ShieldCoverEvade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_ShieldCoverEvade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_Evade();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTDecorator_ShieldCoverEvade::StaticRegisterNativesUSBZBTDecorator_ShieldCoverEvade()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_NoRegister()
	{
		return USBZBTDecorator_ShieldCoverEvade::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldCoverBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldCoverBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldGoBack_MetaData[];
#endif
		static void NewProp_bShouldGoBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGoBack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZBTDecorator_Evade,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_ShieldCoverEvade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShieldCoverEvade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_ShieldCoverBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_ShieldCoverEvade" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShieldCoverEvade.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_ShieldCoverBBKey = { "ShieldCoverBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_ShieldCoverEvade, ShieldCoverBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_ShieldCoverBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_ShieldCoverBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_bShouldGoBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_ShieldCoverEvade" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ShieldCoverEvade.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_bShouldGoBack_SetBit(void* Obj)
	{
		((USBZBTDecorator_ShieldCoverEvade*)Obj)->bShouldGoBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_bShouldGoBack = { "bShouldGoBack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_ShieldCoverEvade), &Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_bShouldGoBack_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_bShouldGoBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_bShouldGoBack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_ShieldCoverBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::NewProp_bShouldGoBack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_ShieldCoverEvade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::ClassParams = {
		&USBZBTDecorator_ShieldCoverEvade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_ShieldCoverEvade, 1534584173);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_ShieldCoverEvade>()
	{
		return USBZBTDecorator_ShieldCoverEvade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_ShieldCoverEvade(Z_Construct_UClass_USBZBTDecorator_ShieldCoverEvade, &USBZBTDecorator_ShieldCoverEvade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_ShieldCoverEvade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_ShieldCoverEvade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
