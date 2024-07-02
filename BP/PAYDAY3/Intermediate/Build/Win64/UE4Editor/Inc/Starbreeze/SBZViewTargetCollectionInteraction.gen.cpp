// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZViewTargetCollectionInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZViewTargetCollectionInteraction() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZViewTargetCollectionInteraction_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZViewTargetCollectionInteraction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZViewTargetCollectionInteraction::execOnCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InInteractable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bIsLocallyControlledInteractor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleteInteraction(Z_Param_InInteractable,Z_Param_Interactor,Z_Param_bIsLocallyControlledInteractor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZViewTargetCollectionInteraction::execSetViewTargetCollection)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewTargetCollection(Z_Param_InActor);
		P_NATIVE_END;
	}
	void ASBZViewTargetCollectionInteraction::StaticRegisterNativesASBZViewTargetCollectionInteraction()
	{
		UClass* Class = ASBZViewTargetCollectionInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompleteInteraction", &ASBZViewTargetCollectionInteraction::execOnCompleteInteraction },
			{ "SetViewTargetCollection", &ASBZViewTargetCollectionInteraction::execSetViewTargetCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics
	{
		struct SBZViewTargetCollectionInteraction_eventOnCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* InInteractable;
			USBZInteractorComponent* Interactor;
			bool bIsLocallyControlledInteractor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyControlledInteractor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_InInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInteraction_eventOnCompleteInteraction_Parms, InInteractable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_InInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_InInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInteraction_eventOnCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit(void* Obj)
	{
		((SBZViewTargetCollectionInteraction_eventOnCompleteInteraction_Parms*)Obj)->bIsLocallyControlledInteractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor = { "bIsLocallyControlledInteractor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZViewTargetCollectionInteraction_eventOnCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_InInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::NewProp_bIsLocallyControlledInteractor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZViewTargetCollectionInteraction, nullptr, "OnCompleteInteraction", nullptr, nullptr, sizeof(SBZViewTargetCollectionInteraction_eventOnCompleteInteraction_Parms), Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics
	{
		struct SBZViewTargetCollectionInteraction_eventSetViewTargetCollection_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZViewTargetCollectionInteraction_eventSetViewTargetCollection_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZViewTargetCollectionInteraction, nullptr, "SetViewTargetCollection", nullptr, nullptr, sizeof(SBZViewTargetCollectionInteraction_eventSetViewTargetCollection_Parms), Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZViewTargetCollectionInteraction_NoRegister()
	{
		return ASBZViewTargetCollectionInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTargetCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTargetCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_OnCompleteInteraction, "OnCompleteInteraction" }, // 2253239881
		{ &Z_Construct_UFunction_ASBZViewTargetCollectionInteraction_SetViewTargetCollection, "SetViewTargetCollection" }, // 3210135923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZViewTargetCollectionInteraction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInteraction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_ViewTargetCollection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetCollectionInteraction" },
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_ViewTargetCollection = { "ViewTargetCollection", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZViewTargetCollectionInteraction, ViewTargetCollection), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_ViewTargetCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_ViewTargetCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZViewTargetCollectionInteraction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZViewTargetCollectionInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZViewTargetCollectionInteraction, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_Interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_ViewTargetCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::NewProp_Interactable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZViewTargetCollectionInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::ClassParams = {
		&ASBZViewTargetCollectionInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZViewTargetCollectionInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZViewTargetCollectionInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZViewTargetCollectionInteraction, 1102621169);
	template<> STARBREEZE_API UClass* StaticClass<ASBZViewTargetCollectionInteraction>()
	{
		return ASBZViewTargetCollectionInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZViewTargetCollectionInteraction(Z_Construct_UClass_ASBZViewTargetCollectionInteraction, &ASBZViewTargetCollectionInteraction::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZViewTargetCollectionInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZViewTargetCollectionInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
