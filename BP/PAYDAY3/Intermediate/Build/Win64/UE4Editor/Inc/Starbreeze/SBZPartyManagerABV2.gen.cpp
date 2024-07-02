// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPartyManagerABV2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPartyManagerABV2() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManagerABV2_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManagerABV2();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPartyManagerAB();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZPartyManagerABV2::execHandleNotLoggedInEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleNotLoggedInEntered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerABV2::execHandlePlatformUserChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlatformUserChanged(Z_Param_OldUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerABV2::execInvitePopUpCallbackV2)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvitePopUpCallbackV2(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPartyManagerABV2::execOnConfirmPartyLeaderLeft)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ClosingActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmPartyLeaderLeft(Z_Param_ClosingActionName);
		P_NATIVE_END;
	}
	void USBZPartyManagerABV2::StaticRegisterNativesUSBZPartyManagerABV2()
	{
		UClass* Class = USBZPartyManagerABV2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleNotLoggedInEntered", &USBZPartyManagerABV2::execHandleNotLoggedInEntered },
			{ "HandlePlatformUserChanged", &USBZPartyManagerABV2::execHandlePlatformUserChanged },
			{ "InvitePopUpCallbackV2", &USBZPartyManagerABV2::execInvitePopUpCallbackV2 },
			{ "OnConfirmPartyLeaderLeft", &USBZPartyManagerABV2::execOnConfirmPartyLeaderLeft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerABV2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerABV2, nullptr, "HandleNotLoggedInEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics
	{
		struct SBZPartyManagerABV2_eventHandlePlatformUserChanged_Parms
		{
			int32 OldUserIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldUserIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex = { "OldUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManagerABV2_eventHandlePlatformUserChanged_Parms, OldUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerABV2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerABV2, nullptr, "HandlePlatformUserChanged", nullptr, nullptr, sizeof(SBZPartyManagerABV2_eventHandlePlatformUserChanged_Parms), Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics
	{
		struct SBZPartyManagerABV2_eventInvitePopUpCallbackV2_Parms
		{
			FName ActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManagerABV2_eventInvitePopUpCallbackV2_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerABV2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerABV2, nullptr, "InvitePopUpCallbackV2", nullptr, nullptr, sizeof(SBZPartyManagerABV2_eventInvitePopUpCallbackV2_Parms), Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics
	{
		struct SBZPartyManagerABV2_eventOnConfirmPartyLeaderLeft_Parms
		{
			FName ClosingActionName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClosingActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::NewProp_ClosingActionName = { "ClosingActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPartyManagerABV2_eventOnConfirmPartyLeaderLeft_Parms, ClosingActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::NewProp_ClosingActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPartyManagerABV2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPartyManagerABV2, nullptr, "OnConfirmPartyLeaderLeft", nullptr, nullptr, sizeof(SBZPartyManagerABV2_eventOnConfirmPartyLeaderLeft_Parms), Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPartyManagerABV2_NoRegister()
	{
		return USBZPartyManagerABV2::StaticClass();
	}
	struct Z_Construct_UClass_USBZPartyManagerABV2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPartyManagerABV2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZPartyManagerAB,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPartyManagerABV2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPartyManagerABV2_HandleNotLoggedInEntered, "HandleNotLoggedInEntered" }, // 122077290
		{ &Z_Construct_UFunction_USBZPartyManagerABV2_HandlePlatformUserChanged, "HandlePlatformUserChanged" }, // 3988036633
		{ &Z_Construct_UFunction_USBZPartyManagerABV2_InvitePopUpCallbackV2, "InvitePopUpCallbackV2" }, // 2119292574
		{ &Z_Construct_UFunction_USBZPartyManagerABV2_OnConfirmPartyLeaderLeft, "OnConfirmPartyLeaderLeft" }, // 1889817849
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPartyManagerABV2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPartyManagerABV2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPartyManagerABV2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPartyManagerABV2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPartyManagerABV2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPartyManagerABV2_Statics::ClassParams = {
		&USBZPartyManagerABV2::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPartyManagerABV2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPartyManagerABV2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPartyManagerABV2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPartyManagerABV2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPartyManagerABV2, 846903781);
	template<> STARBREEZE_API UClass* StaticClass<USBZPartyManagerABV2>()
	{
		return USBZPartyManagerABV2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPartyManagerABV2(Z_Construct_UClass_USBZPartyManagerABV2, &USBZPartyManagerABV2::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPartyManagerABV2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPartyManagerABV2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
