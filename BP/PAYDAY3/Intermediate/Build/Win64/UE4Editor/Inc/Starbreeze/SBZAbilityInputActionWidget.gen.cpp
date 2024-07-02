// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAbilityInputActionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAbilityInputActionWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAbilityInputActionWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZCharacter_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZAbilityInputActionWidget::execOnPlayerStateDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerStateDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	static FName NAME_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged = FName(TEXT("OnActivateAbilityStateChanged"));
	void USBZAbilityInputActionWidget::OnActivateAbilityStateChanged(bool bInCanActivate)
	{
		SBZAbilityInputActionWidget_eventOnActivateAbilityStateChanged_Parms Parms;
		Parms.bInCanActivate=bInCanActivate ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged),&Parms);
	}
	void USBZAbilityInputActionWidget::StaticRegisterNativesUSBZAbilityInputActionWidget()
	{
		UClass* Class = USBZAbilityInputActionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerStateDestroyed", &USBZAbilityInputActionWidget::execOnPlayerStateDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics
	{
		static void NewProp_bInCanActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCanActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::NewProp_bInCanActivate_SetBit(void* Obj)
	{
		((SBZAbilityInputActionWidget_eventOnActivateAbilityStateChanged_Parms*)Obj)->bInCanActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::NewProp_bInCanActivate = { "bInCanActivate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAbilityInputActionWidget_eventOnActivateAbilityStateChanged_Parms), &Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::NewProp_bInCanActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::NewProp_bInCanActivate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilityInputActionWidget, nullptr, "OnActivateAbilityStateChanged", nullptr, nullptr, sizeof(SBZAbilityInputActionWidget_eventOnActivateAbilityStateChanged_Parms), Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics
	{
		struct SBZAbilityInputActionWidget_eventOnPlayerStateDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAbilityInputActionWidget_eventOnPlayerStateDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAbilityInputActionWidget, nullptr, "OnPlayerStateDestroyed", nullptr, nullptr, sizeof(SBZAbilityInputActionWidget_eventOnPlayerStateDestroyed_Parms), Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAbilityInputActionWidget_NoRegister()
	{
		return USBZAbilityInputActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZAbilityInputActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayAbilityTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanActivate_MetaData[];
#endif
		static void NewProp_bCanActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayAbilityHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPlayerStateWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAbilityInputActionWidget_OnActivateAbilityStateChanged, "OnActivateAbilityStateChanged" }, // 3400257433
		{ &Z_Construct_UFunction_USBZAbilityInputActionWidget_OnPlayerStateDestroyed, "OnPlayerStateDestroyed" }, // 1969518101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAbilityInputActionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilityInputActionWidget" },
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityTag = { "GameplayAbilityTag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilityInputActionWidget, GameplayAbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_bCanActivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilityInputActionWidget" },
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
	void Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_bCanActivate_SetBit(void* Obj)
	{
		((USBZAbilityInputActionWidget*)Obj)->bCanActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_bCanActivate = { "bCanActivate", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZAbilityInputActionWidget), &Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_bCanActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_bCanActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_bCanActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_Character_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilityInputActionWidget" },
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilityInputActionWidget, Character), Z_Construct_UClass_ASBZCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilityInputActionWidget" },
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbility = { "GameplayAbility", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilityInputActionWidget, GameplayAbility), Z_Construct_UClass_USBZGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAbilityInputActionWidget" },
		{ "ModuleRelativePath", "Public/SBZAbilityInputActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityHandle = { "GameplayAbilityHandle", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAbilityInputActionWidget, GameplayAbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_bCanActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::NewProp_GameplayAbilityHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAbilityInputActionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::ClassParams = {
		&USBZAbilityInputActionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAbilityInputActionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAbilityInputActionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAbilityInputActionWidget, 3190893409);
	template<> STARBREEZE_API UClass* StaticClass<USBZAbilityInputActionWidget>()
	{
		return USBZAbilityInputActionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAbilityInputActionWidget(Z_Construct_UClass_USBZAbilityInputActionWidget, &USBZAbilityInputActionWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAbilityInputActionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAbilityInputActionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
