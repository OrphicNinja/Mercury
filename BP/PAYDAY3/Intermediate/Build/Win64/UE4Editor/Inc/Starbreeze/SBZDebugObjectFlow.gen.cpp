// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDebugObjectFlow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDebugObjectFlow() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugObjectFlow_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDebugObjectFlow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZDebugObjectFlow::StaticRegisterNativesUSBZDebugObjectFlow()
	{
	}
	UClass* Z_Construct_UClass_USBZDebugObjectFlow_NoRegister()
	{
		return USBZDebugObjectFlow::StaticClass();
	}
	struct Z_Construct_UClass_USBZDebugObjectFlow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIs_MetaData[];
#endif
		static void NewProp_bIs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDuplicateTransient_MetaData[];
#endif
		static void NewProp_bIsDuplicateTransient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDuplicateTransient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDebugObjectFlow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugObjectFlow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDebugObjectFlow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDebugObjectFlow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugObjectFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugObjectFlow.h" },
	};
#endif
	void Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIs_SetBit(void* Obj)
	{
		((USBZDebugObjectFlow*)Obj)->bIs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIs = { "bIs", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDebugObjectFlow), &Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIs_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIsDuplicateTransient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDebugObjectFlow" },
		{ "ModuleRelativePath", "Public/SBZDebugObjectFlow.h" },
	};
#endif
	void Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIsDuplicateTransient_SetBit(void* Obj)
	{
		((USBZDebugObjectFlow*)Obj)->bIsDuplicateTransient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIsDuplicateTransient = { "bIsDuplicateTransient", nullptr, (EPropertyFlags)0x0020080000200005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZDebugObjectFlow), &Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIsDuplicateTransient_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIsDuplicateTransient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIsDuplicateTransient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDebugObjectFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDebugObjectFlow_Statics::NewProp_bIsDuplicateTransient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDebugObjectFlow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDebugObjectFlow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDebugObjectFlow_Statics::ClassParams = {
		&USBZDebugObjectFlow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZDebugObjectFlow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugObjectFlow_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDebugObjectFlow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDebugObjectFlow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDebugObjectFlow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDebugObjectFlow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDebugObjectFlow, 2789200510);
	template<> STARBREEZE_API UClass* StaticClass<USBZDebugObjectFlow>()
	{
		return USBZDebugObjectFlow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDebugObjectFlow(Z_Construct_UClass_USBZDebugObjectFlow, &USBZDebugObjectFlow::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDebugObjectFlow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDebugObjectFlow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
