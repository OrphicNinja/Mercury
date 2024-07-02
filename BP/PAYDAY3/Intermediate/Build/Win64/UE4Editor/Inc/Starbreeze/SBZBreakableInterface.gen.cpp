// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBreakableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBreakableInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnBreakableBrokenAction();
// End Cross Module References
	DEFINE_FUNCTION(ISBZBreakableInterface::execOnBroken)
	{
		P_GET_ENUM(ESBZOnBreakableBrokenAction,Z_Param_InBreakableBrokenAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBroken_Implementation(ESBZOnBreakableBrokenAction(Z_Param_InBreakableBrokenAction));
		P_NATIVE_END;
	}
	void ISBZBreakableInterface::OnBroken(ESBZOnBreakableBrokenAction InBreakableBrokenAction)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBroken instead.");
	}
	void USBZBreakableInterface::StaticRegisterNativesUSBZBreakableInterface()
	{
		UClass* Class = USBZBreakableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBroken", &ISBZBreakableInterface::execOnBroken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBreakableBrokenAction_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InBreakableBrokenAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::NewProp_InBreakableBrokenAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::NewProp_InBreakableBrokenAction = { "InBreakableBrokenAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBreakableInterface_eventOnBroken_Parms, InBreakableBrokenAction), Z_Construct_UEnum_Starbreeze_ESBZOnBreakableBrokenAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::NewProp_InBreakableBrokenAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::NewProp_InBreakableBrokenAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBreakableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBreakableInterface, nullptr, "OnBroken", nullptr, nullptr, sizeof(SBZBreakableInterface_eventOnBroken_Parms), Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBreakableInterface_OnBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBreakableInterface_OnBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister()
	{
		return USBZBreakableInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZBreakableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBreakableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBreakableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBreakableInterface_OnBroken, "OnBroken" }, // 1463097734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBreakableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBreakableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBreakableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZBreakableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBreakableInterface_Statics::ClassParams = {
		&USBZBreakableInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBreakableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBreakableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBreakableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBreakableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBreakableInterface, 3280197075);
	template<> STARBREEZE_API UClass* StaticClass<USBZBreakableInterface>()
	{
		return USBZBreakableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBreakableInterface(Z_Construct_UClass_USBZBreakableInterface, &USBZBreakableInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBreakableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBreakableInterface);
	static FName NAME_USBZBreakableInterface_OnBroken = FName(TEXT("OnBroken"));
	void ISBZBreakableInterface::Execute_OnBroken(UObject* O, ESBZOnBreakableBrokenAction InBreakableBrokenAction)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZBreakableInterface::StaticClass()));
		SBZBreakableInterface_eventOnBroken_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZBreakableInterface_OnBroken);
		if (Func)
		{
			Parms.InBreakableBrokenAction=InBreakableBrokenAction;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZBreakableInterface*)(O->GetNativeInterfaceAddress(USBZBreakableInterface::StaticClass())))
		{
			I->OnBroken_Implementation(InBreakableBrokenAction);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
