// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZVoipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZVoipWidget() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoipWidget_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZVoipWidget();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
	DEFINE_FUNCTION(USBZVoipWidget::execOnPlayerTalkingChanged)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_GET_UBOOL(Z_Param_IsTalking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerTalkingChanged(Z_Param_PlayerId,Z_Param_IsTalking);
		P_NATIVE_END;
	}
	static FName NAME_USBZVoipWidget_OnPlayerTalkingChangedEvent = FName(TEXT("OnPlayerTalkingChangedEvent"));
	void USBZVoipWidget::OnPlayerTalkingChangedEvent(const FString& PlayerName, bool bPlayerTalking)
	{
		SBZVoipWidget_eventOnPlayerTalkingChangedEvent_Parms Parms;
		Parms.PlayerName=PlayerName;
		Parms.bPlayerTalking=bPlayerTalking ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZVoipWidget_OnPlayerTalkingChangedEvent),&Parms);
	}
	void USBZVoipWidget::StaticRegisterNativesUSBZVoipWidget()
	{
		UClass* Class = USBZVoipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerTalkingChanged", &USBZVoipWidget::execOnPlayerTalkingChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics
	{
		struct SBZVoipWidget_eventOnPlayerTalkingChanged_Parms
		{
			FUniqueNetIdRepl PlayerId;
			bool IsTalking;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_IsTalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTalking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoipWidget_eventOnPlayerTalkingChanged_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::NewProp_IsTalking_SetBit(void* Obj)
	{
		((SBZVoipWidget_eventOnPlayerTalkingChanged_Parms*)Obj)->IsTalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::NewProp_IsTalking = { "IsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoipWidget_eventOnPlayerTalkingChanged_Parms), &Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::NewProp_IsTalking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::NewProp_IsTalking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVoipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVoipWidget, nullptr, "OnPlayerTalkingChanged", nullptr, nullptr, sizeof(SBZVoipWidget_eventOnPlayerTalkingChanged_Parms), Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static void NewProp_bPlayerTalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerTalking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZVoipWidget_eventOnPlayerTalkingChangedEvent_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_PlayerName_MetaData)) };
	void Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_bPlayerTalking_SetBit(void* Obj)
	{
		((SBZVoipWidget_eventOnPlayerTalkingChangedEvent_Parms*)Obj)->bPlayerTalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_bPlayerTalking = { "bPlayerTalking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZVoipWidget_eventOnPlayerTalkingChangedEvent_Parms), &Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_bPlayerTalking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::NewProp_bPlayerTalking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZVoipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZVoipWidget, nullptr, "OnPlayerTalkingChangedEvent", nullptr, nullptr, sizeof(SBZVoipWidget_eventOnPlayerTalkingChangedEvent_Parms), Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZVoipWidget_NoRegister()
	{
		return USBZVoipWidget::StaticClass();
	}
	struct Z_Construct_UClass_USBZVoipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZVoipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZVoipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChanged, "OnPlayerTalkingChanged" }, // 1780001372
		{ &Z_Construct_UFunction_USBZVoipWidget_OnPlayerTalkingChangedEvent, "OnPlayerTalkingChangedEvent" }, // 1378061313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZVoipWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZVoipWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZVoipWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZVoipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZVoipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZVoipWidget_Statics::ClassParams = {
		&USBZVoipWidget::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZVoipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZVoipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZVoipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZVoipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZVoipWidget, 472872897);
	template<> STARBREEZE_API UClass* StaticClass<USBZVoipWidget>()
	{
		return USBZVoipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZVoipWidget(Z_Construct_UClass_USBZVoipWidget, &USBZVoipWidget::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZVoipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZVoipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
