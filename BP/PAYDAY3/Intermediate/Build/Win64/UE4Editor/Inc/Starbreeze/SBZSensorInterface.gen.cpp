// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSensorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSensorInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSensorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISBZSensorInterface::execGetSensorComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSensorComponent**)Z_Param__Result=P_THIS->GetSensorComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZSensorInterface::execGetSensorOutlineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZOutlineComponent**)Z_Param__Result=P_THIS->GetSensorOutlineComponent_Implementation();
		P_NATIVE_END;
	}
	USBZSensorComponent* ISBZSensorInterface::GetSensorComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSensorComponent instead.");
		SBZSensorInterface_eventGetSensorComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	USBZOutlineComponent* ISBZSensorInterface::GetSensorOutlineComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSensorOutlineComponent instead.");
		SBZSensorInterface_eventGetSensorOutlineComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void USBZSensorInterface::StaticRegisterNativesUSBZSensorInterface()
	{
		UClass* Class = USBZSensorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSensorComponent", &ISBZSensorInterface::execGetSensorComponent },
			{ "GetSensorOutlineComponent", &ISBZSensorInterface::execGetSensorOutlineComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSensorInterface_eventGetSensorComponent_Parms, ReturnValue), Z_Construct_UClass_USBZSensorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSensorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSensorInterface, nullptr, "GetSensorComponent", nullptr, nullptr, sizeof(SBZSensorInterface_eventGetSensorComponent_Parms), Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSensorInterface_eventGetSensorOutlineComponent_Parms, ReturnValue), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSensorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSensorInterface, nullptr, "GetSensorOutlineComponent", nullptr, nullptr, sizeof(SBZSensorInterface_eventGetSensorOutlineComponent_Parms), Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSensorInterface_NoRegister()
	{
		return USBZSensorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZSensorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSensorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSensorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSensorInterface_GetSensorComponent, "GetSensorComponent" }, // 2732930174
		{ &Z_Construct_UFunction_USBZSensorInterface_GetSensorOutlineComponent, "GetSensorOutlineComponent" }, // 2135701948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSensorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSensorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSensorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZSensorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSensorInterface_Statics::ClassParams = {
		&USBZSensorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZSensorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSensorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSensorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSensorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSensorInterface, 368267806);
	template<> STARBREEZE_API UClass* StaticClass<USBZSensorInterface>()
	{
		return USBZSensorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSensorInterface(Z_Construct_UClass_USBZSensorInterface, &USBZSensorInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSensorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSensorInterface);
	static FName NAME_USBZSensorInterface_GetSensorComponent = FName(TEXT("GetSensorComponent"));
	USBZSensorComponent* ISBZSensorInterface::Execute_GetSensorComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZSensorInterface::StaticClass()));
		SBZSensorInterface_eventGetSensorComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZSensorInterface_GetSensorComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZSensorInterface*)(O->GetNativeInterfaceAddress(USBZSensorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSensorComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USBZSensorInterface_GetSensorOutlineComponent = FName(TEXT("GetSensorOutlineComponent"));
	USBZOutlineComponent* ISBZSensorInterface::Execute_GetSensorOutlineComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZSensorInterface::StaticClass()));
		SBZSensorInterface_eventGetSensorOutlineComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZSensorInterface_GetSensorOutlineComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZSensorInterface*)(O->GetNativeInterfaceAddress(USBZSensorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSensorOutlineComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
