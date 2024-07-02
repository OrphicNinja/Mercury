// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTTask_WaitForMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTTask_WaitForMessage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_WaitForMessage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTTask_WaitForMessage();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	void USBZBTTask_WaitForMessage::StaticRegisterNativesUSBZBTTask_WaitForMessage()
	{
	}
	UClass* Z_Construct_UClass_USBZBTTask_WaitForMessage_NoRegister()
	{
		return USBZBTTask_WaitForMessage::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTTask_WaitForMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTTask_WaitForMessage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTTask_WaitForMessage" },
		{ "ModuleRelativePath", "Public/SBZBTTask_WaitForMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTTask_WaitForMessage, Message), METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::NewProp_Message,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTTask_WaitForMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::ClassParams = {
		&USBZBTTask_WaitForMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTTask_WaitForMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTTask_WaitForMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTTask_WaitForMessage, 3927825964);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTTask_WaitForMessage>()
	{
		return USBZBTTask_WaitForMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTTask_WaitForMessage(Z_Construct_UClass_USBZBTTask_WaitForMessage, &USBZBTTask_WaitForMessage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTTask_WaitForMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTTask_WaitForMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
