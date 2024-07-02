// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_StanceTransition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_StanceTransition() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_StanceTransition_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_StanceTransition();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_StanceTransition::StaticRegisterNativesUSBZBTDecorator_StanceTransition()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_StanceTransition_NoRegister()
	{
		return USBZBTDecorator_StanceTransition::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStanceTransition_MetaData[];
#endif
		static void NewProp_bEnableStanceTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStanceTransition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_StanceTransition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_StanceTransition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::NewProp_bEnableStanceTransition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_StanceTransition" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_StanceTransition.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::NewProp_bEnableStanceTransition_SetBit(void* Obj)
	{
		((USBZBTDecorator_StanceTransition*)Obj)->bEnableStanceTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::NewProp_bEnableStanceTransition = { "bEnableStanceTransition", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_StanceTransition), &Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::NewProp_bEnableStanceTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::NewProp_bEnableStanceTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::NewProp_bEnableStanceTransition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::NewProp_bEnableStanceTransition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_StanceTransition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::ClassParams = {
		&USBZBTDecorator_StanceTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_StanceTransition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_StanceTransition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_StanceTransition, 1245433730);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_StanceTransition>()
	{
		return USBZBTDecorator_StanceTransition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_StanceTransition(Z_Construct_UClass_USBZBTDecorator_StanceTransition, &USBZBTDecorator_StanceTransition::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_StanceTransition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_StanceTransition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
