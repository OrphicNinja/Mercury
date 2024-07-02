// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SBZStateMachineBase/Public/SBZStateMachineData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineData() {}
// Cross Module References
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData_NoRegister();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SBZStateMachineBase();
	SBZSTATEMACHINEBASE_API UClass* Z_Construct_UClass_USBZStateMachineState_NoRegister();
// End Cross Module References
	void USBZStateMachineData::StaticRegisterNativesUSBZStateMachineData()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineData_NoRegister()
	{
		return USBZStateMachineData::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SBZStateMachineBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineData_Statics::NewProp_PreviousState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineData" },
		{ "ModuleRelativePath", "Public/SBZStateMachineData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineData_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineData, PreviousState), Z_Construct_UClass_USBZStateMachineState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineData_Statics::NewProp_PreviousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineData_Statics::NewProp_PreviousState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineData_Statics::NewProp_PreviousState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineData_Statics::ClassParams = {
		&USBZStateMachineData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineData, 3096199714);
	template<> SBZSTATEMACHINEBASE_API UClass* StaticClass<USBZStateMachineData>()
	{
		return USBZStateMachineData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineData(Z_Construct_UClass_USBZStateMachineData, &USBZStateMachineData::StaticClass, TEXT("/Script/SBZStateMachineBase"), TEXT("USBZStateMachineData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
