// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZStateMachineStateNotLoggedIn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZStateMachineStateNotLoggedIn() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZStateMachineStateNotLoggedIn();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZClientStateMachineState();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteAdminHelper_NoRegister();
// End Cross Module References
	void USBZStateMachineStateNotLoggedIn::StaticRegisterNativesUSBZStateMachineStateNotLoggedIn()
	{
	}
	UClass* Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_NoRegister()
	{
		return USBZStateMachineStateNotLoggedIn::StaticClass();
	}
	struct Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelByteAdminHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelByteAdminHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginBadRequestErrorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoginBadRequestErrorCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZClientStateMachineState,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZStateMachineStateNotLoggedIn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateNotLoggedIn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_AccelByteAdminHelper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateNotLoggedIn" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateNotLoggedIn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_AccelByteAdminHelper = { "AccelByteAdminHelper", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateNotLoggedIn, AccelByteAdminHelper), Z_Construct_UClass_USBZAccelByteAdminHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_AccelByteAdminHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_AccelByteAdminHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_LoginBadRequestErrorCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZStateMachineStateNotLoggedIn" },
		{ "ModuleRelativePath", "Public/SBZStateMachineStateNotLoggedIn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_LoginBadRequestErrorCount = { "LoginBadRequestErrorCount", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZStateMachineStateNotLoggedIn, LoginBadRequestErrorCount), METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_LoginBadRequestErrorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_LoginBadRequestErrorCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_AccelByteAdminHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::NewProp_LoginBadRequestErrorCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZStateMachineStateNotLoggedIn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::ClassParams = {
		&USBZStateMachineStateNotLoggedIn::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZStateMachineStateNotLoggedIn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZStateMachineStateNotLoggedIn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZStateMachineStateNotLoggedIn, 295278591);
	template<> STARBREEZE_API UClass* StaticClass<USBZStateMachineStateNotLoggedIn>()
	{
		return USBZStateMachineStateNotLoggedIn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZStateMachineStateNotLoggedIn(Z_Construct_UClass_USBZStateMachineStateNotLoggedIn, &USBZStateMachineStateNotLoggedIn::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZStateMachineStateNotLoggedIn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZStateMachineStateNotLoggedIn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
