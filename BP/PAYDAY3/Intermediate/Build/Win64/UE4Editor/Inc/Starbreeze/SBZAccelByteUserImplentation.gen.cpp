// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAccelByteUserImplentation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAccelByteUserImplentation() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUserImplentation_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUserImplentation();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAccelByteUser();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(USBZAccelByteUserImplentation::execHandlePlatformUserChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlatformUserChanged(Z_Param_OldUserIndex);
		P_NATIVE_END;
	}
	void USBZAccelByteUserImplentation::StaticRegisterNativesUSBZAccelByteUserImplentation()
	{
		UClass* Class = USBZAccelByteUserImplentation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlatformUserChanged", &USBZAccelByteUserImplentation::execHandlePlatformUserChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics
	{
		struct SBZAccelByteUserImplentation_eventHandlePlatformUserChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex = { "OldUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAccelByteUserImplentation_eventHandlePlatformUserChanged_Parms, OldUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::NewProp_OldUserIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAccelByteUserImplentation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAccelByteUserImplentation, nullptr, "HandlePlatformUserChanged", nullptr, nullptr, sizeof(SBZAccelByteUserImplentation_eventHandlePlatformUserChanged_Parms), Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAccelByteUserImplentation_NoRegister()
	{
		return USBZAccelByteUserImplentation::StaticClass();
	}
	struct Z_Construct_UClass_USBZAccelByteUserImplentation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZAccelByteUser,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAccelByteUserImplentation_HandlePlatformUserChanged, "HandlePlatformUserChanged" }, // 3873997968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZAccelByteUserImplentation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAccelByteUserImplentation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZAccelByteUserImplentation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::ClassParams = {
		&USBZAccelByteUserImplentation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAccelByteUserImplentation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAccelByteUserImplentation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAccelByteUserImplentation, 3012945120);
	template<> STARBREEZE_API UClass* StaticClass<USBZAccelByteUserImplentation>()
	{
		return USBZAccelByteUserImplentation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAccelByteUserImplentation(Z_Construct_UClass_USBZAccelByteUserImplentation, &USBZAccelByteUserImplentation::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAccelByteUserImplentation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAccelByteUserImplentation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
