// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_ActionInteract.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_ActionInteract() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ActionInteract_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ActionInteract();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_LifeAction();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionInstance_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZLifeActionSlot_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_ActionInteract::execOnLASlotStarted)
	{
		P_GET_OBJECT(ASBZCharacter,Z_Param_Character);
		P_GET_OBJECT(USBZLifeActionInstance,Z_Param_ActionInstance);
		P_GET_OBJECT(USBZLifeActionSlot,Z_Param_ActionSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLASlotStarted(Z_Param_Character,Z_Param_ActionInstance,Z_Param_ActionSlot);
		P_NATIVE_END;
	}
	void USBZAIOrder_ActionInteract::StaticRegisterNativesUSBZAIOrder_ActionInteract()
	{
		UClass* Class = USBZAIOrder_ActionInteract::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLASlotStarted", &USBZAIOrder_ActionInteract::execOnLASlotStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics
	{
		struct SBZAIOrder_ActionInteract_eventOnLASlotStarted_Parms
		{
			ASBZCharacter* Character;
			USBZLifeActionInstance* ActionInstance;
			USBZLifeActionSlot* ActionSlot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_ActionInteract_eventOnLASlotStarted_Parms, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_ActionInteract_eventOnLASlotStarted_Parms, ActionInstance), Z_Construct_UClass_USBZLifeActionInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionSlot = { "ActionSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_ActionInteract_eventOnLASlotStarted_Parms, ActionSlot), Z_Construct_UClass_USBZLifeActionSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::NewProp_ActionSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_ActionInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_ActionInteract, nullptr, "OnLASlotStarted", nullptr, nullptr, sizeof(SBZAIOrder_ActionInteract_eventOnLASlotStarted_Parms), Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_ActionInteract_NoRegister()
	{
		return USBZAIOrder_ActionInteract::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartedComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnStartedComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder_LifeAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_ActionInteract_OnLASlotStarted, "OnLASlotStarted" }, // 1208667245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_ActionInteract.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ActionInteract.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::NewProp_OnStartedComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_ActionInteract" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_ActionInteract.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::NewProp_OnStartedComment = { "OnStartedComment", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_ActionInteract, OnStartedComment), Z_Construct_UClass_USBZVoiceCommentDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::NewProp_OnStartedComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::NewProp_OnStartedComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::NewProp_OnStartedComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_ActionInteract>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::ClassParams = {
		&USBZAIOrder_ActionInteract::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_ActionInteract()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_ActionInteract_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_ActionInteract, 2250787432);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_ActionInteract>()
	{
		return USBZAIOrder_ActionInteract::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_ActionInteract(Z_Construct_UClass_USBZAIOrder_ActionInteract, &USBZAIOrder_ActionInteract::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_ActionInteract"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_ActionInteract);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
