// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInvites.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInvites() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInvites_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInvites();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZInvites::execHandleStateEnteredInvite)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateEnteredInvite(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZInvites::execHandleStateEnteredPlayTogether)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleStateEnteredPlayTogether(Z_Param_StateName);
		P_NATIVE_END;
	}
	void USBZInvites::StaticRegisterNativesUSBZInvites()
	{
		UClass* Class = USBZInvites::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleStateEnteredInvite", &USBZInvites::execHandleStateEnteredInvite },
			{ "HandleStateEnteredPlayTogether", &USBZInvites::execHandleStateEnteredPlayTogether },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics
	{
		struct SBZInvites_eventHandleStateEnteredInvite_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInvites_eventHandleStateEnteredInvite_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInvites.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInvites, nullptr, "HandleStateEnteredInvite", nullptr, nullptr, sizeof(SBZInvites_eventHandleStateEnteredInvite_Parms), Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics
	{
		struct SBZInvites_eventHandleStateEnteredPlayTogether_Parms
		{
			FName StateName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInvites_eventHandleStateEnteredPlayTogether_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInvites.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZInvites, nullptr, "HandleStateEnteredPlayTogether", nullptr, nullptr, sizeof(SBZInvites_eventHandleStateEnteredPlayTogether_Parms), Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZInvites_NoRegister()
	{
		return USBZInvites::StaticClass();
	}
	struct Z_Construct_UClass_USBZInvites_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventRequestUserInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventRequestUserInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventUserSwitchDuringInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventUserSwitchDuringInvite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZInvites_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZInvites_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZInvites_HandleStateEnteredInvite, "HandleStateEnteredInvite" }, // 2719101027
		{ &Z_Construct_UFunction_USBZInvites_HandleStateEnteredPlayTogether, "HandleStateEnteredPlayTogether" }, // 3119061950
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInvites_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInvites.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInvites.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInvites_Statics::NewProp_EventRequestUserInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInvites" },
		{ "ModuleRelativePath", "Public/SBZInvites.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInvites_Statics::NewProp_EventRequestUserInvite = { "EventRequestUserInvite", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInvites, EventRequestUserInvite), Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInvites_Statics::NewProp_EventRequestUserInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInvites_Statics::NewProp_EventRequestUserInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZInvites_Statics::NewProp_EventUserSwitchDuringInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInvites" },
		{ "ModuleRelativePath", "Public/SBZInvites.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZInvites_Statics::NewProp_EventUserSwitchDuringInvite = { "EventUserSwitchDuringInvite", nullptr, (EPropertyFlags)0x0010000000080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZInvites, EventUserSwitchDuringInvite), Z_Construct_UDelegateFunction_Starbreeze_SBZOnlineEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZInvites_Statics::NewProp_EventUserSwitchDuringInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInvites_Statics::NewProp_EventUserSwitchDuringInvite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZInvites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInvites_Statics::NewProp_EventRequestUserInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZInvites_Statics::NewProp_EventUserSwitchDuringInvite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZInvites_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZInvites>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZInvites_Statics::ClassParams = {
		&USBZInvites::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZInvites_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZInvites_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZInvites_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZInvites_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZInvites()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZInvites_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZInvites, 1053073977);
	template<> STARBREEZE_API UClass* StaticClass<USBZInvites>()
	{
		return USBZInvites::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZInvites(Z_Construct_UClass_USBZInvites, &USBZInvites::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZInvites"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZInvites);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
