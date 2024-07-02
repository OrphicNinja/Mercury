// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHackingMinigameActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHackingMinigameActor() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHackingMinigameActor();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMiniGameActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZHackingState();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackingComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZToolHackableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHackingMinigameActor::execOnHackingStateChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_InOwner);
		P_GET_ENUM(ESBZHackingState,Z_Param_NewState);
		P_GET_UBOOL(Z_Param_bDoCosmetics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHackingStateChanged(Z_Param_InOwner,ESBZHackingState(Z_Param_NewState),Z_Param_bDoCosmetics);
		P_NATIVE_END;
	}
	static FName NAME_ASBZHackingMinigameActor_BP_OnEnabledStateChanged = FName(TEXT("BP_OnEnabledStateChanged"));
	void ASBZHackingMinigameActor::BP_OnEnabledStateChanged(bool bEnabled, bool bDoCosmetics)
	{
		SBZHackingMinigameActor_eventBP_OnEnabledStateChanged_Parms Parms;
		Parms.bEnabled=bEnabled ? true : false;
		Parms.bDoCosmetics=bDoCosmetics ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASBZHackingMinigameActor_BP_OnEnabledStateChanged),&Parms);
	}
	void ASBZHackingMinigameActor::StaticRegisterNativesASBZHackingMinigameActor()
	{
		UClass* Class = ASBZHackingMinigameActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHackingStateChanged", &ASBZHackingMinigameActor::execOnHackingStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SBZHackingMinigameActor_eventBP_OnEnabledStateChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackingMinigameActor_eventBP_OnEnabledStateChanged_Parms), &Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZHackingMinigameActor_eventBP_OnEnabledStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackingMinigameActor_eventBP_OnEnabledStateChanged_Parms), &Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingMinigameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackingMinigameActor, nullptr, "BP_OnEnabledStateChanged", nullptr, nullptr, sizeof(SBZHackingMinigameActor_eventBP_OnEnabledStateChanged_Parms), Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics
	{
		struct SBZHackingMinigameActor_eventOnHackingStateChanged_Parms
		{
			AActor* InOwner;
			ESBZHackingState NewState;
			bool bDoCosmetics;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_bDoCosmetics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoCosmetics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackingMinigameActor_eventOnHackingStateChanged_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHackingMinigameActor_eventOnHackingStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_ESBZHackingState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_bDoCosmetics_SetBit(void* Obj)
	{
		((SBZHackingMinigameActor_eventOnHackingStateChanged_Parms*)Obj)->bDoCosmetics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_bDoCosmetics = { "bDoCosmetics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHackingMinigameActor_eventOnHackingStateChanged_Parms), &Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_bDoCosmetics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_InOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::NewProp_bDoCosmetics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHackingMinigameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHackingMinigameActor, nullptr, "OnHackingStateChanged", nullptr, nullptr, sizeof(SBZHackingMinigameActor_eventOnHackingStateChanged_Parms), Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHackingMinigameActor_NoRegister()
	{
		return ASBZHackingMinigameActor::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHackingMinigameActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HackableInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HackableInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MarkerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHackingMinigameActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBZMiniGameActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHackingMinigameActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHackingMinigameActor_BP_OnEnabledStateChanged, "BP_OnEnabledStateChanged" }, // 4256385210
		{ &Z_Construct_UFunction_ASBZHackingMinigameActor_OnHackingStateChanged, "OnHackingStateChanged" }, // 1576857698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingMinigameActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHackingMinigameActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingMinigameActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingMinigameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingMinigameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackingComponent = { "HackingComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingMinigameActor, HackingComponent), Z_Construct_UClass_USBZHackingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackableInteractable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingMinigameActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZHackingMinigameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackableInteractable = { "HackableInteractable", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingMinigameActor, HackableInteractable), Z_Construct_UClass_USBZHackableInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackableInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackableInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingMinigameActor" },
		{ "ModuleRelativePath", "Public/SBZHackingMinigameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingMinigameActor, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHackingMinigameActor" },
		{ "ModuleRelativePath", "Public/SBZHackingMinigameActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerId = { "MarkerId", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHackingMinigameActor, MarkerId), METADATA_PARAMS(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHackingMinigameActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_HackableInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHackingMinigameActor_Statics::NewProp_MarkerId,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZHackingMinigameActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZToolHackableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHackingMinigameActor, ISBZToolHackableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHackingMinigameActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHackingMinigameActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHackingMinigameActor_Statics::ClassParams = {
		&ASBZHackingMinigameActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHackingMinigameActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHackingMinigameActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHackingMinigameActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHackingMinigameActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHackingMinigameActor, 1206948452);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHackingMinigameActor>()
	{
		return ASBZHackingMinigameActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHackingMinigameActor(Z_Construct_UClass_ASBZHackingMinigameActor, &ASBZHackingMinigameActor::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHackingMinigameActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHackingMinigameActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
