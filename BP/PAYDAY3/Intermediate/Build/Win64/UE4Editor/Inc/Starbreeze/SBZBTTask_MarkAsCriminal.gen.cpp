// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_MarkAsCriminal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_MarkAsCriminal() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_MarkAsCriminal_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_MarkAsCriminal();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USBZBTTask_MarkAsCriminal::StaticRegisterNativesUSBZBTTask_MarkAsCriminal()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_MarkAsCriminal_NoRegister()
	{
		return USBZBTTask_MarkAsCriminal::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspectKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspectKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuspectCrimeStatus_MetaData[];
#endif
		static void NewProp_bSuspectCrimeStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspectCrimeStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_MarkAsCriminal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MarkAsCriminal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_SuspectKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MarkAsCriminal" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MarkAsCriminal.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_SuspectKey = { "SuspectKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_MarkAsCriminal, SuspectKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_SuspectKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_SuspectKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_bSuspectCrimeStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_MarkAsCriminal" },
		{ "ModuleRelativePath", "Public/SBZBTTask_MarkAsCriminal.h" },
	};
#endif
	void Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_bSuspectCrimeStatus_SetBit(void* Obj)
	{
		((USBZBTTask_MarkAsCriminal*)Obj)->bSuspectCrimeStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_bSuspectCrimeStatus = { "bSuspectCrimeStatus", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZBTTask_MarkAsCriminal), &Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_bSuspectCrimeStatus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_bSuspectCrimeStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_bSuspectCrimeStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_SuspectKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::NewProp_bSuspectCrimeStatus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_MarkAsCriminal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::ClassParams = {
		&USBZBTTask_MarkAsCriminal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_MarkAsCriminal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_MarkAsCriminal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_MarkAsCriminal, 2534159409);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_MarkAsCriminal>()
	{
		return USBZBTTask_MarkAsCriminal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_MarkAsCriminal(Z_Construct_UClass_USBZBTTask_MarkAsCriminal, &USBZBTTask_MarkAsCriminal::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_MarkAsCriminal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_MarkAsCriminal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
