// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZReactionDataInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZReactionDataInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionDataInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZReactionDataInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZReactionData();
// End Cross Module References
	DEFINE_FUNCTION(ISBZReactionDataInterface::execGetReactionData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSBZReactionData*)Z_Param__Result=P_THIS->GetReactionData();
		P_NATIVE_END;
	}
	void USBZReactionDataInterface::StaticRegisterNativesUSBZReactionDataInterface()
	{
		UClass* Class = USBZReactionDataInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReactionData", &ISBZReactionDataInterface::execGetReactionData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics
	{
		struct SBZReactionDataInterface_eventGetReactionData_Parms
		{
			FSBZReactionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZReactionDataInterface_eventGetReactionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSBZReactionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReactionDataInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZReactionDataInterface, nullptr, "GetReactionData", nullptr, nullptr, sizeof(SBZReactionDataInterface_eventGetReactionData_Parms), Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZReactionDataInterface_NoRegister()
	{
		return USBZReactionDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZReactionDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZReactionDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZReactionDataInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZReactionDataInterface_GetReactionData, "GetReactionData" }, // 2406262422
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZReactionDataInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZReactionDataInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZReactionDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZReactionDataInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZReactionDataInterface_Statics::ClassParams = {
		&USBZReactionDataInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZReactionDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZReactionDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZReactionDataInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZReactionDataInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZReactionDataInterface, 4014731844);
	template<> STARBREEZE_API UClass* StaticClass<USBZReactionDataInterface>()
	{
		return USBZReactionDataInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZReactionDataInterface(Z_Construct_UClass_USBZReactionDataInterface, &USBZReactionDataInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZReactionDataInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZReactionDataInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
