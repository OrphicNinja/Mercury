// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_UnOccupyVantagePoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_UnOccupyVantagePoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTTask_UnOccupyVantagePoint::StaticRegisterNativesUSBZBTTask_UnOccupyVantagePoint()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_NoRegister()
	{
		return USBZBTTask_UnOccupyVantagePoint::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVantagePointBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentVantagePointBBKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetFocalPoint_MetaData[];
#endif
		static void NewProp_bSetFocalPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetFocalPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_UnOccupyVantagePoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_UnOccupyVantagePoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_CurrentVantagePointBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_UnOccupyVantagePoint" },
		{ "ModuleRelativePath", "Public/SBZBTTask_UnOccupyVantagePoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_CurrentVantagePointBBKey = { "CurrentVantagePointBBKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_UnOccupyVantagePoint, CurrentVantagePointBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_CurrentVantagePointBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_CurrentVantagePointBBKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_bSetFocalPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_UnOccupyVantagePoint" },
		{ "ModuleRelativePath", "Public/SBZBTTask_UnOccupyVantagePoint.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_bSetFocalPoint_SetBit(void* Obj)
	{
		((USBZBTTask_UnOccupyVantagePoint*)Obj)->bSetFocalPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_bSetFocalPoint = { "bSetFocalPoint", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_UnOccupyVantagePoint), &Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_bSetFocalPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_bSetFocalPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_bSetFocalPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_CurrentVantagePointBBKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::NewProp_bSetFocalPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_UnOccupyVantagePoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::ClassParams = {
		&USBZBTTask_UnOccupyVantagePoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_UnOccupyVantagePoint, 2659434717);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_UnOccupyVantagePoint>()
	{
		return USBZBTTask_UnOccupyVantagePoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_UnOccupyVantagePoint(Z_Construct_UClass_USBZBTTask_UnOccupyVantagePoint, &USBZBTTask_UnOccupyVantagePoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_UnOccupyVantagePoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_UnOccupyVantagePoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
