// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZTagEventInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZTagEventInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTagEventInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZTagEventInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(ISBZTagEventInterface::execHandleTagActive)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_EventTag);
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTagActive_Implementation(Z_Param_Out_EventTag,Z_Param_bActive);
		P_NATIVE_END;
	}
	void ISBZTagEventInterface::HandleTagActive(FGameplayTag const& EventTag, bool bActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleTagActive instead.");
	}
	void USBZTagEventInterface::StaticRegisterNativesUSBZTagEventInterface()
	{
		UClass* Class = USBZTagEventInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTagActive", &ISBZTagEventInterface::execHandleTagActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_EventTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZTagEventInterface_eventHandleTagActive_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_EventTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_EventTag_MetaData)) };
	void Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SBZTagEventInterface_eventHandleTagActive_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZTagEventInterface_eventHandleTagActive_Parms), &Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZTagEventInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZTagEventInterface, nullptr, "HandleTagActive", nullptr, nullptr, sizeof(SBZTagEventInterface_eventHandleTagActive_Parms), Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZTagEventInterface_NoRegister()
	{
		return USBZTagEventInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZTagEventInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZTagEventInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZTagEventInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZTagEventInterface_HandleTagActive, "HandleTagActive" }, // 791445946
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZTagEventInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZTagEventInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZTagEventInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZTagEventInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZTagEventInterface_Statics::ClassParams = {
		&USBZTagEventInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZTagEventInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZTagEventInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZTagEventInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZTagEventInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZTagEventInterface, 2536039526);
	template<> STARBREEZE_API UClass* StaticClass<USBZTagEventInterface>()
	{
		return USBZTagEventInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZTagEventInterface(Z_Construct_UClass_USBZTagEventInterface, &USBZTagEventInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZTagEventInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZTagEventInterface);
	static FName NAME_USBZTagEventInterface_HandleTagActive = FName(TEXT("HandleTagActive"));
	void ISBZTagEventInterface::Execute_HandleTagActive(UObject* O, FGameplayTag const& EventTag, bool bActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZTagEventInterface::StaticClass()));
		SBZTagEventInterface_eventHandleTagActive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZTagEventInterface_HandleTagActive);
		if (Func)
		{
			Parms.EventTag=EventTag;
			Parms.bActive=bActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZTagEventInterface*)(O->GetNativeInterfaceAddress(USBZTagEventInterface::StaticClass())))
		{
			I->HandleTagActive_Implementation(EventTag,bActive);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
