// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_RaiseAlarm.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_RaiseAlarm() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_RaiseAlarm_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_RaiseAlarm();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_RaiseAlarm::StaticRegisterNativesUSBZBTTask_RaiseAlarm()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_RaiseAlarm_NoRegister()
	{
		return USBZBTTask_RaiseAlarm::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaiseAlarmTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RaiseAlarmTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_RaiseAlarm.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RaiseAlarm.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::NewProp_RaiseAlarmTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_RaiseAlarm" },
		{ "ModuleRelativePath", "Public/SBZBTTask_RaiseAlarm.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::NewProp_RaiseAlarmTime = { "RaiseAlarmTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_RaiseAlarm, RaiseAlarmTime), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::NewProp_RaiseAlarmTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::NewProp_RaiseAlarmTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::NewProp_RaiseAlarmTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_RaiseAlarm>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::ClassParams = {
		&USBZBTTask_RaiseAlarm::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_RaiseAlarm()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_RaiseAlarm_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_RaiseAlarm, 341114406);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_RaiseAlarm>()
	{
		return USBZBTTask_RaiseAlarm::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_RaiseAlarm(Z_Construct_UClass_USBZBTTask_RaiseAlarm, &USBZBTTask_RaiseAlarm::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_RaiseAlarm"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_RaiseAlarm);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
