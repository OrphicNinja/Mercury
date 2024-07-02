// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_LookAndComment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_LookAndComment() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_LookAndComment_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_LookAndComment();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZAIOrder_LookAndComment::StaticRegisterNativesUSBZAIOrder_LookAndComment()
	{
	}
	UClass* Z_Construct_UClass_USBZAIOrder_LookAndComment_NoRegister()
	{
		return USBZAIOrder_LookAndComment::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTargetActorLocation_MetaData[];
#endif
		static void NewProp_bUseTargetActorLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTargetActorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_LookAndComment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LookAndComment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LookAndComment" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LookAndComment.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LookAndComment, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_VoiceComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LookAndComment" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LookAndComment.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_VoiceComment = { "VoiceComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_LookAndComment, VoiceComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_VoiceComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_VoiceComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_bUseTargetActorLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_LookAndComment" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_LookAndComment.h" },
	};
#endif
	void Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_bUseTargetActorLocation_SetBit(void* Obj)
	{
		((USBZAIOrder_LookAndComment*)Obj)->bUseTargetActorLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_bUseTargetActorLocation = { "bUseTargetActorLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAIOrder_LookAndComment), &Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_bUseTargetActorLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_bUseTargetActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_bUseTargetActorLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_VoiceComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::NewProp_bUseTargetActorLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_LookAndComment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::ClassParams = {
		&USBZAIOrder_LookAndComment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_LookAndComment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_LookAndComment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_LookAndComment, 1468418767);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_LookAndComment>()
	{
		return USBZAIOrder_LookAndComment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_LookAndComment(Z_Construct_UClass_USBZAIOrder_LookAndComment, &USBZAIOrder_LookAndComment::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_LookAndComment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_LookAndComment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
