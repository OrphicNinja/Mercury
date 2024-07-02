// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_UpdateSuspect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_UpdateSuspect() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateSuspect_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateSuspect();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTService_UpdateSuspect::StaticRegisterNativesUSBZBTService_UpdateSuspect()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_UpdateSuspect_NoRegister()
	{
		return USBZBTService_UpdateSuspect::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSuspectBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentSuspectBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_UpdateSuspect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateSuspect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::NewProp_CurrentSuspectBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateSuspect" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateSuspect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::NewProp_CurrentSuspectBBKey = { "CurrentSuspectBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateSuspect, CurrentSuspectBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::NewProp_CurrentSuspectBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::NewProp_CurrentSuspectBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::NewProp_CurrentSuspectBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_UpdateSuspect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::ClassParams = {
		&USBZBTService_UpdateSuspect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_UpdateSuspect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_UpdateSuspect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_UpdateSuspect, 234698450);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_UpdateSuspect>()
	{
		return USBZBTService_UpdateSuspect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_UpdateSuspect(Z_Construct_UClass_USBZBTService_UpdateSuspect, &USBZBTService_UpdateSuspect::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_UpdateSuspect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_UpdateSuspect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
