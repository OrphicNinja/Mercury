// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZMarkerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZMarkerManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMarkerDataAsset_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMarkerReplication();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZMarkerRuntime();
// End Cross Module References
	DEFINE_FUNCTION(USBZMarkerManager::execMulticast_AddMarker)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_ID);
		P_GET_OBJECT(USBZMarkerDataAsset,Z_Param_MarkerAsset);
		P_GET_STRUCT(FVector,Z_Param_Translation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddMarker_Implementation(Z_Param_ID,Z_Param_MarkerAsset,Z_Param_Translation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMarkerManager::execMulticast_RemoveMarker)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveMarker_Implementation(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZMarkerManager::execOnRep_ReplicatedMarkers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedMarkers();
		P_NATIVE_END;
	}
	static FName NAME_USBZMarkerManager_Multicast_AddMarker = FName(TEXT("Multicast_AddMarker"));
	void USBZMarkerManager::Multicast_AddMarker(uint32 ID, const USBZMarkerDataAsset* MarkerAsset, FVector const& Translation)
	{
		SBZMarkerManager_eventMulticast_AddMarker_Parms Parms;
		Parms.ID=ID;
		Parms.MarkerAsset=MarkerAsset;
		Parms.Translation=Translation;
		ProcessEvent(FindFunctionChecked(NAME_USBZMarkerManager_Multicast_AddMarker),&Parms);
	}
	static FName NAME_USBZMarkerManager_Multicast_RemoveMarker = FName(TEXT("Multicast_RemoveMarker"));
	void USBZMarkerManager::Multicast_RemoveMarker(uint32 ID)
	{
		SBZMarkerManager_eventMulticast_RemoveMarker_Parms Parms;
		Parms.ID=ID;
		ProcessEvent(FindFunctionChecked(NAME_USBZMarkerManager_Multicast_RemoveMarker),&Parms);
	}
	void USBZMarkerManager::StaticRegisterNativesUSBZMarkerManager()
	{
		UClass* Class = USBZMarkerManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_AddMarker", &USBZMarkerManager::execMulticast_AddMarker },
			{ "Multicast_RemoveMarker", &USBZMarkerManager::execMulticast_RemoveMarker },
			{ "OnRep_ReplicatedMarkers", &USBZMarkerManager::execOnRep_ReplicatedMarkers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerManager_eventMulticast_AddMarker_Parms, ID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_MarkerAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerManager_eventMulticast_AddMarker_Parms, MarkerAsset), Z_Construct_UClass_USBZMarkerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_MarkerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_MarkerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_Translation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerManager_eventMulticast_AddMarker_Parms, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_Translation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_MarkerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::NewProp_Translation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerManager, nullptr, "Multicast_AddMarker", nullptr, nullptr, sizeof(SBZMarkerManager_eventMulticast_AddMarker_Parms), Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics
	{
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZMarkerManager_eventMulticast_RemoveMarker_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerManager, nullptr, "Multicast_RemoveMarker", nullptr, nullptr, sizeof(SBZMarkerManager_eventMulticast_RemoveMarker_Parms), Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZMarkerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZMarkerManager, nullptr, "OnRep_ReplicatedMarkers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZMarkerManager_NoRegister()
	{
		return USBZMarkerManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZMarkerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedMarkers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicatedMarkers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeMarkers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RuntimeMarkers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZMarkerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZMarkerManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZMarkerManager_Multicast_AddMarker, "Multicast_AddMarker" }, // 915304859
		{ &Z_Construct_UFunction_USBZMarkerManager_Multicast_RemoveMarker, "Multicast_RemoveMarker" }, // 1353011931
		{ &Z_Construct_UFunction_USBZMarkerManager_OnRep_ReplicatedMarkers, "OnRep_ReplicatedMarkers" }, // 2470961319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZMarkerManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZMarkerManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_ReplicatedMarkers_Inner = { "ReplicatedMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMarkerReplication, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_ReplicatedMarkers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerManager" },
		{ "ModuleRelativePath", "Public/SBZMarkerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_ReplicatedMarkers = { "ReplicatedMarkers", "OnRep_ReplicatedMarkers", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerManager, ReplicatedMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_ReplicatedMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_ReplicatedMarkers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_RuntimeMarkers_Inner = { "RuntimeMarkers", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZMarkerRuntime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_RuntimeMarkers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZMarkerManager" },
		{ "ModuleRelativePath", "Public/SBZMarkerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_RuntimeMarkers = { "RuntimeMarkers", nullptr, (EPropertyFlags)0x0040008000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZMarkerManager, RuntimeMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_RuntimeMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_RuntimeMarkers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZMarkerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_ReplicatedMarkers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_ReplicatedMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_RuntimeMarkers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZMarkerManager_Statics::NewProp_RuntimeMarkers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZMarkerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZMarkerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZMarkerManager_Statics::ClassParams = {
		&USBZMarkerManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZMarkerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZMarkerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZMarkerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZMarkerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZMarkerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZMarkerManager, 3950730910);
	template<> STARBREEZE_API UClass* StaticClass<USBZMarkerManager>()
	{
		return USBZMarkerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZMarkerManager(Z_Construct_UClass_USBZMarkerManager, &USBZMarkerManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZMarkerManager"), false, nullptr, nullptr, nullptr);

	void USBZMarkerManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedMarkers(TEXT("ReplicatedMarkers"));

		const bool bIsValid = true
			&& Name_ReplicatedMarkers == ClassReps[(int32)ENetFields_Private::ReplicatedMarkers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZMarkerManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZMarkerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
