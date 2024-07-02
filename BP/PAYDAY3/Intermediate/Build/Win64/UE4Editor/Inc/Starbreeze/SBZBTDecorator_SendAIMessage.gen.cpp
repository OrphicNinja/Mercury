// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTDecorator_SendAIMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTDecorator_SendAIMessage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_SendAIMessage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTDecorator_SendAIMessage();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTDecorator_SendAIMessage::StaticRegisterNativesUSBZBTDecorator_SendAIMessage()
	{
	}
	UClass* Z_Construct_UClass_USBZBTDecorator_SendAIMessage_NoRegister()
	{
		return USBZBTDecorator_SendAIMessage::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActivationMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTDecorator_SendAIMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_SendAIMessage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::NewProp_ActivationMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTDecorator_SendAIMessage" },
		{ "ModuleRelativePath", "Public/SBZBTDecorator_SendAIMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::NewProp_ActivationMessage = { "ActivationMessage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTDecorator_SendAIMessage, ActivationMessage), METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::NewProp_ActivationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::NewProp_ActivationMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::NewProp_ActivationMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTDecorator_SendAIMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::ClassParams = {
		&USBZBTDecorator_SendAIMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTDecorator_SendAIMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTDecorator_SendAIMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTDecorator_SendAIMessage, 2428171758);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTDecorator_SendAIMessage>()
	{
		return USBZBTDecorator_SendAIMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTDecorator_SendAIMessage(Z_Construct_UClass_USBZBTDecorator_SendAIMessage, &USBZBTDecorator_SendAIMessage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTDecorator_SendAIMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTDecorator_SendAIMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
