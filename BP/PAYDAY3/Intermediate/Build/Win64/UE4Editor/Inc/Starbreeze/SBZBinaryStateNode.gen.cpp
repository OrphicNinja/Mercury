// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZBinaryStateNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZBinaryStateNode() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBinaryStateNode_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZBinaryStateNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZOnBinaryStateChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZBinaryStateNode::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZBinaryStateNode::execSetState)
	{
		P_GET_UBOOL(Z_Param_bInState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_bInState);
		P_NATIVE_END;
	}
	void ASBZBinaryStateNode::StaticRegisterNativesASBZBinaryStateNode()
	{
		UClass* Class = ASBZBinaryStateNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetState", &ASBZBinaryStateNode::execGetState },
			{ "SetState", &ASBZBinaryStateNode::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics
	{
		struct SBZBinaryStateNode_eventGetState_Parms
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
	void Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SBZBinaryStateNode_eventGetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateNode_eventGetState_Parms), &Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBinaryStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBinaryStateNode, nullptr, "GetState", nullptr, nullptr, sizeof(SBZBinaryStateNode_eventGetState_Parms), Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBinaryStateNode_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBinaryStateNode_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics
	{
		struct SBZBinaryStateNode_eventSetState_Parms
		{
			bool bInState;
		};
		static void NewProp_bInState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::NewProp_bInState_SetBit(void* Obj)
	{
		((SBZBinaryStateNode_eventSetState_Parms*)Obj)->bInState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::NewProp_bInState = { "bInState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZBinaryStateNode_eventSetState_Parms), &Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::NewProp_bInState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::NewProp_bInState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZBinaryStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZBinaryStateNode, nullptr, "SetState", nullptr, nullptr, sizeof(SBZBinaryStateNode_eventSetState_Parms), Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZBinaryStateNode_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZBinaryStateNode_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZBinaryStateNode_NoRegister()
	{
		return ASBZBinaryStateNode::StaticClass();
	}
	struct Z_Construct_UClass_ASBZBinaryStateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZBinaryStateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZBinaryStateNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZBinaryStateNode_GetState, "GetState" }, // 1046965850
		{ &Z_Construct_UFunction_ASBZBinaryStateNode_SetState, "SetState" }, // 696453438
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBinaryStateNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZBinaryStateNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateNode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_OnStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBinaryStateNode" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010200010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZBinaryStateNode, OnStateChanged), Z_Construct_UDelegateFunction_Starbreeze_SBZOnBinaryStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_OnStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_OnStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_bState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZBinaryStateNode" },
		{ "ModuleRelativePath", "Public/SBZBinaryStateNode.h" },
	};
#endif
	void Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((ASBZBinaryStateNode*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZBinaryStateNode), &Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_bState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZBinaryStateNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_OnStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZBinaryStateNode_Statics::NewProp_bState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZBinaryStateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZBinaryStateNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZBinaryStateNode_Statics::ClassParams = {
		&ASBZBinaryStateNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZBinaryStateNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBinaryStateNode_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZBinaryStateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZBinaryStateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZBinaryStateNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZBinaryStateNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZBinaryStateNode, 1125299013);
	template<> STARBREEZE_API UClass* StaticClass<ASBZBinaryStateNode>()
	{
		return ASBZBinaryStateNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZBinaryStateNode(Z_Construct_UClass_ASBZBinaryStateNode, &ASBZBinaryStateNode::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZBinaryStateNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZBinaryStateNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
