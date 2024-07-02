// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIInteractThrowHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIInteractThrowHandler() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIInteractThrowHandler_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIInteractThrowHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBagItem_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIInteractThrowHandler::execOnThrowBagInteractionCompleted)
	{
		P_GET_OBJECT(ASBZBagTriggerVolume,Z_Param_Volume);
		P_GET_OBJECT(ASBZBagItem,Z_Param_BagItem);
		P_GET_STRUCT(FSBZBagHandle,Z_Param_BagHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnThrowBagInteractionCompleted(Z_Param_Volume,Z_Param_BagItem,Z_Param_BagHandle);
		P_NATIVE_END;
	}
	void USBZAIInteractThrowHandler::StaticRegisterNativesUSBZAIInteractThrowHandler()
	{
		UClass* Class = USBZAIInteractThrowHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnThrowBagInteractionCompleted", &USBZAIInteractThrowHandler::execOnThrowBagInteractionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics
	{
		struct SBZAIInteractThrowHandler_eventOnThrowBagInteractionCompleted_Parms
		{
			ASBZBagTriggerVolume* Volume;
			ASBZBagItem* BagItem;
			FSBZBagHandle BagHandle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagItem;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIInteractThrowHandler_eventOnThrowBagInteractionCompleted_Parms, Volume), Z_Construct_UClass_ASBZBagTriggerVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::NewProp_BagItem = { "BagItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIInteractThrowHandler_eventOnThrowBagInteractionCompleted_Parms, BagItem), Z_Construct_UClass_ASBZBagItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIInteractThrowHandler_eventOnThrowBagInteractionCompleted_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::NewProp_BagItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::NewProp_BagHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIInteractThrowHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIInteractThrowHandler, nullptr, "OnThrowBagInteractionCompleted", nullptr, nullptr, sizeof(SBZAIInteractThrowHandler_eventOnThrowBagInteractionCompleted_Parms), Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIInteractThrowHandler_NoRegister()
	{
		return USBZAIInteractThrowHandler::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIInteractThrowHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIInteractThrowHandler_OnThrowBagInteractionCompleted, "OnThrowBagInteractionCompleted" }, // 2897015889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIInteractThrowHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIInteractThrowHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIInteractThrowHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::ClassParams = {
		&USBZAIInteractThrowHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIInteractThrowHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIInteractThrowHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIInteractThrowHandler, 1788357590);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIInteractThrowHandler>()
	{
		return USBZAIInteractThrowHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIInteractThrowHandler(Z_Construct_UClass_USBZAIInteractThrowHandler, &USBZAIInteractThrowHandler::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIInteractThrowHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIInteractThrowHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
