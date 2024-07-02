// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDeviceProfileLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDeviceProfileLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeviceProfileLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDeviceProfileLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZDeviceProfileOverrideMode();
// End Cross Module References
	DEFINE_FUNCTION(USBZDeviceProfileLibrary::execGetActiveDeviceProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZDeviceProfileLibrary::GetActiveDeviceProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDeviceProfileLibrary::execGetBaseDeviceProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USBZDeviceProfileLibrary::GetBaseDeviceProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDeviceProfileLibrary::execOverrideDeviceProfileForMode)
	{
		P_GET_ENUM(ESBZDeviceProfileOverrideMode,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZDeviceProfileLibrary::OverrideDeviceProfileForMode(ESBZDeviceProfileOverrideMode(Z_Param_NewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZDeviceProfileLibrary::execRestoreDefaultDeviceProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USBZDeviceProfileLibrary::RestoreDefaultDeviceProfile();
		P_NATIVE_END;
	}
	void USBZDeviceProfileLibrary::StaticRegisterNativesUSBZDeviceProfileLibrary()
	{
		UClass* Class = USBZDeviceProfileLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveDeviceProfileName", &USBZDeviceProfileLibrary::execGetActiveDeviceProfileName },
			{ "GetBaseDeviceProfileName", &USBZDeviceProfileLibrary::execGetBaseDeviceProfileName },
			{ "OverrideDeviceProfileForMode", &USBZDeviceProfileLibrary::execOverrideDeviceProfileForMode },
			{ "RestoreDefaultDeviceProfile", &USBZDeviceProfileLibrary::execRestoreDefaultDeviceProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics
	{
		struct SBZDeviceProfileLibrary_eventGetActiveDeviceProfileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDeviceProfileLibrary_eventGetActiveDeviceProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDeviceProfileLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDeviceProfileLibrary, nullptr, "GetActiveDeviceProfileName", nullptr, nullptr, sizeof(SBZDeviceProfileLibrary_eventGetActiveDeviceProfileName_Parms), Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics
	{
		struct SBZDeviceProfileLibrary_eventGetBaseDeviceProfileName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDeviceProfileLibrary_eventGetBaseDeviceProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDeviceProfileLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDeviceProfileLibrary, nullptr, "GetBaseDeviceProfileName", nullptr, nullptr, sizeof(SBZDeviceProfileLibrary_eventGetBaseDeviceProfileName_Parms), Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics
	{
		struct SBZDeviceProfileLibrary_eventOverrideDeviceProfileForMode_Parms
		{
			ESBZDeviceProfileOverrideMode NewMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDeviceProfileLibrary_eventOverrideDeviceProfileForMode_Parms, NewMode), Z_Construct_UEnum_Starbreeze_ESBZDeviceProfileOverrideMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDeviceProfileLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDeviceProfileLibrary, nullptr, "OverrideDeviceProfileForMode", nullptr, nullptr, sizeof(SBZDeviceProfileLibrary_eventOverrideDeviceProfileForMode_Parms), Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDeviceProfileLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDeviceProfileLibrary, nullptr, "RestoreDefaultDeviceProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDeviceProfileLibrary_NoRegister()
	{
		return USBZDeviceProfileLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZDeviceProfileLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDeviceProfileLibrary_GetActiveDeviceProfileName, "GetActiveDeviceProfileName" }, // 4025437420
		{ &Z_Construct_UFunction_USBZDeviceProfileLibrary_GetBaseDeviceProfileName, "GetBaseDeviceProfileName" }, // 4086748923
		{ &Z_Construct_UFunction_USBZDeviceProfileLibrary_OverrideDeviceProfileForMode, "OverrideDeviceProfileForMode" }, // 3419439752
		{ &Z_Construct_UFunction_USBZDeviceProfileLibrary_RestoreDefaultDeviceProfile, "RestoreDefaultDeviceProfile" }, // 1821759895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZDeviceProfileLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDeviceProfileLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDeviceProfileLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::ClassParams = {
		&USBZDeviceProfileLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDeviceProfileLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDeviceProfileLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDeviceProfileLibrary, 2534214750);
	template<> STARBREEZE_API UClass* StaticClass<USBZDeviceProfileLibrary>()
	{
		return USBZDeviceProfileLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDeviceProfileLibrary(Z_Construct_UClass_USBZDeviceProfileLibrary, &USBZDeviceProfileLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDeviceProfileLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDeviceProfileLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
