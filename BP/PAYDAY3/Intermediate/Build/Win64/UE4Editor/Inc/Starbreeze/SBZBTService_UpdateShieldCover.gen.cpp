// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBTService_UpdateShieldCover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBTService_UpdateShieldCover() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateShieldCover_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBTService_UpdateShieldCover();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	void USBZBTService_UpdateShieldCover::StaticRegisterNativesUSBZBTService_UpdateShieldCover()
	{
	}
	UClass* Z_Construct_UClass_USBZBTService_UpdateShieldCover_NoRegister()
	{
		return USBZBTService_UpdateShieldCover::StaticClass();
	}
	struct Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayInCoverOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StayInCoverOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostLoSAbandonOrderTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LostLoSAbandonOrderTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProtectComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProtectComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedBottleNeckSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedBottleNeckSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBTService_UpdateShieldCover.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateShieldCover.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateShieldCover" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateShieldCover.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateShieldCover, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_EQSRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_StayInCoverOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateShieldCover" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateShieldCover.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_StayInCoverOrder = { "StayInCoverOrder", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateShieldCover, StayInCoverOrder), Z_Construct_UClass_USBZAIOrder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_StayInCoverOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_StayInCoverOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_LostLoSAbandonOrderTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateShieldCover" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateShieldCover.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_LostLoSAbandonOrderTime = { "LostLoSAbandonOrderTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateShieldCover, LostLoSAbandonOrderTime), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_LostLoSAbandonOrderTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_LostLoSAbandonOrderTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_ProtectComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateShieldCover" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateShieldCover.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_ProtectComment = { "ProtectComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateShieldCover, ProtectComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_ProtectComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_ProtectComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_AllowedBottleNeckSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBTService_UpdateShieldCover" },
		{ "ModuleRelativePath", "Public/SBZBTService_UpdateShieldCover.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_AllowedBottleNeckSize = { "AllowedBottleNeckSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZBTService_UpdateShieldCover, AllowedBottleNeckSize), METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_AllowedBottleNeckSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_AllowedBottleNeckSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_EQSRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_StayInCoverOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_LostLoSAbandonOrderTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_ProtectComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::NewProp_AllowedBottleNeckSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBTService_UpdateShieldCover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::ClassParams = {
		&USBZBTService_UpdateShieldCover::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBTService_UpdateShieldCover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBTService_UpdateShieldCover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBTService_UpdateShieldCover, 2577853307);
	template<> STARBREEZE_API UClass* StaticClass<USBZBTService_UpdateShieldCover>()
	{
		return USBZBTService_UpdateShieldCover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBTService_UpdateShieldCover(Z_Construct_UClass_USBZBTService_UpdateShieldCover, &USBZBTService_UpdateShieldCover::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBTService_UpdateShieldCover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBTService_UpdateShieldCover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
