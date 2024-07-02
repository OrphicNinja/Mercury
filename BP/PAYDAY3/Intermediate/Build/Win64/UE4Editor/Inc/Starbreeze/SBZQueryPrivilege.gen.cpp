// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZQueryPrivilege.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZQueryPrivilege() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZQueryPrivilege_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZQueryPrivilege();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZUserPrivilegesProxy();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPrivilegeAllowed__DelegateSignature();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnPrivilegeBlocked__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USBZQueryPrivilege::execQueryPrivilege)
	{
		P_GET_OBJECT(UObject,Z_Param_NewWorldContextObject);
		P_GET_ENUM(ESBZUserPrivilegesProxy,Z_Param_Privilege);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USBZQueryPrivilege**)Z_Param__Result=USBZQueryPrivilege::QueryPrivilege(Z_Param_NewWorldContextObject,ESBZUserPrivilegesProxy(Z_Param_Privilege));
		P_NATIVE_END;
	}
	void USBZQueryPrivilege::StaticRegisterNativesUSBZQueryPrivilege()
	{
		UClass* Class = USBZQueryPrivilege::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueryPrivilege", &USBZQueryPrivilege::execQueryPrivilege },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics
	{
		struct SBZQueryPrivilege_eventQueryPrivilege_Parms
		{
			UObject* NewWorldContextObject;
			ESBZUserPrivilegesProxy Privilege;
			USBZQueryPrivilege* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_NewWorldContextObject = { "NewWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZQueryPrivilege_eventQueryPrivilege_Parms, NewWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZQueryPrivilege_eventQueryPrivilege_Parms, Privilege), Z_Construct_UEnum_Starbreeze_ESBZUserPrivilegesProxy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZQueryPrivilege_eventQueryPrivilege_Parms, ReturnValue), Z_Construct_UClass_USBZQueryPrivilege_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_NewWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_Privilege_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_Privilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZQueryPrivilege.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZQueryPrivilege, nullptr, "QueryPrivilege", nullptr, nullptr, sizeof(SBZQueryPrivilege_eventQueryPrivilege_Parms), Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZQueryPrivilege_NoRegister()
	{
		return USBZQueryPrivilege::StaticClass();
	}
	struct Z_Construct_UClass_USBZQueryPrivilege_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrivilegeAllowed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrivilegeAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrivilegeBlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrivilegeBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZQueryPrivilege_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZQueryPrivilege_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZQueryPrivilege_QueryPrivilege, "QueryPrivilege" }, // 3296839262
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZQueryPrivilege_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZQueryPrivilege.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZQueryPrivilege.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeAllowed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZQueryPrivilege" },
		{ "ModuleRelativePath", "Public/SBZQueryPrivilege.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeAllowed = { "OnPrivilegeAllowed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZQueryPrivilege, OnPrivilegeAllowed), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPrivilegeAllowed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZQueryPrivilege" },
		{ "ModuleRelativePath", "Public/SBZQueryPrivilege.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeBlocked = { "OnPrivilegeBlocked", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZQueryPrivilege, OnPrivilegeBlocked), Z_Construct_UDelegateFunction_Starbreeze_SBZOnPrivilegeBlocked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZQueryPrivilege" },
		{ "ModuleRelativePath", "Public/SBZQueryPrivilege.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZQueryPrivilege, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZQueryPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_OnPrivilegeBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZQueryPrivilege_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZQueryPrivilege_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZQueryPrivilege>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZQueryPrivilege_Statics::ClassParams = {
		&USBZQueryPrivilege::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZQueryPrivilege_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZQueryPrivilege_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZQueryPrivilege_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZQueryPrivilege_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZQueryPrivilege()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZQueryPrivilege_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZQueryPrivilege, 2152418501);
	template<> STARBREEZE_API UClass* StaticClass<USBZQueryPrivilege>()
	{
		return USBZQueryPrivilege::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZQueryPrivilege(Z_Construct_UClass_USBZQueryPrivilege, &USBZQueryPrivilege::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZQueryPrivilege"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZQueryPrivilege);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
