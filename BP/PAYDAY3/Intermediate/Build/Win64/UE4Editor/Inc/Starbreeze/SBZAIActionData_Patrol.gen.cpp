// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIActionData_Patrol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIActionData_Patrol() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_Patrol_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_Patrol();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPatrolPoint_NoRegister();
// End Cross Module References
	void USBZAIActionData_Patrol::StaticRegisterNativesUSBZAIActionData_Patrol()
	{
	}
	UClass* Z_Construct_UClass_USBZAIActionData_Patrol_NoRegister()
	{
		return USBZAIActionData_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIActionData_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIActionData_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIActionData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_Patrol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIActionData_Patrol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_Patrol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_Patrol_Statics::NewProp_PatrolPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIActionData_Patrol" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_Patrol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIActionData_Patrol_Statics::NewProp_PatrolPoint = { "PatrolPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIActionData_Patrol, PatrolPoint), Z_Construct_UClass_ASBZPatrolPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_Patrol_Statics::NewProp_PatrolPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_Patrol_Statics::NewProp_PatrolPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIActionData_Patrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIActionData_Patrol_Statics::NewProp_PatrolPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIActionData_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIActionData_Patrol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIActionData_Patrol_Statics::ClassParams = {
		&USBZAIActionData_Patrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIActionData_Patrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_Patrol_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_Patrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_Patrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIActionData_Patrol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIActionData_Patrol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIActionData_Patrol, 1205989128);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIActionData_Patrol>()
	{
		return USBZAIActionData_Patrol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIActionData_Patrol(Z_Construct_UClass_USBZAIActionData_Patrol, &USBZAIActionData_Patrol::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIActionData_Patrol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIActionData_Patrol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
