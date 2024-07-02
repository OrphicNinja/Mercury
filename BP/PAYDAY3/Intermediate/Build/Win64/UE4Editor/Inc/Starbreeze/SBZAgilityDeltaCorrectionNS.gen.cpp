// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAgilityDeltaCorrectionNS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAgilityDeltaCorrectionNS() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAgilityDeltaCorrectionNS();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeltaCorrectionNotifyState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZAgilityWarpingDirection();
// End Cross Module References
	void USBZAgilityDeltaCorrectionNS::StaticRegisterNativesUSBZAgilityDeltaCorrectionNS()
	{
	}
	UClass* Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_NoRegister()
	{
		return USBZAgilityDeltaCorrectionNS::StaticClass();
	}
	struct Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetPointType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPointType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetPointType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WarpingDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarpingDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WarpingDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeUsingAnimation_MetaData[];
#endif
		static void NewProp_bRecomputeUsingAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeUsingAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarpOnYZOnly_MetaData[];
#endif
		static void NewProp_bWarpOnYZOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarpOnYZOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarpOnXZOnly_MetaData[];
#endif
		static void NewProp_bWarpOnXZOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarpOnXZOnly;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetPointTypeToRecomputeFrom_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPointTypeToRecomputeFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetPointTypeToRecomputeFrom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZDeltaCorrectionNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZAgilityDeltaCorrectionNS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAgilityDeltaCorrectionNS.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityDeltaCorrectionNS" },
		{ "ModuleRelativePath", "Public/SBZAgilityDeltaCorrectionNS.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointType = { "TargetPointType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilityDeltaCorrectionNS, TargetPointType), Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType, METADATA_PARAMS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_WarpingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_WarpingDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityDeltaCorrectionNS" },
		{ "ModuleRelativePath", "Public/SBZAgilityDeltaCorrectionNS.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_WarpingDirection = { "WarpingDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilityDeltaCorrectionNS, WarpingDirection), Z_Construct_UEnum_Starbreeze_ESBZAgilityWarpingDirection, METADATA_PARAMS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_WarpingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_WarpingDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bRecomputeUsingAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityDeltaCorrectionNS" },
		{ "ModuleRelativePath", "Public/SBZAgilityDeltaCorrectionNS.h" },
	};
#endif
	void Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bRecomputeUsingAnimation_SetBit(void* Obj)
	{
		((USBZAgilityDeltaCorrectionNS*)Obj)->bRecomputeUsingAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bRecomputeUsingAnimation = { "bRecomputeUsingAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAgilityDeltaCorrectionNS), &Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bRecomputeUsingAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bRecomputeUsingAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bRecomputeUsingAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnYZOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityDeltaCorrectionNS" },
		{ "ModuleRelativePath", "Public/SBZAgilityDeltaCorrectionNS.h" },
	};
#endif
	void Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnYZOnly_SetBit(void* Obj)
	{
		((USBZAgilityDeltaCorrectionNS*)Obj)->bWarpOnYZOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnYZOnly = { "bWarpOnYZOnly", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAgilityDeltaCorrectionNS), &Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnYZOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnYZOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnYZOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnXZOnly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityDeltaCorrectionNS" },
		{ "ModuleRelativePath", "Public/SBZAgilityDeltaCorrectionNS.h" },
	};
#endif
	void Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnXZOnly_SetBit(void* Obj)
	{
		((USBZAgilityDeltaCorrectionNS*)Obj)->bWarpOnXZOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnXZOnly = { "bWarpOnXZOnly", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAgilityDeltaCorrectionNS), &Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnXZOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnXZOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnXZOnly_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointTypeToRecomputeFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointTypeToRecomputeFrom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAgilityDeltaCorrectionNS" },
		{ "ModuleRelativePath", "Public/SBZAgilityDeltaCorrectionNS.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointTypeToRecomputeFrom = { "TargetPointTypeToRecomputeFrom", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAgilityDeltaCorrectionNS, TargetPointTypeToRecomputeFrom), Z_Construct_UEnum_Starbreeze_ESBZAgilityPointType, METADATA_PARAMS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointTypeToRecomputeFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointTypeToRecomputeFrom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_WarpingDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_WarpingDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bRecomputeUsingAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnYZOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_bWarpOnXZOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointTypeToRecomputeFrom_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::NewProp_TargetPointTypeToRecomputeFrom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAgilityDeltaCorrectionNS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::ClassParams = {
		&USBZAgilityDeltaCorrectionNS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAgilityDeltaCorrectionNS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAgilityDeltaCorrectionNS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAgilityDeltaCorrectionNS, 3955249059);
	template<> STARBREEZE_API UClass* StaticClass<USBZAgilityDeltaCorrectionNS>()
	{
		return USBZAgilityDeltaCorrectionNS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAgilityDeltaCorrectionNS(Z_Construct_UClass_USBZAgilityDeltaCorrectionNS, &USBZAgilityDeltaCorrectionNS::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAgilityDeltaCorrectionNS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAgilityDeltaCorrectionNS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
