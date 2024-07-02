// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAIAttractorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAIAttractorInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAIAttractorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZAIAttractorInterface::execSetAttractorInstigator)
	{
		P_GET_OBJECT(APawn,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttractorInstigator(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZAIAttractorInterface::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void USBZAIAttractorInterface::StaticRegisterNativesUSBZAIAttractorInterface()
	{
		UClass* Class = USBZAIAttractorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttractorInstigator", &ISBZAIAttractorInterface::execSetAttractorInstigator },
			{ "SetEnabled", &ISBZAIAttractorInterface::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics
	{
		struct SBZAIAttractorInterface_eventSetAttractorInstigator_Parms
		{
			APawn* Instigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAIAttractorInterface_eventSetAttractorInstigator_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAttractorInterface, nullptr, "SetAttractorInstigator", nullptr, nullptr, sizeof(SBZAIAttractorInterface_eventSetAttractorInstigator_Parms), Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics
	{
		struct SBZAIAttractorInterface_eventSetEnabled_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZAIAttractorInterface_eventSetEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorInterface_eventSetEnabled_Parms), &Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAIAttractorInterface_eventSetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAIAttractorInterface_eventSetEnabled_Parms), &Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAIAttractorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAIAttractorInterface, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZAIAttractorInterface_eventSetEnabled_Parms), Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAIAttractorInterface_NoRegister()
	{
		return USBZAIAttractorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZAIAttractorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAIAttractorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAIAttractorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAIAttractorInterface_SetAttractorInstigator, "SetAttractorInstigator" }, // 1723391994
		{ &Z_Construct_UFunction_USBZAIAttractorInterface_SetEnabled, "SetEnabled" }, // 4008615009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAIAttractorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SBZAIAttractorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAIAttractorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZAIAttractorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAIAttractorInterface_Statics::ClassParams = {
		&USBZAIAttractorInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAIAttractorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAIAttractorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAIAttractorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAIAttractorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAIAttractorInterface, 2839852824);
	template<> STARBREEZE_API UClass* StaticClass<USBZAIAttractorInterface>()
	{
		return USBZAIAttractorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAIAttractorInterface(Z_Construct_UClass_USBZAIAttractorInterface, &USBZAIAttractorInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAIAttractorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAIAttractorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
