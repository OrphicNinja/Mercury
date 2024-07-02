// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZFirePermissionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZFirePermissionManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZFireTokenType();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_SBZFirePermissionManager::execOnTargetAdded)
	{
		P_GET_OBJECT(UObject,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetAdded(Z_Param_Obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_SBZFirePermissionManager::execOnTargetRemoved)
	{
		P_GET_OBJECT(UObject,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetRemoved(Z_Param_Obj);
		P_NATIVE_END;
	}
	void UDEPRECATED_SBZFirePermissionManager::StaticRegisterNativesUDEPRECATED_SBZFirePermissionManager()
	{
		UClass* Class = UDEPRECATED_SBZFirePermissionManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetAdded", &UDEPRECATED_SBZFirePermissionManager::execOnTargetAdded },
			{ "OnTargetRemoved", &UDEPRECATED_SBZFirePermissionManager::execOnTargetRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics
	{
		struct SBZFirePermissionManager_eventOnTargetAdded_Parms
		{
			UObject* Obj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFirePermissionManager_eventOnTargetAdded_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFirePermissionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager, nullptr, "OnTargetAdded", nullptr, nullptr, sizeof(SBZFirePermissionManager_eventOnTargetAdded_Parms), Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics
	{
		struct SBZFirePermissionManager_eventOnTargetRemoved_Parms
		{
			UObject* Obj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZFirePermissionManager_eventOnTargetRemoved_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZFirePermissionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager, nullptr, "OnTargetRemoved", nullptr, nullptr, sizeof(SBZFirePermissionManager_eventOnTargetRemoved_Parms), Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_NoRegister()
	{
		return UDEPRECATED_SBZFirePermissionManager::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TokenLimits_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TokenLimits_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TokenLimits_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TokenLimits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetAdded, "OnTargetAdded" }, // 4228752427
		{ &Z_Construct_UFunction_UDEPRECATED_SBZFirePermissionManager_OnTargetRemoved, "OnTargetRemoved" }, // 1769070562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZFirePermissionManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZFirePermissionManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_ValueProp = { "TokenLimits", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_Key_KeyProp = { "TokenLimits_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Starbreeze_ESBZFireTokenType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZFirePermissionManager" },
		{ "ModuleRelativePath", "Public/SBZFirePermissionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits = { "TokenLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_SBZFirePermissionManager, TokenLimits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::NewProp_TokenLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_SBZFirePermissionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::ClassParams = {
		&UDEPRECATED_SBZFirePermissionManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::PropPointers),
		0,
		0x02A002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_SBZFirePermissionManager, 3458924885);
	template<> STARBREEZE_API UClass* StaticClass<UDEPRECATED_SBZFirePermissionManager>()
	{
		return UDEPRECATED_SBZFirePermissionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_SBZFirePermissionManager(Z_Construct_UClass_UDEPRECATED_SBZFirePermissionManager, &UDEPRECATED_SBZFirePermissionManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("UDEPRECATED_SBZFirePermissionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_SBZFirePermissionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
