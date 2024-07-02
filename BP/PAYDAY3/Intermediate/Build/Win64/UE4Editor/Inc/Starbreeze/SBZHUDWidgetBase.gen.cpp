// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHUDWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHUDWidgetBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHUDWidgetBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(USBZHUDWidgetBase::execHasRequiredTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRequiredTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZHUDWidgetBase::execOnUITagsChanged)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_UITagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUITagsChanged(Z_Param_Out_UITagContainer);
		P_NATIVE_END;
	}
	static FName NAME_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged = FName(TEXT("OnWidgetRequiresUITagsChanged"));
	void USBZHUDWidgetBase::OnWidgetRequiresUITagsChanged(bool bInHasRequiredTags)
	{
		SBZHUDWidgetBase_eventOnWidgetRequiresUITagsChanged_Parms Parms;
		Parms.bInHasRequiredTags=bInHasRequiredTags ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged),&Parms);
	}
	void USBZHUDWidgetBase::StaticRegisterNativesUSBZHUDWidgetBase()
	{
		UClass* Class = USBZHUDWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasRequiredTags", &USBZHUDWidgetBase::execHasRequiredTags },
			{ "OnUITagsChanged", &USBZHUDWidgetBase::execOnUITagsChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics
	{
		struct SBZHUDWidgetBase_eventHasRequiredTags_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZHUDWidgetBase_eventHasRequiredTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHUDWidgetBase_eventHasRequiredTags_Parms), &Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDWidgetBase, nullptr, "HasRequiredTags", nullptr, nullptr, sizeof(SBZHUDWidgetBase_eventHasRequiredTags_Parms), Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics
	{
		struct SBZHUDWidgetBase_eventOnUITagsChanged_Parms
		{
			FGameplayTagContainer UITagContainer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UITagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UITagContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::NewProp_UITagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::NewProp_UITagContainer = { "UITagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHUDWidgetBase_eventOnUITagsChanged_Parms, UITagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::NewProp_UITagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::NewProp_UITagContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::NewProp_UITagContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDWidgetBase, nullptr, "OnUITagsChanged", nullptr, nullptr, sizeof(SBZHUDWidgetBase_eventOnUITagsChanged_Parms), Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics
	{
		static void NewProp_bInHasRequiredTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInHasRequiredTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::NewProp_bInHasRequiredTags_SetBit(void* Obj)
	{
		((SBZHUDWidgetBase_eventOnWidgetRequiresUITagsChanged_Parms*)Obj)->bInHasRequiredTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::NewProp_bInHasRequiredTags = { "bInHasRequiredTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHUDWidgetBase_eventOnWidgetRequiresUITagsChanged_Parms), &Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::NewProp_bInHasRequiredTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::NewProp_bInHasRequiredTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHUDWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZHUDWidgetBase, nullptr, "OnWidgetRequiresUITagsChanged", nullptr, nullptr, sizeof(SBZHUDWidgetBase_eventOnWidgetRequiresUITagsChanged_Parms), Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZHUDWidgetBase_NoRegister()
	{
		return USBZHUDWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZHUDWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDisplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredDisplayTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRequiredTags_MetaData[];
#endif
		static void NewProp_bHasRequiredTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRequiredTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZHUDWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZHUDWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZHUDWidgetBase_HasRequiredTags, "HasRequiredTags" }, // 906538630
		{ &Z_Construct_UFunction_USBZHUDWidgetBase_OnUITagsChanged, "OnUITagsChanged" }, // 328001185
		{ &Z_Construct_UFunction_USBZHUDWidgetBase_OnWidgetRequiresUITagsChanged, "OnWidgetRequiresUITagsChanged" }, // 2654362110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHUDWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHUDWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_RequiredDisplayTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDWidgetBase" },
		{ "ModuleRelativePath", "Public/SBZHUDWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_RequiredDisplayTags = { "RequiredDisplayTags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZHUDWidgetBase, RequiredDisplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_RequiredDisplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_RequiredDisplayTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_bHasRequiredTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHUDWidgetBase" },
		{ "ModuleRelativePath", "Public/SBZHUDWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_bHasRequiredTags_SetBit(void* Obj)
	{
		((USBZHUDWidgetBase*)Obj)->bHasRequiredTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_bHasRequiredTags = { "bHasRequiredTags", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZHUDWidgetBase), &Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_bHasRequiredTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_bHasRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_bHasRequiredTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZHUDWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_RequiredDisplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZHUDWidgetBase_Statics::NewProp_bHasRequiredTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZHUDWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZHUDWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZHUDWidgetBase_Statics::ClassParams = {
		&USBZHUDWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZHUDWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDWidgetBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZHUDWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZHUDWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZHUDWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZHUDWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZHUDWidgetBase, 1021825230);
	template<> STARBREEZE_API UClass* StaticClass<USBZHUDWidgetBase>()
	{
		return USBZHUDWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZHUDWidgetBase(Z_Construct_UClass_USBZHUDWidgetBase, &USBZHUDWidgetBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZHUDWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZHUDWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
