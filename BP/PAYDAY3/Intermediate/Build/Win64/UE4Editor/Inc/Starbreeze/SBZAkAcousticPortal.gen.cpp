// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZAkAcousticPortal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZAkAcousticPortal() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZAkAcousticPortal();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZGate_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZAkAcousticPortal::execOnActivateTick)
	{
		P_GET_UBOOL(Z_Param_bTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActivateTick(Z_Param_bTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZAkAcousticPortal::execOnDebugLogging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDebugLogging();
		P_NATIVE_END;
	}
	void ASBZAkAcousticPortal::StaticRegisterNativesASBZAkAcousticPortal()
	{
		UClass* Class = ASBZAkAcousticPortal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActivateTick", &ASBZAkAcousticPortal::execOnActivateTick },
			{ "OnDebugLogging", &ASBZAkAcousticPortal::execOnDebugLogging },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics
	{
		struct SBZAkAcousticPortal_eventOnActivateTick_Parms
		{
			bool bTick;
		};
		static void NewProp_bTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::NewProp_bTick_SetBit(void* Obj)
	{
		((SBZAkAcousticPortal_eventOnActivateTick_Parms*)Obj)->bTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::NewProp_bTick = { "bTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZAkAcousticPortal_eventOnActivateTick_Parms), &Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::NewProp_bTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::NewProp_bTick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAkAcousticPortal, nullptr, "OnActivateTick", nullptr, nullptr, sizeof(SBZAkAcousticPortal_eventOnActivateTick_Parms), Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZAkAcousticPortal, nullptr, "OnDebugLogging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZAkAcousticPortal_NoRegister()
	{
		return ASBZAkAcousticPortal::StaticClass();
	}
	struct Z_Construct_UClass_ASBZAkAcousticPortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedGate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedGate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugScreenTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugScreenTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateOpenDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StateOpenDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateCloseDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StateCloseDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStateChange_MetaData[];
#endif
		static void NewProp_bAllowStateChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStateChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZAkAcousticPortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAkAcousticPortal,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZAkAcousticPortal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZAkAcousticPortal_OnActivateTick, "OnActivateTick" }, // 1819360998
		{ &Z_Construct_UFunction_ASBZAkAcousticPortal_OnDebugLogging, "OnDebugLogging" }, // 3991517314
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAkAcousticPortal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SBZAkAcousticPortal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_AffectedActors_Inner = { "AffectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_AffectedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAkAcousticPortal" },
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_AffectedActors = { "AffectedActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAkAcousticPortal, AffectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_AffectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_AffectedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_ConnectedGate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAkAcousticPortal" },
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_ConnectedGate = { "ConnectedGate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAkAcousticPortal, ConnectedGate), Z_Construct_UClass_ASBZGate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_ConnectedGate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_ConnectedGate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_DebugScreenTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAkAcousticPortal" },
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_DebugScreenTimer = { "DebugScreenTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAkAcousticPortal, DebugScreenTimer), METADATA_PARAMS(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_DebugScreenTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_DebugScreenTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateOpenDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAkAcousticPortal" },
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateOpenDelay = { "StateOpenDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAkAcousticPortal, StateOpenDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateOpenDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateOpenDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateCloseDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAkAcousticPortal" },
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateCloseDelay = { "StateCloseDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZAkAcousticPortal, StateCloseDelay), METADATA_PARAMS(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateCloseDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateCloseDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_bAllowStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZAkAcousticPortal" },
		{ "ModuleRelativePath", "Public/SBZAkAcousticPortal.h" },
	};
#endif
	void Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_bAllowStateChange_SetBit(void* Obj)
	{
		((ASBZAkAcousticPortal*)Obj)->bAllowStateChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_bAllowStateChange = { "bAllowStateChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZAkAcousticPortal), &Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_bAllowStateChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_bAllowStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_bAllowStateChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZAkAcousticPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_AffectedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_AffectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_ConnectedGate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_DebugScreenTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateOpenDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_StateCloseDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZAkAcousticPortal_Statics::NewProp_bAllowStateChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZAkAcousticPortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZAkAcousticPortal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZAkAcousticPortal_Statics::ClassParams = {
		&ASBZAkAcousticPortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZAkAcousticPortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZAkAcousticPortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZAkAcousticPortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZAkAcousticPortal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZAkAcousticPortal, 977918909);
	template<> STARBREEZE_API UClass* StaticClass<ASBZAkAcousticPortal>()
	{
		return ASBZAkAcousticPortal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZAkAcousticPortal(Z_Construct_UClass_ASBZAkAcousticPortal, &ASBZAkAcousticPortal::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZAkAcousticPortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZAkAcousticPortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
