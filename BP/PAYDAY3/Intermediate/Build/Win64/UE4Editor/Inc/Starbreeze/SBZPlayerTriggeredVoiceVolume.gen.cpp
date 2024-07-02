// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerTriggeredVoiceVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerTriggeredVoiceVolume() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerTriggerVolume();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDialogEndedReason();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnVoiceVolumeDialogEndedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZPlayerTriggeredVoiceVolume::execHandleDialogEnded)
	{
		P_GET_ENUM(ESBZDialogEndedReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDialogEnded(ESBZDialogEndedReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	void ASBZPlayerTriggeredVoiceVolume::StaticRegisterNativesASBZPlayerTriggeredVoiceVolume()
	{
		UClass* Class = ASBZPlayerTriggeredVoiceVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleDialogEnded", &ASBZPlayerTriggeredVoiceVolume::execHandleDialogEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics
	{
		struct SBZPlayerTriggeredVoiceVolume_eventHandleDialogEnded_Parms
		{
			ESBZDialogEndedReason Reason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerTriggeredVoiceVolume_eventHandleDialogEnded_Parms, Reason), Z_Construct_UEnum_Starbreeze_ESBZDialogEndedReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerTriggeredVoiceVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume, nullptr, "HandleDialogEnded", nullptr, nullptr, sizeof(SBZPlayerTriggeredVoiceVolume_eventHandleDialogEnded_Parms), Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_NoRegister()
	{
		return ASBZPlayerTriggeredVoiceVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Dialog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogEnded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DialogEnded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZPlayerTriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZPlayerTriggeredVoiceVolume_HandleDialogEnded, "HandleDialogEnded" }, // 3063844219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZPlayerTriggeredVoiceVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggeredVoiceVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Dialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggeredVoiceVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggeredVoiceVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerTriggeredVoiceVolume, Dialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Dialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Dialog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Comment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggeredVoiceVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggeredVoiceVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerTriggeredVoiceVolume, Comment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_DialogEnded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerTriggeredVoiceVolume" },
		{ "ModuleRelativePath", "Public/SBZPlayerTriggeredVoiceVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_DialogEnded = { "DialogEnded", nullptr, (EPropertyFlags)0x0040000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZPlayerTriggeredVoiceVolume, DialogEnded), Z_Construct_UDelegateFunction_Starbreeze_SBZOnVoiceVolumeDialogEndedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_DialogEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_DialogEnded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Dialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_Comment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::NewProp_DialogEnded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZPlayerTriggeredVoiceVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::ClassParams = {
		&ASBZPlayerTriggeredVoiceVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZPlayerTriggeredVoiceVolume, 2340290675);
	template<> STARBREEZE_API UClass* StaticClass<ASBZPlayerTriggeredVoiceVolume>()
	{
		return ASBZPlayerTriggeredVoiceVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZPlayerTriggeredVoiceVolume(Z_Construct_UClass_ASBZPlayerTriggeredVoiceVolume, &ASBZPlayerTriggeredVoiceVolume::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZPlayerTriggeredVoiceVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZPlayerTriggeredVoiceVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
