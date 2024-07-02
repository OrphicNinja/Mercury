// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSimplePhysicsCorrector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSimplePhysicsCorrector() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSimplePhysicsCorrector_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSimplePhysicsCorrector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UScriptStruct* Z_Construct_UScriptStruct_FSBZSimplePhysicsState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(USBZSimplePhysicsCorrector::execMulticast_ForceTeleport)
	{
		P_GET_STRUCT(FSBZSimplePhysicsState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ForceTeleport_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSimplePhysicsCorrector::execMulticast_InvalidateState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_InvalidateState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSimplePhysicsCorrector::execMulticast_SyncState)
	{
		P_GET_STRUCT(FSBZSimplePhysicsState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SyncState_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBZSimplePhysicsCorrector::execSetVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_Vel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocity(Z_Param_Vel);
		P_NATIVE_END;
	}
	static FName NAME_USBZSimplePhysicsCorrector_Multicast_ForceTeleport = FName(TEXT("Multicast_ForceTeleport"));
	void USBZSimplePhysicsCorrector::Multicast_ForceTeleport(FSBZSimplePhysicsState const& State)
	{
		SBZSimplePhysicsCorrector_eventMulticast_ForceTeleport_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_USBZSimplePhysicsCorrector_Multicast_ForceTeleport),&Parms);
	}
	static FName NAME_USBZSimplePhysicsCorrector_Multicast_InvalidateState = FName(TEXT("Multicast_InvalidateState"));
	void USBZSimplePhysicsCorrector::Multicast_InvalidateState()
	{
		ProcessEvent(FindFunctionChecked(NAME_USBZSimplePhysicsCorrector_Multicast_InvalidateState),NULL);
	}
	static FName NAME_USBZSimplePhysicsCorrector_Multicast_SyncState = FName(TEXT("Multicast_SyncState"));
	void USBZSimplePhysicsCorrector::Multicast_SyncState(FSBZSimplePhysicsState const& State)
	{
		SBZSimplePhysicsCorrector_eventMulticast_SyncState_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_USBZSimplePhysicsCorrector_Multicast_SyncState),&Parms);
	}
	void USBZSimplePhysicsCorrector::StaticRegisterNativesUSBZSimplePhysicsCorrector()
	{
		UClass* Class = USBZSimplePhysicsCorrector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_ForceTeleport", &USBZSimplePhysicsCorrector::execMulticast_ForceTeleport },
			{ "Multicast_InvalidateState", &USBZSimplePhysicsCorrector::execMulticast_InvalidateState },
			{ "Multicast_SyncState", &USBZSimplePhysicsCorrector::execMulticast_SyncState },
			{ "SetVelocity", &USBZSimplePhysicsCorrector::execSetVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSimplePhysicsCorrector_eventMulticast_ForceTeleport_Parms, State), Z_Construct_UScriptStruct_FSBZSimplePhysicsState, METADATA_PARAMS(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSimplePhysicsCorrector, nullptr, "Multicast_ForceTeleport", nullptr, nullptr, sizeof(SBZSimplePhysicsCorrector_eventMulticast_ForceTeleport_Parms), Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSimplePhysicsCorrector, nullptr, "Multicast_InvalidateState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSimplePhysicsCorrector_eventMulticast_SyncState_Parms, State), Z_Construct_UScriptStruct_FSBZSimplePhysicsState, METADATA_PARAMS(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSimplePhysicsCorrector, nullptr, "Multicast_SyncState", nullptr, nullptr, sizeof(SBZSimplePhysicsCorrector_eventMulticast_SyncState_Parms), Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics
	{
		struct SBZSimplePhysicsCorrector_eventSetVelocity_Parms
		{
			FVector Vel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::NewProp_Vel = { "Vel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSimplePhysicsCorrector_eventSetVelocity_Parms, Vel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::NewProp_Vel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSimplePhysicsCorrector, nullptr, "SetVelocity", nullptr, nullptr, sizeof(SBZSimplePhysicsCorrector_eventSetVelocity_Parms), Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSimplePhysicsCorrector_NoRegister()
	{
		return USBZSimplePhysicsCorrector::StaticClass();
	}
	struct Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_ForceTeleport, "Multicast_ForceTeleport" }, // 3098287936
		{ &Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_InvalidateState, "Multicast_InvalidateState" }, // 2863667738
		{ &Z_Construct_UFunction_USBZSimplePhysicsCorrector_Multicast_SyncState, "Multicast_SyncState" }, // 1663028433
		{ &Z_Construct_UFunction_USBZSimplePhysicsCorrector_SetVelocity, "SetVelocity" }, // 2369234479
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SBZSimplePhysicsCorrector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_TeleportDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSimplePhysicsCorrector" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_TeleportDistance = { "TeleportDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSimplePhysicsCorrector, TeleportDistance), METADATA_PARAMS(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_TeleportDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_TeleportDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSimplePhysicsCorrector" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSimplePhysicsCorrector, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_AngularVel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSimplePhysicsCorrector" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_AngularVel = { "AngularVel", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSimplePhysicsCorrector, AngularVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_AngularVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_AngularVel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_LastState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSimplePhysicsCorrector" },
		{ "ModuleRelativePath", "Public/SBZSimplePhysicsCorrector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_LastState = { "LastState", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSimplePhysicsCorrector, LastState), Z_Construct_UScriptStruct_FSBZSimplePhysicsState, METADATA_PARAMS(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_LastState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_LastState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_TeleportDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_AngularVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::NewProp_LastState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSimplePhysicsCorrector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::ClassParams = {
		&USBZSimplePhysicsCorrector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSimplePhysicsCorrector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSimplePhysicsCorrector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSimplePhysicsCorrector, 1447851372);
	template<> STARBREEZE_API UClass* StaticClass<USBZSimplePhysicsCorrector>()
	{
		return USBZSimplePhysicsCorrector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSimplePhysicsCorrector(Z_Construct_UClass_USBZSimplePhysicsCorrector, &USBZSimplePhysicsCorrector::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSimplePhysicsCorrector"), false, nullptr, nullptr, nullptr);

	void USBZSimplePhysicsCorrector::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Velocity(TEXT("Velocity"));
		static const FName Name_AngularVel(TEXT("AngularVel"));
		static const FName Name_LastState(TEXT("LastState"));

		const bool bIsValid = true
			&& Name_Velocity == ClassReps[(int32)ENetFields_Private::Velocity].Property->GetFName()
			&& Name_AngularVel == ClassReps[(int32)ENetFields_Private::AngularVel].Property->GetFName()
			&& Name_LastState == ClassReps[(int32)ENetFields_Private::LastState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBZSimplePhysicsCorrector"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSimplePhysicsCorrector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
