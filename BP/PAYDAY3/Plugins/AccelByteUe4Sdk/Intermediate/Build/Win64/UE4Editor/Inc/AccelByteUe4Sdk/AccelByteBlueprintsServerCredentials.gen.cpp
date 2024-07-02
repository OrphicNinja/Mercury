// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/AccelByteBlueprintsServerCredentials.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccelByteBlueprintsServerCredentials() {}
// Cross Module References
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_NoRegister();
	ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UAccelByteBlueprintsServerCredentials();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References
	DEFINE_FUNCTION(UAccelByteBlueprintsServerCredentials::execGetClientAccessToken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsServerCredentials::GetClientAccessToken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsServerCredentials::execGetClientNamespace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsServerCredentials::GetClientNamespace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAccelByteBlueprintsServerCredentials::execGetMatchId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAccelByteBlueprintsServerCredentials::GetMatchId();
		P_NATIVE_END;
	}
	void UAccelByteBlueprintsServerCredentials::StaticRegisterNativesUAccelByteBlueprintsServerCredentials()
	{
		UClass* Class = UAccelByteBlueprintsServerCredentials::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClientAccessToken", &UAccelByteBlueprintsServerCredentials::execGetClientAccessToken },
			{ "GetClientNamespace", &UAccelByteBlueprintsServerCredentials::execGetClientNamespace },
			{ "GetMatchId", &UAccelByteBlueprintsServerCredentials::execGetMatchId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics
	{
		struct AccelByteBlueprintsServerCredentials_eventGetClientAccessToken_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsServerCredentials_eventGetClientAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsServerCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsServerCredentials, nullptr, "GetClientAccessToken", nullptr, nullptr, sizeof(AccelByteBlueprintsServerCredentials_eventGetClientAccessToken_Parms), Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics
	{
		struct AccelByteBlueprintsServerCredentials_eventGetClientNamespace_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsServerCredentials_eventGetClientNamespace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsServerCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsServerCredentials, nullptr, "GetClientNamespace", nullptr, nullptr, sizeof(AccelByteBlueprintsServerCredentials_eventGetClientNamespace_Parms), Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics
	{
		struct AccelByteBlueprintsServerCredentials_eventGetMatchId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AccelByteBlueprintsServerCredentials_eventGetMatchId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsServerCredentials.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAccelByteBlueprintsServerCredentials, nullptr, "GetMatchId", nullptr, nullptr, sizeof(AccelByteBlueprintsServerCredentials_eventGetMatchId_Parms), Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_NoRegister()
	{
		return UAccelByteBlueprintsServerCredentials::StaticClass();
	}
	struct Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientAccessToken, "GetClientAccessToken" }, // 1228729394
		{ &Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetClientNamespace, "GetClientNamespace" }, // 3555155586
		{ &Z_Construct_UFunction_UAccelByteBlueprintsServerCredentials_GetMatchId, "GetMatchId" }, // 549564543
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AccelByteBlueprintsServerCredentials.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AccelByteBlueprintsServerCredentials.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAccelByteBlueprintsServerCredentials>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::ClassParams = {
		&UAccelByteBlueprintsServerCredentials::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAccelByteBlueprintsServerCredentials()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAccelByteBlueprintsServerCredentials_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAccelByteBlueprintsServerCredentials, 379230118);
	template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UAccelByteBlueprintsServerCredentials>()
	{
		return UAccelByteBlueprintsServerCredentials::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAccelByteBlueprintsServerCredentials(Z_Construct_UClass_UAccelByteBlueprintsServerCredentials, &UAccelByteBlueprintsServerCredentials::StaticClass, TEXT("/Script/AccelByteUe4Sdk"), TEXT("UAccelByteBlueprintsServerCredentials"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAccelByteBlueprintsServerCredentials);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
