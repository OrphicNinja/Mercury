// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBagHandleLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBagHandleLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagHandleLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagHandleLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZBagHandleLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FSBZBagHandle,Z_Param_Out_BagHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZBagHandleLibrary::IsValid(Z_Param_Out_BagHandle);
		P_NATIVE_END;
	}
	void USBZBagHandleLibrary::StaticRegisterNativesUSBZBagHandleLibrary()
	{
		UClass* Class = USBZBagHandleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &USBZBagHandleLibrary::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics
	{
		struct SBZBagHandleLibrary_eventIsValid_Parms
		{
			FSBZBagHandle BagHandle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::NewProp_BagHandle = { "BagHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZBagHandleLibrary_eventIsValid_Parms, BagHandle), Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBagHandleLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBagHandleLibrary_eventIsValid_Parms), &Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::NewProp_BagHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBagHandleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZBagHandleLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(SBZBagHandleLibrary_eventIsValid_Parms), Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZBagHandleLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZBagHandleLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZBagHandleLibrary_NoRegister()
	{
		return USBZBagHandleLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZBagHandleLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZBagHandleLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZBagHandleLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZBagHandleLibrary_IsValid, "IsValid" }, // 1622241881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZBagHandleLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBagHandleLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBagHandleLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZBagHandleLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZBagHandleLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZBagHandleLibrary_Statics::ClassParams = {
		&USBZBagHandleLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USBZBagHandleLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZBagHandleLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZBagHandleLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZBagHandleLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZBagHandleLibrary, 2937791971);
	template<> STARBREEZE_API UClass* StaticClass<USBZBagHandleLibrary>()
	{
		return USBZBagHandleLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZBagHandleLibrary(Z_Construct_UClass_USBZBagHandleLibrary, &USBZBagHandleLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZBagHandleLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZBagHandleLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
