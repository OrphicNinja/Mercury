// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSendAIMessageNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSendAIMessageNotify() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSendAIMessageNotify_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSendAIMessageNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZSendAIMessageNotify::StaticRegisterNativesUSBZSendAIMessageNotify()
	{
	}
	UClass* Z_Construct_UClass_USBZSendAIMessageNotify_NoRegister()
	{
		return USBZSendAIMessageNotify::StaticClass();
	}
	struct Z_Construct_UClass_USBZSendAIMessageNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AIMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSendAIMessageNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSendAIMessageNotify_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SBZSendAIMessageNotify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSendAIMessageNotify.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSendAIMessageNotify_Statics::NewProp_AIMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSendAIMessageNotify" },
		{ "ModuleRelativePath", "Public/SBZSendAIMessageNotify.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZSendAIMessageNotify_Statics::NewProp_AIMessage = { "AIMessage", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSendAIMessageNotify, AIMessage), METADATA_PARAMS(Z_Construct_UClass_USBZSendAIMessageNotify_Statics::NewProp_AIMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSendAIMessageNotify_Statics::NewProp_AIMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSendAIMessageNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSendAIMessageNotify_Statics::NewProp_AIMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSendAIMessageNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSendAIMessageNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSendAIMessageNotify_Statics::ClassParams = {
		&USBZSendAIMessageNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZSendAIMessageNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSendAIMessageNotify_Statics::PropPointers),
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSendAIMessageNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSendAIMessageNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSendAIMessageNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSendAIMessageNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSendAIMessageNotify, 3038753256);
	template<> STARBREEZE_API UClass* StaticClass<USBZSendAIMessageNotify>()
	{
		return USBZSendAIMessageNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSendAIMessageNotify(Z_Construct_UClass_USBZSendAIMessageNotify, &USBZSendAIMessageNotify::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSendAIMessageNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSendAIMessageNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
