// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAction_HogTie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAction_HogTie() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_HogTie_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction_HogTie();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZAIAction_HogTie::StaticRegisterNativesUSBZAIAction_HogTie()
	{
	}
	UClass* Z_Construct_UClass_USBZAIAction_HogTie_NoRegister()
	{
		return USBZAIAction_HogTie::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAction_HogTie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceGoDownOnGround_MetaData[];
#endif
		static void NewProp_bForceGoDownOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceGoDownOnGround;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAction_HogTie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_HogTie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIAction_HogTie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIAction_HogTie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAction_HogTie_Statics::NewProp_bForceGoDownOnGround_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIAction_HogTie" },
		{ "ModuleRelativePath", "Public/SBZAIAction_HogTie.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIAction_HogTie_Statics::NewProp_bForceGoDownOnGround_SetBit(void* Obj)
	{
		((USBZAIAction_HogTie*)Obj)->bForceGoDownOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIAction_HogTie_Statics::NewProp_bForceGoDownOnGround = { "bForceGoDownOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIAction_HogTie), &Z_Construct_UClass_USBZAIAction_HogTie_Statics::NewProp_bForceGoDownOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_HogTie_Statics::NewProp_bForceGoDownOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_HogTie_Statics::NewProp_bForceGoDownOnGround_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIAction_HogTie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIAction_HogTie_Statics::NewProp_bForceGoDownOnGround,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAction_HogTie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIAction_HogTie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAction_HogTie_Statics::ClassParams = {
		&USBZAIAction_HogTie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIAction_HogTie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_HogTie_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAction_HogTie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAction_HogTie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAction_HogTie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAction_HogTie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAction_HogTie, 2099866054);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAction_HogTie>()
	{
		return USBZAIAction_HogTie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAction_HogTie(Z_Construct_UClass_USBZAIAction_HogTie, &USBZAIAction_HogTie::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAction_HogTie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAction_HogTie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
