// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSettingsFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSettingsFunctions() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctions_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSettingsFunctions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZSettingsFunctions::execGetButtonVisibilityAlways)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZSettingsFunctions::GetButtonVisibilityAlways(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZSettingsFunctions::StaticRegisterNativesUSBZSettingsFunctions()
	{
		UClass* Class = USBZSettingsFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetButtonVisibilityAlways", &USBZSettingsFunctions::execGetButtonVisibilityAlways },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics
	{
		struct SBZSettingsFunctions_eventGetButtonVisibilityAlways_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSettingsFunctions_eventGetButtonVisibilityAlways_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZSettingsFunctions_eventGetButtonVisibilityAlways_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSettingsFunctions_eventGetButtonVisibilityAlways_Parms), &Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSettingsFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSettingsFunctions, nullptr, "GetButtonVisibilityAlways", nullptr, nullptr, sizeof(SBZSettingsFunctions_eventGetButtonVisibilityAlways_Parms), Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSettingsFunctions_NoRegister()
	{
		return USBZSettingsFunctions::StaticClass();
	}
	struct Z_Construct_UClass_USBZSettingsFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSettingsFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSettingsFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSettingsFunctions_GetButtonVisibilityAlways, "GetButtonVisibilityAlways" }, // 3575130965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSettingsFunctions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSettingsFunctions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSettingsFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSettingsFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSettingsFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSettingsFunctions_Statics::ClassParams = {
		&USBZSettingsFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSettingsFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSettingsFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSettingsFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSettingsFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSettingsFunctions, 3799428097);
	template<> STARBREEZE_API UClass* StaticClass<USBZSettingsFunctions>()
	{
		return USBZSettingsFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSettingsFunctions(Z_Construct_UClass_USBZSettingsFunctions, &USBZSettingsFunctions::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSettingsFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSettingsFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
