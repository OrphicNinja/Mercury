// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSetBackfillAllowed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSetBackfillAllowed() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSetBackfillAllowed_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSetBackfillAllowed();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnSetBackfillAllowed__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZSetBackfillAllowed::execSetBackfillAllowed)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_UBOOL(Z_Param_NewBAllowed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZSetBackfillAllowed**)Z_Param__Result=USBZSetBackfillAllowed::SetBackfillAllowed(Z_Param_NewWorldContextObject,Z_Param_NewBAllowed);
		P_NATIVE_END;
	}
	void USBZSetBackfillAllowed::StaticRegisterNativesUSBZSetBackfillAllowed()
	{
		UClass* Class = USBZSetBackfillAllowed::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBackfillAllowed", &USBZSetBackfillAllowed::execSetBackfillAllowed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics
	{
		struct SBZSetBackfillAllowed_eventSetBackfillAllowed_Parms
		{
			UObject* NewWorldContextObject;
			bool NewBAllowed;
			USBZSetBackfillAllowed* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static void NewProp_NewBAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewBAllowed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSetBackfillAllowed_eventSetBackfillAllowed_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_NewBAllowed_SetBit(void* Obj)
	{
		((SBZSetBackfillAllowed_eventSetBackfillAllowed_Parms*)Obj)->NewBAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_NewBAllowed = { "NewBAllowed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZSetBackfillAllowed_eventSetBackfillAllowed_Parms), &Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_NewBAllowed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSetBackfillAllowed_eventSetBackfillAllowed_Parms, ReturnValue), Z_Construct_UClass_USBZSetBackfillAllowed_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_NewBAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSetBackfillAllowed.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSetBackfillAllowed, nullptr, "SetBackfillAllowed", nullptr, nullptr, sizeof(SBZSetBackfillAllowed_eventSetBackfillAllowed_Parms), Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSetBackfillAllowed_NoRegister()
	{
		return USBZSetBackfillAllowed::StaticClass();
	}
	struct Z_Construct_UClass_USBZSetBackfillAllowed_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetBackfillAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetBackfillAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowed_MetaData[];
#endif
		static void NewProp_bAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSetBackfillAllowed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSetBackfillAllowed_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSetBackfillAllowed_SetBackfillAllowed, "SetBackfillAllowed" }, // 1672634434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSetBackfillAllowed_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSetBackfillAllowed.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSetBackfillAllowed.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_OnSetBackfillAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSetBackfillAllowed" },
		{ "ModuleRelativePath", "Public/SBZSetBackfillAllowed.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_OnSetBackfillAllowed = { "OnSetBackfillAllowed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSetBackfillAllowed, OnSetBackfillAllowed), Z_Construct_UDelegateFunction_Starbreeze_SBZOnSetBackfillAllowed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_OnSetBackfillAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_OnSetBackfillAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSetBackfillAllowed" },
		{ "ModuleRelativePath", "Public/SBZSetBackfillAllowed.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSetBackfillAllowed, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_bAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSetBackfillAllowed" },
		{ "ModuleRelativePath", "Public/SBZSetBackfillAllowed.h" },
	};
#endif
	void Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_bAllowed_SetBit(void* Obj)
	{
		((USBZSetBackfillAllowed*)Obj)->bAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_bAllowed = { "bAllowed", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSetBackfillAllowed), &Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_bAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_bAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_bAllowed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSetBackfillAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_OnSetBackfillAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSetBackfillAllowed_Statics::NewProp_bAllowed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSetBackfillAllowed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSetBackfillAllowed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSetBackfillAllowed_Statics::ClassParams = {
		&USBZSetBackfillAllowed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSetBackfillAllowed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSetBackfillAllowed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSetBackfillAllowed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSetBackfillAllowed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSetBackfillAllowed, 906162400);
	template<> STARBREEZE_API UClass* StaticClass<USBZSetBackfillAllowed>()
	{
		return USBZSetBackfillAllowed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSetBackfillAllowed(Z_Construct_UClass_USBZSetBackfillAllowed, &USBZSetBackfillAllowed::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSetBackfillAllowed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSetBackfillAllowed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
