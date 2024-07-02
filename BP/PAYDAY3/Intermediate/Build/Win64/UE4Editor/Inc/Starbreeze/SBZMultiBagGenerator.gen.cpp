// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMultiBagGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMultiBagGenerator() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMultiBagGenerator_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZMultiBagGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	STARBREEZE_API UFunction* Z_Construct_UDelegateFunction_Starbreeze_SBZMultiBagGeneratorDelegate__DelegateSignature();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZOutlineComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBagType_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZBagHandle();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBreakableInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZMultiBagGenerator::execOnServerCompleteInteraction)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Comp);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerCompleteInteraction(Z_Param_Comp,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBZMultiBagGenerator::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	void ASBZMultiBagGenerator::StaticRegisterNativesASBZMultiBagGenerator()
	{
		UClass* Class = ASBZMultiBagGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnServerCompleteInteraction", &ASBZMultiBagGenerator::execOnServerCompleteInteraction },
			{ "SetEnabled", &ASBZMultiBagGenerator::execSetEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics
	{
		struct SBZMultiBagGenerator_eventOnServerCompleteInteraction_Parms
		{
			USBZBaseInteractableComponent* Comp;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Comp;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMultiBagGenerator_eventOnServerCompleteInteraction_Parms, Comp), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Comp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMultiBagGenerator_eventOnServerCompleteInteraction_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZMultiBagGenerator_eventOnServerCompleteInteraction_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMultiBagGenerator_eventOnServerCompleteInteraction_Parms), &Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Comp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMultiBagGenerator, nullptr, "OnServerCompleteInteraction", nullptr, nullptr, sizeof(SBZMultiBagGenerator_eventOnServerCompleteInteraction_Parms), Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics
	{
		struct SBZMultiBagGenerator_eventSetEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((SBZMultiBagGenerator_eventSetEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZMultiBagGenerator_eventSetEnabled_Parms), &Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZMultiBagGenerator, nullptr, "SetEnabled", nullptr, nullptr, sizeof(SBZMultiBagGenerator_eventSetEnabled_Parms), Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZMultiBagGenerator_NoRegister()
	{
		return ASBZMultiBagGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ASBZMultiBagGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnServerBagPickedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnServerBagPickedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BagType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfBags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfBags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnLastBag_MetaData[];
#endif
		static void NewProp_bDestroyOnLastBag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnLastBag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BagHandleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BagHandleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BagHandleArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZMultiBagGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZMultiBagGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZMultiBagGenerator_OnServerCompleteInteraction, "OnServerCompleteInteraction" }, // 1765890076
		{ &Z_Construct_UFunction_ASBZMultiBagGenerator_SetEnabled, "SetEnabled" }, // 75551724
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZMultiBagGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OnServerBagPickedUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OnServerBagPickedUp = { "OnServerBagPickedUp", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiBagGenerator, OnServerBagPickedUp), Z_Construct_UDelegateFunction_Starbreeze_SBZMultiBagGeneratorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OnServerBagPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OnServerBagPickedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_InteractableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiBagGenerator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_InteractableComponent = { "InteractableComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiBagGenerator, InteractableComponent), Z_Construct_UClass_USBZInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_InteractableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_InteractableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OutlineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiBagGenerator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OutlineComponent = { "OutlineComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiBagGenerator, OutlineComponent), Z_Construct_UClass_USBZOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OutlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OutlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagType = { "BagType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiBagGenerator, BagType), Z_Construct_UClass_USBZBagType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_NumberOfBags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_NumberOfBags = { "NumberOfBags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiBagGenerator, NumberOfBags), METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_NumberOfBags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_NumberOfBags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_bDestroyOnLastBag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	void Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_bDestroyOnLastBag_SetBit(void* Obj)
	{
		((ASBZMultiBagGenerator*)Obj)->bDestroyOnLastBag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_bDestroyOnLastBag = { "bDestroyOnLastBag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASBZMultiBagGenerator), &Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_bDestroyOnLastBag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_bDestroyOnLastBag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_bDestroyOnLastBag_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagHandleArray_Inner = { "BagHandleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZBagHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagHandleArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMultiBagGenerator" },
		{ "ModuleRelativePath", "Public/SBZMultiBagGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagHandleArray = { "BagHandleArray", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZMultiBagGenerator, BagHandleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagHandleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagHandleArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZMultiBagGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OnServerBagPickedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_InteractableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_OutlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_NumberOfBags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_bDestroyOnLastBag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagHandleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZMultiBagGenerator_Statics::NewProp_BagHandleArray,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZBreakableInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZMultiBagGenerator, ISBZBreakableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZMultiBagGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZMultiBagGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZMultiBagGenerator_Statics::ClassParams = {
		&ASBZMultiBagGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZMultiBagGenerator_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZMultiBagGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZMultiBagGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZMultiBagGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZMultiBagGenerator, 4256363530);
	template<> STARBREEZE_API UClass* StaticClass<ASBZMultiBagGenerator>()
	{
		return ASBZMultiBagGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZMultiBagGenerator(Z_Construct_UClass_ASBZMultiBagGenerator, &ASBZMultiBagGenerator::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZMultiBagGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZMultiBagGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
