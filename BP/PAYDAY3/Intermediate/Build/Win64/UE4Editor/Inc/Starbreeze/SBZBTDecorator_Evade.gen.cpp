// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_Evade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_Evade() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_Evade_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_Evade();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	void USBZBTDecorator_Evade::StaticRegisterNativesUSBZBTDecorator_Evade()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_Evade_NoRegister()
	{
		return USBZBTDecorator_Evade::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_Evade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTriggerSlowEvade_MetaData[];
#endif
		static void NewProp_bCanTriggerSlowEvade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTriggerSlowEvade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanTriggerFastEvade_MetaData[];
#endif
		static void NewProp_bCanTriggerFastEvade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanTriggerFastEvade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxSpeedLimit_MetaData[];
#endif
		static void NewProp_bUseMaxSpeedLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxSpeedLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_Evade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Evade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_Evade.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Evade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_FilterClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Evade.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_Evade, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerSlowEvade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Evade.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerSlowEvade_SetBit(void* Obj)
	{
		((USBZBTDecorator_Evade*)Obj)->bCanTriggerSlowEvade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerSlowEvade = { "bCanTriggerSlowEvade", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_Evade), &Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerSlowEvade_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerSlowEvade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerSlowEvade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerFastEvade_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Evade.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerFastEvade_SetBit(void* Obj)
	{
		((USBZBTDecorator_Evade*)Obj)->bCanTriggerFastEvade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerFastEvade = { "bCanTriggerFastEvade", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_Evade), &Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerFastEvade_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerFastEvade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerFastEvade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bUseMaxSpeedLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_Evade" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_Evade.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bUseMaxSpeedLimit_SetBit(void* Obj)
	{
		((USBZBTDecorator_Evade*)Obj)->bUseMaxSpeedLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bUseMaxSpeedLimit = { "bUseMaxSpeedLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTDecorator_Evade), &Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bUseMaxSpeedLimit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bUseMaxSpeedLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bUseMaxSpeedLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_Evade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerSlowEvade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bCanTriggerFastEvade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_Evade_Statics::NewProp_bUseMaxSpeedLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_Evade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_Evade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_Evade_Statics::ClassParams = {
		&USBZBTDecorator_Evade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_Evade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_Evade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_Evade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_Evade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_Evade, 2877279576);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_Evade>()
	{
		return USBZBTDecorator_Evade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_Evade(Z_Construct_UClass_USBZBTDecorator_Evade, &USBZBTDecorator_Evade::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_Evade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_Evade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
