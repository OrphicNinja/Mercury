// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSpawnStaticInteractionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSpawnStaticInteractionInterface() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnStaticInteractionInterface_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSpawnStaticInteractionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(ISBZSpawnStaticInteractionInterface::execOnActorSpawned)
	{
		P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
		P_GET_OBJECT(USceneComponent,Z_Param_AttachParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorSpawned_Implementation(Z_Param_SpawnedActor,Z_Param_AttachParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISBZSpawnStaticInteractionInterface::execPopulateSpawnInformationMap)
	{
		P_GET_TMAP_REF(USceneComponent*,FTransform,Z_Param_Out_InOutSpawnDataMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateSpawnInformationMap_Implementation(Z_Param_Out_InOutSpawnDataMap);
		P_NATIVE_END;
	}
	void ISBZSpawnStaticInteractionInterface::OnActorSpawned(AActor* SpawnedActor, USceneComponent* AttachParent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnActorSpawned instead.");
	}
	void ISBZSpawnStaticInteractionInterface::PopulateSpawnInformationMap(TMap<USceneComponent*,FTransform>& InOutSpawnDataMap)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PopulateSpawnInformationMap instead.");
	}
	void USBZSpawnStaticInteractionInterface::StaticRegisterNativesUSBZSpawnStaticInteractionInterface()
	{
		UClass* Class = USBZSpawnStaticInteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorSpawned", &ISBZSpawnStaticInteractionInterface::execOnActorSpawned },
			{ "PopulateSpawnInformationMap", &ISBZSpawnStaticInteractionInterface::execPopulateSpawnInformationMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnStaticInteractionInterface_eventOnActorSpawned_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::NewProp_AttachParent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::NewProp_AttachParent = { "AttachParent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnStaticInteractionInterface_eventOnActorSpawned_Parms, AttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::NewProp_AttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::NewProp_AttachParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::NewProp_SpawnedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::NewProp_AttachParent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnStaticInteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnStaticInteractionInterface, nullptr, "OnActorSpawned", nullptr, nullptr, sizeof(SBZSpawnStaticInteractionInterface_eventOnActorSpawned_Parms), Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOutSpawnDataMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOutSpawnDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InOutSpawnDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::NewProp_InOutSpawnDataMap_ValueProp = { "InOutSpawnDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::NewProp_InOutSpawnDataMap_Key_KeyProp = { "InOutSpawnDataMap_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::NewProp_InOutSpawnDataMap = { "InOutSpawnDataMap", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSpawnStaticInteractionInterface_eventPopulateSpawnInformationMap_Parms, InOutSpawnDataMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::NewProp_InOutSpawnDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::NewProp_InOutSpawnDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::NewProp_InOutSpawnDataMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSpawnStaticInteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSpawnStaticInteractionInterface, nullptr, "PopulateSpawnInformationMap", nullptr, nullptr, sizeof(SBZSpawnStaticInteractionInterface_eventPopulateSpawnInformationMap_Parms), Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSpawnStaticInteractionInterface_NoRegister()
	{
		return USBZSpawnStaticInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_OnActorSpawned, "OnActorSpawned" }, // 1582498589
		{ &Z_Construct_UFunction_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap, "PopulateSpawnInformationMap" }, // 1032668102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSpawnStaticInteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISBZSpawnStaticInteractionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::ClassParams = {
		&USBZSpawnStaticInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSpawnStaticInteractionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSpawnStaticInteractionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSpawnStaticInteractionInterface, 2110801220);
	template<> STARBREEZE_API UClass* StaticClass<USBZSpawnStaticInteractionInterface>()
	{
		return USBZSpawnStaticInteractionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSpawnStaticInteractionInterface(Z_Construct_UClass_USBZSpawnStaticInteractionInterface, &USBZSpawnStaticInteractionInterface::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSpawnStaticInteractionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSpawnStaticInteractionInterface);
	static FName NAME_USBZSpawnStaticInteractionInterface_OnActorSpawned = FName(TEXT("OnActorSpawned"));
	void ISBZSpawnStaticInteractionInterface::Execute_OnActorSpawned(UObject* O, AActor* SpawnedActor, USceneComponent* AttachParent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZSpawnStaticInteractionInterface::StaticClass()));
		SBZSpawnStaticInteractionInterface_eventOnActorSpawned_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZSpawnStaticInteractionInterface_OnActorSpawned);
		if (Func)
		{
			Parms.SpawnedActor=SpawnedActor;
			Parms.AttachParent=AttachParent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISBZSpawnStaticInteractionInterface*)(O->GetNativeInterfaceAddress(USBZSpawnStaticInteractionInterface::StaticClass())))
		{
			I->OnActorSpawned_Implementation(SpawnedActor,AttachParent);
		}
	}
	static FName NAME_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap = FName(TEXT("PopulateSpawnInformationMap"));
	void ISBZSpawnStaticInteractionInterface::Execute_PopulateSpawnInformationMap(UObject* O, TMap<USceneComponent*,FTransform>& InOutSpawnDataMap)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USBZSpawnStaticInteractionInterface::StaticClass()));
		SBZSpawnStaticInteractionInterface_eventPopulateSpawnInformationMap_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USBZSpawnStaticInteractionInterface_PopulateSpawnInformationMap);
		if (Func)
		{
			Parms.InOutSpawnDataMap=InOutSpawnDataMap;
			O->ProcessEvent(Func, &Parms);
			InOutSpawnDataMap=Parms.InOutSpawnDataMap;
		}
		else if (auto I = (ISBZSpawnStaticInteractionInterface*)(O->GetNativeInterfaceAddress(USBZSpawnStaticInteractionInterface::StaticClass())))
		{
			I->PopulateSpawnInformationMap_Implementation(InOutSpawnDataMap);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
