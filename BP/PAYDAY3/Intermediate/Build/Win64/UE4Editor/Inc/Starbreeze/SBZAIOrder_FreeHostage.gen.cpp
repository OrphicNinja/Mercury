// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIOrder_FreeHostage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIOrder_FreeHostage() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FreeHostage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_FreeHostage();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIOrder_ReleaseHostage_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAIOrder_FreeHostage::execOnCharacterAnimEventActive)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EventTag);
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterAnimEventActive(Z_Param_Out_EventTag,Z_Param_bActive);
		P_NATIVE_END;
	}
	void USBZAIOrder_FreeHostage::StaticRegisterNativesUSBZAIOrder_FreeHostage()
	{
		UClass* Class = USBZAIOrder_FreeHostage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterAnimEventActive", &USBZAIOrder_FreeHostage::execOnCharacterAnimEventActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics
	{
		struct SBZAIOrder_FreeHostage_eventOnCharacterAnimEventActive_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIOrder_FreeHostage_eventOnCharacterAnimEventActive_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_EventTag_MetaData)) };
	void Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SBZAIOrder_FreeHostage_eventOnCharacterAnimEventActive_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIOrder_FreeHostage_eventOnCharacterAnimEventActive_Parms), &Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIOrder_FreeHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIOrder_FreeHostage, nullptr, "OnCharacterAnimEventActive", nullptr, nullptr, sizeof(SBZAIOrder_FreeHostage_eventOnCharacterAnimEventActive_Parms), Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIOrder_FreeHostage_NoRegister()
	{
		return USBZAIOrder_FreeHostage::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BlackboardKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseHostageOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReleaseHostageOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiedHostage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TiedHostage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAIOrder,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIOrder_FreeHostage_OnCharacterAnimEventActive, "OnCharacterAnimEventActive" }, // 728824435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAIOrder_FreeHostage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FreeHostage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_FreeHostage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FreeHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_FreeHostage, BlackboardKey), METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_BlackboardKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_ReleaseHostageOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_FreeHostage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FreeHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_ReleaseHostageOrder = { "ReleaseHostageOrder", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_FreeHostage, ReleaseHostageOrder), Z_Construct_UClass_USBZAIOrder_ReleaseHostage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_ReleaseHostageOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_ReleaseHostageOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_TiedHostage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAIOrder_FreeHostage" },
		{ "ModuleRelativePath", "Public/SBZAIOrder_FreeHostage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_TiedHostage = { "TiedHostage", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAIOrder_FreeHostage, TiedHostage), Z_Construct_UClass_ASBZAICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_TiedHostage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_TiedHostage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_BlackboardKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_ReleaseHostageOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::NewProp_TiedHostage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAIOrder_FreeHostage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::ClassParams = {
		&USBZAIOrder_FreeHostage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIOrder_FreeHostage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIOrder_FreeHostage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIOrder_FreeHostage, 601873637);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIOrder_FreeHostage>()
	{
		return USBZAIOrder_FreeHostage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIOrder_FreeHostage(Z_Construct_UClass_USBZAIOrder_FreeHostage, &USBZAIOrder_FreeHostage::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIOrder_FreeHostage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIOrder_FreeHostage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
