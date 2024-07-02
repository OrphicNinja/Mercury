// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_UpdateCriminal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_UpdateCriminal() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateCriminal_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateCriminal();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTService_UpdateCriminal::StaticRegisterNativesUSBZBTService_UpdateCriminal()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_UpdateCriminal_NoRegister()
	{
		return USBZBTService_UpdateCriminal::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCriminalBBKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentCriminalBBKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_UpdateCriminal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateCriminal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::NewProp_CurrentCriminalBBKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateCriminal" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateCriminal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::NewProp_CurrentCriminalBBKey = { "CurrentCriminalBBKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateCriminal, CurrentCriminalBBKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::NewProp_CurrentCriminalBBKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::NewProp_CurrentCriminalBBKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::NewProp_CurrentCriminalBBKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_UpdateCriminal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::ClassParams = {
		&USBZBTService_UpdateCriminal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_UpdateCriminal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_UpdateCriminal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_UpdateCriminal, 1105466760);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_UpdateCriminal>()
	{
		return USBZBTService_UpdateCriminal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_UpdateCriminal(Z_Construct_UClass_USBZBTService_UpdateCriminal, &USBZBTService_UpdateCriminal::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_UpdateCriminal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_UpdateCriminal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
