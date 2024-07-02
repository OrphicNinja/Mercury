// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZRagdollSyncManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZRagdollSyncManager() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRagdollSyncManager_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZRagdollSyncManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRagdollSyncData();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_EPD3HeistState();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZRagdollInfo();
// End Cross Module References
	DEFINE_FUNCTION(USBZRagdollSyncManager::execMulticast_RagdollSyncData)
	{
		P_GET_TARRAY(FSBZRagdollSyncData,Z_Param_InRagdollSyncData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RagdollSyncData_Implementation(Z_Param_InRagdollSyncData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZRagdollSyncManager::execOnHeistStateChanged)
	{
		P_GET_ENUM(EPD3HeistState,Z_Param_OldState);
		P_GET_ENUM(EPD3HeistState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHeistStateChanged(EPD3HeistState(Z_Param_OldState),EPD3HeistState(Z_Param_NewState));
		P_NATIVE_END;
	}
	static FName NAME_USBZRagdollSyncManager_Multicast_RagdollSyncData = FName(TEXT("Multicast_RagdollSyncData"));
	void USBZRagdollSyncManager::Multicast_RagdollSyncData(TArray<FSBZRagdollSyncData> const& InRagdollSyncData)
	{
		SBZRagdollSyncManager_eventMulticast_RagdollSyncData_Parms Parms;
		Parms.InRagdollSyncData=InRagdollSyncData;
		ProcessEvent(FindFunctionChecked(NAME_USBZRagdollSyncManager_Multicast_RagdollSyncData),&Parms);
	}
	void USBZRagdollSyncManager::StaticRegisterNativesUSBZRagdollSyncManager()
	{
		UClass* Class = USBZRagdollSyncManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_RagdollSyncData", &USBZRagdollSyncManager::execMulticast_RagdollSyncData },
			{ "OnHeistStateChanged", &USBZRagdollSyncManager::execOnHeistStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRagdollSyncData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRagdollSyncData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InRagdollSyncData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::NewProp_InRagdollSyncData_Inner = { "InRagdollSyncData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRagdollSyncData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::NewProp_InRagdollSyncData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::NewProp_InRagdollSyncData = { "InRagdollSyncData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRagdollSyncManager_eventMulticast_RagdollSyncData_Parms, InRagdollSyncData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::NewProp_InRagdollSyncData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::NewProp_InRagdollSyncData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::NewProp_InRagdollSyncData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::NewProp_InRagdollSyncData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRagdollSyncManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRagdollSyncManager, nullptr, "Multicast_RagdollSyncData", nullptr, nullptr, sizeof(SBZRagdollSyncManager_eventMulticast_RagdollSyncData_Parms), Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics
	{
		struct SBZRagdollSyncManager_eventOnHeistStateChanged_Parms
		{
			EPD3HeistState OldState;
			EPD3HeistState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OldState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OldState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_OldState = { "OldState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRagdollSyncManager_eventOnHeistStateChanged_Parms, OldState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZRagdollSyncManager_eventOnHeistStateChanged_Parms, NewState), Z_Construct_UEnum_Starbreeze_EPD3HeistState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_OldState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_OldState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZRagdollSyncManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZRagdollSyncManager, nullptr, "OnHeistStateChanged", nullptr, nullptr, sizeof(SBZRagdollSyncManager_eventOnHeistStateChanged_Parms), Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZRagdollSyncManager_NoRegister()
	{
		return USBZRagdollSyncManager::StaticClass();
	}
	struct Z_Construct_UClass_USBZRagdollSyncManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ragdolls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ragdolls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ragdolls;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZRagdollSyncManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZRagdollSyncManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZRagdollSyncManager_Multicast_RagdollSyncData, "Multicast_RagdollSyncData" }, // 3009697377
		{ &Z_Construct_UFunction_USBZRagdollSyncManager_OnHeistStateChanged, "OnHeistStateChanged" }, // 2377626165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRagdollSyncManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZRagdollSyncManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZRagdollSyncManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZRagdollSyncManager_Statics::NewProp_Ragdolls_Inner = { "Ragdolls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSBZRagdollInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZRagdollSyncManager_Statics::NewProp_Ragdolls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZRagdollSyncManager" },
		{ "ModuleRelativePath", "Public/SBZRagdollSyncManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USBZRagdollSyncManager_Statics::NewProp_Ragdolls = { "Ragdolls", nullptr, (EPropertyFlags)0x0040000000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZRagdollSyncManager, Ragdolls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USBZRagdollSyncManager_Statics::NewProp_Ragdolls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRagdollSyncManager_Statics::NewProp_Ragdolls_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZRagdollSyncManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRagdollSyncManager_Statics::NewProp_Ragdolls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZRagdollSyncManager_Statics::NewProp_Ragdolls,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZRagdollSyncManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZRagdollSyncManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZRagdollSyncManager_Statics::ClassParams = {
		&USBZRagdollSyncManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZRagdollSyncManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZRagdollSyncManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZRagdollSyncManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZRagdollSyncManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZRagdollSyncManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZRagdollSyncManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZRagdollSyncManager, 154691982);
	template<> STARBREEZE_API UClass* StaticClass<USBZRagdollSyncManager>()
	{
		return USBZRagdollSyncManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZRagdollSyncManager(Z_Construct_UClass_USBZRagdollSyncManager, &USBZRagdollSyncManager::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZRagdollSyncManager"), false, nullptr, nullptr, nullptr);

	void USBZRagdollSyncManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Ragdolls(TEXT("Ragdolls"));

		const bool bIsValid = true
			&& Name_Ragdolls == ClassReps[(int32)ENetFields_Private::Ragdolls].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZRagdollSyncManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZRagdollSyncManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
