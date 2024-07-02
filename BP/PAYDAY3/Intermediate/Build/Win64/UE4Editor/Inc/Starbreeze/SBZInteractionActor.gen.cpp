// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZInteractionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZInteractionActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractionActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZInteractionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZActorOnInteraction__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(ASBZInteractionActor::execHandleAckComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAckComplete(Z_Param_InteractableComp,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZInteractionActor::execHandleServerComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_InteractableComp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleServerComplete(Z_Param_InteractableComp,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	void ASBZInteractionActor::StaticRegisterNativesASBZInteractionActor()
	{
		UClass* Class = ASBZInteractionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAckComplete", &ASBZInteractionActor::execHandleAckComplete },
			{ "HandleServerComplete", &ASBZInteractionActor::execHandleServerComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics
	{
		struct SBZInteractionActor_eventHandleAckComplete_Parms
		{
			USBZBaseInteractableComponent* InteractableComp;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractionActor_eventHandleAckComplete_Parms, InteractableComp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_InteractableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_InteractableComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractionActor_eventHandleAckComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZInteractionActor_eventHandleAckComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractionActor_eventHandleAckComplete_Parms), &Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_InteractableComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractionActor, nullptr, "HandleAckComplete", nullptr, nullptr, sizeof(SBZInteractionActor_eventHandleAckComplete_Parms), Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics
	{
		struct SBZInteractionActor_eventHandleServerComplete_Parms
		{
			USBZBaseInteractableComponent* InteractableComp;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bInIsLocallyControlled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyControlled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_InteractableComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_InteractableComp = { "InteractableComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractionActor_eventHandleServerComplete_Parms, InteractableComp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_InteractableComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_InteractableComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZInteractionActor_eventHandleServerComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZInteractionActor_eventHandleServerComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZInteractionActor_eventHandleServerComplete_Parms), &Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_InteractableComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZInteractionActor, nullptr, "HandleServerComplete", nullptr, nullptr, sizeof(SBZInteractionActor_eventHandleServerComplete_Parms), Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZInteractionActor_NoRegister()
	{
		return ASBZInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAckCompleteInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAckCompleteInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerCompleteInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerCompleteInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZInteractionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZInteractionActor_HandleAckComplete, "HandleAckComplete" }, // 3676023145
		{ &Z_Construct_UFunction_ASBZInteractionActor_HandleServerComplete, "HandleServerComplete" }, // 2236498977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZInteractionActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_Interactable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractionActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractionActor, Interactable), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnAckCompleteInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractionActor" },
		{ "ModuleRelativePath", "Public/SBZInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnAckCompleteInteraction = { "OnAckCompleteInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractionActor, OnAckCompleteInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZActorOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnAckCompleteInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnAckCompleteInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnServerCompleteInteraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZInteractionActor" },
		{ "ModuleRelativePath", "Public/SBZInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnServerCompleteInteraction = { "OnServerCompleteInteraction", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZInteractionActor, OnServerCompleteInteraction), Z_Construct_UDelegateFunction_Starbreeze_SBZActorOnInteraction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnServerCompleteInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnServerCompleteInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZInteractionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnAckCompleteInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZInteractionActor_Statics::NewProp_OnServerCompleteInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZInteractionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZInteractionActor_Statics::ClassParams = {
		&ASBZInteractionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZInteractionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractionActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZInteractionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZInteractionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZInteractionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZInteractionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZInteractionActor, 602388048);
	template<> STARBREEZE_API UClass* StaticClass<ASBZInteractionActor>()
	{
		return ASBZInteractionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZInteractionActor(Z_Construct_UClass_ASBZInteractionActor, &ASBZInteractionActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZInteractionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZInteractionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
