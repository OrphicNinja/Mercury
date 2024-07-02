// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZHiddenStaticInteractionCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZHiddenStaticInteractionCollection() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZHiddenStaticInteractionCollection();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZInteractorComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZItemContainer_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnStaticInteractionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBZHiddenStaticInteractionCollection::execOnKeyItemInteractionComplete)
	{
		P_GET_OBJECT(USBZBaseInteractableComponent,Z_Param_Interactable);
		P_GET_OBJECT(USBZInteractorComponent,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_bInIsLocallyControlled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKeyItemInteractionComplete(Z_Param_Interactable,Z_Param_Interactor,Z_Param_bInIsLocallyControlled);
		P_NATIVE_END;
	}
	void ASBZHiddenStaticInteractionCollection::StaticRegisterNativesASBZHiddenStaticInteractionCollection()
	{
		UClass* Class = ASBZHiddenStaticInteractionCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKeyItemInteractionComplete", &ASBZHiddenStaticInteractionCollection::execOnKeyItemInteractionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics
	{
		struct SBZHiddenStaticInteractionCollection_eventOnKeyItemInteractionComplete_Parms
		{
			USBZBaseInteractableComponent* Interactable;
			USBZInteractorComponent* Interactor;
			bool bInIsLocallyControlled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactable;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHiddenStaticInteractionCollection_eventOnKeyItemInteractionComplete_Parms, Interactable), Z_Construct_UClass_USBZBaseInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZHiddenStaticInteractionCollection_eventOnKeyItemInteractionComplete_Parms, Interactor), Z_Construct_UClass_USBZInteractorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit(void* Obj)
	{
		((SBZHiddenStaticInteractionCollection_eventOnKeyItemInteractionComplete_Parms*)Obj)->bInIsLocallyControlled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_bInIsLocallyControlled = { "bInIsLocallyControlled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZHiddenStaticInteractionCollection_eventOnKeyItemInteractionComplete_Parms), &Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_bInIsLocallyControlled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::NewProp_bInIsLocallyControlled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBZHiddenStaticInteractionCollection, nullptr, "OnKeyItemInteractionComplete", nullptr, nullptr, sizeof(SBZHiddenStaticInteractionCollection_eventOnKeyItemInteractionComplete_Parms), Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_NoRegister()
	{
		return ASBZHiddenStaticInteractionCollection::StaticClass();
	}
	struct Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfContainers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocationArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocationArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLocationArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDirectionAndLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceDirectionAndLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerYawRotationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContainerYawRotationInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemContainerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemContainerClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemContainers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemContainers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemContainers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerAfterKeyItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContainerAfterKeyItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBZHiddenStaticInteractionCollection_OnKeyItemInteractionComplete, "OnKeyItemInteractionComplete" }, // 308806453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZHiddenStaticInteractionCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_NumberOfContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_NumberOfContainers = { "NumberOfContainers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, NumberOfContainers), METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_NumberOfContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_NumberOfContainers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_SpawnLocationArray_Inner = { "SpawnLocationArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_SpawnLocationArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_SpawnLocationArray = { "SpawnLocationArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, SpawnLocationArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_SpawnLocationArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_SpawnLocationArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_TraceDirectionAndLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_TraceDirectionAndLength = { "TraceDirectionAndLength", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, TraceDirectionAndLength), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_TraceDirectionAndLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_TraceDirectionAndLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerYawRotationInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerYawRotationInterval = { "ContainerYawRotationInterval", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ContainerYawRotationInterval), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerYawRotationInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerYawRotationInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, Seed), METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainerClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainerClass = { "ItemContainerClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ItemContainerClass), Z_Construct_UClass_ASBZItemContainer_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainerClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainers_Inner = { "ItemContainers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASBZItemContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainers = { "ItemContainers", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ItemContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerAfterKeyItemIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZHiddenStaticInteractionCollection" },
		{ "ModuleRelativePath", "Public/SBZHiddenStaticInteractionCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerAfterKeyItemIndex = { "ContainerAfterKeyItemIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBZHiddenStaticInteractionCollection, ContainerAfterKeyItemIndex), METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerAfterKeyItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerAfterKeyItemIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_NumberOfContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_SpawnLocationArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_SpawnLocationArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_TraceDirectionAndLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerYawRotationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ItemContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::NewProp_ContainerAfterKeyItemIndex,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZSpawnStaticInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ASBZHiddenStaticInteractionCollection, ISBZSpawnStaticInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBZHiddenStaticInteractionCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::ClassParams = {
		&ASBZHiddenStaticInteractionCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBZHiddenStaticInteractionCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBZHiddenStaticInteractionCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBZHiddenStaticInteractionCollection, 309481508);
	template<> STARBREEZE_API UClass* StaticClass<ASBZHiddenStaticInteractionCollection>()
	{
		return ASBZHiddenStaticInteractionCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBZHiddenStaticInteractionCollection(Z_Construct_UClass_ASBZHiddenStaticInteractionCollection, &ASBZHiddenStaticInteractionCollection::StaticClass, TEXT("/Script/Starbreeze"), TEXT("ASBZHiddenStaticInteractionCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBZHiddenStaticInteractionCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
