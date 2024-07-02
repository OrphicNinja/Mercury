// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAITask_MontageMoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAITask_MontageMoveTo() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITask_MontageMoveTo_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAITask_MontageMoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_MontageMoveTaskCompletedSignature__DelegateSignature();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZAIMontageMoveRequest();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void USBZAITask_MontageMoveTo::StaticRegisterNativesUSBZAITask_MontageMoveTo()
	{
	}
	UClass* Z_Construct_UClass_USBZAITask_MontageMoveTo_NoRegister()
	{
		return USBZAITask_MontageMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMoveFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageMoveRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MontageMoveRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DesiredMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMontagePtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndMontagePtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAITask_MontageMoveTo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAITask_MontageMoveTo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnRequestFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITask_MontageMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAITask_MontageMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnRequestFailed = { "OnRequestFailed", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITask_MontageMoveTo, OnRequestFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnRequestFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnRequestFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnMoveFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITask_MontageMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAITask_MontageMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnMoveFinished = { "OnMoveFinished", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITask_MontageMoveTo, OnMoveFinished), Z_Construct_UDelegateFunction_Starbreeze_MontageMoveTaskCompletedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnMoveFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnMoveFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_MontageMoveRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITask_MontageMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAITask_MontageMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_MontageMoveRequest = { "MontageMoveRequest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITask_MontageMoveTo, MontageMoveRequest), Z_Construct_UScriptStruct_FSBZAIMontageMoveRequest, METADATA_PARAMS(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_MontageMoveRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_MontageMoveRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_DesiredMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITask_MontageMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAITask_MontageMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_DesiredMontage = { "DesiredMontage", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITask_MontageMoveTo, DesiredMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_DesiredMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_DesiredMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_EndMontagePtr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAITask_MontageMoveTo" },
		{ "ModuleRelativePath", "Public/SBZAITask_MontageMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_EndMontagePtr = { "EndMontagePtr", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAITask_MontageMoveTo, EndMontagePtr), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_EndMontagePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_EndMontagePtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnRequestFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_OnMoveFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_MontageMoveRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_DesiredMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::NewProp_EndMontagePtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAITask_MontageMoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::ClassParams = {
		&USBZAITask_MontageMoveTo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAITask_MontageMoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAITask_MontageMoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAITask_MontageMoveTo, 696822437);
	template<> STARBREEZE_API UClass* StaticClass<USBZAITask_MontageMoveTo>()
	{
		return USBZAITask_MontageMoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAITask_MontageMoveTo(Z_Construct_UClass_USBZAITask_MontageMoveTo, &USBZAITask_MontageMoveTo::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAITask_MontageMoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAITask_MontageMoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
