// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAISightBlockerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAISightBlockerInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISightBlockerInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZAISightBlockerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ISBZAISightBlockerInterface::execCanAffectStealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAffectStealth_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZAISightBlockerInterface::execGetSightModifier)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSightModifier_Implementation(Z_Param_Out_Start,Z_Param_Out_End);
		P_NATIVE_END;
	}
	bool ISBZAISightBlockerInterface::CanAffectStealth() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanAffectStealth instead.");
		SBZAISightBlockerInterface_eventCanAffectStealth_Parms Parms;
		return Parms.ReturnValue;
	}
	float ISBZAISightBlockerInterface::GetSightModifier(FVector const& Start, FVector const& End) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSightModifier instead.");
		SBZAISightBlockerInterface_eventGetSightModifier_Parms Parms;
		return Parms.ReturnValue;
	}
	void USBZAISightBlockerInterface::StaticRegisterNativesUSBZAISightBlockerInterface()
	{
		UClass* Class = USBZAISightBlockerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAffectStealth", &ISBZAISightBlockerInterface::execCanAffectStealth },
			{ "GetSightModifier", &ISBZAISightBlockerInterface::execGetSightModifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZAISightBlockerInterface_eventCanAffectStealth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAISightBlockerInterface_eventCanAffectStealth_Parms), &Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISightBlockerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISightBlockerInterface, nullptr, "CanAffectStealth", nullptr, nullptr, sizeof(SBZAISightBlockerInterface_eventCanAffectStealth_Parms), Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISightBlockerInterface_eventGetSightModifier_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISightBlockerInterface_eventGetSightModifier_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_End_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZAISightBlockerInterface_eventGetSightModifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAISightBlockerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZAISightBlockerInterface, nullptr, "GetSightModifier", nullptr, nullptr, sizeof(SBZAISightBlockerInterface_eventGetSightModifier_Parms), Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZAISightBlockerInterface_NoRegister()
	{
		return USBZAISightBlockerInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZAISightBlockerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZAISightBlockerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZAISightBlockerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZAISightBlockerInterface_CanAffectStealth, "CanAffectStealth" }, // 3860603337
		{ &Z_Construct_UFunction_USBZAISightBlockerInterface_GetSightModifier, "GetSightModifier" }, // 3008920028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZAISightBlockerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAISightBlockerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZAISightBlockerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZAISightBlockerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZAISightBlockerInterface_Statics::ClassParams = {
		&USBZAISightBlockerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZAISightBlockerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZAISightBlockerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZAISightBlockerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZAISightBlockerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZAISightBlockerInterface, 2417591360);
	template<> STARBREEZE_API UClass* StaticClass<USBZAISightBlockerInterface>()
	{
		return USBZAISightBlockerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZAISightBlockerInterface(Z_Construct_UClass_USBZAISightBlockerInterface, &USBZAISightBlockerInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZAISightBlockerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZAISightBlockerInterface);
	static FName NAME_USBZAISightBlockerInterface_CanAffectStealth = FName(TEXT("CanAffectStealth"));
	bool ISBZAISightBlockerInterface::Execute_CanAffectStealth(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZAISightBlockerInterface::StaticClass()));
		SBZAISightBlockerInterface_eventCanAffectStealth_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZAISightBlockerInterface_CanAffectStealth);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZAISightBlockerInterface*)(O->GetNativeInterfaceAddress(USBZAISightBlockerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanAffectStealth_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZAISightBlockerInterface_GetSightModifier = FName(TEXT("GetSightModifier"));
	float ISBZAISightBlockerInterface::Execute_GetSightModifier(const UObject* O, FVector const& Start, FVector const& End)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZAISightBlockerInterface::StaticClass()));
		SBZAISightBlockerInterface_eventGetSightModifier_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZAISightBlockerInterface_GetSightModifier);
		if (Func)
		{
			Parms.Start=Start;
			Parms.End=End;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ISBZAISightBlockerInterface*)(O->GetNativeInterfaceAddress(USBZAISightBlockerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSightModifier_Implementation(Start,End);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
