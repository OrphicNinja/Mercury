// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZWindManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZWindManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindEmitterComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWindReceiverComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZWindManager::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZWindManager**)Z_Param__Result=USBZWindManager::Get(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USBZWindManager::StaticRegisterNativesUSBZWindManager()
	{
		UClass* Class = USBZWindManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &USBZWindManager::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZWindManager_Get_Statics
	{
		struct SBZWindManager_eventGet_Parms
		{
			UObject* WorldContextObject;
			USBZWindManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWindManager_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWindManager_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWindManager_Get_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZWindManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZWindManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_USBZWindManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZWindManager_Get_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindManager_Get_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZWindManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWindManager_Get_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZWindManager_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZWindManager_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZWindManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZWindManager, nullptr, "Get", nullptr, nullptr, sizeof(SBZWindManager_eventGet_Parms), Z_Construct_UFunction_USBZWindManager_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZWindManager_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZWindManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZWindManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZWindManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZWindManager_NoRegister()
	{
		return USBZWindManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZWindManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receivers_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Receivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Receivers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiversPerID_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReceiversPerID_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReceiversPerID_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiversPerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReceiversPerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZWindManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZWindManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZWindManager_Get, "Get" }, // 590763531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZWindManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWindEmitterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindManager, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_Inner = { "Receivers", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZWindReceiverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers = { "Receivers", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindManager, Receivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_ValueProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_ValueProp = { "ReceiversPerID", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USBZWindReceiverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_Key_KeyProp = { "ReceiversPerID_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZWindManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZWindManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID = { "ReceiversPerID", nullptr, (EPropertyFlags)0x004000800000200d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZWindManager, ReceiversPerID), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZWindManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindManager_Statics::NewProp_Emitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindManager_Statics::NewProp_Receivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZWindManager_Statics::NewProp_ReceiversPerID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZWindManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZWindManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZWindManager_Statics::ClassParams = {
		&USBZWindManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZWindManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZWindManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZWindManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZWindManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZWindManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZWindManager, 2460806701);
	template<> STARBREEZE_API UClass* StaticClass<USBZWindManager>()
	{
		return USBZWindManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZWindManager(Z_Construct_UClass_USBZWindManager, &USBZWindManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZWindManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZWindManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
