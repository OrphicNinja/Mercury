// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMainMenuDebug.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMainMenuDebug() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuDebug_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMainMenuDebug();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	static FName NAME_USBZMainMenuDebug_OnMatchmakingGroupChange = FName(TEXT("OnMatchmakingGroupChange"));
	void USBZMainMenuDebug::OnMatchmakingGroupChange(int32 MMakingGroup)
	{
		SBZMainMenuDebug_eventOnMatchmakingGroupChange_Parms Parms;
		Parms.MMakingGroup=MMakingGroup;
		ProcessEvent(FindFunctionChecked(NAME_USBZMainMenuDebug_OnMatchmakingGroupChange),&Parms);
	}
	void USBZMainMenuDebug::StaticRegisterNativesUSBZMainMenuDebug()
	{
	}
	struct Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MMakingGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::NewProp_MMakingGroup = { "MMakingGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMainMenuDebug_eventOnMatchmakingGroupChange_Parms, MMakingGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::NewProp_MMakingGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMainMenuDebug.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMainMenuDebug, nullptr, "OnMatchmakingGroupChange", nullptr, nullptr, sizeof(SBZMainMenuDebug_eventOnMatchmakingGroupChange_Parms), Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMainMenuDebug_NoRegister()
	{
		return USBZMainMenuDebug::StaticClass();
	}
	struct Z_Construct_UClass_USBZMainMenuDebug_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMainMenuDebug_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMainMenuDebug_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMainMenuDebug_OnMatchmakingGroupChange, "OnMatchmakingGroupChange" }, // 1779125467
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMainMenuDebug_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMainMenuDebug.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMainMenuDebug.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMainMenuDebug_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMainMenuDebug>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMainMenuDebug_Statics::ClassParams = {
		&USBZMainMenuDebug::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZMainMenuDebug_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMainMenuDebug_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMainMenuDebug()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMainMenuDebug_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMainMenuDebug, 830972922);
	template<> STARBREEZE_API UClass* StaticClass<USBZMainMenuDebug>()
	{
		return USBZMainMenuDebug::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMainMenuDebug(Z_Construct_UClass_USBZMainMenuDebug, &USBZMainMenuDebug::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMainMenuDebug"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMainMenuDebug);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
