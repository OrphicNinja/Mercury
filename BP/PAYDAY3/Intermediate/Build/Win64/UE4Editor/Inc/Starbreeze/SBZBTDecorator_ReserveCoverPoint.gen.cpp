// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_ReserveCoverPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_ReserveCoverPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTDecorator_ReserveCoverPoint::StaticRegisterNativesUSBZBTDecorator_ReserveCoverPoint()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_NoRegister()
	{
		return USBZBTDecorator_ReserveCoverPoint::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoverPointBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetCoverPointBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_ReserveCoverPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ReserveCoverPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::NewProp_TargetCoverPointBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_ReserveCoverPoint" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_ReserveCoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::NewProp_TargetCoverPointBBKey = { "TargetCoverPointBBKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_ReserveCoverPoint, TargetCoverPointBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::NewProp_TargetCoverPointBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::NewProp_TargetCoverPointBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::NewProp_TargetCoverPointBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_ReserveCoverPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::ClassParams = {
		&USBZBTDecorator_ReserveCoverPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_ReserveCoverPoint, 2302735138);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_ReserveCoverPoint>()
	{
		return USBZBTDecorator_ReserveCoverPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_ReserveCoverPoint(Z_Construct_UClass_USBZBTDecorator_ReserveCoverPoint, &USBZBTDecorator_ReserveCoverPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_ReserveCoverPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_ReserveCoverPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
