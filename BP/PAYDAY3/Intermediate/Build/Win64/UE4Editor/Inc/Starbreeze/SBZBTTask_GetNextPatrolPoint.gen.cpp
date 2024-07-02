// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_GetNextPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_GetNextPatrolPoint() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
// End Cross Module References
	void USBZBTTask_GetNextPatrolPoint::StaticRegisterNativesUSBZBTTask_GetNextPatrolPoint()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_NoRegister()
	{
		return USBZBTTask_GetNextPatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_GetNextPatrolPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetNextPatrolPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_GetNextPatrolPoint" },
		{ "ModuleRelativePath", "Public/SBZBTTask_GetNextPatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_GetNextPatrolPoint, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::NewProp_EQSRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::NewProp_EQSRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_GetNextPatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::ClassParams = {
		&USBZBTTask_GetNextPatrolPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_GetNextPatrolPoint, 3559483592);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_GetNextPatrolPoint>()
	{
		return USBZBTTask_GetNextPatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_GetNextPatrolPoint(Z_Construct_UClass_USBZBTTask_GetNextPatrolPoint, &USBZBTTask_GetNextPatrolPoint::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_GetNextPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_GetNextPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
