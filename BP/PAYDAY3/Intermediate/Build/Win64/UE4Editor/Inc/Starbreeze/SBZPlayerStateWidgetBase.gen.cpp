// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZPlayerStateWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZPlayerStateWidgetBase() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZWidgetBase();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZPlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZPlayerStateWidgetBase::execInitializePlayerState)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_InPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializePlayerState(Z_Param_InPlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerStateWidgetBase::execIsForLocalPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsForLocalPlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZPlayerStateWidgetBase::execIsWidgetForPlayerState)
	{
		P_GET_OBJECT(ASBZPlayerState,Z_Param_NewPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWidgetForPlayerState(Z_Param_NewPlayerState);
		P_NATIVE_END;
	}
	void USBZPlayerStateWidgetBase::StaticRegisterNativesUSBZPlayerStateWidgetBase()
	{
		UClass* Class = USBZPlayerStateWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializePlayerState", &USBZPlayerStateWidgetBase::execInitializePlayerState },
			{ "IsForLocalPlayerState", &USBZPlayerStateWidgetBase::execIsForLocalPlayerState },
			{ "IsWidgetForPlayerState", &USBZPlayerStateWidgetBase::execIsWidgetForPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics
	{
		struct SBZPlayerStateWidgetBase_eventInitializePlayerState_Parms
		{
			ASBZPlayerState* InPlayerState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::NewProp_InPlayerState = { "InPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerStateWidgetBase_eventInitializePlayerState_Parms, InPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::NewProp_InPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerStateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerStateWidgetBase, nullptr, "InitializePlayerState", nullptr, nullptr, sizeof(SBZPlayerStateWidgetBase_eventInitializePlayerState_Parms), Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics
	{
		struct SBZPlayerStateWidgetBase_eventIsForLocalPlayerState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerStateWidgetBase_eventIsForLocalPlayerState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerStateWidgetBase_eventIsForLocalPlayerState_Parms), &Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerStateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerStateWidgetBase, nullptr, "IsForLocalPlayerState", nullptr, nullptr, sizeof(SBZPlayerStateWidgetBase_eventIsForLocalPlayerState_Parms), Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics
	{
		struct SBZPlayerStateWidgetBase_eventIsWidgetForPlayerState_Parms
		{
			ASBZPlayerState* NewPlayerState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::NewProp_NewPlayerState = { "NewPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZPlayerStateWidgetBase_eventIsWidgetForPlayerState_Parms, NewPlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZPlayerStateWidgetBase_eventIsWidgetForPlayerState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZPlayerStateWidgetBase_eventIsWidgetForPlayerState_Parms), &Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::NewProp_NewPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZPlayerStateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZPlayerStateWidgetBase, nullptr, "IsWidgetForPlayerState", nullptr, nullptr, sizeof(SBZPlayerStateWidgetBase_eventIsWidgetForPlayerState_Parms), Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase_NoRegister()
	{
		return USBZPlayerStateWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZPlayerStateWidgetBase_InitializePlayerState, "InitializePlayerState" }, // 1031752435
		{ &Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsForLocalPlayerState, "IsForLocalPlayerState" }, // 2969116873
		{ &Z_Construct_UFunction_USBZPlayerStateWidgetBase_IsWidgetForPlayerState, "IsWidgetForPlayerState" }, // 172380546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZPlayerStateWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZPlayerStateWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZPlayerStateWidgetBase" },
		{ "ModuleRelativePath", "Public/SBZPlayerStateWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZPlayerStateWidgetBase, PlayerState), Z_Construct_UClass_ASBZPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::NewProp_PlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::NewProp_PlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZPlayerStateWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::ClassParams = {
		&USBZPlayerStateWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZPlayerStateWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZPlayerStateWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZPlayerStateWidgetBase, 228256571);
	template<> STARBREEZE_API UClass* StaticClass<USBZPlayerStateWidgetBase>()
	{
		return USBZPlayerStateWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZPlayerStateWidgetBase(Z_Construct_UClass_USBZPlayerStateWidgetBase, &USBZPlayerStateWidgetBase::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZPlayerStateWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZPlayerStateWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
