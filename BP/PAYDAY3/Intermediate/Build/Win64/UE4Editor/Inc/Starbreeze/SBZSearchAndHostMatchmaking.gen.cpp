// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Starbreeze/Public/SBZSearchAndHostMatchmaking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBZSearchAndHostMatchmaking() {}
// Cross Module References
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSearchAndHostMatchmaking_NoRegister();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZSearchAndHostMatchmaking();
	STARBREEZE_API UClass* Z_Construct_UClass_USBZMatchmaking();
	UPackage* Z_Construct_UPackage__Script_Starbreeze();
	STARBREEZE_API UEnum* Z_Construct_UEnum_Starbreeze_ESBZOnlineCode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(USBZSearchAndHostMatchmaking::execHandleLostConnectionToHost)
	{
		P_GET_ENUM(ESBZOnlineCode,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLostConnectionToHost(ESBZOnlineCode(Z_Param_Result));
		P_NATIVE_END;
	}
	void USBZSearchAndHostMatchmaking::StaticRegisterNativesUSBZSearchAndHostMatchmaking()
	{
		UClass* Class = USBZSearchAndHostMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleLostConnectionToHost", &USBZSearchAndHostMatchmaking::execHandleLostConnectionToHost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics
	{
		struct SBZSearchAndHostMatchmaking_eventHandleLostConnectionToHost_Parms
		{
			ESBZOnlineCode Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SBZSearchAndHostMatchmaking_eventHandleLostConnectionToHost_Parms, Result), Z_Construct_UEnum_Starbreeze_ESBZOnlineCode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBZSearchAndHostMatchmaking, nullptr, "HandleLostConnectionToHost", nullptr, nullptr, sizeof(SBZSearchAndHostMatchmaking_eventHandleLostConnectionToHost_Parms), Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USBZSearchAndHostMatchmaking_NoRegister()
	{
		return USBZSearchAndHostMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSearchesPerRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSearchesPerRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatSearchDelayMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatSearchDelayMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatSearchDelayMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatSearchDelayMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostConnectionDelayMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LostConnectionDelayMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LostConnectionDelayMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LostConnectionDelayMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerLevelDeltaSmall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerLevelDeltaSmall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerLevelDeltaMedium_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerLevelDeltaMedium;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPartyDropInEnabled_MetaData[];
#endif
		static void NewProp_bPartyDropInEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPartyDropInEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelayTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USBZMatchmaking,
		(UObject* (*)())Z_Construct_UPackage__Script_Starbreeze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBZSearchAndHostMatchmaking_HandleLostConnectionToHost, "HandleLostConnectionToHost" }, // 940638439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SBZSearchAndHostMatchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_MaxSearchesPerRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_MaxSearchesPerRequest = { "MaxSearchesPerRequest", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, MaxSearchesPerRequest), METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_MaxSearchesPerRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_MaxSearchesPerRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMin = { "RepeatSearchDelayMin", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, RepeatSearchDelayMin), METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMax = { "RepeatSearchDelayMax", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, RepeatSearchDelayMax), METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMin = { "LostConnectionDelayMin", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, LostConnectionDelayMin), METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMax = { "LostConnectionDelayMax", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, LostConnectionDelayMax), METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaSmall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaSmall = { "PowerLevelDeltaSmall", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, PowerLevelDeltaSmall), METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaSmall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaMedium_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaMedium = { "PowerLevelDeltaMedium", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, PowerLevelDeltaMedium), METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaMedium_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaMedium_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_bPartyDropInEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	void Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_bPartyDropInEnabled_SetBit(void* Obj)
	{
		((USBZSearchAndHostMatchmaking*)Obj)->bPartyDropInEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_bPartyDropInEnabled = { "bPartyDropInEnabled", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USBZSearchAndHostMatchmaking), &Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_bPartyDropInEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_bPartyDropInEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_bPartyDropInEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_DelayTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SBZSearchAndHostMatchmaking" },
		{ "ModuleRelativePath", "Public/SBZSearchAndHostMatchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_DelayTimer = { "DelayTimer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USBZSearchAndHostMatchmaking, DelayTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_DelayTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_DelayTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_MaxSearchesPerRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_RepeatSearchDelayMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_LostConnectionDelayMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_PowerLevelDeltaMedium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_bPartyDropInEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::NewProp_DelayTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBZSearchAndHostMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::ClassParams = {
		&USBZSearchAndHostMatchmaking::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBZSearchAndHostMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USBZSearchAndHostMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USBZSearchAndHostMatchmaking, 3539420932);
	template<> STARBREEZE_API UClass* StaticClass<USBZSearchAndHostMatchmaking>()
	{
		return USBZSearchAndHostMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USBZSearchAndHostMatchmaking(Z_Construct_UClass_USBZSearchAndHostMatchmaking, &USBZSearchAndHostMatchmaking::StaticClass, TEXT("/Script/Starbreeze"), TEXT("USBZSearchAndHostMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBZSearchAndHostMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
