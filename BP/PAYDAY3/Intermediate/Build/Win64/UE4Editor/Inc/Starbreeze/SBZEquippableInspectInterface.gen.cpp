// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZEquippableInspectInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZEquippableInspectInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableInspectInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZEquippableInspectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
// End Cross Module References
	DEFINE_FUNCTION(ISBZEquippableInspectInterface::execStartCurrentEquippableInspect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartCurrentEquippableInspect();
		P_NATIVE_END;
	}
	void USBZEquippableInspectInterface::StaticRegisterNativesUSBZEquippableInspectInterface()
	{
		UClass* Class = USBZEquippableInspectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCurrentEquippableInspect", &ISBZEquippableInspectInterface::execStartCurrentEquippableInspect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics
	{
		struct SBZEquippableInspectInterface_eventStartCurrentEquippableInspect_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZEquippableInspectInterface_eventStartCurrentEquippableInspect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZEquippableInspectInterface_eventStartCurrentEquippableInspect_Parms), &Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZEquippableInspectInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZEquippableInspectInterface, nullptr, "StartCurrentEquippableInspect", nullptr, nullptr, sizeof(SBZEquippableInspectInterface_eventStartCurrentEquippableInspect_Parms), Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZEquippableInspectInterface_NoRegister()
	{
		return USBZEquippableInspectInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZEquippableInspectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZEquippableInspectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZEquippableInspectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZEquippableInspectInterface_StartCurrentEquippableInspect, "StartCurrentEquippableInspect" }, // 3795661516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZEquippableInspectInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SBZEquippableInspectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZEquippableInspectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZEquippableInspectInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZEquippableInspectInterface_Statics::ClassParams = {
		&USBZEquippableInspectInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZEquippableInspectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZEquippableInspectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZEquippableInspectInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZEquippableInspectInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZEquippableInspectInterface, 2231053715);
	template<> STARBREEZE_API UClass* StaticClass<USBZEquippableInspectInterface>()
	{
		return USBZEquippableInspectInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZEquippableInspectInterface(Z_Construct_UClass_USBZEquippableInspectInterface, &USBZEquippableInspectInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZEquippableInspectInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZEquippableInspectInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
