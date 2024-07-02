// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_SecureBag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_SecureBag() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_SecureBag_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_SecureBag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_DropOfBag_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_SecureBag::execOnCharacterAnimEventActive)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EventTag);
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterAnimEventActive(Z_Param_Out_EventTag,Z_Param_bActive);
		P_NATIVE_END;
	}
	void USBZAIOrder_SecureBag::StaticRegisterNativesUSBZAIOrder_SecureBag()
	{
		UClass* Class = USBZAIOrder_SecureBag::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterAnimEventActive", &USBZAIOrder_SecureBag::execOnCharacterAnimEventActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics
	{
		struct SBZAIOrder_SecureBag_eventOnCharacterAnimEventActive_Parms
		{
			FGameplayTag EventTag;
			bool bActive;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_SecureBag_eventOnCharacterAnimEventActive_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData)) };
	void Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SBZAIOrder_SecureBag_eventOnCharacterAnimEventActive_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIOrder_SecureBag_eventOnCharacterAnimEventActive_Parms), &Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecureBag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_SecureBag, nullptr, "OnCharacterAnimEventActive", nullptr, nullptr, sizeof(SBZAIOrder_SecureBag_eventOnCharacterAnimEventActive_Parms), Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_SecureBag_NoRegister()
	{
		return USBZAIOrder_SecureBag::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_SecureBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropOfBagActionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DropOfBagActionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_SecureBag_OnCharacterAnimEventActive, "OnCharacterAnimEventActive" }, // 3823331564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_SecureBag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecureBag.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_DropOfBagActionOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SecureBag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecureBag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_DropOfBagActionOrder = { "DropOfBagActionOrder", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SecureBag, DropOfBagActionOrder), Z_Construct_UClass_USBZAIOrder_DropOfBag_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_DropOfBagActionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_DropOfBagActionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BagActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SecureBag" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecureBag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BagActor = { "BagActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SecureBag, BagActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BagActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BagActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_SecureBag" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_SecureBag.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_SecureBag, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BlackboardKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_DropOfBagActionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BagActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_SecureBag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::ClassParams = {
		&USBZAIOrder_SecureBag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_SecureBag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_SecureBag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_SecureBag, 1694302625);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_SecureBag>()
	{
		return USBZAIOrder_SecureBag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_SecureBag(Z_Construct_UClass_USBZAIOrder_SecureBag, &USBZAIOrder_SecureBag::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_SecureBag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_SecureBag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
