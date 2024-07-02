// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMetaFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMetaFunctionLibrary() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaFunctionLibrary_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMetaFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventData();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMetaEventModifierData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZMetaEventType();
// End Cross Module References
	DEFINE_FUNCTION(USBZMetaFunctionLibrary::execGetActiveMetaEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSBZMetaEventData,Z_Param_Out_OutMetaEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZMetaFunctionLibrary::GetActiveMetaEvent(Z_Param_WorldContextObject,Z_Param_Out_OutMetaEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMetaFunctionLibrary::execGetActiveMetaEventModifiers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FSBZMetaEventModifierData,Z_Param_Out_MetaEventModifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USBZMetaFunctionLibrary::GetActiveMetaEventModifiers(Z_Param_WorldContextObject,Z_Param_Out_MetaEventModifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMetaFunctionLibrary::execGetActiveMetaEventType)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESBZMetaEventType*)Z_Param__Result=USBZMetaFunctionLibrary::GetActiveMetaEventType(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZMetaFunctionLibrary::StaticRegisterNativesUSBZMetaFunctionLibrary()
	{
		UClass* Class = USBZMetaFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveMetaEvent", &USBZMetaFunctionLibrary::execGetActiveMetaEvent },
			{ "GetActiveMetaEventModifiers", &USBZMetaFunctionLibrary::execGetActiveMetaEventModifiers },
			{ "GetActiveMetaEventType", &USBZMetaFunctionLibrary::execGetActiveMetaEventType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics
	{
		struct SBZMetaFunctionLibrary_eventGetActiveMetaEvent_Parms
		{
			const UObject* WorldContextObject;
			FSBZMetaEventData OutMetaEvent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMetaEvent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMetaFunctionLibrary_eventGetActiveMetaEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_OutMetaEvent = { "OutMetaEvent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMetaFunctionLibrary_eventGetActiveMetaEvent_Parms, OutMetaEvent), Z_Construct_UScriptStruct_FSBZMetaEventData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMetaFunctionLibrary_eventGetActiveMetaEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMetaFunctionLibrary_eventGetActiveMetaEvent_Parms), &Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_OutMetaEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMetaFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMetaFunctionLibrary, nullptr, "GetActiveMetaEvent", nullptr, nullptr, sizeof(SBZMetaFunctionLibrary_eventGetActiveMetaEvent_Parms), Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics
	{
		struct SBZMetaFunctionLibrary_eventGetActiveMetaEventModifiers_Parms
		{
			const UObject* WorldContextObject;
			TArray<FSBZMetaEventModifierData> MetaEventModifiers;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaEventModifiers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaEventModifiers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMetaFunctionLibrary_eventGetActiveMetaEventModifiers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_MetaEventModifiers_Inner = { "MetaEventModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMetaEventModifierData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_MetaEventModifiers = { "MetaEventModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMetaFunctionLibrary_eventGetActiveMetaEventModifiers_Parms, MetaEventModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZMetaFunctionLibrary_eventGetActiveMetaEventModifiers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMetaFunctionLibrary_eventGetActiveMetaEventModifiers_Parms), &Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_MetaEventModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_MetaEventModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMetaFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMetaFunctionLibrary, nullptr, "GetActiveMetaEventModifiers", nullptr, nullptr, sizeof(SBZMetaFunctionLibrary_eventGetActiveMetaEventModifiers_Parms), Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics
	{
		struct SBZMetaFunctionLibrary_eventGetActiveMetaEventType_Parms
		{
			const UObject* WorldContextObject;
			ESBZMetaEventType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMetaFunctionLibrary_eventGetActiveMetaEventType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMetaFunctionLibrary_eventGetActiveMetaEventType_Parms, ReturnValue), Z_Construct_UEnum_Starbreeze_ESBZMetaEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMetaFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMetaFunctionLibrary, nullptr, "GetActiveMetaEventType", nullptr, nullptr, sizeof(SBZMetaFunctionLibrary_eventGetActiveMetaEventType_Parms), Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMetaFunctionLibrary_NoRegister()
	{
		return USBZMetaFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USBZMetaFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEvent, "GetActiveMetaEvent" }, // 2523193349
		{ &Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventModifiers, "GetActiveMetaEventModifiers" }, // 2735275235
		{ &Z_Construct_UFunction_USBZMetaFunctionLibrary_GetActiveMetaEventType, "GetActiveMetaEventType" }, // 2715803858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMetaFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMetaFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMetaFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::ClassParams = {
		&USBZMetaFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMetaFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMetaFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMetaFunctionLibrary, 3729179677);
	template<> STARBREEZE_API UClass* StaticClass<USBZMetaFunctionLibrary>()
	{
		return USBZMetaFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMetaFunctionLibrary(Z_Construct_UClass_USBZMetaFunctionLibrary, &USBZMetaFunctionLibrary::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMetaFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMetaFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
