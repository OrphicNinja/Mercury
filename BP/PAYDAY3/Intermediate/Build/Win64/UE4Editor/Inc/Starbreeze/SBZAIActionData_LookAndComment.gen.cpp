// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIActionData_LookAndComment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIActionData_LookAndComment() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_LookAndComment_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData_LookAndComment();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIActionData();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZAIActionData_LookAndComment::StaticRegisterNativesUSBZAIActionData_LookAndComment()
	{
	}
	UClass* Z_Construct_UClass_USBZAIActionData_LookAndComment_NoRegister()
	{
		return USBZAIActionData_LookAndComment::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIActionData,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIActionData_LookAndComment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_LookAndComment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIActionData_LookAndComment" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_LookAndComment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIActionData_LookAndComment, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_VoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIActionData_LookAndComment" },
		{ "ModuleRelativePath", "Public/SBZAIActionData_LookAndComment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_VoiceComment = { "VoiceComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIActionData_LookAndComment, VoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_VoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_VoiceComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::NewProp_VoiceComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIActionData_LookAndComment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::ClassParams = {
		&USBZAIActionData_LookAndComment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIActionData_LookAndComment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIActionData_LookAndComment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIActionData_LookAndComment, 595682184);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIActionData_LookAndComment>()
	{
		return USBZAIActionData_LookAndComment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIActionData_LookAndComment(Z_Construct_UClass_USBZAIActionData_LookAndComment, &USBZAIActionData_LookAndComment::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIActionData_LookAndComment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIActionData_LookAndComment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
