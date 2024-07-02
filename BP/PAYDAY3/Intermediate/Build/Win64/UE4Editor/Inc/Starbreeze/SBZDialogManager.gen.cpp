// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZDialogManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZDialogManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZDialogDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_ASBZNarrator_NoRegister();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZActiveDialogData();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZGameplaySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USBZDialogManager::execMulticast_PlayDialog)
	{
		P_GET_OBJECT(USBZDialogDataAsset,Z_Param_DialogDataAsset);
		P_GET_TARRAY(AActor*,Z_Param_Performers);
		P_GET_OBJECT(AActor,Z_Param_DialogInstigator);
		P_GET_UBOOL(Z_Param_bCanBeQueued);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_PlayDialog_Implementation(Z_Param_DialogDataAsset,Z_Param_Performers,Z_Param_DialogInstigator,Z_Param_bCanBeQueued);
		P_NATIVE_END;
	}
	static FName NAME_USBZDialogManager_Multicast_PlayDialog = FName(TEXT("Multicast_PlayDialog"));
	void USBZDialogManager::Multicast_PlayDialog(const USBZDialogDataAsset* DialogDataAsset, TArray<AActor*> const& Performers, AActor* DialogInstigator, bool bCanBeQueued)
	{
		SBZDialogManager_eventMulticast_PlayDialog_Parms Parms;
		Parms.DialogDataAsset=DialogDataAsset;
		Parms.Performers=Performers;
		Parms.DialogInstigator=DialogInstigator;
		Parms.bCanBeQueued=bCanBeQueued ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USBZDialogManager_Multicast_PlayDialog),&Parms);
	}
	void USBZDialogManager::StaticRegisterNativesUSBZDialogManager()
	{
		UClass* Class = USBZDialogManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_PlayDialog", &USBZDialogManager::execMulticast_PlayDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogDataAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Performers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Performers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Performers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogInstigator;
		static void NewProp_bCanBeQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeQueued;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_DialogDataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_DialogDataAsset = { "DialogDataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDialogManager_eventMulticast_PlayDialog_Parms, DialogDataAsset), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_DialogDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_DialogDataAsset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_Performers_Inner = { "Performers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_Performers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_Performers = { "Performers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDialogManager_eventMulticast_PlayDialog_Parms, Performers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_Performers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_Performers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_DialogInstigator = { "DialogInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZDialogManager_eventMulticast_PlayDialog_Parms, DialogInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_bCanBeQueued_SetBit(void* Obj)
	{
		((SBZDialogManager_eventMulticast_PlayDialog_Parms*)Obj)->bCanBeQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_bCanBeQueued = { "bCanBeQueued", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SBZDialogManager_eventMulticast_PlayDialog_Parms), &Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_bCanBeQueued_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_DialogDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_Performers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_Performers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_DialogInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::NewProp_bCanBeQueued,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZDialogManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZDialogManager, nullptr, "Multicast_PlayDialog", nullptr, nullptr, sizeof(SBZDialogManager_eventMulticast_PlayDialog_Parms), Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZDialogManager_NoRegister()
	{
		return USBZDialogManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZDialogManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Narrator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Narrator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveDialogs_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveDialogs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActiveDialogs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedDialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueuedDialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZDialogManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZDialogManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZDialogManager_Multicast_PlayDialog, "Multicast_PlayDialog" }, // 191242676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZDialogManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZDialogManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogManager_Statics::NewProp_Narrator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogManager" },
		{ "ModuleRelativePath", "Public/SBZDialogManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDialogManager_Statics::NewProp_Narrator = { "Narrator", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogManager, Narrator), Z_Construct_UClass_ASBZNarrator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDialogManager_Statics::NewProp_Narrator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogManager_Statics::NewProp_Narrator_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs_ValueProp = { "ActiveDialogs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSBZActiveDialogData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs_Key_KeyProp = { "ActiveDialogs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogManager" },
		{ "ModuleRelativePath", "Public/SBZDialogManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs = { "ActiveDialogs", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogManager, ActiveDialogs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZDialogManager_Statics::NewProp_QueuedDialog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZDialogManager" },
		{ "ModuleRelativePath", "Public/SBZDialogManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBZDialogManager_Statics::NewProp_QueuedDialog = { "QueuedDialog", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZDialogManager, QueuedDialog), Z_Construct_UClass_USBZDialogDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBZDialogManager_Statics::NewProp_QueuedDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogManager_Statics::NewProp_QueuedDialog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZDialogManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogManager_Statics::NewProp_Narrator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogManager_Statics::NewProp_ActiveDialogs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZDialogManager_Statics::NewProp_QueuedDialog,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USBZDialogManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USBZGameplaySystemInterface_NoRegister, (int32)VTABLE_OFFSET(USBZDialogManager, ISBZGameplaySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZDialogManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZDialogManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZDialogManager_Statics::ClassParams = {
		&USBZDialogManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZDialogManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZDialogManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZDialogManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZDialogManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZDialogManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZDialogManager, 3119123566);
	template<> STARBREEZE_API UClass* StaticClass<USBZDialogManager>()
	{
		return USBZDialogManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZDialogManager(Z_Construct_UClass_USBZDialogManager, &USBZDialogManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZDialogManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZDialogManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
