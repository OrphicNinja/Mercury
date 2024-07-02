// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteAdminHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteAdminHelper() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteAdminHelper_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteAdminHelper();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaDataLoader_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZAccelByteAdminHelper::execCheckLogoutDone)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Username);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckLogoutDone(Z_Param_Email,Z_Param_Username,Z_Param_Password);
		P_NATIVE_END;
	}
	void USBZAccelByteAdminHelper::StaticRegisterNativesUSBZAccelByteAdminHelper()
	{
		UClass* Class = USBZAccelByteAdminHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckLogoutDone", &USBZAccelByteAdminHelper::execCheckLogoutDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics
	{
		struct SBZAccelByteAdminHelper_eventCheckLogoutDone_Parms
		{
			FString Email;
			FString Username;
			FString Password;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAccelByteAdminHelper_eventCheckLogoutDone_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAccelByteAdminHelper_eventCheckLogoutDone_Parms, Username), METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAccelByteAdminHelper_eventCheckLogoutDone_Parms, Password), METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Password_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Email,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAccelByteAdminHelper, nullptr, "CheckLogoutDone", nullptr, nullptr, sizeof(SBZAccelByteAdminHelper_eventCheckLogoutDone_Parms), Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAccelByteAdminHelper_NoRegister()
	{
		return USBZAccelByteAdminHelper::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteAdminHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GauntletOAuthClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GauntletOAuthClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GauntletOAuthClientSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GauntletOAuthClientSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogoutTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogoutTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataLoader_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaDataLoader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAccelByteAdminHelper_CheckLogoutDone, "CheckLogoutDone" }, // 154993822
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteAdminHelper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteAdminHelper" },
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientId = { "GauntletOAuthClientId", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteAdminHelper, GauntletOAuthClientId), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteAdminHelper" },
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientSecret = { "GauntletOAuthClientSecret", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteAdminHelper, GauntletOAuthClientSecret), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_BaseUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteAdminHelper" },
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_BaseUrl = { "BaseUrl", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteAdminHelper, BaseUrl), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_BaseUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_BaseUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteAdminHelper" },
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteAdminHelper, Namespace), METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_LogoutTimerHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteAdminHelper" },
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_LogoutTimerHandle = { "LogoutTimerHandle", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteAdminHelper, LogoutTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_LogoutTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_LogoutTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_MetaDataLoader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAccelByteAdminHelper" },
		{ "ModuleRelativePath", "Public/SBZAccelByteAdminHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_MetaDataLoader = { "MetaDataLoader", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZAccelByteAdminHelper, MetaDataLoader), Z_Construct_UClass_USBZMetaDataLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_MetaDataLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_MetaDataLoader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_GauntletOAuthClientSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_BaseUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_Namespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_LogoutTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::NewProp_MetaDataLoader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteAdminHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::ClassParams = {
		&USBZAccelByteAdminHelper::StaticClass,
		"Starbreeze",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteAdminHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteAdminHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteAdminHelper, 4294069512);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteAdminHelper>()
	{
		return USBZAccelByteAdminHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteAdminHelper(Z_Construct_UClass_USBZAccelByteAdminHelper, &USBZAccelByteAdminHelper::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteAdminHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteAdminHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
