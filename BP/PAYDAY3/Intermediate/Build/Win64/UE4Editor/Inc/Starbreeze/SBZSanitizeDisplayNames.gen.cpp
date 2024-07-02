// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSanitizeDisplayNames.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSanitizeDisplayNames() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSanitizeDisplayNames_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSanitizeDisplayNames();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSanitizeDisplayNames::execSanitizeDisplayNames)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_OBJECT(ASBZPlayerState,Z_Param_NewPlayerState);
		P_GET_TARRAY_REF(FString,Z_Param_Out_DisplayNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSanitizeDisplayNames**)Z_Param__Result=USBZSanitizeDisplayNames::SanitizeDisplayNames(Z_Param_NewWorldContextObject,Z_Param_NewPlayerState,Z_Param_Out_DisplayNames);
		P_NATIVE_END;
	}
	void USBZSanitizeDisplayNames::StaticRegisterNativesUSBZSanitizeDisplayNames()
	{
		UClass* Class = USBZSanitizeDisplayNames::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SanitizeDisplayNames", &USBZSanitizeDisplayNames::execSanitizeDisplayNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics
	{
		struct SBZSanitizeDisplayNames_eventSanitizeDisplayNames_Parms
		{
			UObject* NewWorldContextObject;
			const ASBZPlayerState* NewPlayerState;
			TArray<FString> DisplayNames;
			USBZSanitizeDisplayNames* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayNames;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSanitizeDisplayNames_eventSanitizeDisplayNames_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_NewPlayerState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_NewPlayerState = { "NewPlayerState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSanitizeDisplayNames_eventSanitizeDisplayNames_Parms, NewPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_NewPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_NewPlayerState_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames_Inner = { "DisplayNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames = { "DisplayNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSanitizeDisplayNames_eventSanitizeDisplayNames_Parms, DisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSanitizeDisplayNames_eventSanitizeDisplayNames_Parms, ReturnValue), Z_Construct_UClass_USBZSanitizeDisplayNames_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_NewPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_DisplayNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSanitizeDisplayNames.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSanitizeDisplayNames, nullptr, "SanitizeDisplayNames", nullptr, nullptr, sizeof(SBZSanitizeDisplayNames_eventSanitizeDisplayNames_Parms), Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSanitizeDisplayNames_NoRegister()
	{
		return USBZSanitizeDisplayNames::StaticClass();
	}
	struct Z_Construct_UClass_USBZSanitizeDisplayNames_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSanitizeDisplayNamesSucceeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSanitizeDisplayNamesSucceeded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSanitizeDisplayNamesFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSanitizeDisplayNamesFailed;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizedDisplayNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizedDisplayNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SanitizedDisplayNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSanitizeDisplayNames_SanitizeDisplayNames, "SanitizeDisplayNames" }, // 3673576511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSanitizeDisplayNames.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSanitizeDisplayNames.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesSucceeded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSanitizeDisplayNames" },
		{ "ModuleRelativePath", "Public/SBZSanitizeDisplayNames.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesSucceeded = { "OnSanitizeDisplayNamesSucceeded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSanitizeDisplayNames, OnSanitizeDisplayNamesSucceeded), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesSucceeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesSucceeded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSanitizeDisplayNames" },
		{ "ModuleRelativePath", "Public/SBZSanitizeDisplayNames.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesFailed = { "OnSanitizeDisplayNamesFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSanitizeDisplayNames, OnSanitizeDisplayNamesFailed), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSanitizeDisplayNamesComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesFailed_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_SanitizedDisplayNames_Inner = { "SanitizedDisplayNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_SanitizedDisplayNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSanitizeDisplayNames" },
		{ "ModuleRelativePath", "Public/SBZSanitizeDisplayNames.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_SanitizedDisplayNames = { "SanitizedDisplayNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSanitizeDisplayNames, SanitizedDisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_SanitizedDisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_SanitizedDisplayNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSanitizeDisplayNames" },
		{ "ModuleRelativePath", "Public/SBZSanitizeDisplayNames.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSanitizeDisplayNames, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSanitizeDisplayNames" },
		{ "ModuleRelativePath", "Public/SBZSanitizeDisplayNames.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSanitizeDisplayNames, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_PlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesSucceeded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_OnSanitizeDisplayNamesFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_SanitizedDisplayNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_SanitizedDisplayNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::NewProp_PlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSanitizeDisplayNames>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::ClassParams = {
		&USBZSanitizeDisplayNames::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSanitizeDisplayNames()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSanitizeDisplayNames_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSanitizeDisplayNames, 2926872868);
	template<> STARBREEZE_API UClass* StaticClass<USBZSanitizeDisplayNames>()
	{
		return USBZSanitizeDisplayNames::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSanitizeDisplayNames(Z_Construct_UClass_USBZSanitizeDisplayNames, &USBZSanitizeDisplayNames::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSanitizeDisplayNames"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSanitizeDisplayNames);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
